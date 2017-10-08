#-------------------------------------------------
#
# Project created by QtCreator 2014-03-25T21:56:18
#
#-------------------------------------------------

QT       += core gui
QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LED1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glwidget.cpp \
    cubeclass.cpp

HEADERS  += mainwindow.h \
    glwidget.h \
    cubeclass.h

FORMS    += mainwindow.ui
