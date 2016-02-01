#-------------------------------------------------
#
# Project created by QtCreator 2016-02-01T13:09:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PkePlayer
TEMPLATE = app


SOURCES += main.cpp\
        app.cpp \
    playlist.cpp

HEADERS  += app.h \
    playlist.h

FORMS    += app.ui

RESOURCES += \
    icons.qrc
