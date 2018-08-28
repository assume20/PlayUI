#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_
#include <QMainWindow>
#include <QMdiarea>
#include <QVector>
#include "ui_mainwindow.h"
class Centralwin;
class Playerlist;
class QTreeWidgetItem;
class LAbel;
class IPportinfo;

class MainWindow:public QMainWindow,
                 public Ui_MainWindow
{
    Q_OBJECT
public:
    static MainWindow* getInstance();
    Centralwin* getCentralwin();
    ~MainWindow();
private:
    void init();

    MainWindow(QWidget *parent = NULL);


    void loadLabelInfo();
private slots:
    void slotTriggered();

private:
    static MainWindow *m_self;
    static QMutex m_mutex;
    Centralwin *m_pcentralWin;
    Playerlist *m_PlayerList;
    int m_nCurrentIndex;
	QWidget m_DisplayMainWin;
    LAbel *m_pLabel;
    QAction *m_cameraListViewAct;
    IPportinfo *m_ipPortinfo;


};


#endif
