#ifndef _THREAD_LOCALINFO_H_
#define _THREAD_LOCALINFO_H_
#include <QThread>
#include "comParse.h"
class Threadlocal: public QThread
{
public:
    Threadlocal();
    void run();
private:
	clLocation m_clLocation;
};


#endif
