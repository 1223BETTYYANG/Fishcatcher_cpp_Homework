#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include<QIcon>
#include<QBrush>
#include<QLabel>
#include<QPushButton>
#include<QVBoxLayout>
#include "gamewidget.h"

class mainWidget : public QWidget
{
    Q_OBJECT

public:
    mainWidget(QWidget *parent = 0);
    ~mainWidget();
private:
    QLabel *label;
    QPushButton *startbtn;
    QPushButton *setbtn;
    QPushButton *helpbtn;
    QPushButton *quitbtn;
    QVBoxLayout *vboxlayout;
    gamewidget *w;
public slots:
    void startbtnclick();//按击开始的槽函数
    void quitbtnclick();
    void helpbtnclick();



};

#endif // MAINWIDGET_H
