#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    ,calcLogic(new CalculatorLogic(this))
{
    qDebug()<<"MAma";
    ui->setupUi(this);
    connect(ui->pushButton_Broj0,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Broj1,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Broj2,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Broj3,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Broj4,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Broj5,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Broj6,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Broj7,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Broj8,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Broj9,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_C,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Plus,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Minus,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Znak,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Koren,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Puta,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Podeljeno,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Jednako,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Nazad,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(ui->pushButton_Tacka,SIGNAL(clicked()),this,SLOT(onBtnClicked()));
    connect(calcLogic,SIGNAL(resultChanged(QString)),this,SLOT(onResultChanged(QSting)));
      connect(calcLogic,SIGNAL(resultHistoryChanged(QString)),this,SLOT(onResultHistoryChanged(QSting)));


}
void Widget::onBtnClicked()
{
    QPushButton *btn=static_cast<QPushButton*>(sender());
    qDebug()<<btn->text();
calcLogic->doCommand(btn->text());
}
void Widget::onResultChanged(QString string)
{

}
void Widget::onResultHistoryChanged(QString string)
{

}

Widget::~Widget()
{
    delete ui;
}

