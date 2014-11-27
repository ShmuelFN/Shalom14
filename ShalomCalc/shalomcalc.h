#ifndef SHALOMCALC_H
#define SHALOMCALC_H

#include <QMainWindow>

namespace Ui {
class ShalomCalc;
}

class ShalomCalc : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShalomCalc(QWidget *parent = 0);
    ~ShalomCalc();

private:
    Ui::ShalomCalc *ui;
};

#endif // SHALOMCALC_H
