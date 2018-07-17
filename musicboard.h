
#ifndef MUSICBOARD_H
#define MUSICBOARD_H

#include <QMainWindow>
#include <QSound>
#include <QMediaPlayer>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>
#include <QDir>
namespace Ui {
  class MusicBoard;
}

class MusicBoard : public QMainWindow
{
  Q_OBJECT

public:
  explicit MusicBoard(QWidget *parent = 0);
  ~MusicBoard();

private slots:
  void on_C_clicked();

  void on_D_clicked();

  void on_C_B_clicked();

  void on_D_B_clicked();

  void on_E_clicked();

  void on_F_clicked();

  void on_F_B_clicked();

  void on_G_clicked();

  void on_G_B_clicked();

  void on_A_clicked();

  void on_A_B_clicked();

  void on_B_clicked();

  void on_C2_clicked();

  void on_C2_B_clicked();

  void on_D2_clicked();

  void on_D2_B_clicked();

  void on_E2_clicked();

  void on_F2_clicked();

  void on_F2_B_clicked();

  void on_G2_clicked();

  void on_P1_clicked();

  void on_P1_pressed();

  void on_P2_clicked();

  void on_P3_clicked();

  void on_P4_clicked();

  void on_P5_clicked();

  void on_P6_clicked();

  void on_P7_clicked();

  void on_File1_clicked(const QModelIndex &index);

  void on_File2_clicked(const QModelIndex &index);

  void on_P8_clicked();

  void on_P9_clicked();

  void on_P10_clicked();

  void on_P11_clicked();

  void on_P12_clicked();

  void on_P13_clicked();

  void on_P14_clicked();

  void on_P15_clicked();

  void on_P16_clicked();

  void on_P17_clicked();

  void on_Close_clicked();

  void on_Close_released();

  void on_R1_clicked();

  void on_R2_clicked();

  void on_R3_clicked();

  void on_R4_clicked();

  void on_R5_clicked();

  void on_R6_clicked();

  void on_R7_clicked();

  void on_R8_clicked();

  void on_K2_clicked();

  void on_K1_clicked();

  void on_K3_clicked();

  void on_K4_clicked();

  void on_AboutClose_clicked();

  void on_AboutButton_clicked();

  void on_Set1_clicked();

  void on_Set2_clicked();

  void on_Set3_clicked();

  void on_Set4_clicked();

  //void on_AboutClose_4_clicked();

  //void on_HelpClose_clicked();

  //void on_Help_destroyed();

private:
  Ui::MusicBoard *ui;
  QFileSystemModel *dirmodel;
  QFileSystemModel *filemodel;
};

#endif // MUSICBOARD_H

