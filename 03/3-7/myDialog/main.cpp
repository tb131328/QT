#include "mywidget.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8")); //使程序中可以使用中文
//    QTextCodec *codec = QTextCodec::codecForName("GB2312");
//    QTextCodec::setCodecForLocale(codec);
//    QTextCodec::setCodecForCStrings(codec);
//    QTextCodec::setCodecForTr(codec); //这个是解决tr("中文")的重点

    myWidget w;
    w.show();
    
    return a.exec();
}
