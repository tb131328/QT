#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QMenu>

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
    ui->pushBtn1->setText(tr("&nihao"));
    ui->pushBtn2->setText(tr("帮助(&H)"));
    ui->pushBtn2->setIcon(QIcon("../image/help.png"));
    ui->pushBtn3->setText(tr("z&oon"));

    QMenu *menu =new QMenu(this);
    menu->addAction(QIcon("../image/zoom-in.png"),tr("放大"));
    ui->pushBtn3->setMenu(menu);

}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_pushBtn1_toggled(bool checked)
{
    qDebug()<<tr("按钮是否被按下：")<<checked;
}

void myWidget::on_checkBox_clicked(bool checked)
{
    qDebug()<<tr("按钮是否被按下：")<<checked;
}
