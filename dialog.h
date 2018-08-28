#ifndef _DIALOG_H_
#define _DIALOG_H_

#include <QDebug>
#include <QDialog>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <QTimer>
#include <QPixmap>
#include "ui_dialog.h"
class Dialog : public QDialog,
	public Ui_Dialog
{
	Q_OBJECT

public:
	explicit Dialog(QWidget *parent = 0);
	~Dialog();

private:
	//Ui::Dialog *ui;
	CvCapture *capture; //highgui ���ṩ��һ��ר�Ŵ�������ͷͼ��Ľṹ��
	IplImage *frame; //����ͷÿ��ץȡ��ͼ��Ϊһ֡��ʹ�ø�ָ��ָ��һ֡ͼ����ڴ�ռ�
	QTimer *timer; //��ʱ�����ڶ�ʱȡ֡������˵�ĸ�һ��ʱ���ȥȡ���������ʵ�֡�
	private slots:
	void getFrame(); //ʵ�ֶ�ʱ������ͷȡͼ����ʾ��label�ϵĹ��ܡ�
};

#endif
