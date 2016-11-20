#ifndef MYWIDTET_H
#define MYWIDTET_H

#include <QWidget>

namespace Ui {
class myWidtet;
}

class myWidtet : public QWidget
{
    Q_OBJECT

public:
    explicit myWidtet(QWidget *parent = 0);
    ~myWidtet();

private:
    Ui::myWidtet *ui;
};

#endif // MYWIDTET_H
