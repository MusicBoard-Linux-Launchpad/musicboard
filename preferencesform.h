#ifndef PREFERENCESFORM_H
#define PREFERENCESFORM_H

#include <QtGui>
#include <QDialog>
#include "global.h"


namespace Ui {
class PreferencesForm;
}

class PreferencesForm : public QDialog
{
    Q_OBJECT

public:
    explicit PreferencesForm(QWidget *parent = 0);
    ~PreferencesForm();

private slots:

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

protected:
    void changeEvent(QEvent *e);

private:
    Ui::PreferencesForm *ui4;
};

#endif // PREFERENCESFORM_H
