#-------------------------------------------------
#
# Project created by QtCreator 2024-04-23T21:30:17
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ServerManager.cpp \
    ClientChatWidget.cpp

HEADERS  += mainwindow.h \
    ServerManager.h \
    ClientChatWidget.h

FORMS    += mainwindow.ui \
    ClientChatWidget.ui
