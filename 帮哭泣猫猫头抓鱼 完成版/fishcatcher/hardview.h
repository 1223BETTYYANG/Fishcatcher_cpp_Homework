#ifndef HARDVIEW_H
#define HARDVIEW_H

#include<QGraphicsView>
#include <QWidget>
#include<QIcon>
#include<QBrush>
#include<QLabel>
#include<QPushButton>
#include<QVBoxLayout>
#include<QMessageBox>
#include<QGraphicsScene>
#include<QResizeEvent>
#include"qgun.h"
#include"qfish.h"
#include"qfish_1.h"
#include"qfish_2.h"
#include<QTimer>
#include<QPoint>
#include<QLine>
#include<QLineF>
#include<QDebug>
#include"qbullet.h"

class Hardview:public QGraphicsView
{
public:
    explicit Hardview(QWidget *parent =0);
    void resizeEvent(QResizeEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    ~Hardview();

private:
    QGraphicsScene *hardscene;
    QGun *gun;
    QFish *fish1;
    QFish *fish2;
    QFish *fish3;
    QFish *fish4;
    QFish_1 *fish5;
    QFish_1 *fish6;
    QFish_2 *fish7;
    QFish_2 *fish8;
    QTimer *timer;
};

#endif // HARDVIEW_H
