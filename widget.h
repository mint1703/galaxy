#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPalette>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QPalette *backgroundPalette;
};
#endif // WIDGET_H
