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
    //线程暂停
    void pause();
    //线程继续
    void resume();

    bool isRunning();
protected:
    void  mouseReleaseEvent(QMouseEvent *);


private slots:
    //void closeCamara();     // 关闭摄像头。
    //void takingPictures();  // 拍照
    void updateImage(QImage image);
public:
    Thread *m_pThread;

    QRect m_rect; //图像大小位置
    QImage m_image; //线程传的图像
	QPainter m_painter;



};


#endif
