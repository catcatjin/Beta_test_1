#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QString>
#include "test_class1.h"
#include "guitool.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void setTextEdit(QString str);
    void slotClickBtn();
    void setBtn(int btnID, int color);

private:
    Ui::MainWindow *ui;
    GUITool guiTool;
    test_class1 *test1 = new test_class1;

};

#endif // MAINWINDOW_H
