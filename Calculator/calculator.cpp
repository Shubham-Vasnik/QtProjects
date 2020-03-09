#include "calculator.h"
#include "ui_calculator.h"
#include <vector>
double calcVal=0.0;

bool divTrigger=false;
bool mulTrigger=false;
bool addTrigger=false;
bool subTrigger=false;
int count =0;
std::vector <double> oldVal;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];
    for(int i=0;i<10;i++){
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i],SIGNAL(released()),this,
                SLOT(NumPressed()));
    }
    connect(ui->Buttonplus,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));

    connect(ui->Buttonminus,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));

    connect(ui->Buttonmulti,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));
    connect(ui->ButtonDivide,SIGNAL(released()),this,
            SLOT(MathButtonPressed()));
    connect(ui->ButtonPM,SIGNAL(released()),this,
            SLOT(ChangeNumberSign()));
    connect(ui->ButtonEqual,SIGNAL(released()),this,
            SLOT(EqualButton()));
    connect(ui->ButtonMplus,SIGNAL(released()),this,
            SLOT(MemoryPlus()));
    connect(ui->ButtonMminus,SIGNAL(released()),this,
            SLOT(MemoryMinus()));
    connect(ui->ButtonAC,SIGNAL(released()),this,
            SLOT(Clear()));
}



Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble()==0) || (displayVal.toDouble()==0)){
        ui->Display->setText(butVal);
    }
    else{
        QString newVal = displayVal+butVal;
        double dblNewVal = newVal.toDouble();
        oldVal.push_back(dblNewVal);
        count++;
        ui->Display->setText(QString::number(dblNewVal, 'g' , 16 ));
    }
}

void Calculator::MathButtonPressed(){
    divTrigger=false;
    mulTrigger=false;
    addTrigger=false;
    subTrigger=false;
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if(QString::compare(butVal,"/",Qt::CaseInsensitive) == 0){
        divTrigger=true;
    }
    if(QString::compare(butVal,"*",Qt::CaseInsensitive) == 0){
        mulTrigger=true;
    }
    if(QString::compare(butVal,"+",Qt::CaseInsensitive) == 0){
        addTrigger=true;
    }
    if(QString::compare(butVal,"-",Qt::CaseInsensitive) == 0){
        subTrigger=true;
    }

    oldVal.push_back(displayVal.toDouble());
    count++;
    ui->Display->setText("");
}

void Calculator::EqualButton(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDusplayVal = displayVal.toDouble();
    if(addTrigger || subTrigger || mulTrigger || divTrigger){
        if(addTrigger){
            solution = calcVal + dblDusplayVal;
        }
        else if(subTrigger){
            solution = calcVal - dblDusplayVal;
        }
        else if(mulTrigger){
            solution = calcVal * dblDusplayVal;
        }
        else if(divTrigger){
            solution = calcVal / dblDusplayVal;
        }
    }
    oldVal.push_back(solution);
    count++;
    ui->Display->setText(QString::number(solution));
}

void Calculator::ChangeNumberSign(){
    QString displayVal = ui->Display->text();
    QRegExp reg("[-]?[0-9.]*");
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1*dblDisplayVal;
        oldVal.push_back(dblDisplayValSign);
        count++;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }
}

void Calculator::MemoryPlus(){
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    oldVal.push_back(dblDisplayVal);
    double val=0;
    if(count!=0){
    val = oldVal.at(count);
    }
    if(count<(int)oldVal.size()){
        count++;
    }
    ui->Display->setText(QString::number(val));
}

void Calculator::MemoryMinus(){
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    oldVal.push_back(dblDisplayVal);
    double val=0;
    if(count!=0){
    val = oldVal.at(count);
    }
    if(count>0){
        count--;
    }
    ui->Display->setText(QString::number(val));
}

void Calculator::Clear(){
    calcVal=0.0;
    ui->Display->setText(QString::number(calcVal));
}
