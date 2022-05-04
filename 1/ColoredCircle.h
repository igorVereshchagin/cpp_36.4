//
// Created by Igor on 04.05.2022.
//

#ifndef INC_1_COLOREDCIRCLE_H
#define INC_1_COLOREDCIRCLE_H

#include <QWidget>
#include <QPixmap>
#include <QPaintEvent>
#include <QSize>

class ColoredCircle : public QWidget
{
  Q_OBJECT
public:
  ColoredCircle() = default;
  ColoredCircle(QWidget* parent);
  void paintEvent(QPaintEvent* e) override;
  void setRed();
  void setGreen();
  void setYellow();
  QSize minimumSizeHint() const override {
    return QSize(100, 100);
  }
private:
  QPixmap currentPix;
  QPixmap redPix;
  QPixmap greenPix;
  QPixmap yellowPix;
};


#endif //INC_1_COLOREDCIRCLE_H
