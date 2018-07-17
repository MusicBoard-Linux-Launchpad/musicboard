#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <QtGui>
#include <QDialog>
#include "global.h"

namespace Ui {
class Preferences;
}

class Preferences : public QDialog
{
    Q_OBJECT

public:
    explicit Preferences(QWidget *parent = 0);
    ~Preferences();


private slots:

    void on_ApplyButton_clicked();

    void on_CancelButton1_clicked();

    void on_FontsCombo_currentFontChanged(const QFont &f);

    void on_ColorsCombo_currentIndexChanged(int index);

    void on_CustomColor_editingFinished();

    void on_SettingsButton_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_radioButton_clicked(bool checked);

    //void on_openGLWidget_destroyed();

    //void on_ColorsCombo_2_activated(const QString &arg1);

    void on_ColorsCombo_2_currentIndexChanged(int index);

    void on_CustomColor_2_editingFinished();

    //void on_CustomColor_2_selectionChanged();

    void on_ColorsCombo_3_currentIndexChanged(int index);

    void on_CustomColor_3_editingFinished();

    void on_RSlider_valueChanged(int value);

    void on_GSlider_valueChanged(int value);

    void on_BSlider_valueChanged(int value);

    void on_ColorsCombo_3_activated(const QString &arg1);


protected:
    void changeEvent(QEvent *e);

private:
    Ui::Preferences *ui4;
};

#endif // PREFERENCES_H
