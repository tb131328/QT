#include "mywidget.h"
#include "ui_mywidget.h"
#include <QHBoxLayout>
#include <QGridLayout>

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
//    QHBoxLayout * layout =new QHBoxLayout;
//    layout->addWidget(ui->fontComboBox);
//    layout->addWidget(ui->textEdit);
//    layout->setSpacing(50);
//    layout->setContentsMargins(0,0,50,100);
//    setLayout(layout);


//    QGridLayout* layout =new QGridLayout;
//    layout->addWidget(ui->fontComboBox,0,0,1,2);
//    layout->addWidget(ui->pushButton,0,2,1,1);
//    layout->addWidget(ui->textEdit,1,0,1,3);
//    setLayout(layout);

    ui->textEdit->hide();
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_pushButton_toggled(bool checked)
{
    ui->textEdit->setVisible(checked);
    if(checked)ui->pushButton->setText(tr("隐藏可扩展按钮"));
    else
        ui->pushButton->setText(tr("显示可扩展按钮"));
}
