#-------------------------------------------------
#
# Project created by QtCreator 2016-06-21T10:27:43
#
#-------------------------------------------------

QT       += core gui
QT       += network             #增加网络
QT       += sql                 #增加数据
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtStudy
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    form.cpp \
    database.cpp

HEADERS  += mainwindow.h \
    form.h \
    dialog.h \
    form.h \
    database.h \
    pravitestruct.h

FORMS    += mainwindow.ui \
    dialog.ui \
    form.ui
