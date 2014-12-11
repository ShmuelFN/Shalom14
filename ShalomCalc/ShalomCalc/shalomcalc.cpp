#include "shalomcalc.h"
#include "ui_shalomcalc.h"
#include <QString>
#include<cstdlib>
#include<cstring>
//#include<QtCore/QtMath>
ShalomCalc::ShalomCalc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShalomCalc)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    //connect(ui->pushButton_wczytaj, SIGNAL(clicked()), this, SLOT(loadTestFile()));
    //ui->lineEdit->setText("0");

    ui->setupUi(this);
    op = 'n';
    ulamk = false;
    ui->lineEdit->setText("0");

    connect(ui->pB_1, SIGNAL(clicked()), this, SLOT(pB_1c()));
    connect(ui->pB_2, SIGNAL(clicked()), this, SLOT(pB_2c()));
    connect(ui->pB_3, SIGNAL(clicked()), this, SLOT(pB_3c()));
    connect(ui->pB_4, SIGNAL(clicked()), this, SLOT(pB_4c()));
    connect(ui->pB_5, SIGNAL(clicked()), this, SLOT(pB_5c()));
    connect(ui->pB_6, SIGNAL(clicked()), this, SLOT(pB_6c()));
    connect(ui->pB_7, SIGNAL(clicked()), this, SLOT(pB_7c()));
    connect(ui->pB_8, SIGNAL(clicked()), this, SLOT(pB_8c()));
    connect(ui->pB_9, SIGNAL(clicked()), this, SLOT(pB_9c()));
    connect(ui->pB_0, SIGNAL(clicked()), this, SLOT(pB_0c()));
    connect(ui->pB_do, SIGNAL(clicked()), this, SLOT(dodawanie()));
    connect(ui->pB_od, SIGNAL(clicked()), this, SLOT(odejmowanie()));
    connect(ui->pB_mn, SIGNAL(clicked()), this, SLOT(mnozenie()));
    connect(ui->pB_dz, SIGNAL(clicked()), this, SLOT(dzielenie()));
    connect(ui->pb_wn, SIGNAL(clicked()), this, SLOT(wynik()));
    connect(ui->pB_c, SIGNAL(clicked()), this, SLOT(wyczysc()));
    connect(ui->pB_ce, SIGNAL(clicked()), this, SLOT(wyczyscwszystko()));
    connect(ui->pB_back, SIGNAL(clicked()), this, SLOT(back()));
    connect(ui->pB_pp, SIGNAL(clicked()), this , SLOT(kropka()));
    connect(ui->pB_sin, SIGNAL(clicked()), this , SLOT(sinus_angles()));
    connect(ui->pB_sinrad, SIGNAL(clicked()), this , SLOT(sinus_rad()));
    connect(ui->pB_cos, SIGNAL(clicked()), this , SLOT(cosinus_angles()));
    connect(ui->pB_cosrad, SIGNAL(clicked()), this , SLOT(cosinus_rad()));
   connect(ui->pB_tan, SIGNAL(clicked()), this , SLOT(tangens_angles()));
   connect(ui->pB_tanrad, SIGNAL(clicked()), this , SLOT(tangens_rad()));
   connect(ui->pB_asin, SIGNAL(clicked()), this , SLOT(arcus_sinus()));
   connect(ui->pB_acos, SIGNAL(clicked()), this , SLOT(arcus_cosinus()));
   connect(ui->pB_arc_tg, SIGNAL(clicked()), this , SLOT(arcus_tangens()));
   connect(ui->pB_silnia, SIGNAL(clicked()), this , SLOT(silnia()));
   connect(ui->pB_log10, SIGNAL(clicked()), this , SLOT(logarytm_10()));
   connect(ui->pB_ln, SIGNAL(clicked()), this , SLOT(ln()));//logarytm naturalny
   connect(ui->pB_pierw, SIGNAL(clicked()), this , SLOT(pierwiastek()));
   connect(ui->pB_pierw_st_3, SIGNAL(clicked()), this , SLOT(pierwiastek_stopnia_trzeciego()));
   connect(ui->pB_kwadrat, SIGNAL(clicked()), this , SLOT(kwadrat()));
   //connect(ui->pB_prime, SIGNAL(clicked()), this , SLOT(prime()));
   connect(ui->pB_pi, SIGNAL(clicked()), this , SLOT(pi()));
   connect(ui->pB_e, SIGNAL(clicked()), this , SLOT(e()));
   connect(ui->pB_e_x, SIGNAL(clicked()), this , SLOT(e_x()));
   connect(ui->pB_cm_m, SIGNAL(clicked()), this , SLOT(cm_m()));
   connect(ui->pB_m_cm, SIGNAL(clicked()), this , SLOT(m_cm()));
   connect(ui->pB_cm_3_dm_3, SIGNAL(clicked()), this , SLOT(cm_3_dm_3()));
   connect(ui->pB_dm_3_cm_3, SIGNAL(clicked()), this , SLOT(dm_3_cm_3()));





}

ShalomCalc::~ShalomCalc()
{
    delete ui;

}

