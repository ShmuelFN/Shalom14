#ifndef SHALOMCALC_H
#define SHALOMCALC_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QMenu>
#include <QAction>
#include <QTextCodec>
#include<math.h>
#include<cmath>
#include<inttypes.h>
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
    double g;
    char op;
    bool ulamk;
    //bool t;

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
    void kropka();
    void pi();
    void e();
    void e_x();
    //sloty trygonometryczne
    void sinus_angles();
    void sinus_rad();
    void cosinus_angles();
    void cosinus_rad();
    void tangens_angles();
    void tangens_rad();
    //sloty cyklometrytryczne
    void arcus_sinus();
    void arcus_cosinus();
    void arcus_tangens();
   //sloty funkcyjne
    void silnia();
    void logarytm_10();
    void ln();
    void pierwiastek();
    void pierwiastek_stopnia_trzeciego();
    void kwadrat();
    //zamiana jednostek
    void cm_m();//zamienia cm na metry
    void m_cm();//zamienia metry na centymetry
    void dm_3_cm_3();//zamienia
    void cm_3_dm_3();
    //sloty ciekawe
  // void prime();


};

#endif // SHALOMCALC_H
