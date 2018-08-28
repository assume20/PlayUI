#ifndef _THREAD_H_
#define _THREAD_H_
#include <QThread>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv/cv.hpp>
#include <opencv2/opencv.hpp>
#include <QImage>
#include <QPalette>
#include <QRect>
#include <QMutex>
//using namespace cv;

class Displaywin;

//typedef struct CamInfo
//{
//    VideoCapture *m_pvcap;   // ”∆µ¿‡÷∏’Î
//    Displaywin *m_pDisplaywin;
//}CAMINFO;

class Thread:public QThread
{
    Q_OBJECT
public:
    Thread();
    void run();
	void pause();
    void resume();
signals:
    void getImageFinished(QImage image);
private:
	QString m_strVideoStreamAddress;

	//VideoCapture *m_pvcap;

    QImage m_image;

    cv::Mat  m_frame;

    QMutex m_mutex;
};


#endif
