#include "thread_localinfo.h"
#include "global.h"
#include "getCameraCalibrator.h"
#include <QDebug>


Threadlocal::Threadlocal()
{

}

void Threadlocal::run()
{
	for (;;)
	{
		m_clLocation = getjsonParseMod();
		algorithmCamera(m_clLocation);
		msleep(5);
	}
}
