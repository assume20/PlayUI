#include "centralwin.h"
#include "playerlist.h"
#include "display.h"
#include "global.h"
#include "ui_centerwin.h"
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>

Centralwin::Centralwin(QWidget *parent, Playerlist *treewin)
    :QFrame(parent), m_PlayerList(treewin)
{
    ui = new Ui::Centerwin();
    ui->setupUi(this);
	init();


    this->setFrameShape(QFrame::StyledPanel);
    this->setFrameShadow(QFrame::Plain);

    for(int i = 0; i < 16; ++i)
    {
        WinListInfo_t tWinListInfo;
        //监控ip port
        tWinListInfo.ip = QString("192.168.1.253");
        tWinListInfo.port = QString("13107");
        //播放视频窗口
        m_pCurrentWin = new Displaywin(); //建立视频窗口
        tWinListInfo.pDisplaywin = m_pCurrentWin;
        //列表信息
        tWinListInfo.listName = QString::fromLocal8Bit("camera1");
        tWinListInfo.pTreewidgetitem = m_PlayerList->createItem(QString::fromLocal8Bit("camera1"));
        //tWinListInfo.pTreewidgetitem->setIcon(0, QIcon(":/mainwindow/cameraon.png"));
        m_pwinListInfoVec.push_back(tWinListInfo);
    }
    QObject::connect(m_PlayerList, SIGNAL(itemDoubleClicked(QTreeWidgetItem *, int )),
                     this, SLOT(doubleClicked(QTreeWidgetItem *)));

	//m_pCurrentWin = NULL;
}

Centralwin::~Centralwin()
{
    delete ui;
}

void Centralwin::init()
{
    m_videoMap.insert(1, qMakePair(ui->videowin1_1, false));
    m_videoMap.insert(2, qMakePair(ui->videowin1_2, false));
    m_videoMap.insert(3, qMakePair(ui->videowin1_3, false));
    m_videoMap.insert(4, qMakePair(ui->videowin1_4, false));
    m_videoMap.insert(5, qMakePair(ui->videowin2_1, false));
    m_videoMap.insert(6, qMakePair(ui->videowin2_2, false));
    m_videoMap.insert(7, qMakePair(ui->videowin2_3, false));
    m_videoMap.insert(8, qMakePair(ui->videowin2_4, false));
    m_videoMap.insert(9, qMakePair(ui->videowin3_1, false));
    m_videoMap.insert(10, qMakePair(ui->videowin3_2, false));
    m_videoMap.insert(11, qMakePair(ui->videowin3_3, false));
    m_videoMap.insert(12, qMakePair(ui->videowin3_4, false));
    m_videoMap.insert(13, qMakePair(ui->videowin4_1, false));
    m_videoMap.insert(14, qMakePair(ui->videowin4_2, false));
    m_videoMap.insert(15, qMakePair(ui->videowin4_3, false));
    m_videoMap.insert(16, qMakePair(ui->videowin4_4, false));


	//安装事件过滤器
    ui->videowin1_1->installEventFilter(this);
    ui->videowin1_2->installEventFilter(this);
    ui->videowin1_3->installEventFilter(this);
    ui->videowin1_4->installEventFilter(this);
    ui->videowin2_1->installEventFilter(this);
    ui->videowin2_2->installEventFilter(this);
    ui->videowin2_3->installEventFilter(this);
    ui->videowin2_4->installEventFilter(this);
    ui->videowin3_1->installEventFilter(this);
    ui->videowin3_2->installEventFilter(this);
    ui->videowin3_3->installEventFilter(this);
    ui->videowin3_4->installEventFilter(this);
    ui->videowin4_1->installEventFilter(this);
    ui->videowin4_2->installEventFilter(this);
    ui->videowin4_3->installEventFilter(this);
    ui->videowin4_4->installEventFilter(this);


    for(int i = 1; i <= 16; ++i)
    {
        m_videoMap[i].first->setStyleSheet("border:1px solid gray;background-color:rgb(182, 182, 182)");
        QVBoxLayout *vBoxLayout= new QVBoxLayout(m_videoMap[i].first);
        //布局的边框距离
        vBoxLayout->setContentsMargins(1, 1, 1, 1);
        vBoxLayout->setSpacing(0);
    }

    m_layMap.insert(1, ui->lay_1);
    m_layMap.insert(2, ui->lay_2);
    m_layMap.insert(3, ui->lay_3);
    m_layMap.insert(4, ui->lay_4);
}

