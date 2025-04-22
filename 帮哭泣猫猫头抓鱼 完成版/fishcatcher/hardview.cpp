#include "hardview.h"

Hardview::Hardview(QWidget *parent):
    QGraphicsView(parent)
{
    this->resize(1280,720);//设置窗口大小
    this->setWindowTitle("Fish-Catcher!");//设置窗口名称

    this->setMouseTracking(true);//mouseEvent是否生效

    this->setAutoFillBackground(true);

    this->setWindowIcon(QIcon("://img/0.png"));//设置窗口图标

    QPalette palette;
   //背景

   // palette.setBrush(QPalette::Background,QBrush(QPixmap("://img/gamebg2.jpg")));
   //搞不出来了 this->setPalette(palette);

    this->setBackgroundBrush(QBrush(QPixmap("://img/gameb_g2.png")));
    hardscene=new QGraphicsScene;
    hardscene->setSceneRect(0,0,this->width()-2,this->height()-2);
    this->setScene(hardscene);
    //大炮
    gun=new QGun("://img/pao.png",hardscene);
    gun->setPos(this->width()/2,this->height());
    //scene->addItem(gun);

    //鱼鱼！
    fish1=new QFish(":/fi/img/cl/1.png",hardscene);
    //fish1->setPos(0,50);
    //scene->addItem(fish1);

    fish2=new QFish(":/fi/img/cl/1.png",hardscene);
    //fish2->setPos(-60,150);
    //scene->addItem(fish2);

    fish3=new QFish(":/fi/img/cl/1.png",hardscene);
    //fish3->setPos(-20,250);
    //scene->addItem(fish3);

    fish4=new QFish(":/fi/img/cl/1.png",hardscene);
    //fish4->setPos(-80,350);
    //scene->addItem(fish4);

    fish5=new QFish_1(":/fi/img/pen/1.png",hardscene);
    fish6=new QFish_1(":/fi/img/pen/1.png",hardscene);

    fish7=new QFish_2(":/fi/img/catfish.jpg",hardscene);
    fish8=new QFish_2(":/fi/img/catfish.jpg",hardscene);

    //定时器
    timer=new QTimer;
    connect(timer,SIGNAL(timeout()),hardscene,SLOT(advance()));
    timer->start(100);

}

void Hardview::resizeEvent(QResizeEvent *event)
{
    this->setBackgroundBrush(QImage("://img/gamebg.jpg").scaled(event->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    gun->setPos(this->width()/2,this->height());
}

void Hardview::mouseMoveEvent(QMouseEvent *event)
{
    QPoint p;
    p=event->pos();

    //画线！
    QLine line(this->width()/2,this->height(),p.x(),p.y());

    QLineF linef(line);
    gun->setRotation(-(linef.angle()-90));
}

void Hardview::mousePressEvent(QMouseEvent *event)
{
    QPoint p=event->pos();
    QLineF linef(this->width()/2,this->height(),p.x(),p.y());
    QBullet *bullet=new QBullet(":/b/img/bul.png",hardscene,linef.angle());

}


Hardview::~Hardview()
{

}

