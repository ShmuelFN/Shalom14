#include "shalomcalc.h"
#include "ui_shalomcalc.h"
#include <QString>
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
}

ShalomCalc::~ShalomCalc()
{
    delete ui;
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
