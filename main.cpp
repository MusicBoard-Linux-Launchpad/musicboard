#include "musicboard.h"
#include <QApplication>
int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MusicBoard w;
  w.show();

  return a.exec();
}
