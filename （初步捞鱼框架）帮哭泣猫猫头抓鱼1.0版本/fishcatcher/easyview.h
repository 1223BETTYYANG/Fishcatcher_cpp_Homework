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

class Easyview:public QGraphicsView
{
public:
    Easyview();
    ~Easyview();

private:
    QGraphicsScene *scene;

};

#endif // EASYVIEW_H
