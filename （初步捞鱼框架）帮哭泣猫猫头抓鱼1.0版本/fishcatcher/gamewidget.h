#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>
#include<QIcon>
#include<QBrush>
#include<QLabel>
#include<QPushButton>
#include<QVBoxLayout>
#include<QMessageBox>

class gamewidget : public QWidget
{
    Q_OBJECT
public:
    explicit gamewidget(QWidget *parent = 0);
    ~gamewidget();

private:
    QPushButton *easybtn;
    QPushButton *commonbtn;
    QPushButton *hardbtn;
    QPushButton *returnbtn;
    QVBoxLayout *vboxlayout;


signals:

public slots:
    void easybtnclick();
    void commonbtnclick();
    void hardbtnclick();
    void returnbtnclick();
};

#endif // GAMEWIDGET_H
