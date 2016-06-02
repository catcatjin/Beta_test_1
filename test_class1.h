#ifndef TEST_CLASS1_H
#define TEST_CLASS1_H
#include "windows.h"
#include <QWidget>
#include <QThread>
#include "guitool.h"

class test_class1 : public QThread
{
    Q_OBJECT
public:
    test_class1();

public slots:
    void setX(int xValue);
    void setY(int yValue);
    void add();

protected:
    void run();

signals:
    void updateText(QString str);
    void updateBtn(int btnID, int color);
    void enableBtn(int btnID, bool enable);

private:
    int x, y;

};

#endif // TEST_CLASS1_H
