#-------------------------------------------------
#
# Project created by QtCreator 2015-12-02T17:09:03
#
#-------------------------------------------------

QT       += core gui
QT += multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SpaceEmulator
TEMPLATE = app


SOURCES += main.cpp\
        SpaceEmulator.cpp \
    videoplayer.cpp

HEADERS  += SpaceEmulator.h \
    videoplayer.h

FORMS    += spaceemulator.ui

RESOURCES += \
    logo.qrc \
    video.qrc
