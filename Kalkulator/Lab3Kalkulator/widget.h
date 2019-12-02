#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include "calculatorlogic.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void onBtnClicked();
    void onResultChanged(QString string);
    void onResultHistoryChanged(QString string);


private:
    Ui::Widget *ui;
    CalculatorLogic *calcLogic;
};
#endif // WIDGET_H
