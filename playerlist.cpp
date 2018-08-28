#include "playerlist.h"
#include <QDebug>
#include <QHeaderView>

Playerlist::Playerlist(QWidget *parent)
    :QTreeWidget(parent)
{

    QTreeWidgetItem *pHeadItem = this->headerItem();
    pHeadItem->setText(0, " "); //�����б�ͷ���ʾ
    this->header()->setVisible(false);
    m_cameraItems = new QTreeWidgetItem(this, QStringList(QString::fromLocal8Bit("����б�")));


    setStyleSheet("QTreeWidget::item{height:23px}");  //��ʽ��������߶�
    this->setIndentation(13);   //������߾�


}



Playerlist::~Playerlist()
{



}

QTreeWidgetItem* Playerlist::createItem(QString text)
{
    return (new QTreeWidgetItem(m_cameraItems, QStringList(text)));
}

