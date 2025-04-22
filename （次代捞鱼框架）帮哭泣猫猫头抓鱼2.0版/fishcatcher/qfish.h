#ifndef QFISH_H
#define QFISH_H
#include "qpixmapitem.h"
#include<qpixmapitem.h>
#include<QtGui>
#include<QGraphicsScene>

class QFish:public QPixmapItem
{
public:
    QFish(const QString & fileName,QGraphicsScene *scene);
    void advance(int phase);//重载advance
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void fish_death();
    ~QFish();
};

#endif // QFISH_H