void ShalomCalc::silnia(){
    a=ui->lineEdit->text().toDouble();
if(a<66){
        unsigned long long silnia = 1;

        for (int i = 1; i<=a;i++)
           {

            silnia *= i;
        }

       ui->lineEdit->setText(QString::number(silnia));
}
else if(a>66){
     ui->lineEdit->setText("Zbyt wielka liczba.Argument silni>=66");
}

}
void ShalomCalc::logarytm_10(){
   a=ui->lineEdit->text().toDouble();
   if(a>0){
     double l=log10(a);
      ui->lineEdit->setText(QString::number(l));
   }
      else if(a<0) ui->lineEdit->setText("Logarytm dziesiętny nie przyjmuje wartości mniejszych bądź równych 0");

}

void ShalomCalc::ln(){

    a=ui->lineEdit->text().toDouble();
    if(a>0){
      double l=log(a);
       ui->lineEdit->setText(QString::number(l));
    }
    else if(a<0)ui->lineEdit->setText("Logarytm naturalny nie przyjmuje wartości mniejszych bądź równych 0");


}
void ShalomCalc::pierwiastek(){
    a=ui->lineEdit->text().toDouble();
    if(a>=0){
    double p=sqrt(a);
    ui->lineEdit->setText(QString::number(p));
    }
    else if (a<0) ui->lineEdit->setText("Pierwiastek z ujemnej liczby nie istnieje.");

}
void ShalomCalc::pierwiastek_stopnia_trzeciego(){
    a=ui->lineEdit->text().toDouble();
    double wynik = pow( a,( 1 / 3.0 ) );
    ui->lineEdit->setText(QString::number(wynik));
}
void ShalomCalc::kwadrat(){
    a=ui->lineEdit->text().toDouble();
    double wynik = pow( a,( 2.0 ) );
    ui->lineEdit->setText(QString::number(wynik));
}


void ShalomCalc:: sinus_angles(){

     a=ui->lineEdit->text().toDouble();
     a=a/180*(3.14159);
     //ui->lineEdit->clear();
      double x=sin(a);
    ui->lineEdit->setText(QString::number(x));


}
void ShalomCalc:: sinus_rad(){
    a=ui->lineEdit->text().toDouble();

    //ui->lineEdit->clear();
     double x=sin(a);
   ui->lineEdit->setText(QString::number(x));
}
void ShalomCalc::cosinus_angles(){
     a=ui->lineEdit->text().toDouble();
     a=a/180*(3.14159);
     double y=cos(a);
     ui->lineEdit->setText(QString::number(y));

}
void ShalomCalc::cosinus_rad(){

    a=ui->lineEdit->text().toDouble();
    double y=cos(a);
    ui->lineEdit->setText(QString::number(y));
}
void ShalomCalc::tangens_angles(){
   int d=ui->lineEdit->text().toInt();
   double s=ui->lineEdit->text().toDouble();
   if(d%90==0 && d%180==90 )
    {
       ui->lineEdit->setText("Asymptota");
   }

   else
   {
    s/=180;
   s*=3.14159265359;
   double t=tan(s);
   ui->lineEdit->setText(QString::number(t));
    }
}

void ShalomCalc::tangens_rad(){
    a=ui->lineEdit->text().toDouble();
   // double d=ui->lineEdit->text().toDouble();
    a/=3.14159265359;
    int b=a*180;
    if(b%90==0  && (b%180==90 || b==90)){
        ui->lineEdit->setText("Asymptota");
    }
    else
    {
        a*=3.14159265359;
        a/=180;
        double t=tan(a);
   ui->lineEdit->setText(QString::number(t));
    }
}
void ShalomCalc::arcus_sinus(){
  a=ui->lineEdit->text().toDouble();
 double x=asin(a);
 x/=3.14159265359;
 x*=180;
 ui->lineEdit->setText(QString::number(x));
}
void ShalomCalc::arcus_cosinus(){
  a=ui->lineEdit->text().toDouble();
 double x=acos(a);
 x/=3.14159265359;
 x*=180;
 ui->lineEdit->setText(QString::number(x));
}
void ShalomCalc::arcus_tangens(){
 a=ui->lineEdit->text().toDouble();
    double x=atan(a);
    x/=3.14159265359;
    x*=180;
    ui->lineEdit->setText(QString::number(x));
}

void ShalomCalc::dodawanie()
{

    a = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    op = 'd';
}
void ShalomCalc::odejmowanie()
{
    a = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    op = 'o';

}
void ShalomCalc::mnozenie()
{
    a = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    op = 'm';
}
void ShalomCalc::dzielenie()
{
    a = ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    op = 'z';
}
void ShalomCalc::wynik()
{
    if(op == 'd'){
    a = a + ui->lineEdit->text().toDouble();
   }
    else if(op == 'o'){
    a = a - ui->lineEdit->text().toDouble();
    }
    else if(op == 'm'){
    a = a * ui->lineEdit->text().toDouble();
    }
    else if(op == 'z'){
    a = a / ui->lineEdit->text().toDouble();
    }
    else if(op == 'n'){
        a = ui->lineEdit->text().toDouble();
    }

    ui->lineEdit->setText(QString::number(a));


}
void ShalomCalc::wyczysc()
{
   ui->lineEdit->setText("");
   ulamk = false;

}
void ShalomCalc::wyczyscwszystko(){
    ui->lineEdit->setText("");
    a = 0;
    op = 'n';
    ulamk=false;

}

