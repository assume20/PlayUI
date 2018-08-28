#ifndef _IPPORTINFO_H_
#define _IPPORTINFO_H_
#include <QDialog>
#include "centralwin.h"


namespace Ui{
     class IPporttabel;
}

class Centralwin;
class IPportinfo:public QDialog
{
    Q_OBJECT
public:
    IPportinfo(QWidget *parent = NULL);

    ~IPportinfo();

    enum TabColNum
    {
        IP = 0,
        PORT,
        NAME
    };
protected:
    void resizeEvent(QResizeEvent*);

signals:
    //增加监控信号
    void addCameraSig(WinListInfo_t cameraInfo);
    //删除监控信号
    void deleteCamerSig(QString ipStr);

private slots:
    void on_btn_add_clicked();

    void on_btn_delete_clicked();

    void on_btn_apply_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::IPporttabel *ui;
    Centralwin *m_mainWin;


};



#endif
