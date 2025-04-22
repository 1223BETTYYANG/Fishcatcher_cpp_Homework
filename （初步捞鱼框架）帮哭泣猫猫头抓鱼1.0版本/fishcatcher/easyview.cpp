#include "easyview.h"

Easyview::Easyview()
{
    this->resize(1600,900);//设置窗口大小
    this->setWindowTitle("Fish-Catcher!");//设置窗口名称

    this->setAutoFillBackground(true);

    this->setWindowIcon(QIcon("://img/0.png"));//设置窗口图标

    QPalette palette;
   //背景

   // palette.setBrush(QPalette::Background,QBrush(QPixmap("://img/gamebg.jpg")));
   //搞不出来了 this->setPalette(palette);

    this->setBackgroundBrush(QBrush(QPixmap("://img/gamebg.jpg")));
    scene=new QGraphicsScene;
    scene->setSceneRect(0,0,this->width()-2,this->height()-2);
    this->setScene(scene);
}

Easyview::~Easyview()
{

}

