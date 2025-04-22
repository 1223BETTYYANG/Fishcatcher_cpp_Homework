#-------------------------------------------------
#
# Project created by QtCreator 2023-05-11T12:34:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = fishcatcher
TEMPLATE = app


SOURCES += main.cpp\
        mainwidget.cpp \
    gamewidget.cpp \
    easyview.cpp \
    qgun.cpp \
    res.cpp \
    qpixmapitem.cpp \
    qfish.cpp \
    qbullet.cpp \
    qnet.cpp

HEADERS  += mainwidget.h \
    gamewidget.h \
    easyview.h \
    qgun.h \
    qpixmapitem.h \
    qfish.h \
    qbullet.h \
    qnet.h

RESOURCES += \
    res.qrc
