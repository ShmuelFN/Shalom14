#include "shalomcalc.h"
#include "ui_shalomcalc.h"

ShalomCalc::ShalomCalc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShalomCalc)
{
    //connect(ui->pushButton_wczytaj, SIGNAL(clicked()), this, SLOT(loadTestFile()));
    ui->setupUi(this);
}

ShalomCalc::~ShalomCalc()
{
    delete ui;
}

void ShalomCalc::dodawanie()
{

}
void ShalomCalc::odejmowanie()
{


}
void ShalomCalc::mnozenie()
{

}
void ShalomCalc::dzielenie()
{

}
void ShalomCalc::wynik()
{

}
void ShalomCalc::wyczysc()
{

}
