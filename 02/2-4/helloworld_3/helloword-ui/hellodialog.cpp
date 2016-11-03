#include "hellodialog.h"
#include "ui_hellodialog.h"

helloDialog::helloDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::helloDialog)
{
    ui->setupUi(this);
}

helloDialog::~helloDialog()
{
    delete ui;
}

