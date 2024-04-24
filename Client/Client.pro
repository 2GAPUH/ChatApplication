#-------------------------------------------------
#
# Project created by QtCreator 2024-04-24T18:22:31
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Client
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ClientManager.cpp

HEADERS  += mainwindow.h \
    ClientManager.h

FORMS    += mainwindow.ui
