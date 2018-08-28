#include <QApplication>
#include "mainwindow.h"
#define _CRTDBG_MAP_ALLOC 

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow *mainWin = MainWindow::getInstance();
    mainWin->show();
    app.exec();
}


