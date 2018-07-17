#ifndef SETTINGS_H
#define SETTINGS_H

#include <QtGui>
#include <QDialog>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();

protected:
    void changeEvent(QEvent *e);

public slots:

    void on_SettingsApplyTextButton_clicked();

public slots:
    void on_HiddenCloseButton_clicked();

    void on_Buttons_accepted();

    void on_SettingsApplyMixerButton_clicked();

    void on_SettingsMuteButton_clicked();

    void on_MasterSlider_valueChanged(int value);

    void on_P_1_sliderPressed();

    void on_P_2_sliderPressed();

    void on_P_3_sliderPressed();

    void on_P_4_sliderPressed();

    void on_P_5_sliderPressed();

    void on_P_6_sliderPressed();


    void on_P_7_sliderPressed();

    void on_P_8_sliderPressed();

    void on_P_9_sliderPressed();

    void on_P_10_sliderPressed();

    void on_P_11_sliderPressed();

    void on_P_12_sliderPressed();

    void on_P_13_sliderPressed();

    void on_P_14_sliderPressed();

    void on_P_15_sliderPressed();

    void on_P_16_sliderPressed();

    void on_R_1_sliderPressed();

    void on_R_2_sliderPressed();

    void on_R_3_sliderPressed();

    void on_R_4_sliderPressed();

    void on_R_5_sliderPressed();

    void on_R_6_sliderPressed();

    void on_R_7_sliderPressed();

    void on_R_8_sliderPressed();

    //void on_KeyboardSlider_sliderPressd(int action);

    void on_KeyboardSlider_sliderPressed();

    void on_MasterSlider_sliderPressed();

    void on_SettingsHelpButton_clicked();

    void on_SHelpClose_clicked();

public:
    Ui::Settings *ui1;
public slots:
    void on_SMasterLeft_clicked();
    void on_SMasterRight_clicked();
    void on_HiddenNumlockButton_clicked();
    void on_SettingsClearLabels_clicked();
};

#endif // SETTINGS_H
