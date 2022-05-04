#include <QApplication>
#include <QPushButton>
#include "ColoredCircle.h"
#include <QSlider>
#include <QLayout>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  QWidget window(nullptr);
  QSlider slider(Qt::Orientation::Horizontal, &window);
  ColoredCircle circle(&window);
  QVBoxLayout layout(&window);

  slider.setMinimum(0);
  slider.setMaximum(100);
  layout.addWidget(&circle, 1, Qt::AlignCenter);
  layout.addWidget(&slider);
  circle.setFixedSize(200, 200);
  window.resize(500, 500);

  QObject::connect(&slider, &QSlider::valueChanged, [&slider, &circle](int newValue){
    if (newValue >= 0 && newValue <= 33)
      circle.setGreen();
    else if (newValue >= 34 && newValue <= 66)
      circle.setYellow();
    else
      circle.setRed();
  });
  slider.valueChanged(slider.value());
  window.show();
  return QApplication::exec();
}
