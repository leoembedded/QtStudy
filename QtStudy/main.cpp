#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QTextCodec>       // 设置编码格式头文件

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 设置中文编码
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    MainWindow w;
    w.show();

    return a.exec();
}
