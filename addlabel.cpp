#include <QMessageBox>
#include "addlabel.h"
#include <QColorDialog>
#include <QPainter>
#include <QTreeWidgetItem>
#include <QDebug>
#include "global.h"
#include "labelmodify.h"

#include "getCameraCalibrator.h"


ADdlabdlg::ADdlabdlg(QWidget *parent, QTreeWidgetItem *curItem)
        :QDialog(parent), m_cWidth(60), 
		 m_cHeignt(19), m_curTreeItem(curItem)	
{
    setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);   //关闭 删除属性
    connect(this, SIGNAL(sendLabidId(labelInfo_t)),
                           this->parentWidget(), SLOT(rcvlabelInfo(labelInfo_t)));



	QColor tColor;
	if (m_curTreeItem != NULL)
	{
		//点修改按钮时
		led_labid->setText(m_curTreeItem->text(0));;
		led_name->setText(m_curTreeItem->text(1));
		//获取RGB值
		std::vector<LABELINFO_t>::iterator it = g_labInfoVec.begin();
		std::vector<LABELINFO_t>::iterator end = g_labInfoVec.end();
		for (; it != end; ++it)
		{
			if (QString::fromLocal8Bit(it->id.c_str()) == m_curTreeItem->text(0))
			{
				tColor.setRgb(it->rgb | 0xff000000);
			}
		}
	}
	else
	{
		//点增加按钮时 默认颜色是红色
		tColor.setNamedColor(QString("red"));
		m_temLabelInfo.rgb = tColor.rgb() & RGB_MASK;

	}
	toolColorFill(tBtn_color, tColor, m_cWidth, m_cHeignt);
}

ADdlabdlg::~ADdlabdlg()
{

}

void ADdlabdlg::toolColorFill(QToolButton *pToolBtn, QColor color, const int nWidth, const int nHeight)
{
	QPixmap pixmap(nWidth, nHeight);
	QPainter painter(&pixmap);
	painter.fillRect(0, 0, nWidth, nHeight, color);
	pToolBtn->setIcon(QIcon(pixmap));
	pToolBtn->setIconSize(QSize(nWidth, nHeight));
}




void ADdlabdlg::on_btn_ok_clicked()
{
    if(led_labid->text().isEmpty() || led_name->text().isEmpty())
    {
        QString strWarning;
        if(led_labid->text().isEmpty())
        {
            strWarning = QString::fromLocal8Bit("请输入标签号!");
        }
        else if(led_name->text().isEmpty())
        {
            strWarning = QString::fromLocal8Bit("请输入名字!");
		}
        QMessageBox msgBox(QMessageBox::Warning,
                           QString::fromLocal8Bit("提示"),
                           QString::fromLocal8Bit("%1").arg(strWarning),
                           QMessageBox::Ok,
                           this
                           );
        msgBox.exec();
        return;
    }
    m_temLabelInfo.Id = led_labid->text();
    m_temLabelInfo.name = led_name->text();

    //将数据保存到vec
	LABELINFO_t tLabInfo;
	tLabInfo.id = m_temLabelInfo.Id.toStdString();
	tLabInfo.name = std::string(m_temLabelInfo.name.toLocal8Bit());
	tLabInfo.rgb = m_temLabelInfo.rgb;
	//当点击的是修改按钮时
	if (m_curTreeItem != NULL)
	{
		std::vector<LABELINFO_t>::iterator it = g_labInfoVec.begin();
		std::vector<LABELINFO_t>::iterator end = g_labInfoVec.end();
		for (; it != end; ++it)
		{
			if (QString::fromLocal8Bit(it->id.c_str()) == m_curTreeItem->text(0))
			{
				it->id = tLabInfo.id;
				it->name = tLabInfo.name;
				it->rgb = tLabInfo.rgb;
				m_curTreeItem->setText(0, m_temLabelInfo.Id);
				m_curTreeItem->setText(1, m_temLabelInfo.name);
			}
		}
	}
	else
	{ 	
		//当点击的是增加按钮时
		g_labInfoVec.push_back(tLabInfo);
		emit sendLabidId(m_temLabelInfo);
	}

	((LAbel*)this->parentWidget())->setModifyFlag(true);
    close();
}

void ADdlabdlg::on_btn_cancel_clicked()
{
    close();
}


//选择颜色槽函数
void ADdlabdlg::on_tBtn_color_clicked()
{
    QColor tColor = QColorDialog::getColor(Qt::black, this);
    if (!tColor.isValid())
        return;
    //显示选择的颜色
	toolColorFill(tBtn_color, tColor, m_cWidth, m_cHeignt);
    m_temLabelInfo.rgb =tColor.rgb() & RGB_MASK;
}
