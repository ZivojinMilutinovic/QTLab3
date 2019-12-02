#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,calcLogic(new CalculatorLogic(this))
{
    ui->setupUi(this);

    connect(ui->pushButton_Broj0,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
     connect(ui->pushButton_Broj1,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
      connect(ui->pushButton_Broj2,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
      connect(ui->pushButton_Broj3,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
       connect(ui->pushButton_Broj4,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
        connect(ui->pushButton_Broj5,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
        connect(ui->pushButton_Broj6,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
         connect(ui->pushButton_Broj7,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
          connect(ui->pushButton_Broj8,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
          connect(ui->pushButton_Broj9,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
           connect(ui->pushButton_C,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
            connect(ui->pushButton_Plus,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
            connect(ui->pushButton_Puta,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
             connect(ui->pushButton_Znak,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
              connect(ui->pushButton_Koren,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
              connect(ui->pushButton_Minus,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
               connect(ui->pushButton_Tacka,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
                connect(ui->pushButton_UNazad,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
                connect(ui->pushButton_Jednako,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
                 connect(ui->pushButton_Podeljeno,SIGNAL(clicked()),calcLogic,SLOT(onBtnClicked()));
                  connect(calcLogic,SIGNAL(resultChanged(QString)),calcLogic,SLOT(onResultChanged(QString)));
                   connect(calcLogic,SIGNAL(resultHistoryChanged(QString)),calcLogic,SLOT(onResultHistoryChanged(QString)));

}



MainWindow::~MainWindow()
{
    delete ui;
}

