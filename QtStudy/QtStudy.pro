#-------------------------------------------------
#
# Project created by QtCreator 2016-06-21T10:27:43
#
#-------------------------------------------------

QT       += core gui
QT       += network             #增加网络库

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtStudy
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    form.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui
