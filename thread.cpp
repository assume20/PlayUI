#include "thread.h"
#include "display.h"
#include "global.h"
#include <qDebug>
#include <QPainter>
#include <QTime>
#include "getCameraCalibrator.h"

Thread::Thread()
{

}

void Thread::pause()
{
    m_mutex.lock();
}


void Thread::resume()
{
    m_mutex.unlock();
}


void Thread::run()
{
    static unsigned int i = 0;
    unsigned int currentSecond = 0;
    for(;;)
    {
		g_mutex.lock();
        m_frame = getCameraCalibrator();
		g_mutex.unlock();
        m_image = QImage((const uchar*)m_frame.data, m_frame.cols, m_frame.rows, m_frame.step,
                         QImage::Format_RGB888).rgbSwapped();
        //利用槽函数将转换的图像在显示界面绘画出来
        emit getImageFinished(m_image);
       i++;
        if(QTime::currentTime().second() != currentSecond)
        {

            qDebug() << "THread =====> " << i;
            currentSecond = QTime::currentTime().second();
            i = 0;
        }
		//msleep(2000);

    }
}
