
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
#include <iostream>
#include <QTimer>
#include <QElapsedTimer>
//#include <AnalogClock>
#include <QAudioRecorder>

namespace Ui {
  class MusicBoard;
}

class MusicBoard : public QMainWindow
{
  Q_OBJECT

public:
  explicit MusicBoard(QWidget *parent = 0);
  ~MusicBoard();

public slots:
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

  void on_HelpClose_clicked();

  void on_HelpButton_clicked();

  void on_FileButton_clicked();

  void on_CloseButton_clicked();

  void on_SureYes_clicked();

  void on_SureCancel_clicked();

  void on_ClearAll_clicked();

  void on_ClearYes_clicked();

  void on_ClearCancel_clicked();

  void on_ClearRhythms_clicked();

  void on_ClearLaunchpad_clicked();

  void on_CleaKeyboard_clicked();

  void on_pushButton_clicked();

  void on_EditButton_clicked();

  void on_HelpClose_2_clicked();

  void on_CloseClose_clicked();

  void on_ClearCancel_2_clicked();

  void on_ClearCancel_1_clicked();

  void on_ClearCancel_X_clicked();

  void on_ProjectNotesButton_clicked();

  void on_CloseProjectNotes_clicked();

  void on_HiddenProjectNotesButton_clicked();

  void on_HiddenHelpButton_clicked();

  void on_HiddenAboutButton_clicked();

  void on_MBoardButton_clicked();

  void on_HiddenMButtonushButton_clicked();

  void on_CloseMBoard_clicked();

  void on_ClearButton_clicked();

  void on_LicenceButton_clicked();

  void on_CloseLicence_clicked();

  void on_ThemeButton_clicked();

  void on_Theme1Button_clicked();

  void on_Theme2Button_clicked();

  void on_Theme3Button_clicked();

  void on_NewSessionButton_clicked();

  void on_HIddenHideAllButton_clicked();

  void on_HiddenHideAllButton_clicked();

  void on_SettingsButton_clicked();

  void on_ShowNOtesNutton_clicked();

  void on_ShowNotesButton_clicked();

  void on_ThemesButton_clicked();

  void on_ShowNotes1Button_clicked();

  void on_ShowNotes2Button_clicked();

  void on_HideNotes_clicked();

  void on_HideNotesButton_clicked();

  void on_HiddenShowNotes1_clicked();

  void on_HiddenShowNotes2_clicked();

  void on_HiddenHideNotes_clicked();

  void on_CloseRhythm2_clicked();

  void on_R_11_clicked();

  void on_R_12_clicked();

  void on_R_13_clicked();

  void on_R_14_clicked();

  void on_R_21_clicked();

  void on_R_22_clicked();

  void on_R_23_clicked();

  void on_R_24_clicked();

  void on_R_31_clicked();

  void on_R_32_clicked();

  void on_R_33_clicked();

  void on_R_34_clicked();

  void on_StartRhythm_clicked();

  void on_HiddenSilanceButton_clicked();

  void on_SureYes_released();

  void on_ReInit_clicked();

  void on_HiddenSettingsButton_clicked();

  void on_HiddenCloseButtonDel_clicked();

  void on_MuteButton_clicked();

  void on_Set1_pressed();

  void on_Set1_released();

  void on_Set1_toggled(bool checked);

  void on_Set2_pressed();

  void on_Set2_released();

  void on_Set3_pressed();

  void on_Set3_released();

  void on_Set4_pressed();

  void on_Set4_released();

  void on_K1_released();

  void on_K1_pressed();

  void on_K2_pressed();

  void on_K2_released();

  void on_K3_released();

  void on_K3_pressed();

  void on_K4_pressed();

  void on_K4_released();

  void on_P7_pressed();

  void on_P7_released();

  void on_P8_pressed();

  void on_P8_released();

  void on_P1_released();

  void on_P10_pressed();

  void on_P10_released();

  void on_P11_pressed();

  void on_P11_released();

  void on_P12_pressed();

  void on_P12_released();

  void on_P2_pressed();

  void on_P2_released();

  void on_P3_pressed();

  void on_P3_released();

  void on_P4_pressed();

  void on_P4_released();

  void on_P5_pressed();

  void on_P5_released();

  void on_P6_released();

  void on_P6_pressed();

  void on_P9_pressed();

  void on_P9_released();

  void on_P13_released();

  void on_P13_pressed();

  void on_P17_pressed();

  void on_P17_released();

  void on_P16_released();

  void on_P16_pressed();

  void on_P14_pressed();

  void on_P14_released();

  void on_P15_released();

  void on_P15_pressed();

  void TimeShow();

public:
  Ui::MusicBoard *ui;
  QFileSystemModel *dirmodel;
  QFileSystemModel *filemodel;
};

#endif // MUSICBOARD_H

