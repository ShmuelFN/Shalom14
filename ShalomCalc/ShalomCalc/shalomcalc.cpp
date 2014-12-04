#include "shalomcalc.h"
#include "ui_shalomcalc.h"

ShalomCalc::ShalomCalc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShalomCalc)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    //connect(ui->pushButton_wczytaj, SIGNAL(clicked()), this, SLOT(loadTestFile()));
    //ui->lineEdit->setText("0");

    ui->setupUi(this);
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
}

ShalomCalc::~ShalomCalc()
{
    delete ui;
}

void ShalomCalc::dodawanie()
{
ui->lineEdit->backspace();


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
void ShalomCalc::wyczyscwszystko(){

}
void ShalomCalc::back(){
    ui->lineEdit->backspace();

}

void ShalomCalc::pB_1c(){
    if(ui->lineEdit->text()==0){
        ui->lineEdit->setText("1");
        }
    else if(ui->lineEdit->text()!=0){
        ui->lineEdit->setText(ui->lineEdit->text() + "1");
    }

}
void ShalomCalc::pB_2c(){
    if(ui->lineEdit->text()==0){
        ui->lineEdit->setText("2");
        }
    else if(ui->lineEdit->text()!=0){
        ui->lineEdit->setText(ui->lineEdit->text() + "2");
    }


}
void ShalomCalc::pB_3c(){
    if(ui->lineEdit->text()==0){
        ui->lineEdit->setText("3");
        }
    else if(ui->lineEdit->text()!=0){
        ui->lineEdit->setText(ui->lineEdit->text() + "3");
    }

}
void ShalomCalc::pB_4c(){
    if(ui->lineEdit->text()==0){
        ui->lineEdit->setText("4");
        }
    else if(ui->lineEdit->text()!=0){
        ui->lineEdit->setText(ui->lineEdit->text() + "4");
    }

}
void ShalomCalc::pB_5c(){
    if(ui->lineEdit->text()==0){
        ui->lineEdit->setText("5");
        }
    else if(ui->lineEdit->text()!=0){
        ui->lineEdit->setText(ui->lineEdit->text() + "5");
    }

}
void ShalomCalc::pB_6c(){
    if(ui->lineEdit->text()==0){
        ui->lineEdit->setText("6");
        }
    else if(ui->lineEdit->text()!=0){
        ui->lineEdit->setText(ui->lineEdit->text() + "6");
    }

}
void ShalomCalc::pB_7c(){
    if(ui->lineEdit->text()==0){
        ui->lineEdit->setText("7");
        }
    else if(ui->lineEdit->text()!=0){
        ui->lineEdit->setText(ui->lineEdit->text() + "7");
    }

}
void ShalomCalc::pB_8c(){
    if(ui->lineEdit->text()==0){
        ui->lineEdit->setText("8");
        }
    else if(ui->lineEdit->text()!=0){
        ui->lineEdit->setText(ui->lineEdit->text() + "8");
    }

}
void ShalomCalc::pB_9c(){
    if(ui->lineEdit->text()==0){
        ui->lineEdit->setText("9");
        }
    else if(ui->lineEdit->text()!=0){
        ui->lineEdit->setText(ui->lineEdit->text() + "9");
    }

}
void ShalomCalc::pB_0c(){
    if(ui->lineEdit->text()==0){
        ui->lineEdit->setText("0");
        }
    else if(ui->lineEdit->text()!=0){
        ui->lineEdit->setText(ui->lineEdit->text() + "0");
    }

}
