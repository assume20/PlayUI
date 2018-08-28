#include "labelmodify.h"
#include <QDebug>
#include <QSettings>
#include <QMessageBox>
#include <QTextCodec>
#include <QCloseEvent>
#include "global.h"
#include "getCameraCalibrator.h"


LAbel::LAbel(QWidget *parent)
    :QDialog(parent), m_isModifyInfo(false)
{
    setupUi(this);
    m_pAddlabdlg = NULL;
    setWindowFlags(Qt::WindowStaysOnTopHint);
    treeWidget->setColumnWidth(0, this->width() / 2);  //�����п�

    setWindowFlags(Qt::WindowCloseButtonHint);
    treeWidget-> setIndentation(0);   //������߾�

    QTreeWidgetItem *headerItem = treeWidget->headerItem();
    //ͷ�����־���
    headerItem->setTextAlignment(0, Qt::AlignHCenter);
    headerItem->setTextAlignment(1, Qt::AlignHCenter);
    load();
}

LAbel::~LAbel()
{

}

void LAbel::closeEvent(QCloseEvent *event)
{
    if(m_isModifyInfo)
    {
        QMessageBox msgBox(QMessageBox::Warning,
                               QString::fromLocal8Bit("����"),
                               QString::fromLocal8Bit("�Ƿ񱣴�����!"),
                               QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel,
                               this,
                               Qt::Dialog
                               );
		msgBox.setButtonText(QMessageBox::Yes, QString::fromLocal8Bit("��"));
		msgBox.setButtonText(QMessageBox::No, QString::fromLocal8Bit("��"));
		msgBox.setButtonText(QMessageBox::Cancel, QString::fromLocal8Bit("ȡ��"));
        switch (msgBox.exec())
        {
            case QMessageBox::Yes:
            {
                //��ȷ���Ű����ݼӵ�ȫ�ֱ���
                std::vector<ui_locationInformation> locationInformationVec;
                ui_locationInformation locaInfo;
                for (int i = 0; i < g_labInfoVec.size(); ++i)
                {
                    //��ֹ�������
                    //qApp->processEvents();

                    locaInfo.name = g_labInfoVec.at(i).name;
                    locaInfo.tagID = g_labInfoVec.at(i).id;
                    locaInfo.rgb = g_labInfoVec.at(i).rgb;
                    locationInformationVec.push_back(locaInfo);
                }
                CameraCalibratorChange(locationInformationVec);
                locationInformationVec.clear();
                save();
                event->accept();
                break;
            }
            case QMessageBox::No:
            {
                event->accept();
                break;
            }
            case QMessageBox::Cancel:
            {
                event->ignore();
                break;
            }
            default:
                break;
        }
    }
    else
    {
        event->accept();
        m_isModifyInfo = false; //���ñ�־Ϊδ�Ķ�
    }
}

void LAbel::setModifyFlag(bool flag)
{
    m_isModifyInfo = flag;
}

void LAbel::load()
{
    QSettings fd(QString("labelconfid.ini"), QSettings::IniFormat);
	fd.setIniCodec(QTextCodec::codecForName("UTF-8"));
    QStringList grouplist = fd.childGroups();
    QStringList::iterator it = grouplist.begin();
    for(int i = 0; it != grouplist.end(); ++it, ++i)
    {
        //���ر��������
        QTreeWidgetItem *item = new QTreeWidgetItem(treeWidget);
        item->setText(0, (fd.value(QString("%1/id").arg((*it)), QString("----")).toString()));
        item->setText(1, (fd.value(QString("%1/name").arg(*it), QString("----")).toString()));
        item->setTextAlignment(0, Qt::AlignHCenter);
        item->setTextAlignment(1, Qt::AlignHCenter);	
    }
}

void LAbel::save()
{
    QSettings fd(QString("labelconfid.ini"), QSettings::IniFormat);
	fd.setIniCodec(QTextCodec::codecForName("UTF-8"));
    fd.clear();
	
	std::vector<LABELINFO_t>::iterator it = g_labInfoVec.begin();
	for (int i = 0; it != g_labInfoVec.end(); ++it, ++i)
	{
		fd.setValue(QString("%1/id").arg(i), QString::fromLocal8Bit(it->id.c_str()));
		fd.setValue(QString("%1/name").arg(i), QString::fromLocal8Bit(it->name.c_str()));
		fd.setValue(QString("%1/rgb").arg(i), it->rgb);
    }
}

void LAbel::resizeEvent(QResizeEvent *)
{
    treeWidget->setColumnWidth(0, this->width() / 2);  //�����п�
}



void LAbel::on_btn_add_clicked()
{
    m_pAddlabdlg = new ADdlabdlg(this);
    m_pAddlabdlg->exec();
}

//�½����ӵ���
void LAbel::rcvlabelInfo(labelInfo_t info)
{
    QTreeWidgetItem *item = new QTreeWidgetItem(treeWidget);
    qDebug() << treeWidget->topLevelItemCount();
    item->setText(0, info.Id);
    item->setText(1, info.name);
    item->setTextAlignment(0, Qt::AlignHCenter);
    item->setTextAlignment(1, Qt::AlignHCenter);

}

void LAbel::on_btn_delete_clicked()
{
	std::vector<LABELINFO_t>::iterator it = g_labInfoVec.begin();
	for (; it != g_labInfoVec.end(); ++it)
	{
		if((it->id == treeWidget->currentItem()->text(0).toStdString()))
		{
			g_labInfoVec.erase(it);
			break;
		}
	}
	treeWidget->takeTopLevelItem(treeWidget->indexOfTopLevelItem(treeWidget->currentItem()));
    m_isModifyInfo = true;
}

void LAbel::on_btn_ok_clicked()
{
    hide();
    if(m_isModifyInfo)
    {
        std::vector<ui_locationInformation> locationInformationVec;
        ui_locationInformation locaInfo;
        for (int i = 0; i < g_labInfoVec.size(); ++i)
        {
            //��ֹ�������
            //qApp->processEvents();

            locaInfo.name = g_labInfoVec.at(i).name;
            locaInfo.tagID = g_labInfoVec.at(i).id;
            locaInfo.rgb = g_labInfoVec.at(i).rgb;
            locationInformationVec.push_back(locaInfo);
        }
        CameraCalibratorChange(locationInformationVec);
        locationInformationVec.clear();
        save();
    }
}

void LAbel::on_btn_modify_clicked()
{
	m_pAddlabdlg = new ADdlabdlg(this, treeWidget->currentItem());
    m_pAddlabdlg->exec();
}


