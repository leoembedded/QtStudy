#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QLabel *label = new QLabel("Hello world QT!");
    label->show();
    w.show();

    return a.exec();
}
