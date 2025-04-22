#include "mainwidget.h"

mainWidget::mainWidget(QWidget *parent)
    : QWidget(parent)
{
    this->resize(1280,720);//设置窗口大小
    this->setWindowTitle("Fish-Catcher!");//设置窗口名称
    this->setWindowIcon(QIcon("://bg/img/0.png"));//设置窗口图标

    QPalette palette;
   // 调色板palette.setColor(QPalette::Background,Qt::blue);

    palette.setBrush(QPalette::Background,QBrush(QPixmap("://img/big-bg.png")));
    this->setPalette(palette);

    //标签initial~
    this->label=new QLabel(this);
    label->setPixmap(QPixmap(("://img/logo.jpg")));//大家一起来帮猫猫头捉鱼吧

    //添加按钮~
    this->startbtn=new QPushButton(this);
    this->startbtn->setIcon(QIcon("://img/start1.png"));
    this->startbtn->setIconSize(QSize(280,75));
    this->startbtn->setFlat(true);
    this->setFocusPolicy(Qt::NoFocus);

    this->setbtn=new QPushButton(this);
    this->setbtn->setIcon(QIcon("://img/set1.png"));
    this->setbtn->setIconSize(QSize(271,72));
    this->setbtn->setFlat(true);

    this->helpbtn=new QPushButton(this);
    this->helpbtn->setIcon(QIcon("://img/help1.png"));
    this->helpbtn->setIconSize(QSize(275,80));
    this->helpbtn->setFlat(true);

    this->quitbtn=new QPushButton(this);
    this->quitbtn->setIcon(QIcon("://img/quit1.png"));
    this->quitbtn->setIconSize(QSize(275,77));
    this->quitbtn->setFlat(true);

    //创建垂直布局~
    this->vboxlayout=new QVBoxLayout(this);
    this->vboxlayout->addWidget(label);
    this->vboxlayout->addWidget(startbtn);
    this->vboxlayout->addWidget(setbtn);
    this->vboxlayout->addWidget(helpbtn);
    this->vboxlayout->addWidget(quitbtn);
    this->vboxlayout->setAlignment(Qt::AlignCenter);

    w=new gamewidget(this);
    w->hide();
    //信号与槽的关联~
    this->connect(startbtn,SIGNAL(clicked()),this,SLOT(startbtnclick()));
    this->connect(quitbtn,SIGNAL(clicked()),this,SLOT(quitbtnclick()));
    this->connect(helpbtn,SIGNAL(clicked()),this,SLOT(helpbtnclick()));
}

mainWidget::~mainWidget()
{

}

void mainWidget::startbtnclick()
{
    //this->hide();
    w->show();
}

void mainWidget::quitbtnclick()
{
   if(QMessageBox::Yes==QMessageBox::question(this,"Q","Leave?",QMessageBox::Yes|QMessageBox::No))
   {
       this->close();
       exit(0);
   }

}

void mainWidget::helpbtnclick()
{
   QMessageBox::question(this,"HeyHeyHey","You are NOT ALLOWED to leave without helping Felix!",QMessageBox::Yes);

}


