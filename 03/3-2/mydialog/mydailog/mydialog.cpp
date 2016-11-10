#include "mydialog.h"
#include "ui_mydialog.h"
#include <QDialog>

MyDialog::MyDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
   // QDialog dialog(this);
    //dialog.show();
    //dialog.exec();
   // QDialog * dialog =new QDialog(this);
    //dialog->setModal(true); // 设置模态
    //dialog->show();
    //connect(ui->showChildButton,SIGNAL(clicked()),this,SLOT(showChildDialog()));
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::on_ShowChildButton_clicked()
{
    QDialog * dialog=new QDialog(this);
    dialog->show();
}

//void MyDialog::showChildDialog()
//{
//    QDialog * dialog =new QDialog(this);
//    dialog->show();
//}
