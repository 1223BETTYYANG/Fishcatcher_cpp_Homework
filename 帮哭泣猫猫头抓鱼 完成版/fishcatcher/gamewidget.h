#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include<QIcon>
#include<QBrush>
#include<QLabel>
#include<QPushButton>
#include<QVBoxLayout>
#include<QMessageBox>
#include"easyview.h"
#include"hardview.h"

class gamewidget : public QWidget
{
    Q_OBJECT
public:
    explicit gamewidget(QWidget *parent = 0);
    ~gamewidget();

private:
    QPushButton *easybtn;
    QPushButton *hardbtn;
    QPushButton *returnbtn;
    QVBoxLayout *vboxlayout;
    Easyview *easyview;
    Hardview *hardview;
    QWidget *parent;

signals:

public slots:
    void easybtnclick();
    void hardbtnclick();
    void returnbtnclick();
};

#endif // GAMEWIDGET_H

