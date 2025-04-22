#include "qfish.h"

QFish::QFish(const QString & fileName,QGraphicsScene *scene):QPixmapItem(fileName,scene)
{
    setPos(-50-qrand()%300,200+qrand()%700);

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
    painter->drawPixmap(-pixmap.width()/2,-pixmap.height(),pixmap);
}
void QFish::fish_death()
{
    setPos(-50-qrand()%300,200+qrand()%500);
}

QFish::~QFish()
{

}

