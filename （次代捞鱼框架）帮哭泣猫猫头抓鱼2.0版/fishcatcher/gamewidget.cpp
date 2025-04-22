#include "gamewidget.h"

gamewidget::gamewidget(QWidget *parent) : QWidget(parent)
{
    this->parent=parent;
    this->setFixedSize(1280,720);//设置窗口大小
    this->setWindowTitle("Fish-Catcher!");//设置窗口名称

    this->setAutoFillBackground(true);

    this->setWindowIcon(QIcon("://bg/img/0.png"));//设置窗口图标

    QPalette palette;
   //背景

    palette.setBrush(QPalette::Background,QBrush(QPixmap("://img/big-bg.png")));
    this->setPalette(palette);

    //添加按钮~
    this->easybtn=new QPushButton(this);
    this->easybtn->setIcon(QIcon("://img/easy.png"));
    this->easybtn->setIconSize(QSize(321,87));
    this->easybtn->setFlat(true);
    this->easybtn->setFocusPolicy(Qt::NoFocus);

    this->commonbtn=new QPushButton(this);
    this->commonbtn->setIcon(QIcon("://img/common.png"));
    this->commonbtn->setIconSize(QSize(317,77));
    this->commonbtn->setFlat(true);
    this->commonbtn->setFocusPolicy(Qt::NoFocus);


    this->hardbtn=new QPushButton(this);
    this->hardbtn->setIcon(QIcon("://img/hard.png"));
    this->hardbtn->setIconSize(QSize(316,87));
    this->hardbtn->setFlat(true);
    this->hardbtn->setFocusPolicy(Qt::NoFocus);


    this->returnbtn=new QPushButton(this);
    this->returnbtn->setIcon(QIcon("://img/return.png"));
    this->returnbtn->setIconSize(QSize(179,65));
    this->returnbtn->setFlat(true);
    this->returnbtn->setFocusPolicy(Qt::NoFocus);


    //创建垂直布局~
    this->vboxlayout=new QVBoxLayout(this);

    this->vboxlayout->addWidget(this->easybtn);
    this->vboxlayout->addWidget(this->commonbtn);
    this->vboxlayout->addWidget(this->hardbtn);
    this->vboxlayout->addWidget(this->returnbtn);
    //对齐捏~
    this->vboxlayout->setAlignment(Qt::AlignCenter);


    this->connect(returnbtn,SIGNAL(clicked()),this,SLOT(returnbtnclick()));
    this->connect(easybtn,SIGNAL(clicked()),this,SLOT(easybtnclick()));
}

void gamewidget::returnbtnclick()
{
    this->hide();
}

void gamewidget::easybtnclick()
{
    this->parent->hide();
    easyview=new Easyview;
    easyview->show();
}

void gamewidget::commonbtnclick()
{

}

void gamewidget::hardbtnclick()
{

}

gamewidget::~gamewidget()
{

}

