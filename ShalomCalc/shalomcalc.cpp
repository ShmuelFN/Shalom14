#include "shalomcalc.h"
#include "ui_shalomcalc.h"

ShalomCalc::ShalomCalc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShalomCalc)
{
    ui->setupUi(this);
}

ShalomCalc::~ShalomCalc()
{
    delete ui;
}
