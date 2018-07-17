#include "files.h"
#include "ui_files.h"

MusicBoard::Files(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::Files)
{
  ui->setupUi(this);
}

Files::~Files()
{
  delete ui;
}

