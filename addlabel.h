#ifndef _ADDLABEL_H_
#define _ADDLABEL_H_
#include "ui_addlabel.h"
#include <QDialog>


typedef struct labelInfo
{
    QString Id;
    QString name;
    int rgb;
}labelInfo_t;

class QToolButton;
class QTreeWidgetItem;
class LAbel;
class ADdlabdlg: public QDialog,
                 public Ui_addlabel
{
    Q_OBJECT
public:
    ADdlabdlg(QWidget *parent = NULL, QTreeWidgetItem *curItem = NULL);
    ~ADdlabdlg();
private:
	//Ìî³äQToolButtonµÄÑÕÉ«¿ò
	void toolColorFill(QToolButton *pToolBtn, QColor color, const int nWidth, const int nHeight);
signals:
    void sendLabidId(labelInfo_t info);
private slots:
    void on_btn_ok_clicked();
    void on_btn_cancel_clicked();
    void on_tBtn_color_clicked();
private:
    labelInfo_t m_temLabelInfo;
	int m_nFlag;
    const int m_cWidth;
    const int m_cHeignt;
	QTreeWidgetItem *m_curTreeItem;
};


#endif
