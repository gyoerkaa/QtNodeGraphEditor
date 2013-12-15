#-------------------------------------------------
#
# Project created by QtCreator 2013-12-14T14:04:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtNodeGraphEditorTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qnggraphmodel.cpp \
    qnggraphnode.cpp

HEADERS  += mainwindow.h \
    qnggraphmodel.h \
    qnggraphnode.h

FORMS    += mainwindow.ui