int Centralwin::getKey(QWidget *pplayer)
{
    foreach(const int key, m_videoMap.keys())
    {
        if(m_videoMap[key].first == pplayer)
        {
            return key;
        }
    }
}


#if 1
bool Centralwin::eventFilter(QObject *watched, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress )
	{
		int nKey;
		if (watched == ui->videowin1_1)
		{
			nKey = getKey(ui->videowin1_1);
		}
		else if (watched == ui->videowin1_2)
		{
			nKey = getKey(ui->videowin1_2);
		}
		else if (watched == ui->videowin1_3)
		{
			nKey = getKey(ui->videowin1_3);
		}
		else if (watched == ui->videowin1_4)
		{
			nKey = getKey(ui->videowin1_4);
		}
		else if (watched == ui->videowin2_1)
		{
			nKey = getKey(ui->videowin2_1);
		}
		else if (watched == ui->videowin2_2)
		{
			nKey = getKey(ui->videowin2_2);
		}
		else if (watched == ui->videowin2_3)
		{
			nKey = getKey(ui->videowin2_3);
		}
		else if (watched == ui->videowin2_4)
		{
			nKey = getKey(ui->videowin2_4);
		}
		else if (watched == ui->videowin3_1)
		{
			nKey = getKey(ui->videowin3_1);
		}
		else if (watched == ui->videowin3_2)
		{
			nKey = getKey(ui->videowin3_2);
		}
		else if (watched == ui->videowin3_3)
		{
			nKey = getKey(ui->videowin3_3);
		}
		else if (watched == ui->videowin3_4)
		{
			nKey = getKey(ui->videowin3_4);
		}
		else if (watched == ui->videowin4_1)
		{
			nKey = getKey(ui->videowin4_1);
		}
		else if (watched == ui->videowin4_2)
		{
			nKey = getKey(ui->videowin4_2);
		}
		else if (watched == ui->videowin4_3)
		{
			nKey = getKey(ui->videowin4_3);
		}
		else if (watched == ui->videowin4_4)
		{
			nKey = getKey(ui->videowin4_4);
		}
		changeVideo_1(nKey);
	}
    return QObject::eventFilter(watched, event);
    ;
}

#endif

QVector<WinListInfo_t>::iterator Centralwin::begin()
{
    return m_pwinListInfoVec.begin();
}

QVector<WinListInfo_t>::iterator Centralwin::end()
{
    return m_pwinListInfoVec.end();
}

QVector<WinListInfo_t> &Centralwin::getVec()
{
    return m_pwinListInfoVec;
}

void Centralwin::changeVideo_1(int index)
{
    removeLay();
    m_layMap[1]->addWidget(m_videoMap[index].first);
    m_videoMap[index].first->show();;
}

void Centralwin::changeVideo_4(int index)
{
    removeLay();
    for(int i = index; i < 2 + index; ++i)
    {
        m_layMap[1]->addWidget(m_videoMap[i].first);
        m_videoMap[i].first->show();;
    }
    for(int i = 2 + index; i < 4 + index; ++i)
    {
        m_layMap[2]->addWidget(m_videoMap[i].first);
        m_videoMap[i].first->show();;
    }
}

void Centralwin::changeVideo_9(int index)
{
    removeLay();
    for(int i = index; i < 3 + index; ++i)
    {
        m_layMap[1]->addWidget(m_videoMap[i].first);
        m_videoMap[i].first->show();;
    }
    for(int i = 3 + index; i < 6 + index; ++i)
    {
        m_layMap[2]->addWidget(m_videoMap[i].first);
        m_videoMap[i].first->show();;

    }
    for(int i = 6 + index; i < 9 + index; ++i)
    {
        m_layMap[3]->addWidget(m_videoMap[i].first);
        m_videoMap[i].first->show();;

    }
}

void Centralwin::changeVideo_16(int index)
{
    removeLay();
    for(int i = index; i < 4 + index; ++i)
    {
        m_layMap[1]->addWidget(m_videoMap[i].first);
        m_videoMap[i].first->show();;
    }
    for(int i = index + 4; i < 8 + index; ++i)
    {
        m_layMap[2]->addWidget(m_videoMap[i].first);
        m_videoMap[i].first->show();;
    }
    for(int i = index + 8; i < 12 + index; ++i)
    {
        m_layMap[3]->addWidget(m_videoMap[i].first);
        m_videoMap[i].first->show();;
    }
    for(int i = index + 12; i < 16 + index; ++i)
    {
        m_layMap[4]->addWidget(m_videoMap[i].first);
        m_videoMap[i].first->show();;
    }
}

