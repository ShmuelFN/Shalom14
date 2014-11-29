#ifndef SHALOMCALC_H
#define SHALOMCALC_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QMenu>
#include <QAction>
#include <QTextCodec>

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
