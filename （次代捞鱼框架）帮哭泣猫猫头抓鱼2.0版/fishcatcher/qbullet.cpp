#include "qbullet.h"


QBullet::QBullet(const QString & fileName,QGraphicsScene *scene,qreal angle):QPixmapItem(fileName,scene)
{
    this->scene=scene;
    qreal dx,dy;

    qreal rad;

    rad=angle*3.14/180;

    dx=80*cos(rad);
    dy=80*sin(rad);

    this->setPos(scene->width()/2+dx,scene->height()-dy);
    this->setRotation(90-angle);
}

void QBullet::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);
    if(this->collidingItems().count()>0)
    {
        docolliding();
    }
}

 void QBullet:: advance(int phase)
 {
     if(mapToScene(0,0).x()<=0||mapToScene(0,0).x()>=1600||mapToScene(0,0).y()<=0)
     {
         delete this;
     }

     else
     {
        this->setPos(mapToScene(0,-20));
     }
 }

 void QBullet:: docolliding()
 {
     QNet *net=new QNet(":/b/img/net.png",this->scene);
     net->setPos(mapToScene(0,0));
     delete this;
 }

QBullet::~QBullet()
{

}

