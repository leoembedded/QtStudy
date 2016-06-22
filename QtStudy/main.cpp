#include "mainwindow.h"
#include <QtGui/QApplication>
#include <QApplication>
#include <QLabel>
#include <QTextCodec>       // 增加头文件


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 设置文本编辑器
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    MainWindow w;

    // 设置窗口大小
    w.resize(854, 480);
    w.show();


    return a.exec();
}
