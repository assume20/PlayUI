#ifndef _GLOBAL_H_
#define _GLOBAL_H_
#include <QWaitCondition>
#include <QMutex>
#include <QImage>
#include "comParse.h"
//#include "getCameraCalibrator.h"

extern QWaitCondition g_waitCondition;

extern QMutex  g_mutex;

extern QImage g_image;

extern int g_isOpenCamera;

//extern clLocation g_clLocation;

typedef struct
{
	std::string id;
	std::string name;
	int rgb;
}LABELINFO_t;

extern std::vector<LABELINFO_t> g_labInfoVec;

#endif
