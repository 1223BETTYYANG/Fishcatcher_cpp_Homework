#include "qgun.h"

QGun::QGun(const QString & fileName,QGraphicsScene *scene):QPixmapItem(fileName,scene)
{

}
/*
QRectF QGun::boundingRect() const
{
    return QRectF(0,0,pixmap.width(),pixmap.height());
}
void QGun::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(0,0,pixmap);
}
*/

QGun::~QGun()
{

}

