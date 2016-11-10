#include "mywidget.h"
#include "ui_mywidget.h"
#include "mydialog.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_pushButton_clicked()
{
    close();
    myDialog dialog;
    if(dialog.exec() == QDialog::Accepted)
        show();

}
