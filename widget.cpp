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
}

Widget::~Widget() {}
