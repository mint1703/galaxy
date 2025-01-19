#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPalette>
#include <QGraphicsScene>
#include <QGraphicsView>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QPalette *backgroundPalette;
    QGraphicsScene *scene;
    QGraphicsView  *view;
};
#endif // WIDGET_H
