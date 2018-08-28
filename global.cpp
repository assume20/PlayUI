#include "global.h"

//全局信号量
QWaitCondition g_waitCondition;

//全局锁
QMutex  g_mutex;

QImage g_image;

//clLocation g_clLocation;

int g_isOpenCamera;

std::vector<LABELINFO_t> g_labInfoVec;

