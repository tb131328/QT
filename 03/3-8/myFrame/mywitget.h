#ifndef MYWITGET_H
#define MYWITGET_H

#include <QWidget>

namespace Ui {
class myWitget;
}

class myWitget : public QWidget
{
    Q_OBJECT

public:
    explicit myWitget(QWidget *parent = 0);
    ~myWitget();

private:
    Ui::myWitget *ui;
};

#endif // MYWITGET_H
