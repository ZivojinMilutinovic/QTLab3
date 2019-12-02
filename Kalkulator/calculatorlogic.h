#ifndef CALCULATORLOGIC_H
#define CALCULATORLOGIC_H

#include <QObject>
#include <QPushButton>
#include <QDebug>
#include <QMainWindow>
class CalculatorLogic : public QObject
{
    Q_OBJECT
public:
    explicit CalculatorLogic(QObject *parent = nullptr);
    void doCommand(QString comand);
signals:
    void resultChanged(QString);
    void resultHistoryChanged(QString);

public slots:
void onBtnClicked();
void onResultChanged(QString string);
void onResultHistoryChanged(QString string);


private:
    double trenutnoStanjeRezultata;
    QString poslednjaCifra;
};

#endif // CALCULATORLOGIC_H
