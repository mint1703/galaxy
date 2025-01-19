#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this  -> setFixedSize(910,550);
    this  -> setWindowTitle("Galaxy");
    this  -> setCursor(Qt::BlankCursor);

    backgroundPalette = new QPalette();
    backgroundPalette->setColor(this->backgroundRole(), Qt::black);
    this->setPalette(*backgroundPalette);
    this->setAutoFillBackground(true);

    scene =  new QGraphicsScene(0, 0, 900, 500, this);
    scene -> setBackgroundBrush(QBrush(Qt::black));
    scene -> addRect(scene->sceneRect());

    view  =  new QGraphicsView(this);
    view  -> resize(910,550);
    view  -> setScene(scene);
    view->hide();
    view->setFocus();
}

Widget::~Widget() {}
