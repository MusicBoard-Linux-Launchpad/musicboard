#include "preferences.h"
#include "ui_preferences.h"

Preferences::Preferences(QWidget *parent) :
    QDialog(parent),
    ui4(new Ui::Preferences)
{
    ui4->setupUi(this);
    ui4->P1->hide();
    ui4->CustomColor_4->hide();
    ui4->CustomColor_5->hide();
    ui4->CustomColor_6->hide();
}

Preferences::~Preferences()
{
    delete ui4;
}

int isFont=10;
int ColoR1=104;
int R1=0; // ColorPicker
int G1=0; // ColorPicker
int B1=0; // ColorPicker
/// Notes:
/// - Variabila Globala egala cu index [index 1 si index2]
/// - La initializare MusicBoard set The dupa variabelele index declarate global. Facut cu Hidden btn
/// -
void Preferences::on_ApplyButton_clicked()
{
    if (isFont==1){
        ui4->P1->show();
    }
    /// MusicBoard a;
    /// a.ui->Name->setFont(f);
    /// Settings c;
    /// c.ui1->Name->setFont(f);
    /// Si aici in Preferences
    /// if (Color!=104){
    /// a.ui->Name->setStyleSheet("Dupa Culoare / int Color");
    /// c.ui1->Name->setStyleSheet("Dupa Culoare / int Color");
    /// }
}

void Preferences::on_CancelButton1_clicked()
{
    ui4->P1->hide();
    isFont=0;
}

void Preferences::on_FontsCombo_currentFontChanged(const QFont &f)
{
    /// MusicBoard a;
    /// a.ui->Name->setFont(f);
    ui4->FontLabel_2->setFont(f);
    ui4->ColorsLabel_4->setFont(f);
    ui4->ColorsLabel_5->setFont(f);
    ui4->ColorsLabel_6->setFont(f);
    ui4->SureCheck_2->setFont(f);
    ui4->NumlockCheck_2->setFont(f);
    ui4->LockMusicBoardCheck_2->setFont(f);
    ui4->SelectImage_2->setFont(f);
    if (isFont==10){
    isFont=1;
    }
}

