#include "mywidtet.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myWidtet w;
    w.show();

    return a.exec();
}
