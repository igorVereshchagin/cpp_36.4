//
// Created by Igor on 04.05.2022.
//

#include "ColoredCircle.h"
#include <QPainter>

ColoredCircle::ColoredCircle(QWidget *parent)
{
  setParent(parent);

  redPix = QPixmap("..\\redCircle.png");
  greenPix = QPixmap("..\\greenCircle.png");
  yellowPix = QPixmap("..\\yellowCircle.png");
  currentPix = redPix;
  setGeometry(currentPix.rect());
}

void ColoredCircle::paintEvent(QPaintEvent *e)
{
  QPainter p(this);
  p.drawPixmap(e->rect(), currentPix);
}

void ColoredCircle::setRed()
{
  currentPix = redPix;
  update();
}
void ColoredCircle::setGreen()
{
  currentPix = greenPix;
  update();
}
void ColoredCircle::setYellow()
{
  currentPix = yellowPix;
  update();
}
