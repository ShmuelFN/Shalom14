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
    double suma;
    double a;

public slots:
    void dodawanie();
    void odejmowanie();
    void mnozenie();
    void dzielenie();
    void wynik();
    void wyczysc();
};

#endif // SHALOMCALC_H
