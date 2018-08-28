#include "playerlist.h"
#include <QDebug>
#include <QHeaderView>

Playerlist::Playerlist(QWidget *parent)
    :QTreeWidget(parent)
{

    QTreeWidgetItem *pHeadItem = this->headerItem();
    pHeadItem->setText(0, " "); //设置列表头项不显示
    this->header()->setVisible(false);
    m_cameraItems = new QTreeWidgetItem(this, QStringList(QString::fromLocal8Bit("监控列表")));


    setStyleSheet("QTreeWidget::item{height:23px}");  //样式表设置项高度
    this->setIndentation(13);   //设置左边距


}



Playerlist::~Playerlist()
{



}

QTreeWidgetItem* Playerlist::createItem(QString text)
{
    return (new QTreeWidgetItem(m_cameraItems, QStringList(text)));
}

