#ifndef PREFERENCESFORM_H
#define PREFERENCESFORM_H

#include <QtGui>
#include <QDialog>


namespace Ui {
class PreferencesForm;
}

class PreferencesForm : public QDialog
{
    Q_OBJECT

public:
    explicit PreferencesForm(QWidget *parent = 0);
    ~PreferencesForm();

public slots:

    void on_ApplyButton_3_clicked();

    void on_CancelButton1_2_clicked();

    void on_FontsCombo_2_currentFontChanged(const QFont &f);

    void on_ColorsCombo_4_currentIndexChanged(int index);

    void on_CustomColor_4_editingFinished();

    void on_SettingsButton_2_clicked();

    void on_checkBox_2_stateChanged(int arg1);

    void on_radioButton_2_clicked(bool checked);

    //void on_openGLWidget_destroyed();

    //void on_ColorsCombo_2_activated(const QString &arg1);

    void on_ColorsCombo_5_currentIndexChanged(int index);

    void on_CustomColor_5_editingFinished();

    //void on_CustomColor_2_selectionChanged();

    ////void on_ColorsCombo_4_currentIndexChanged(int index);

    void on_CustomColor_6_editingFinished();

    void on_RSlider_2_valueChanged(int value);

    void on_GSlider_2_valueChanged(int value);

    void on_BSlider_2_valueChanged(int value);

    //void on_ColorsCombo_5_activated(const QString &arg1);


    void on_ColorsCombo_6_currentIndexChanged(int index);

    void on_Df1Button_clicked();

    void on_Img1_2_clicked();

    void on_Df2Button_clicked();

    void on_Img2_2_clicked();

    void on_Img3_2_clicked();

    void on_Img4_2_clicked();

    void on_Img5_2_clicked();

    void on_Img6_2_clicked();

    void on_Img7_2_clicked();

    void on_Img8_2_clicked();

    void on_Img9_2_clicked();

    void on_CustomColor_7_editingFinished();

    void on_CustomColor_8_editingFinished();

    void on_CustomColor_9_editingFinished();

    void on_MusicBoardCoverShow_clicked();

    void on_ImageShow_clicked();

    void on_NumLockShow_clicked();

    void on_SureShow_clicked();

    void on_CPUEnable_clicked();

    void on_KeyboardAsLaunchpadShow_clicked();

    void on_Notes1_clicked();

    void on_Notes2_clicked();

protected:
    void changeEvent(QEvent *e);

public slots:
    void on_PreferencesHelpButton_clicked();

    void on_PHelpClose_clicked();

    void on_SendFileButton_clicked();

    void on_SendC1Button_clicked();

    void on_SendC2Button_clicked();

    void on_SendTextButton_clicked();

    void on_SendKeysButton_clicked();

    void on_SendBtnsButton_clicked();

    void on_PreferencesForm_destroyed();

    void on_PreferencesForm_accepted();

    void on_buttonBox_accepted();

public:
    Ui::PreferencesForm *ui4;
private slots:
    void on_HiddenReInitButton_clicked();
    void on_Theme_1_clicked();
    void on_Theme_2_clicked();
    void on_Theme_3_clicked();
    void on_Theme_4_clicked();
    void on_Theme_5_clicked();
    void on_Theme_6_clicked();
    void on_Theme_7_clicked();
    void on_Theme_8_clicked();
    void on_Theme_9_clicked();
    void on_Theme_10_clicked();
    void on_Theme_11_clicked();
    void on_Theme_12_clicked();
    void on_Theme_13_clicked();
    void on_Theme_14_clicked();
    void on_Theme_15_clicked();
    void on_ApplyCustomTheme_clicked();
    void on_Theme_clicked();
    void on_MainColor_editingFinished();
    void on_SendMainButton_clicked();
};

#endif // PREFERENCESFORM_H
