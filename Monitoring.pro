TEMPLATE = app

CONFIG += thread

QT += \
    widgets \
    multimedia \
    multimediawidgets \
    gui

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    playerlist.cpp \
    display.cpp \
    thread.cpp \
    global.cpp \
    centralwin.cpp \
    labelmodify.cpp \
    addlabel.cpp \
    thread_localinfo.cpp \
    ipportinfo.cpp


HEADERS += \
    mainwindow.h \
    playerlist.h \
    display.h \
    thread.h \
    global.h \
    centralwin.h \
    labelmodify.h \
    addlabel.h \
    thread_localinfo.h \
    ipportinfo.h


FORMS += mainwindow.ui \
         labDlg.ui \
         addlabel.ui \
         ipportinfo.ui \
         centerwin.ui

RESOURCES += \
    res/resources.qrc

DESTDIR = ../bin


INCLUDEPATH += D:/opencv/build/include

CONFIG(debug, debug|release): {
LIBS += -LD:/opencv/build/x64/vc14/lib \
-lopencv_world341d

LIBS += -L$$PWD/lib \
-lIPCameraDll_d  \
-lLEJP_d

} else:CONFIG(release, debug|release): {
LIBS += -LD:/opencv/build/x64/vc14/lib \
-lopencv_world341 \

LIBS += -L$$PWD/lib \
-lIPCameraDll \
-lLEJP
}