void Centralwin::removeLay()
{
    for(int i = 1; i <= 4; ++i)
    {
        m_layMap[1]->removeWidget(m_videoMap[i].first);
        m_videoMap[i].first->hide();
    }
    for(int i = 5; i <= 8; ++i)
    {
        m_layMap[2]->removeWidget(m_videoMap[i].first);
        m_videoMap[i].first->hide();
    }
    for(int i = 9; i <= 12; ++i)
    {
        m_layMap[3]->removeWidget(m_videoMap[i].first);
        m_videoMap[i].first->hide();
    }
    for(int i = 13; i <= 16; ++i)
    {
        m_layMap[4]->removeWidget(m_videoMap[i].first);
        m_videoMap[i].first->hide();
    }
}

//当双击播放列表时触发此函数
void Centralwin::doubleClicked(QTreeWidgetItem *item)
{

    QVector<WinListInfo_t>::iterator it = m_pwinListInfoVec.begin();
    QVector<WinListInfo_t>::iterator end = m_pwinListInfoVec.end();
    for(;it != end; ++it)
    {
        //检测点击的是哪一个项
        if(it->pTreewidgetitem == item)
        {
            //if(m_pCurrentWin != NULL)
            //{
                //暂停当前运行的线程
//                m_pCurrentWin->pause();
//                m_pCurrentWin->hide();
//                m_pVbosLayout->removeWidget(m_pCurrentWin);
            //}
//            m_pCurrentWin = it->pDisplaywin;
//            it->pDisplaywin->setParent(this);
//            m_pVbosLayout->addWidget(m_pCurrentWin);
//            it->pDisplaywin->show();
			//切换到当前点击界面
            changeVideo_1(m_PlayerList->currentIndex().row() + 1);

			
			/************************************************************************/
			/*            先检测标签连接状态   在查看视频连接状态                         */
			/************************************************************************/
			if (!m_threadLocal.isRunning())
			{			
				//第一次点击时
				//开启获取标签定位线程
				//connectServe((char*)"192.168.1.253", (char*)"13107");

				int nFlag = isConnectServe();

				//连接定位失败时提示
				if (nFlag == -1)
				{
					QMessageBox msgBox(QMessageBox::Critical,
									   QString::fromLocal8Bit("错误"),
									   QString::fromLocal8Bit("标签定位服务器连接失败!"),
									   QMessageBox::NoButton,
									   this,
									   Qt::Tool
									   );
					QPushButton pushbutton;
					pushbutton.setText(QString::fromLocal8Bit("确定"));
					msgBox.addButton(&pushbutton, QMessageBox::RejectRole);
					msgBox.exec();
				}
				else
				{
					m_threadLocal.start();
				}
			}

            if(!(it->pDisplaywin->isRunning()))
            {
				//第一次点击时
                //开启显示线程
				if (g_isOpenCamera == -1)
				{
					//是否连接上了视频
					QMessageBox msgBox(QMessageBox::Critical,
									   QString::fromLocal8Bit("错误"),
									   QString::fromLocal8Bit("视频监控连接失败!"),
									   QMessageBox::NoButton,
									   this,
									   Qt::Tool
									   );
					QPushButton pushbutton;
					pushbutton.setText(QString::fromLocal8Bit("确定"));
					msgBox.addButton(&pushbutton, QMessageBox::RejectRole);
					msgBox.exec();
					it->pTreewidgetitem->setIcon(0, QIcon(":/mainwindow/cameraoff.png"));
				}
				else
				{
					it->pDisplaywin->start();
					it->pTreewidgetitem->setIcon(0, QIcon(":/mainwindow/cameraon.png"));
					//检测布局视频播放状况
//					for (int i = 1; i <= 16; ++i)
//					{
//						if (!m_videoMap[i].second)
//						{
                            m_videoMap[it - m_pwinListInfoVec.begin() + 1].second = true;
                            m_videoMap[it - m_pwinListInfoVec.begin() + 1].first->layout()->addWidget(it->pDisplaywin);
                            it->pDisplaywin->show();
//							break;
//						}
//					}
				}             
            }

			break;
        }
    }
}

void Centralwin::addCameraSlot(WinListInfo_t cameraInfo)
{
    cameraInfo.pTreewidgetitem = m_PlayerList->createItem(cameraInfo.listName);

    m_pCurrentWin = new Displaywin(); //建立视频窗口
    cameraInfo.pDisplaywin = m_pCurrentWin;


    m_pwinListInfoVec.push_back(cameraInfo);

}


void Centralwin::deleteCamerSlot(QString ipStr)
{

}

