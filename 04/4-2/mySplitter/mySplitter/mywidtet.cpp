#include "mywidtet.h"
#include "ui_mywidtet.h"

myWidtet::myWidtet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidtet)
{
    ui->setupUi(this);
}

myWidtet::~myWidtet()
{
    delete ui;
}
