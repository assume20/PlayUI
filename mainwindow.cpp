#include "mainwindow.h"
#include "playerlist.h"
#include "centralwin.h"
#include "labelmodify.h"
#include <QDebug>
#include "QSettings"
#include "global.h"
#include "ipportinfo.h"
#include <QTextCodec>
#include "getCameraCalibrator.h"


MainWindow* MainWindow::m_self = NULL;
QMutex MainWindow::m_mutex;

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent)
{
    setupUi(this);
    m_pLabel = NULL;
    m_ipPortinfo = NULL;
    m_nCurrentIndex = 0;
    init();
    loadLabelInfo();
}

MainWindow *MainWindow::getInstance()
{
    if(m_self == NULL)
    {
        QMutexLocker mutexLock(&m_mutex);
        if(m_self == NULL)
        {
            m_self = new MainWindow();
        }
    }
    return m_self;
}

Centralwin *MainWindow::getCentralwin()
{
    return m_pcentralWin;
}

MainWindow::~MainWindow()
{
    delete m_pLabel;
    m_pLabel;
}

void MainWindow::init()
{
    setWindowTitle(QString::fromLocal8Bit(("视频监控平台")));   //设置主界面标题
    setWindowIcon(QIcon(":/mainwindow/mainwindowtile.png"));  //设置主界面图标


    m_PlayerList = new Playerlist();
    dockWidgetPlayerList->setFeatures(QDockWidget::DockWidgetClosable | QDockWidget::DockWidgetFloatable);
    dockWidgetPlayerList->setAllowedAreas(Qt::RightDockWidgetArea);    //设置允许停靠的位置
    dockWidgetPlayerList->setWidget(m_PlayerList);

    //将监控列表和QAction关联起来
    m_cameraListViewAct = dockWidgetPlayerList->toggleViewAction();
    m_cameraListViewAct->setText(QString::fromLocal8Bit("监控列表"));
    menu_view->addAction(m_cameraListViewAct);

    m_pcentralWin = new Centralwin(NULL, m_PlayerList); //建立视频窗口
    setCentralWidget(m_pcentralWin);


    connect(act_label, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_ipport, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_1, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_2, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_3, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_4, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_5, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_6, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_7, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_8, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_9, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_10, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_11, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_12, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_13, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_14, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_15, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_1_16, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_4_1, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_4_2, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_4_3, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_4_4, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_9_1, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change_9_2, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));
    connect(act_change16, SIGNAL(triggered(bool)), this, SLOT(slotTriggered()));

    m_pcentralWin->changeVideo_1(1);   //初始化默认为显示1画面


    act_playlist->setChecked(true);//开始播放列表默认打开 工具栏对应打钩


    //

}

void MainWindow::loadLabelInfo()
{
    LABELINFO_t tLabInfo;
    QSettings fd(QString("labelconfid.ini"), QSettings::IniFormat);
    fd.setIniCodec(QTextCodec::codecForName("UTF-8"));
    QStringList grouplist = fd.childGroups();
    QStringList::iterator it = grouplist.begin();
    for(int i = 0; it != grouplist.end(); ++it, ++i)
    {
        //加载保存的数据
        tLabInfo.id = fd.value(QString("%1/id").arg((*it)), QString("----")).toString().toStdString();
        //转换成string防止乱码
        tLabInfo.name = std::string(fd.value(QString("%1/name").arg((*it)), QString("----")).toString().toLocal8Bit());
        tLabInfo.rgb = fd.value(QString("%1/rgb").arg((*it)), QString("----")).toInt();
        g_labInfoVec.push_back(tLabInfo);

    }


    std::vector<ui_locationInformation> locationInformationVec;
    ui_locationInformation locaInfo;
    for (int i = 0; i < g_labInfoVec.size(); ++i)
    {
        locaInfo.name = g_labInfoVec.at(i).name;
        locaInfo.tagID = g_labInfoVec.at(i).id;
        locaInfo.rgb = g_labInfoVec.at(i).rgb;
        locationInformationVec.push_back(locaInfo);
    }
    g_isOpenCamera = CameraCalibratorInit(locationInformationVec);
    locationInformationVec.clear();
}




void MainWindow::slotTriggered()
{

    QAction *pAction = dynamic_cast<QAction*>(sender());
    if(pAction == act_label)
    {
        if(!m_pLabel)
        {
            m_pLabel = new LAbel();
        }
         m_pLabel->exec();
    }
    else if(pAction == act_ipport)
    {
//        if(!m_ipPortinfo)
//        {
//            m_ipPortinfo = new IPportinfo(this);
//            connect(m_ipPortinfo, SIGNAL(addCameraSig(WinListInfo_t)),
//                        m_pCurrentWin, SLOT(addCameraSlot(WinListInfo_t)));
//            connect(m_ipPortinfo, SIGNAL(deleteCamerSig(QString)),
//                        m_pCurrentWin, SLOT(deleteCamerSlot(QString)));
//        }
//        m_ipPortinfo->exec();
    }
    else if(pAction == act_change_1_1)
    {
        m_pcentralWin->changeVideo_1(1);
    }
    else if(pAction == act_change_1_2)
    {
        m_pcentralWin->changeVideo_1(2);

    }
    else if(pAction == act_change_1_3)
    {
        m_pcentralWin->changeVideo_1(3);

    }
    else if(pAction == act_change_1_4)
    {
        m_pcentralWin->changeVideo_1(4);

    }
    else if(pAction == act_change_1_5)
    {
        m_pcentralWin->changeVideo_1(5);

    }
    else if(pAction == act_change_1_6)
    {
        m_pcentralWin->changeVideo_1(6);

    }
    else if(pAction == act_change_1_7)
    {
        m_pcentralWin->changeVideo_1(7);

    }
    else if(pAction == act_change_1_8)
    {
        m_pcentralWin->changeVideo_1(8);

    }
    else if(pAction == act_change_1_9)
    {
        m_pcentralWin->changeVideo_1(9);

    }
    else if(pAction == act_change_1_10)
    {
        m_pcentralWin->changeVideo_1(10);

    }
    else if(pAction == act_change_1_11)
    {
        m_pcentralWin->changeVideo_1(11);

    }
    else if(pAction == act_change_1_12)
    {
        m_pcentralWin->changeVideo_1(12);

    }
    else if(pAction == act_change_1_13)
    {
        m_pcentralWin->changeVideo_1(13);

    }
    else if(pAction == act_change_1_14)
    {
        m_pcentralWin->changeVideo_1(14);

    }
    else if(pAction == act_change_1_15)
    {
        m_pcentralWin->changeVideo_1(15);

    }
    else if(pAction == act_change_1_16)
    {
        m_pcentralWin->changeVideo_1(16);

    }
    /*****************************/
    else if(pAction == act_change_4_1)
    {
        m_pcentralWin->changeVideo_4(1);

    }
    else if(pAction == act_change_4_2)
    {
        m_pcentralWin->changeVideo_4(5);

    }
    else if(pAction == act_change_4_3)
    {
        m_pcentralWin->changeVideo_4(9);

    }
    else if(pAction == act_change_4_4)
    {
        m_pcentralWin->changeVideo_4(13);

    }
    /*****************************/
    else if(pAction == act_change_9_1)
    {
        m_pcentralWin->changeVideo_9(1);

    }
    else if(pAction == act_change_9_2)
    {
        m_pcentralWin->changeVideo_9(8);

    }
    /*****************************/
    else if(pAction == act_change16)
    {
        m_pcentralWin->changeVideo_16(1);
    }
}





