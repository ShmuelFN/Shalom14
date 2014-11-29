#ifndef SHALOMCALC_H
#define SHALOMCALC_H

#include <QWidget>

namespace Ui {
class ShalomCalc;
}

class ShalomCalc : public QWidget
{
    Q_OBJECT

public:
    explicit ShalomCalc(QWidget *parent = 0);
    ~ShalomCalc();

private:
    Ui::ShalomCalc *ui;
};

#endif // SHALOMCALC_H
