#include "shalomcalc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ShalomCalc w;
    w.show();

    return a.exec();
}
