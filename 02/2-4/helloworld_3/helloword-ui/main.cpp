#include "ui_hellodialog.h"
int main(int argc,char* argv[])
{
    QApplication a(argc,argv);
    QDialog w;
    Ui::helloDialog ui;
    ui.setupUi(&w);
    w.show();


    return a.exec();
}