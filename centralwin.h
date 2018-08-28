#ifndef _MAINDISPLAY_H_
#define _MAINDISPLAY_H_
#include <QFrame>
#include <QVector>
#include <QTreeWidgetItem>
#include <QVBoxLayout>
#include "thread_localinfo.h"

namespace Ui {
    class Centerwin;
}

class Displaywin;
class Playerlist;
typedef struct WinListInfo
{
    QTreeWidgetItem *pTreewidgetitem;   //窗口对应子项
    Displaywin *pDisplaywin;  //窗口指针
    QString listName; //列表名称
    QString ip;   //ip地址
    QString port; //端口号
}WinListInfo_t;


class Centralwin: public QFrame
{
	Q_OBJECT
public:
    Centralwin(QWidget *parent = NULL, Playerlist *treewin = NULL);

    ~Centralwin();

    void init();

    int getKey(QWidget *pplayer);

    QVector<WinListInfo_t>::iterator begin();

    QVector<WinListInfo_t>::iterator end();

    QVector<WinListInfo_t>& getVec();
    //切换通道1
    void changeVideo_1(int index);
    //切换通道2
    void changeVideo_4(int index);
    //切换通道3
    void changeVideo_9(int index);
    //切换通道4
    void changeVideo_16(int index);
    //移除布局
    void removeLay();
protected:
    bool eventFilter(QObject *watched, QEvent *event);


public slots:
    //列表双击槽函数
    void doubleClicked(QTreeWidgetItem *item);
    //增加监控
    void addCameraSlot(WinListInfo_t cameraInfo);
    //删除监控
    void deleteCamerSlot(QString ipStr);
private:
    Ui::Centerwin *ui;
    Displaywin *m_pCurrentWin;
    Playerlist *m_PlayerList;
    QVector<WinListInfo_t> m_pwinListInfoVec;

    QMap<int, QPair<QWidget*, bool>> m_videoMap;

    QMap<int, QLayout*> m_layMap;

	//获取标签定位线程
	Threadlocal m_threadLocal;



};

#endif
