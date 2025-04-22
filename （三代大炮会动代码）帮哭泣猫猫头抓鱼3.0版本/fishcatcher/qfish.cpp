#include "qfish.h"

QFish::QFish(const QString & fileName,QGraphicsScene *scene):QPixmapItem(fileName,scene)
{
    setPos(-130,0+qrand()%1000);

}

void QFish::advance(int phase)

{
    if(mapToScene(0,0).y()<=0||mapToScene(0,0).x()>=1600)
    {
        setPos(-130,50+qrand()%800);
    }
    int speed=qrand()%20;
    this->setPos(mapToScene(speed,0-2));
}

void QFish::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    char filename[50]="0";
    static int i=2;
    if(i==5)
        i=1;
    sprintf(filename,":/fi/img/cl/%d.png",i++);
    pixmap.load(filename);
    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);

}

void QFish::fish_death()
{
    setPos(-130,60+qrand()%400);
}

QFish::~QFish()
{

}

