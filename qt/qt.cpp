#include <QApplication>
#include "window.h"

MyWindow::MyWindow(QWidget *parent) : QWidget(parent)
{
  setFixedSize(400, 300);

  m_button = new QPushButton ("Press me", this);
  m_button->setGeometry(10, 10, 80, 30);
}

int
main (int argc, char *argv[])
{
  QApplication a(argc, argv);
  MyWindow w;

  w.show();

  return a.exec();
}
