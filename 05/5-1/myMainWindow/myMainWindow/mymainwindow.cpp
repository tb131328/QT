#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include <QMenu>
#include <QSpinBox>
#include <QToolButton>

myMainWindow::myMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    QMenu * editMenu =ui->menuBar->addMenu(tr("编辑(&E)"));
    QAction * action_open =editMenu->addAction(QIcon(":/myImage/images/open.png"),tr("打开文件(&O)"));
    action_open->setShortcut(QKeySequence("ctrl+O"));
    ui->mainToolBar->addAction(action_open);

    QActionGroup* action_group= new QActionGroup(this);
    QAction* action_R =action_group->addAction(tr("右对齐(&R)"));
    action_R->setCheckable(true);
    QAction* action_L =action_group->addAction(tr("左对齐(&L)"));
    action_L->setCheckable(true);
    QAction* action_C =action_group->addAction(tr("中间对齐(&C)"));
    action_C->setCheckable(true);
    action_C->setChecked(true);

    editMenu->addSeparator();
    editMenu->addAction(action_C);
    editMenu->addAction(action_R);
    editMenu->addAction(action_L);

    QToolButton* toolBut =new QToolButton(this);
    toolBut->setText(tr("颜色"));
    QMenu * colorMenu =new QMenu(this);
    colorMenu->addAction(tr("红色"));
    colorMenu->addAction(tr("绿色"));
    toolBut->setMenu(colorMenu);
    toolBut->setPopupMode(QToolButton::MenuButtonPopup);
    ui->mainToolBar->addWidget(toolBut);


    QSpinBox* spin =new QSpinBox(this);
    ui->mainToolBar->addWidget(spin);

}

myMainWindow::~myMainWindow()
{
    delete ui;
}
