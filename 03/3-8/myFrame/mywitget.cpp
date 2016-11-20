#include "mywitget.h"
#include "ui_mywitget.h"
#include <QPixmap>
#include <QMovie>

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

    QPixmap icon("logo.png");
    ui->label->setPixmap(icon);
    ui->label->resize(icon.width(),icon.height());

    QMovie *movie =new QMovie("donghua.gif");
    ui->label_2->setMovie(movie);
    movie->start();


}

myWitget::~myWitget()
{
    delete ui;
}
