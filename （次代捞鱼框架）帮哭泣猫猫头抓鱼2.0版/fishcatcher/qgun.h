#ifndef QGUN_H
#define QGUN_H

#include<QGraphicsItem>
#include<QPixmap>
#include<QRectF>
#include<QPainter>
#include<qpixmapitem.h>
#include"qpixmapitem.h"
#include<QString>
#include<QGraphicsScene>

class QGun:public QPixmapItem
{
public:
    QGun(const QString & fileName,QGraphicsScene *scene);
    ~QGun();

};

#endif // QGUN_H
