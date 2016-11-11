#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QProgressDialog>
#include <QErrorMessage>

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
    //QColor color =QColorDialog::getColor(Qt::red,this,tr("颜色对话框"));
    //QColor color =QColorDialog::getColor(Qt::red,this,tr("颜色对话框"),QColorDialog::ShowAlphaChannel);
    QColorDialog dialog(Qt::red,this);
    dialog.setOption(QColorDialog::ShowAlphaChannel);
    dialog.exec();
    QColor color =dialog.currentColor();

    qDebug()<<"color ="<<color;
}

void myWidget::on_pushButton_2_clicked()
{
    //QString file =QFileDialog::getOpenFileName(this,tr("文件对话框"),"F:",tr("图片文件(*.png *.jpg)"));
    //QString file =QFileDialog::getOpenFileName(this,tr("文件对话框"),"F:",tr("图片文件(*.png *.jpg);;(*.txt)"));
    QStringList file =QFileDialog::getOpenFileNames(this,tr("文件对话框"),"F:",tr("图片文件(*.png *.jpg)"));
    qDebug()<<"file ="<<file<<endl;
    //QFileDialog::getSaveFileName(this,"保存为对话框","F:",("*.jpg");;("*.png");
}

void myWidget::on_pushButton_3_clicked()
{
    bool ok;
    QFont font =QFontDialog::getFont(&ok,this);
    if(ok)
        ui->pushButton_3->setFont(font);
   else
        qDebug()<<"没有选择字体font ="<<font;
}

void myWidget::on_pushButton_4_clicked()
{
    bool ok;
    QString strName =QInputDialog::getText(this,tr("输入用户名对话框"),tr("请输入用户名"),QLineEdit::Normal,"admin",&ok);
    if(ok)
        qDebug()<<"strName ="<<strName;
    QString strPassworld =QInputDialog::getText(this,tr("输入密码对话框"),tr("请输入密码"),QLineEdit::Password,"passworld",&ok);
    if(ok)
        qDebug()<<"strPassworld ="<<strPassworld;
    int iValue =QInputDialog::getInt(this,tr("输入整数对话框"),tr("请输入-1000到1000的数"),100,-1000,1000,10,&ok);
    if(ok)
        qDebug()<<"iValue ="<<iValue;
    double dValue =QInputDialog::getDouble(this,tr("输入浮点对话框"),tr("请输入-1000到1000的数"),0.00,-1000,1000,2,&ok);
    if(ok)
        qDebug()<<"dValue ="<<dValue;
    QStringList items;
    items<<tr("条目1")<<tr("条目2");
    QString item =QInputDialog::getItem(this,tr("输入条目对话框"),tr("请选择一个条目"),items,0,true,&ok);
    if(ok)
        qDebug()<<"item ="<<item;
}

void myWidget::on_pushButton_5_clicked()
{
    int iret =0;
    iret =QMessageBox::question(this,tr("问题对话框"),tr("你了解QT吗？"),QMessageBox::Yes,QMessageBox::No);
    if(QMessageBox::Yes == iret) qDebug()<<tr("这就对了嘛");

    iret =QMessageBox::information(this,tr("信息对话框"),tr("这是QT书！"),QMessageBox::Ok);
    if(QMessageBox::Ok == iret) qDebug()<<tr("提示");

    iret =QMessageBox::warning(this,tr("警告对话框"),tr("不能提前关闭！"),QMessageBox::Abort);
    if(QMessageBox::Abort == iret) qDebug()<<tr("警告");

    iret =QMessageBox::critical(this,tr("严重错误对话款"),tr("发现一个严重错误，需要关闭全部打开文件"),QMessageBox::YesAll);
    if(QMessageBox::YesAll == iret) qDebug()<<tr("严重错误");

    QMessageBox::about(this,tr("关于对话框"),tr("这是QT4.8"));
}

void myWidget::on_pushButton_8_clicked()
{
    QProgressDialog dialog(tr("文件复制进度"),tr("取消"),0,5000,this);
    dialog.setWindowTitle(tr("进度对话框"));
    dialog.setWindowModality(Qt::WindowModal);
    dialog.show();
    for(int i=0; i<500000;i++)
    {
        dialog.setValue(i);
        QCoreApplication::processEvents();
        if(dialog.wasCanceled()) break;
    }
    dialog.setValue(500000);
    qDebug()<<tr("复制结束");
}


void myWidget::on_pushButton_6_clicked()
{
    QErrorMessage *dialog =new QErrorMessage(this);
    dialog->setWindowTitle(tr("这是消息对话框"));
    dialog->showMessage(tr("消息提示"));
}

void myWidget::on_pushButton_7_clicked()
{
    QWizard wizard(this);
    wizard.addPage(createPage1());
    wizard.addPage(createPage2());
    wizard.addPage(createPage3());
    wizard.exec();
}

QWizardPage * myWidget::createPage1()
{
    QWizardPage * page =new QWizardPage;
    page->setTitle(tr("介绍"));
    return page;
}

QWizardPage * myWidget::createPage2()
{
    QWizardPage * page =new QWizardPage;
    page->setTitle(tr("选择信息"));
    return page;
}

QWizardPage * myWidget::createPage3()
{
    QWizardPage * page =new QWizardPage;
    page->setTitle(tr("结束"));
    return page;
}
