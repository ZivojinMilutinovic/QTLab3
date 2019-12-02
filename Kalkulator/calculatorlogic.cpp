#include "calculatorlogic.h"

CalculatorLogic::CalculatorLogic(QObject *parent) : QObject(parent)
{
poslednjaCifra="";
}
void CalculatorLogic::doCommand(QString comand)
{
    M
    if(poslednjaCifra=="")
    {
       if(comand=="1")
       {

       }
       else if(comand=="2")
       {

       }
       else if(comand=="3")
       {

       }
       else if(comand=="4")
       {

       }
       else if(comand=="5")
       {

       }
       else if(comand=="6")
       {

       }
       else if(comand=="7")
       {

       }
       else if(comand=="8")
       {

       }
       else if(comand=="9")
       {

       }


    }
    else
    {

    }

}
void CalculatorLogic::onBtnClicked()
{
   QPushButton *btn=static_cast<QPushButton*>(sender());

doCommand(btn -> text());

}
