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
    char op;

public slots:
    void wyczyscwszystko();
    void back();
    void dodawanie();
    void odejmowanie();
    void mnozenie();
    void dzielenie();
    void wynik();
    void wyczysc();
    void pB_1c();
    void pB_2c();
    void pB_3c();
    void pB_4c();
    void pB_5c();
    void pB_6c();
    void pB_7c();
    void pB_8c();
    void pB_9c();
    void pB_0c();

};

#endif // SHALOMCALC_H