void ShalomCalc::kropka(){
    QString b = ui->lineEdit->text();
    if(ui->lineEdit->text()=="0"){
        ui->lineEdit->setText("0.");
        }
    else if(ulamk==true){
        ui->lineEdit->setText(ui->lineEdit->text());}
    else if(ui->lineEdit->text()!="0"){
        ui->lineEdit->setText(ui->lineEdit->text() + ".");
        ulamk = true;
    }

}

void ShalomCalc::back(){

    ui->lineEdit->backspace();


}

void ShalomCalc::pB_1c(){
    if(ui->lineEdit->text()=="0"){
        ui->lineEdit->setText("1");

        }
    else if(ui->lineEdit->text()!="0"){
        ui->lineEdit->setText(ui->lineEdit->text() + "1");
    }

}
void ShalomCalc::pB_2c(){
    if(ui->lineEdit->text()=="0"){
        ui->lineEdit->setText("2");

        }
    else if(ui->lineEdit->text()!="0"){
        ui->lineEdit->setText(ui->lineEdit->text() + "2");
    }


}
void ShalomCalc::pB_3c(){
    if(ui->lineEdit->text()=="0"){
        ui->lineEdit->setText("3");
        }
    else if(ui->lineEdit->text()!="0"){
        ui->lineEdit->setText(ui->lineEdit->text() + "3");
    }

}
void ShalomCalc::pB_4c(){
    if(ui->lineEdit->text()=="0"){
        ui->lineEdit->setText("4");
        }
    else if(ui->lineEdit->text()!="0"){
        ui->lineEdit->setText(ui->lineEdit->text() + "4");
    }

}
void ShalomCalc::pB_5c(){
    if(ui->lineEdit->text()=="0"){
        ui->lineEdit->setText("5");
        }
    else if(ui->lineEdit->text()!="0"){
        ui->lineEdit->setText(ui->lineEdit->text() + "5");
    }

}
void ShalomCalc::pB_6c(){
    if(ui->lineEdit->text()=="0"){
        ui->lineEdit->setText("6");
        }
    else if(ui->lineEdit->text()!="0"){
        ui->lineEdit->setText(ui->lineEdit->text() + "6");
    }

}
void ShalomCalc::pB_7c(){
    if(ui->lineEdit->text()=="0"){
        ui->lineEdit->setText("7");
        }
    else if(ui->lineEdit->text()!="0"){
        ui->lineEdit->setText(ui->lineEdit->text() + "7");
    }

}
void ShalomCalc::pB_8c(){
    if(ui->lineEdit->text()=="0"){
        ui->lineEdit->setText("8");
        }
    else if(ui->lineEdit->text()!="0"){
        ui->lineEdit->setText(ui->lineEdit->text() + "8");
    }

}
void ShalomCalc::pB_9c(){
    if(ui->lineEdit->text()=="0"){
        ui->lineEdit->setText("9");
        }
    else if(ui->lineEdit->text()!="0"){
        ui->lineEdit->setText(ui->lineEdit->text() + "9");
    }

}
void ShalomCalc::pB_0c(){
    if(ui->lineEdit->text()=="0"){
        ui->lineEdit->setText("0");
        }
    else if(ui->lineEdit->text()!="0"){
        ui->lineEdit->setText(ui->lineEdit->text() + "0");
    }

}
void ShalomCalc::pi(){
   a=ui->lineEdit->text().toDouble();
    double pi=3.14159265359;
    a*=pi;
    ui->lineEdit->setText(QString::number(a));
 ulamk=true;

}
void ShalomCalc::e(){
    a=ui->lineEdit->text().toDouble();
     double e=2.718281828459045;
     a*=e;
     ui->lineEdit->setText(QString::number(a));
  ulamk=true;



}
void ShalomCalc::e_x(){
    double x=ui->lineEdit->text().toDouble();
    //double e=2.718281828459045;
    double wynik =pow(2.718281828459045,x);
    ui->lineEdit->setText(QString::number(wynik));
}
//zamiana jednostek
void ShalomCalc::cm_m(){
    a=ui->lineEdit->text().toDouble();
    a/=100;

   ui->lineEdit->setText(QString::number(a));
  }
void ShalomCalc::m_cm(){

    a=ui->lineEdit->text().toDouble();
    a*=100;

   ui->lineEdit->setText(QString::number(a));

}

void ShalomCalc::dm_3_cm_3(){

    a=ui->lineEdit->text().toDouble();
    a*=1000;

   ui->lineEdit->setText(QString::number(a));

}
void ShalomCalc::cm_3_dm_3(){

    a=ui->lineEdit->text().toDouble();
    a/=1000;

   ui->lineEdit->setText(QString::number(a));

}
