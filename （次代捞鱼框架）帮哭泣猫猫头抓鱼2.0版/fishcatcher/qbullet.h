#ifndef QBULLET_H
#define QBULLET_H
#include"qpixmapitem.h"
#include<QtGui>
#include"qnet.h"
#include<QGraphicsScene>

class QBullet:public QPixmapItem
{
public:
    QBullet(const QString & fileName,QGraphicsScene *scene,qreal angle);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void advance(int phase);
    void docolliding();
    ~QBullet();

private:
    QGraphicsScene *scene;
};

#endif // QBULLET_H
