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
//    m_pThread->start();   //�̴߳���ʱ�Ϳ�ʼ
//    this->pause();      //��δ����б�  �߳�����ͣ
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
    //��ʼ��OpenGL����
    initializeOpenGLFunctions();

    //����ȫ�ֱ���
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}

void Displaywin::resizeGL(int width, int height)
{
    //δʹ��
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
    //���߳�lock��unlock�Ķ������Բ�����paintevent�н��У�������ʹUI���濨�������ġ�
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


//��ͼֻ�������߳�gui�л�  ���߳��л��ᱨ��

//ʹ�ø��ຯ������initializeGL(), resizeGL()��Ҫ�̳�QOpenGLFunctions;
//2D��ͼ����ֱ��paintGL()����   qt�����н���


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


