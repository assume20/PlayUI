#include "display.h"
#include "thread.h"
#include "global.h"
#include "mainwindow.h"
#include "centralwin.h"
#include <QDebug>
#include <QPalette>
#include <QTime>
#include <QApplication>

//#include "vld.h"

Displaywin::Displaywin(QWidget* parent)
    :QOpenGLWidget(parent)
{
	QPalette palette(Qt::gray);
	setPalette(palette);
	setAutoFillBackground(true);
    m_pThread = new Thread();
//    m_pThread->start();   //线程创建时就开始
//    this->pause();      //还未点击列表  线程先暂停
    connect(m_pThread, SIGNAL(getImageFinished(QImage)), this, SLOT(updateImage(QImage)));
//    setScaledContents(true);


}

Displaywin::~Displaywin()
{
    m_pThread->quit();
    m_pThread->wait(20);
}

void Displaywin::initializeGL()
{
    //初始化OpenGL函数
    initializeOpenGLFunctions();

    //设置全局变量
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void Displaywin::resizeGL(int width, int height)
{
    //未使用
    Q_UNUSED(width);
    Q_UNUSED(height);
}

void Displaywin::start()
{
    m_pThread->start();

}

void Displaywin::resume()
{
    m_pThread->resume();
}

bool Displaywin::isRunning()
{
    return m_pThread->isRunning();
}

void Displaywin::mouseReleaseEvent(QMouseEvent *)
{

}


void Displaywin::pause()
{
    m_pThread->pause();
}


void Displaywin::updateImage(QImage image)
{
    static unsigned int i = 0;
    static unsigned int currentSecond1 = 0;
    //对线程lock和unlock的动作绝对不能在paintevent中进行，这样会使UI界面卡的死死的。
    m_image = image;

    i++;
    if(QTime::currentTime().second() != currentSecond1)
    {

        qDebug() << "update ----------------------> " << i;
        currentSecond1 = QTime::currentTime().second();
        i = 0;
    }
//	this->resize(this->parentWidget()->size());
	m_rect.setRect(0, 0, this->width(), this->height());
//    QThread::msleep(1);
    update();
	//qApp->processEvents();
}


//画图只能在主线程gui中画  子线程中画会报错

//使用该类函数必须initializeGL(), resizeGL()且要继承QOpenGLFunctions;
//2D绘图可以直接paintGL()函数   qt助手有介绍


void Displaywin::paintGL()
{
    static unsigned int i = 0;
    static unsigned int currentSecond = 0;
    glClear(GL_COLOR_BUFFER_BIT);
	m_painter.begin(this);
	m_painter.drawImage(m_rect, m_image);
	m_painter.end();
    i++;
    if(QTime::currentTime().second() != currentSecond)
    {
        qDebug() << "FPS = " << i;
        currentSecond = QTime::currentTime().second();
        i = 0;
    }


}


