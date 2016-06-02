#include <QString>
#include <cstdlib>

#include <QWaitCondition>
#include <QColorDialog>
#include "windows.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "test_class1.h"
//#include "guitool.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //test_class1* test1 = new test_class1;


    //test_class1 *test1 = new test_class1;
    test1->setX(4);
    test1->setY(5);

    //Qstring status = "start";
    ui->setupUi(this);




    connect(ui->test_btn, SIGNAL(clicked()), this, SLOT(slotClickBtn()));
    connect(test1, SIGNAL(updateBtn(int, int)), this, SLOT(setBtn(int, int)));
 //ui->test_status->append("hollod world");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setTextEdit(QString str)
{
    ui->test_status->append(str);
}

void MainWindow::slotClickBtn()
{
    //QPushButton* btn = qobject_cast<QPushButton*>(sender());
    //Sleep(5000);

    ui->test_status->append("Hello world");
    test1->start();


}

void MainWindow::setBtn(int btnID, int color)
{

    switch(btnID)
    {
    case TEST_BTN:
        guiTool.SetButtonColor(ui->test_btn, color);
        //ui->test_status->append("Hello world");
        break;

    default:
        break;
    }
}