void Preferences::on_ColorsCombo_currentIndexChanged(int index)
{
    if (index==0){
        ui4->CustomColor_4->hide();
        ui4->ApplyButton_3->setStyleSheet("background-color: rgb(128, 33, 152); color: rgb(255, 255, 255);");
        ui4->Picture->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_4->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_5->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->SettingsButton_2->setStyleSheet("background-color: rgb(128, 33, 152); color: rgb(255, 255, 255);");
        ui4->ShowColorLabel_4->setStyleSheet("background-color: rgb(128, 33, 152);");} /// pus alta
    if (index==1){
        ui4->CustomColor_4->hide();
        ui4->Picture->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_4->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_5->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->ApplyButton_3->setStyleSheet("background-color: rgb(251, 170, 184);");
        ui4->SettingsButton_2->setStyleSheet("background-color: rgb(251, 170, 184);");
        ui4->ShowColorLabel_4->setStyleSheet("background-color: rgb(251, 170, 184);");}/// pus alta
    if (index==2){
        ui4->CustomColor_4->hide();
        ui4->Picture->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->Picture_4->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->Picture_5->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->ApplyButton_3->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->SettingsButton_2->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->ShowColorLabel_4->setStyleSheet("background-color: rgb(239, 41, 41);");}
    if (index==3){
        ui4->CustomColor_4->hide();
        ui4->Picture->setStyleSheet("background-color: rgb(0, 0, 0);");
        ui4->Picture_4->setStyleSheet("background-color: rgb(0, 0, 0);");
        ui4->Picture_5->setStyleSheet("background-color: rgb(0, 0, 0);");
        ui4->ApplyButton_3->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(0, 0, 0);");
        ui4->SettingsButton_2->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(0, 0, 0);");
        ui4->ShowColorLabel_4->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(0, 0, 0);");}
     if (index==4){
         ui4->CustomColor_4->hide();
         ui4->Picture->setStyleSheet("background-color: rgb(101, 101, 101);");
         ui4->Picture_4->setStyleSheet("background-color: rgb(101, 101, 101);");
         ui4->Picture_5->setStyleSheet("background-color: rgb(101, 101, 101);");
         ui4->ApplyButton_3->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(101, 101, 101);");
         ui4->SettingsButton_2->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(101, 101, 101);");
         ui4->ShowColorLabel_4->setStyleSheet("background-color: rgb(101, 101, 101);");}
    if (index==5){
        ui4->CustomColor_4->hide();
        ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->Picture_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->Picture_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->ApplyButton_3->setStyleSheet("color: rgb(255, 255, 255); background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->SettingsButton_2->setStyleSheet("color: rgb(255, 255, 255); background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->ShowColorLabel_4->setStyleSheet("color: rgb(255, 255, 255); background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");}
   if (index==6){
       ui4->CustomColor_4->hide();
       ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->Picture_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->Picture_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->ApplyButton_3->setStyleSheet("color: rgb(255, 255, 255); background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->SettingsButton_2->setStyleSheet("color: rgb(255, 255, 255); background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->ShowColorLabel_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");}
   if (index==7){
       ui4->CustomColor_4->hide();
       ui4->Picture->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->Picture_4->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->Picture_5->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->ApplyButton_3->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->SettingsButton_2->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->ShowColorLabel_4->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");}
    if (index==8){
        ui4->CustomColor_4->hide();
        ui4->Picture->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->Picture_4->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->Picture_5->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->ApplyButton_3->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->SettingsButton_2->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->ShowColorLabel_4->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");}
    if (index==9){
        ui4->CustomColor_4->show();
    }
//    if (index==10){ui4->ShowColorLabel_4->setStyleSheet("");}
//    if (index==11){ui4->ShowColorLabel_4->setStyleSheet("");}
//    if (index==12){ui4->ShowColorLabel_4->setStyleSheet("");}
//    if (index==13){ui4->ShowColorLabel_4->setStyleSheet("");}
//    if (index==14){ui4->ShowColorLabel_4->setStyleSheet("");}
    ColoR1=index;
}

void Preferences::on_CustomColor_editingFinished()
{
    ui4->CustomColor_4->hide();
    ui4->ShowColorLabel_4->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ///setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->Picture->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->Picture_4->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->Picture_5->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->ApplyButton_3->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->SettingsButton_2->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->ShowColorLabel_4->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");

}

void Preferences::on_SettingsButton_clicked()
{
    /// Settings
}

void Preferences::on_checkBox_stateChanged(int arg1) /// daca era Check
{
    /// Set global parameter 0 or 1
}

void Preferences::on_radioButton_clicked(bool checked)
{
   /// Set global parameter 0 or 1
}


void Preferences::on_ColorsCombo_2_currentIndexChanged(int index)
{
    if (index==0){ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: rgb(251, 170, 184);");
        ui4->L2_2->setStyleSheet("background-color: rgb(251, 170, 184);");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: rgb(251, 170, 184);");

        }
    if (index==1){
        ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: rgb(128, 33, 152);");
        ui4->L2_2->setStyleSheet("background-color: rgb(128, 33, 152);");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: rgb(128, 33, 152);");
    }
    if (index==2){ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->L2_2->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: rgb(239, 41, 41);");

   }
    if (index==3){ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: rgb(0, 0, 0);");
        ui4->L2_2->setStyleSheet("background-color: rgb(0, 0, 0);");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: rgb(0, 0, 0);");

   }
    if (index==4){ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: rgb(101, 101, 101);");
        ui4->L2_2->setStyleSheet("background-color: rgb(101, 101, 101);");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: rgb(101, 101, 101);");

   }
    if (index==5){ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->L2_2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");

   }
    if (index==6){ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->L2_2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");

   }
    if (index==7){ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
        ui4->L2_2->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");

   }
    if (index==8){ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->L2_2->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");

   }
    if (index==9){ui4->CustomColor_5->hide();
        ui4->CustomColor_5->show();
   }
}

void Preferences::on_CustomColor_2_editingFinished()
{
    ui4->CustomColor_5->hide();
    ui4->L1->setStyleSheet("background-color: "+ui4->CustomColor_5->text()+";");
    ui4->L2_2->setStyleSheet("background-color: "+ui4->CustomColor_5->text()+";");
}

void Preferences::on_ColorsCombo_3_currentIndexChanged(int index)
{
    if (index==0){
                ui4->CustomColor_6->hide();
                ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(0, 0, 0);");
                ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(0, 0, 0);");
                ui4->ShowColorLabel_6->setStyleSheet("background-color: rgb(0, 0, 0);");
                ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(0, 0, 0);");
                ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(0, 0, 0);");
                ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(0, 0, 0);");
                ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(0, 0, 0);");
                ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(0, 0, 0);");
               }
                if (index==1){
                    ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: rgb(251, 170, 184);");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");

                }
                if (index==2){
                    ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: rgb(128, 33, 152);");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");

                }
                if (index==3){ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: rgb(239, 41, 41);");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");


                }
                if (index==4){ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: rgb(101, 101, 101);");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");

                   }
                if (index==5){ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");

                   }
                if (index==6){ui4->CustomColor_6->hide();
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");

                   }
                if (index==7){ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");

                   }
                if (index==8){ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");

                   }
                if (index==9){ui4->CustomColor_6->hide();
                    ui4->CustomColor_6->show();
                   }
}

void Preferences::on_CustomColor_3_editingFinished()
{
    ui4->CustomColor_6->hide();
    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->ShowColorLabel_6->setStyleSheet("background-color: "+ui4->CustomColor_6->text()+";");

}

void Preferences::on_RSlider_valueChanged(int value)
{
    R1=ui4->RSlider_2->value();
    ui4->RgbString_2->setText("rgb("+QString::number(R1)+", "+QString::number(G1)+", "+QString::number(B1)+")");
    ui4->ColorPLabel_2->setStyleSheet("background-color: "+ui4->RgbString_2->text()+";");
}

void Preferences::on_GSlider_valueChanged(int value)
{
    G1=ui4->GSlider_2->value();
    ui4->RgbString_2->setText("rgb("+QString::number(R1)+", "+QString::number(G1)+", "+QString::number(B1)+")");
    ui4->ColorPLabel_2->setStyleSheet("background-color: "+ui4->RgbString_2->text()+";");
}

void Preferences::on_BSlider_valueChanged(int value)
{
    B1=ui4->BSlider_2->value();
    ui4->RgbString_2->setText("rgb("+QString::number(R1)+", "+QString::number(G1)+", "+QString::number(B1)+")");
    ui4->ColorPLabel_2->setStyleSheet("background-color: "+ui4->RgbString_2->text()+";");
}

void Preferences::on_ColorsCombo_3_activated(const QString &arg1)
{

}
