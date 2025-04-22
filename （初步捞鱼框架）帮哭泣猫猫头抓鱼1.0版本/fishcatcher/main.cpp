#include "mainwidget.h"
#include <QApplication>
#include<QTextCodec>
#include"gamewidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //中文载入！（问题）
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB18030"));
    mainWidget w;

    w.show();

    return a.exec();
}
