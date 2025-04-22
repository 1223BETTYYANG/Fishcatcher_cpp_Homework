#ifndef EASYVIEW_H
#define EASYVIEW_H

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
#include<QTimer>
#include<QPoint>
#include<QLine>
#include<QLineF>
#include<QDebug>
#include"qbullet.h"
//#include<QSound>

class Easyview:public QGraphicsView
{
public:
    explicit Easyview(QWidget *parent =0);

    void resizeEvent(QResizeEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);

    ~Easyview();
private:
    QGraphicsScene *easyscene;
    QGun *gun;
    QFish *fish1;
    QFish *fish2;
    QFish *fish3;
    QFish *fish4;
    QFish_1 *fish5;
    QFish_1 *fish6;
    QTimer *timer;

};

#endif // EASYVIEW_H
