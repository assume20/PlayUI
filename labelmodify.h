#ifndef _LABELMODIFY_H_
#define _LABELMODIFY_h_
#include "ui_labDlg.h"
#include "addlabel.h"
#include "global.h"

class ADdlabdlg;
class LAbel: public QDialog,
             public Ui_labDlg
{
    Q_OBJECT
public:
    LAbel(QWidget *parent = NULL);
    ~LAbel();
    virtual void closeEvent(QCloseEvent *event);
	void setModifyFlag(bool flag);

	enum 
	{	
		LABELINFO_ADD = 0,
		LABELINFO_MODIFY
	};

private:
    void load();
    void save();
    //void getLabelInfo();

private slots:
    //头项宽度自适应窗口
    void resizeEvent(QResizeEvent *);
    void on_btn_add_clicked();
    //获取新增的项数据
    void rcvlabelInfo(labelInfo_t info);
    void on_btn_delete_clicked();
	void on_btn_ok_clicked();
    void on_btn_modify_clicked();
private:
    ADdlabdlg *m_pAddlabdlg;
    QVector<labelInfo_t> m_labelInfoVec;

    bool m_isModifyInfo;
};




#endif
