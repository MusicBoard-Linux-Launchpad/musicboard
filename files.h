#ifndef FILES_H
#define FILES_H

#include <QMainWindow>
#include <QSound>
#include <QMediaPlayer>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include "files.h"

namespace Ui {
  class Files;
}

class MusicBoard : public QMainWindow
{
  Q_OBJECT

public:
  explicit MusicBoard (QWidget *parent = 0);
  ~Files();

private slots:


private:
  Ui::Files *ui;
};


#endif // FILES_H
