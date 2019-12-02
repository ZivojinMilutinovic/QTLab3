#ifndef CALCULATORLOGIC_H
#define CALCULATORLOGIC_H

#include <QObject>

class CalculatorLogic : public QObject
{
    Q_OBJECT
public:
    explicit CalculatorLogic(QObject *parent = nullptr);
    void doCommand(QString command);
signals:
  void  resultChanged(QString);
  void resultHistoryChanged(QString);

public slots:



};

#endif // CALCULATORLOGIC_H
