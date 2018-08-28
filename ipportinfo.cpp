#include "ipportinfo.h"
#include "ui_ipportinfo.h"
#include <QMessageBox>


IPportinfo::IPportinfo(QWidget *parent)
        :QDialog(parent), ui(new Ui::IPporttabel)
{
    ui->setupUi(this);
    ui->tab->horizontalHeader()->setSectionsClickable(false); //����ͷ��ɵ��
    ui->tab->setEditTriggers(QAbstractItemView::NoEditTriggers);
    m_mainWin = static_cast<Centralwin*>(this->parentWidget());
//    connect(this, SIGNAL(addCameraSig(WinListInfo_t)),
//                ((Maindisplay*)this->parentWidget()), SLOT(addCameraSlot(WinListInfo_t)));
//    connect(this, SIGNAL(deleteCamerSig(QString)),
//                ((Maindisplay*)this->parentWidget()), SLOT(deleteCamerSlot(QString)));
}

IPportinfo::~IPportinfo()
{
    delete ui;
}

void IPportinfo::resizeEvent(QResizeEvent *)
{
    ui->tab->setColumnWidth(IP, ui->tab->width() * 0.4);
    ui->tab->setColumnWidth(PORT, ui->tab->width() * 0.2);
    ui->tab->setColumnWidth(NAME, ui->tab->width() * 0.4);
}

void IPportinfo::on_btn_add_clicked()
{
    QString ippattern("^(\\d{1,3}\\.){3}(\\d{1,3})$");
    QString portpattern("^\\d+$");
    QRegExp ipreg(ippattern);
    QRegExp portreg(portpattern);
    if(!(ipreg.exactMatch(ui->led_ip->text()))
            || !(portreg.exactMatch(ui->led_port->text()))
                || ui->led_name->text() == "")
    {
        QString textStr;
        if(!(ipreg.exactMatch(ui->led_ip->text())))
        {
            textStr = QString::fromLocal8Bit("��������ȷIP!");
        }
        else if(!(portreg.exactMatch(ui->led_port->text())))
        {
            textStr = QString::fromLocal8Bit("��������ȷ�˿ں�!");
        }
        else if(ui->led_name->text() == "")
        {
            textStr = QString::fromLocal8Bit("����������!");
        }
        QMessageBox msgBox(QMessageBox::Warning,
                           QString::fromLocal8Bit("����"),
                           QString("%1").arg(textStr),
                           QMessageBox::Yes,
                           this,
                           Qt::Tool
                           );
        msgBox.setButtonText(QMessageBox::Yes, QString::fromLocal8Bit("ȷ��"));
        msgBox.exec();
        return;
    }
    for(int row = 0 ; row < ui->tab->rowCount(); ++row)
    {
        if(ui->tab->item(row, IP)->text() == ui->led_ip->text()
                        && ui->tab->item(row, PORT)->text() == ui->led_port->text())
        {
            QMessageBox msgBox(QMessageBox::Warning,
                               QString::fromLocal8Bit("����"),
                               QString::fromLocal8Bit("�Ѵ���ip�Ͷ˿ں�!"),
                               QMessageBox::Yes,
                               this,
                               Qt::Tool
                               );
            msgBox.setButtonText(QMessageBox::Yes, QString::fromLocal8Bit("ȷ��"));
            msgBox.exec();
            return;
        }
    }


    WinListInfo_t tWinListInfo;
    tWinListInfo.ip = ui->led_ip->text();
    tWinListInfo.port = ui->led_port->text();
    tWinListInfo.listName = ui->led_name->text();

    //����һ�� ����������
    int row = ui->tab->rowCount();
    ui->tab->insertRow(row);
    QTableWidgetItem *ipItem = new QTableWidgetItem(tWinListInfo.ip);
    QTableWidgetItem *portItem = new QTableWidgetItem(tWinListInfo.port);
    QTableWidgetItem *nameItem = new QTableWidgetItem(tWinListInfo.listName);
    ipItem->setTextAlignment(Qt::AlignCenter);
    portItem->setTextAlignment(Qt::AlignCenter);
    nameItem->setTextAlignment(Qt::AlignCenter);
    ui->tab->setItem(row, IP, ipItem);
    ui->tab->setItem(row, PORT, portItem);
    ui->tab->setItem(row, NAME, nameItem);

    //������ӵ���Ϣ
    emit addCameraSig(tWinListInfo);
}

void IPportinfo::on_btn_delete_clicked()
{
    QTableWidgetItem *ipItem = ui->tab->item(ui->tab->currentRow(), IP);
    QTableWidgetItem *portItem = ui->tab->item(ui->tab->currentRow(), PORT);

    QVector<WinListInfo_t>::iterator it = m_mainWin->begin();
    for(; it != m_mainWin->end(); ++it)
    {
        if(ipItem->text() == it->ip && portItem->text() == it->port)
        {
            //����QVector
            QVector<WinListInfo_t> &playVec = m_mainWin->getVec();
            playVec.erase(it);
            break;
        }
    }
    ui->tab->removeRow(ui->tab->currentRow());
}

void IPportinfo::on_btn_apply_clicked()
{

}

void IPportinfo::on_btn_cancel_clicked()
{

}
