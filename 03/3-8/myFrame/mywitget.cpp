#include "mywitget.h"
#include "ui_mywitget.h"

myWitget::myWitget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWitget)
{
    ui->setupUi(this);
    ui->frame->setFrameShape(QFrame::Box);
    ui->frame->setFrameShadow(QFrame::Sunken);
    //ui->frame->setFrameStyle(QFrame::Box|QFrame::Sunken);
    ui->frame->setLineWidth(5);
    ui->frame->setMidLineWidth(10);
}

myWitget::~myWitget()
{
    delete ui;
}
