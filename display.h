#ifndef _DISPLAY_H_
#define _DISPLAY_H_

//#include <iostream>
#include <QLabel>
#include <QTimer>
#include <QImage>
#include <QThread>
#include <QPainter>
#include <QMutex>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include "thread.h"

//using namespace std;


class Thread;
class Displaywin: public QOpenGLWidget,
                  protected QOpenGLFunctions
{
    Q_OBJECT
public:
    Displaywin(QWidget* parent = NULL);

    ~Displaywin();
    void initializeGL();
    void resizeGL(int width, int height);

	void paintGL();

    void start();
    //�߳���ͣ
    void pause();
    //�̼߳���
    void resume();

    bool isRunning();
protected:
    void  mouseReleaseEvent(QMouseEvent *);


private slots:
    //void closeCamara();     // �ر�����ͷ��
    //void takingPictures();  // ����
    void updateImage(QImage image);
public:
    Thread *m_pThread;

    QRect m_rect; //ͼ���Сλ��
    QImage m_image; //�̴߳���ͼ��
	QPainter m_painter;



};


#endif
