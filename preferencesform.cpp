#include "preferencesform.h"
#include "ui_preferencesform.h"
#include "musicboard.h"
#include "ui_musicboard.h"
#include "settings.h"
#include "ui_settings.h"
#include "audiorecorder.h"
#include "ui_audiorecorder.h"

PreferencesForm::PreferencesForm(QWidget *parent) :
    QDialog(parent),
    ui4(new Ui::PreferencesForm)
{
    ui4->setupUi(this);
    ui4->CustomColor_4->hide();
    ui4->CustomColor_5->hide();
    ui4->CustomColor_6->hide();
    ui4->HiddenReInitButton->hide();
    extern QFont Font;
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CButtons;
    extern QString CFile;
    extern QString CKeyboard;
    extern int isCoverShow;
    extern int isImages;
    extern int isNumLockShow;
    extern int isSureShow;
    extern int isCPUEnabled;
    extern int isKeyboardAsLaunchpadShow;
    extern int Notes;
    extern int ReVal; // ColorPicker
    extern int GrVal; // ColorPicker
    extern int BlVal; // ColorPicker
    extern QFont Font;
    extern QFont Font;
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    /// a.ui->Name->setFont(Font);
    ui4->FontLabel_2->setFont(Font);
    ui4->ColorsLabel_4->setFont(Font);
    ui4->ColorsLabel_5->setFont(Font);
    ui4->ColorsLabel_6->setFont(Font);
    ui4->ColorsLabel_7->setFont(Font);
    ui4->ColorsLabel_8->setFont(Font);
    ui4->ColorsLabel_9->setFont(Font);
    ui4->ColorPLabelText->setFont(Font);
    ui4->MainColorLabel->setFont(Font);
    ui4->SureShow->setFont(Font);
    ui4->ImageShow->setFont(Font);
    ////ui4->CtrlR->setFont(Font);
    ui4->NumLockShow->setFont(Font);
    ui4->MusicBoardCoverShow->setFont(Font);
    ui4->SelectImage_2->setFont(Font);
    ui4->CPUEnable->setFont(Font);
    ui4->KeyboardAsLaunchpadShow->setFont(Font);
    ui4->Notes1->setFont(Font);
    ui4->Notes2->setFont(Font);


    ui4->ShowColorLabel_6->setStyleSheet("background-color: "+CFont+";");
    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");

ui4->RSlider_2->setSliderPosition(ReVal);
ui4->RSlider_2->setValue(ReVal);

ui4->GSlider_2->setSliderPosition(GrVal);
ui4->GSlider_2->setValue(GrVal);

ui4->BSlider_2->setSliderPosition(BlVal);
ui4->BSlider_2->setValue(BlVal);

    ui4->PHelp->hide();

    if (Notes==0){
        ui4->Notes1->setChecked(true);
        ui4->Notes2->setChecked(false);
    } else {
        ui4->Notes1->setChecked(false);
        ui4->Notes2->setChecked(true);
  }

    ///extern QString ShowColor_4;
    ///extern QString ShowColor_5;
    ///extern QString ShowColor_6;

    extern int On;
    extern int On1;
    extern int Bg;

///    if (On==1){

    ui4->PHelp->setStyleSheet("background-color: "+C1+";");

    ui4->CustomColor_4->setText(C1);
    ui4->CustomColor_5->setText(C12);
    ui4->CustomColor_6->setText(CFont);
    ui4->CustomColor_7->setText(CKeyboard);
    ui4->CustomColor_8->setText(CButtons);
    ui4->CustomColor_9->setText(CFile);
    ui4->ShowColorLabel_4->setStyleSheet("background-color: "+C1+";");
    ui4->ShowColorLabel_5->setStyleSheet("background-color: "+C12+";");
    ui4->ShowColorLabel_6->setStyleSheet("background-color: "+CFont+";"); 

    if (Bg==2){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.95008, y1:0.051, x2:1, y2:0, stop:0.20398 rgba(100, 119, 149, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==3){ui4->Picture->setStyleSheet("background-color: qradialgradient(spread:repeat, cx:1, cy:0, radius:1.226, fx:0.141, fy:0.840545, stop:0 rgba(255, 255, 255, 255), stop:0.985075 rgba(135, 48, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==0){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.313, y2:0.630682, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(142, 125, 217, 255));");}
       if (Bg==14){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.313, y2:0.630682, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(142, 125, 217, 255));");}
       if (Bg==1){ui4->Picture->setStyleSheet("background-image: url(:/pictures/Theme24.png); image: url(:/pictures/Theme24.png); background-color: rgba(0, 0, 0, 0)");}
       if (Bg==4){ui4->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.495, cy:0.494, angle:226.6, stop:0 rgba(87, 64, 98, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==5){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(103, 61, 113, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==6){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.516, y1:0.187136, x2:1, y2:0, stop:0.01 rgba(132, 84, 162, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==7){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==8){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:0.896, y1:0.08, x2:1, y2:0, stop:0 rgba(114, 0, 128, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==9){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.0447761 rgba(56, 0, 53, 255), stop:0.467662 rgba(91, 0, 122, 255), stop:0.950249 rgba(255, 180, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==10){ui4->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:224.8, stop:0 rgba(211, 215, 207, 255), stop:0.189055 rgba(105, 0, 219, 255), stop:0.40796 rgba(0, 0, 131, 255), stop:0.606965 rgba(175, 0, 194, 255), stop:0.741294 rgba(97, 146, 189, 255), stop:1 rgba(255, 255, 255, 255))");}
       if (Bg==14){ui4->Picture->setStyleSheet("background-color: rgb(77, 68, 121);");}

    on_ColorsCombo_4_currentIndexChanged(On);
    on_ColorsCombo_5_currentIndexChanged(On1);

    if (CButtons.length()<17){
    ui4->ApplyButton_3->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->PreferencesHelpButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendFileButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendC1Button->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendC2Button->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendTextButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendKeysButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendBtnsButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendMainButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");


    ui4->Theme->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_1->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_2->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_3->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_4->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_5->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_6->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_7->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_8->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_9->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_10->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_11->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_12->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_13->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_14->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_15->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
   }
    else {
    ui4->ApplyButton_3->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
    ui4->PreferencesHelpButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
    ui4->SendFileButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendC1Button->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendC2Button->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendTextButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendKeysButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendMainButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendBtnsButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_1->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_2->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_3->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_4->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_5->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_6->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_7->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_8->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_9->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_10->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_11->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_12->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_13->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_14->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_15->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    }
    extern QString C12;
    extern QString CFont;

    if (isCoverShow==1){
        ui4->MusicBoardCoverShow->setChecked(true);
    }
    else {
        ui4->MusicBoardCoverShow->setChecked(false);
    }

    if (isImages==1){
           ui4->ImageShow->setChecked(true);
       }
       else {
           ui4->ImageShow->setChecked(false);
       }

    if (isNumLockShow==1){
               ui4->NumLockShow->setChecked(true);
           }
           else {
               ui4->NumLockShow->setChecked(false);
           }
    if (isSureShow==1){
                   ui4->SureShow->setChecked(true);
               }
               else {
                   ui4->SureShow->setChecked(false);
               }
    if (isCPUEnabled==1){
                   ui4->CPUEnable->setChecked(true);
               }
               else {
                   ui4->CPUEnable->setChecked(false);
               }
    if (isKeyboardAsLaunchpadShow==1){
                    ui4->KeyboardAsLaunchpadShow->setChecked(true);
                }
                else {
                    ui4->KeyboardAsLaunchpadShow->setChecked(false);
                }
    on_HiddenReInitButton_clicked();
}

int isFont=10;
int Color=104;
extern int ReVal; // ColorPicker
extern int GrVal; // ColorPicker
extern int BlVal; // ColorPicker
int isPHelp=0;
/// Notes:
/// - Variabila Globala egala cu index [index 1 si index2]
/// - La initializare MusicBoard set The dupa variabelele index declarate global. Facut cu Hidden btn
/// -

void PreferencesForm::on_ApplyButton_3_clicked()
{
    if (isFont==1){
        //ui4->P1->show();
    }
    /// MusicBoard a;
    /// a.ui->Name->setFont(f);
    /// Settings c;
    /// c.ui1->Name->setFont(f);
    /// Si aici in PreferencesForm
    /// if (Color!=104){
    /// a.ui->Name->setStyleSheet("Dupa Culoare / int Color");
    /// c.ui1->Name->setStyleSheet("Dupa Culoare / int Color");
    /// }
}

void PreferencesForm::on_CancelButton1_2_clicked()
{
    //ui4->P1->hide();
    isFont=0;
}

void PreferencesForm::on_FontsCombo_2_currentFontChanged(const QFont &f)
{
    /// MusicBoard a;
    extern QFont Font;
    extern QFont Font;
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    /// a.ui->Name->setFont(f);
    ui4->FontLabel_2->setFont(f);
    ui4->ColorsLabel_4->setFont(f);
    ui4->ColorsLabel_5->setFont(f);
    ui4->ColorsLabel_6->setFont(f);
    ui4->MainColorLabel->setFont(f);
    ui4->ColorsLabel_7->setFont(f);
    ui4->ColorsLabel_8->setFont(f);
    ui4->ColorsLabel_9->setFont(f);
    ui4->ColorPLabelText->setFont(f);
    ui4->SureShow->setFont(f);
    ui4->ImageShow->setFont(f);
    ////ui4->CtrlR->setFont(f);
    ui4->NumLockShow->setFont(f);
    ui4->MusicBoardCoverShow->setFont(f);
    ui4->SelectImage_2->setFont(f);
    Font=f;
    ui4->CPUEnable->setFont(Font);
    ui4->KeyboardAsLaunchpadShow->setFont(Font);
    ui4->Notes1->setFont(Font);
    ui4->Notes2->setFont(Font);
    ///CFont=f.toString()
    if (isFont==10){
    isFont=1;
    }
}

void PreferencesForm::on_ColorsCombo_4_currentIndexChanged(int index)
{
    extern QFont Font;
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern int On;
///    extern QString On;
///    On=1;
    if (index==0){
        On=index;
        C1="rgb(110, 110, 110)";
        ui4->CustomColor_4->hide();
        ///ui4->ApplyButton_3->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(110, 110, 110);");
        ///ui4->Picture->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_4->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_5->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_6->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_7->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_8->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->SettingsButton_2->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(110, 110, 110);");
        ui4->ShowColorLabel_4->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(110, 110, 110);");
        ui4->PHelp->setStyleSheet("background-color: "+C1+";");
    }
    if (index==1){
        On=index;
        C1="rgb(255, 159, 159)";
        ui4->CustomColor_4->hide();
        ///ui4->Picture->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_4->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_5->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_6->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_7->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ui4->Picture_8->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
        ///ui4->ApplyButton_3->setStyleSheet("background-color: rgb(255, 159, 159); color: rgb(255, 255, 255);");
        ui4->SettingsButton_2->setStyleSheet("background-color: rgb(255, 159, 159); color: rgb(255, 255, 255);");
        ui4->ShowColorLabel_4->setStyleSheet("background-color: rgb(255, 159, 159); color: rgb(255, 255, 255);");
        ui4->PHelp->setStyleSheet("background-color: "+C1+";");
      }

    if (index==2){
        On=index;
        C1="rgb(239, 41, 41)";
        ui4->CustomColor_4->hide();
        ///ui4->Picture->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->Picture_4->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->Picture_5->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->Picture_6->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->Picture_7->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->Picture_8->setStyleSheet("background-color: rgb(239, 41, 41);");
        ///ui4->ApplyButton_3->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->SettingsButton_2->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->ShowColorLabel_4->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->PHelp->setStyleSheet("background-color: "+C1+";");
         }
    if (index==3){
        On=index;
        C1="rgb(0, 0, 0)";
        ui4->CustomColor_4->hide();
        ///ui4->Picture->setStyleSheet("background-color: rgb(0, 0, 0);");
        ui4->Picture_4->setStyleSheet("background-color: rgb(0, 0, 0);");
        ui4->Picture_5->setStyleSheet("background-color: rgb(0, 0, 0);");
        ui4->Picture_6->setStyleSheet("background-color: rgb(0, 0, 0);");
        ui4->Picture_7->setStyleSheet("background-color: rgb(0, 0, 0);");
        ui4->Picture_8->setStyleSheet("background-color: rgb(0, 0, 0);");
        ////ui4->ApplyButton_3->setStyleSheet("color: rgb(0, 0, 0); background-color: rgb(0, 0, 0);");
        ui4->SettingsButton_2->setStyleSheet("color: rgb(0, 0, 0); background-color: rgb(0, 0, 0);");
        ui4->ShowColorLabel_4->setStyleSheet("color: rgb(0, 0, 0); background-color: rgb(0, 0, 0);");
        ui4->PHelp->setStyleSheet("background-color: "+C1+";");
    }
    if (index==4){
         On=index;
         C1="rgb(101, 101, 101)";
         ui4->CustomColor_4->hide();
         ///ui4->Picture->setStyleSheet("background-color: rgb(101, 101, 101);");
         ui4->Picture_4->setStyleSheet("background-color: rgb(101, 101, 101);");
         ui4->Picture_5->setStyleSheet("background-color: rgb(101, 101, 101);");
         ui4->Picture_6->setStyleSheet("background-color: rgb(101, 101, 101);");
         ui4->Picture_7->setStyleSheet("background-color: rgb(101, 101, 101);");
         ui4->Picture_8->setStyleSheet("background-color: rgb(101, 101, 101);");
         ///ui4->ApplyButton_3->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(101, 101, 101);");
         ui4->SettingsButton_2->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(101, 101, 101);");
         ui4->ShowColorLabel_4->setStyleSheet("background-color: rgb(101, 101, 101);");
         ui4->PHelp->setStyleSheet("background-color: "+C1+";");
    }
    if (index==5){
        On=index;
        C1="qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))";
        ui4->CustomColor_4->hide();
        ///ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->Picture_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->Picture_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->Picture_6->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->Picture_7->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->Picture_8->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ///ui4->ApplyButton_3->setStyleSheet("color: rgb(255, 255, 255); background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->SettingsButton_2->setStyleSheet("color: rgb(255, 255, 255); background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->ShowColorLabel_4->setStyleSheet("color: rgb(255, 255, 255); background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->PHelp->setStyleSheet("background-color: "+C1+";");
    }
   if (index==6){
       On=index;
       C1="qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255))";
       ui4->CustomColor_4->hide();
       ///ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->Picture_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->Picture_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->Picture_6->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->Picture_7->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");\
       ui4->Picture_8->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ///ui4->ApplyButton_3->setStyleSheet("color: rgb(255, 255, 255); background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->SettingsButton_2->setStyleSheet("color: rgb(255, 255, 255); background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->ShowColorLabel_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
       ui4->PHelp->setStyleSheet("background-color: "+C1+";");
   }
   if (index==7){
       On=index;
       C1="qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255))";
       ui4->CustomColor_4->hide();
       ///ui4->Picture->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->Picture_4->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->Picture_5->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->Picture_6->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->Picture_7->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->Picture_8->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ///ui4->ApplyButton_3->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->SettingsButton_2->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->ShowColorLabel_4->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
       ui4->PHelp->setStyleSheet("background-color: "+C1+";");
   }
    if (index==8){
        On=index;
        C1="qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));";
        ui4->CustomColor_4->hide();
        ///ui4->Picture->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->Picture_4->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->Picture_5->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->Picture_6->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->Picture_7->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->Picture_8->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ///ui4->ApplyButton_3->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->SettingsButton_2->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->ShowColorLabel_4->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->PHelp->setStyleSheet("background-color: "+C1+";");
    }
    if (index==9){
        On=index;
        ui4->CustomColor_4->show();
        ui4->ShowColorLabel_4->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        ///setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        ///ui4->Picture->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        ui4->Picture_4->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        ui4->Picture_5->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        ui4->Picture_6->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        ui4->Picture_7->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        ui4->Picture_7->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        ui4->Picture_8->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        ///ui4->ApplyButton_3->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        ui4->SettingsButton_2->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        ui4->ShowColorLabel_4->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
        C1=ui4->CustomColor_4->text();
        ui4->PHelp->setStyleSheet("background-color: "+C1+";");
    }
//    if (index==10){ui4->ShowColorLabel_4->setStyleSheet("");}
//    if (index==11){ui4->ShowColorLabel_4->setStyleSheet("");}
//    if (index==12){ui4->ShowColorLabel_4->setStyleSheet("");}
//    if (index==13){ui4->ShowColorLabel_4->setStyleSheet("");}
//    if (index==14){ui4->ShowColorLabel_4->setStyleSheet("");}
    Color=index;

}
void PreferencesForm::on_CustomColor_4_editingFinished()
{
    extern QFont Font;
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    ///extern QString ShowColor_4;
    ///ShowColor_4=ui4->CustomColor_4->text();
    ui4->CustomColor_4->hide();
    ui4->ShowColorLabel_4->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ///setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ////ui4->Picture->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->Picture_4->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->Picture_5->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->Picture_6->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->Picture_7->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->Picture_8->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ///ui4->ApplyButton_3->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->SettingsButton_2->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    ui4->ShowColorLabel_4->setStyleSheet("background-color: "+ui4->CustomColor_4->text()+";");
    C1=ui4->CustomColor_4->text();
}

void PreferencesForm::on_SettingsButton_2_clicked()
{
    /// Settings
}

void PreferencesForm::on_checkBox_2_stateChanged(int arg1) /// daca era Check
{
    /// Set global parameter 0 or 1
}

void PreferencesForm::on_radioButton_2_clicked(bool checked)
{
   /// Set global parameter 0 or 1
}


void PreferencesForm::on_ColorsCombo_5_currentIndexChanged(int index)
{
    extern QFont Font;
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern int On1;
    if (index==0){
        On1=index;
        ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: rgb(255, 159, 159);");
        //ui4->L2_2->setStyleSheet("background-color: rgb(255, 159, 159);");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: rgb(255, 159, 159);");
        C12="rgb(255, 159, 159)";
        }
    if (index==1){
        On1=index;
        ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: rgb(128, 33, 152);");
        //ui4->L2_2->setStyleSheet("background-color: rgb(128, 33, 152);");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: rgb(128, 33, 152);");
        C12="rgb(128, 33, 152)";
    }
    if (index==2){
        On1=index;
        ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: rgb(239, 41, 41);");
        ///ui4->L2_2->setStyleSheet("background-color: rgb(239, 41, 41);");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: rgb(239, 41, 41);");
        C12="rgb(239, 41, 41)";
   }
    if (index==3){
        On1=index;
        ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: rgb(0, 0, 0);");
        //ui4->L2_2->setStyleSheet("background-color: rgb(0, 0, 0);");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: rgb(0, 0, 0);");
        C12="rgb(0, 0, 0)";
   }
    if (index==4){
        On1=index;
        ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: rgb(101, 101, 101);");
        ///ui4->L2_2->setStyleSheet("background-color: rgb(101, 101, 101);");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: rgb(101, 101, 101);");
        C12="rgb(101, 101, 101)";

   }
    if (index==5){
        On1=index;
        ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ///ui4->L2_2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
        C12="qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));";

   }
    if (index==6){
        On1=index;
        ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
        ///ui4->L2_2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
        C12="qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));";

   }
    if (index==7){
        On1=index;
        ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
        ///ui4->L2_2->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
        C12="qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));";

   }
    if (index==8){
        On1=index;
        ui4->CustomColor_5->hide();
        ui4->L1->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ///ui4->L2_2->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        ui4->ShowColorLabel_5->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
        C12="qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));";

   }
    if (index==9){
        On1=index;
        ui4->CustomColor_5->show();
        ui4->ShowColorLabel_5->setStyleSheet("background-color: "+ui4->CustomColor_5->text()+";");
        ui4->L1->setStyleSheet("background-color: "+ui4->CustomColor_5->text()+";");
        ///ui4->L2_2->setStyleSheet("background-color: "+ui4->CustomColor_5->text()+";");
        C12=ui4->CustomColor_5->text();
   }
}

void PreferencesForm::on_CustomColor_5_editingFinished()
{
    extern QFont Font;
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    ///extern QString ShowColor_5;
    ///ShowColor_5=ui4->CustomColor_5->text();
    ui4->CustomColor_5->hide();
    ui4->ShowColorLabel_5->setStyleSheet("background-color: "+ui4->CustomColor_5->text()+";");
    ui4->L1->setStyleSheet("background-color: "+ui4->CustomColor_5->text()+";");
    ///ui4->L2_2->setStyleSheet("background-color: "+ui4->CustomColor_5->text()+";");
    C12=ui4->CustomColor_5->text();
}

void PreferencesForm::on_ColorsCombo_6_currentIndexChanged(int index)
{
    extern QFont Font;
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    if (index==0){
                ui4->CustomColor_6->hide();
                ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");
                CFont="rgb(255, 255, 255)";
                ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");
                ui4->ShowColorLabel_6->setStyleSheet("background-color: rgb(255, 255, 255);");
                ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");
                ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");
                ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");
                ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");
                ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");
                ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");
                ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");
                ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");
                ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");
                ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(255, 255, 255);");

    }
                if (index==1){
                    ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    CFont="rgb(251, 170, 184)";
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: rgb(251, 170, 184);");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(251, 170, 184);");

                }
                if (index==2){
                    ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    CFont="rgb(128, 33, 152)";
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: rgb(128, 33, 152);");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(128, 33, 152);");

                }
                if (index==3){ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    CFont="rgb(239, 41, 41)";
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: rgb(239, 41, 41);");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(239, 41, 41);");


                }
                if (index==4){ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    CFont="rgb(101, 101, 101)";
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: rgb(101, 101, 101);");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: rgb(101, 101, 101);");

                   }
                if (index==5){ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    CFont="qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255))";
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.647, y1:0.642, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");

                   }
                if (index==6){ui4->CustomColor_6->hide();
                    CFont="qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255))";
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qlineargradient(spread:pad, x1:0.383, y1:0.784091, x2:1, y2:0, stop:0 rgba(101, 75, 149, 255), stop:1 rgba(255, 255, 255, 255));");

                   }
                if (index==7){ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    CFont="qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255))";
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255));");

                }
                if (index==8){ui4->CustomColor_6->hide();
                    ///ui40->L1->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    CFont="qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255))";
                    ///ui40->L2_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.414, fx:0.5, fy:0.5, stop:0 rgba(246, 246, 246, 255), stop:1 rgba(174, 106, 255, 255));");

                   }
                if (index==9){
                    ui4->CustomColor_6->show();
                    ui4->ShowColorLabel_6->setStyleSheet("background-color: "+ui4->CustomColor_6->text()+";");
                    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
                    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
                    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
                    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
                    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
                    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
                    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
                    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
                    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
                    ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
                    CFont=ui4->CustomColor_6->text();

                }
}

void PreferencesForm::on_CustomColor_6_editingFinished()
{
    extern QFont Font;
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    ///extern QString ShowColor_6;
    ///ShowColor_6=ui4->CustomColor_6->text();
    ui4->CustomColor_6->hide();
    CFont=ui4->CustomColor_6->text();
    ui4->ShowColorLabel_6->setStyleSheet("background-color: "+ui4->CustomColor_6->text()+";");
    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");
    ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+ui4->CustomColor_6->text()+";");

}

void PreferencesForm::on_RSlider_2_valueChanged(int value)
{
    ReVal=ui4->RSlider_2->value();
    ui4->RgbString_2->setText("rgb("+QString::number(ReVal)+", "+QString::number(GrVal)+", "+QString::number(BlVal)+")");
    ui4->ColorPLabel_2->setStyleSheet("background-color: "+ui4->RgbString_2->text()+";");
}

void PreferencesForm::on_GSlider_2_valueChanged(int value)
{
    GrVal=ui4->GSlider_2->value();
    ui4->RgbString_2->setText("rgb("+QString::number(ReVal)+", "+QString::number(GrVal)+", "+QString::number(BlVal)+")");
    ui4->ColorPLabel_2->setStyleSheet("background-color: "+ui4->RgbString_2->text()+";");
}

void PreferencesForm::on_BSlider_2_valueChanged(int value)
{
    BlVal=ui4->BSlider_2->value();
    ui4->RgbString_2->setText("rgb("+QString::number(ReVal)+", "+QString::number(GrVal)+", "+QString::number(BlVal)+")");
    ui4->ColorPLabel_2->setStyleSheet("background-color: "+ui4->RgbString_2->text()+";");
}

//void PreferencesForm::on_ColorsCombo_3_activated(const QString &arg1)
//{

//}


PreferencesForm::~PreferencesForm()
{
    delete ui4;
}

void PreferencesForm::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui4->retranslateUi(this);
        break;
    default:
        break;
    }
}

void PreferencesForm::on_Df1Button_clicked()
{
    extern int Bg;
    Bg=0;
    ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.313, y2:0.630682, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(142, 125, 217, 255));");
    ui4->MainColor->setText("Picture");
}

void PreferencesForm::on_Df2Button_clicked()
{
    extern int Bg;
    Bg=1;
    ui4->Picture->setStyleSheet("background-image: url(:/pictures/Theme24.png); image: url(:/pictures/Theme24.png); background-color: rgba(0, 0, 0, 0)");
    ui4->MainColor->setText("Picture");
}

void PreferencesForm::on_Img1_2_clicked()
{
    extern int Bg;
    Bg=2;
    ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.95008, y1:0.051, x2:1, y2:0, stop:0.20398 rgba(100, 119, 149, 255), stop:1 rgba(255, 255, 255, 255));");
    ui4->MainColor->setText("Picture");
}
void PreferencesForm::on_Img2_2_clicked()
{
    extern int Bg;
    Bg=3;
    ui4->Picture->setStyleSheet("background-color: qradialgradient(spread:repeat, cx:1, cy:0, radius:1.226, fx:0.141, fy:0.840545, stop:0 rgba(255, 255, 255, 255), stop:0.985075 rgba(135, 48, 255, 255), stop:1 rgba(255, 255, 255, 255));");
    ui4->MainColor->setText("Picture");
}
void PreferencesForm::on_Img3_2_clicked()
{
    extern int Bg;
    Bg=4;
    ui4->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.495, cy:0.494, angle:226.6, stop:0 rgba(87, 64, 98, 255), stop:1 rgba(255, 255, 255, 255));");
    ui4->MainColor->setText("Picture");
}

void PreferencesForm::on_Img4_2_clicked()
{
    extern int Bg;
    Bg=5;
    ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(103, 61, 113, 255), stop:1 rgba(255, 255, 255, 255));");
    ui4->MainColor->setText("Picture");
}

void PreferencesForm::on_Img5_2_clicked()
{
    extern int Bg;
    Bg=6;
    ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.516, y1:0.187136, x2:1, y2:0, stop:0.01 rgba(132, 84, 162, 255), stop:1 rgba(255, 255, 255, 255));");
    ui4->MainColor->setText("Picture");
}

void PreferencesForm::on_Img6_2_clicked()
{
    extern int Bg;
    Bg=7;
    ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");
    ui4->MainColor->setText("Picture");
}

void PreferencesForm::on_Img7_2_clicked()
{
    extern int Bg;
    Bg=8;
    ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:0.896, y1:0.08, x2:1, y2:0, stop:0 rgba(114, 0, 128, 255), stop:1 rgba(255, 255, 255, 255));");
    ui4->MainColor->setText("Picture");
}

void PreferencesForm::on_Img8_2_clicked()
{
    extern int Bg;
    Bg=9;
    ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.0447761 rgba(56, 0, 53, 255), stop:0.467662 rgba(91, 0, 122, 255), stop:0.950249 rgba(255, 180, 255, 255), stop:1 rgba(255, 255, 255, 255));");
    ui4->MainColor->setText("Picture");
}

void PreferencesForm::on_Img9_2_clicked()
{
    extern int Bg;
    Bg=10;
    ui4->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:224.8, stop:0 rgba(211, 215, 207, 255), stop:0.189055 rgba(105, 0, 219, 255), stop:0.40796 rgba(0, 0, 131, 255), stop:0.606965 rgba(175, 0, 194, 255), stop:0.741294 rgba(97, 146, 189, 255), stop:1 rgba(255, 255, 255, 255))");
    ui4->MainColor->setText("Picture");
}

void PreferencesForm::on_CustomColor_7_editingFinished()
{
    extern QString CKeyboard;
    CKeyboard=ui4->CustomColor_7->text();
}

void PreferencesForm::on_CustomColor_8_editingFinished()
{
    extern QString CButtons;
    CButtons=ui4->CustomColor_8->text();
    if (CButtons.length()<17){
    ui4->ApplyButton_3->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->PreferencesHelpButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendFileButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendC1Button->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendC2Button->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendTextButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendMainButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendKeysButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendBtnsButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_1->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_2->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_3->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_4->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_5->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_6->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_7->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_8->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_9->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_10->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_11->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_12->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_13->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_14->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_15->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
   }
    else {
    ui4->ApplyButton_3->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
    ui4->PreferencesHelpButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
    ui4->SendFileButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendC1Button->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendC2Button->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendTextButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendMainButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendKeysButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendBtnsButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_1->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_2->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_3->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_4->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_5->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_6->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_7->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_8->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_9->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_10->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_11->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_12->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_13->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_14->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_15->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    }
}

void PreferencesForm::on_CustomColor_9_editingFinished()
{
    extern QString CFile;
    CFile=ui4->CustomColor_9->text();
}

void PreferencesForm::on_MusicBoardCoverShow_clicked()
{   extern int isCoverShow;
    if (isCoverShow==1){
        isCoverShow=0;
        ui4->MusicBoardCoverShow->setChecked(false);
    }
    else {
        isCoverShow=1;
        ui4->MusicBoardCoverShow->setChecked(true);
    }
}

//void PreferencesForm::on_ImagesCheck_2_clicked()
//{

//}

void PreferencesForm::on_ImageShow_clicked()
{
    extern int isImages;
           if (isImages==1){
               isImages=0;
               ui4->ImageShow->setChecked(false);
           }
           else {
               isImages=1;
               ui4->ImageShow->setChecked(true);
           }
}



void PreferencesForm::on_NumLockShow_clicked()
{
    extern int isNumLockShow;
       if (isNumLockShow==1){
           isNumLockShow=0;
           ui4->NumLockShow->setChecked(false);
       }
       else {
           isNumLockShow=1;
           ui4->NumLockShow->setChecked(true);
       }
}

void PreferencesForm::on_SureShow_clicked()
{
    extern int isSureShow;
          if (isSureShow==1){
              isSureShow=0;
              ui4->SureShow->setChecked(false);
          }
          else {
              isSureShow=1;
              ui4->SureShow->setChecked(true);
          }
}

void PreferencesForm::on_CPUEnable_clicked()
{
    extern int isCPUEnabled;
    if (isCPUEnabled==0){
        isCPUEnabled=1;
        ui4->CPUEnable->setChecked(true);
    } else {
        isCPUEnabled=0;
        ui4->CPUEnable->setChecked(false);
    }
}

void PreferencesForm::on_KeyboardAsLaunchpadShow_clicked()
{
    extern int isKeyboardAsLaunchpadShow;
    if (isKeyboardAsLaunchpadShow==0){
        isKeyboardAsLaunchpadShow=1;
        ui4->KeyboardAsLaunchpadShow->setChecked(true);
    } else {
        isKeyboardAsLaunchpadShow=0;
        ui4->KeyboardAsLaunchpadShow->setChecked(false);
    }
}

void PreferencesForm::on_Notes1_clicked()
{
    extern int Notes;
    Notes=0;
}

void PreferencesForm::on_Notes2_clicked()
{
    extern int Notes;
    Notes=1;
}

void PreferencesForm::on_PreferencesHelpButton_clicked()
{
    if (isPHelp==0){
        ui4->PHelp->show();
        isPHelp=1;
    } else {
        ui4->PHelp->hide();
        isPHelp=0;
    }

}

void PreferencesForm::on_PHelpClose_clicked()
{
    ui4->PHelp->hide();
    isPHelp=0;
}

void PreferencesForm::on_SendFileButton_clicked()
{
    ui4->CustomColor_9->setText(ui4->RgbString_2->text());
    extern QString CFile;
    CFile=ui4->CustomColor_9->text();
    on_CustomColor_9_editingFinished();
}

void PreferencesForm::on_SendC1Button_clicked()
{
    on_ColorsCombo_4_currentIndexChanged(9);
    ui4->CustomColor_4->setText(ui4->RgbString_2->text());
    extern QString C1;
    C1=ui4->CustomColor_4->text();
    on_CustomColor_4_editingFinished();
}

void PreferencesForm::on_SendC2Button_clicked()
{
    on_ColorsCombo_5_currentIndexChanged(9);
    ui4->CustomColor_5->setText(ui4->RgbString_2->text());
    extern QString C12;
    C12=ui4->CustomColor_5->text();
    on_CustomColor_5_editingFinished();
}

void PreferencesForm::on_SendTextButton_clicked()
{
    on_ColorsCombo_6_currentIndexChanged(9);
    ui4->CustomColor_6->setText(ui4->RgbString_2->text());
    extern QString CFont;
    CFont=ui4->CustomColor_6->text();
    on_CustomColor_6_editingFinished();
}

void PreferencesForm::on_SendKeysButton_clicked()
{
    ui4->CustomColor_7->setText(ui4->RgbString_2->text());
    extern QString CKeyboard;
    CKeyboard=ui4->CustomColor_7->text();
    on_CustomColor_7_editingFinished();

}

void PreferencesForm::on_SendBtnsButton_clicked()
{
    ui4->CustomColor_8->setText(ui4->RgbString_2->text());
    extern QString CButtons;
    CButtons=ui4->CustomColor_8->text();
    on_CustomColor_8_editingFinished();
}

void PreferencesForm::on_PreferencesForm_destroyed()
{
    MusicBoard a;
    a.on_ReInit_clicked();
}

void PreferencesForm::on_PreferencesForm_accepted()
{
    MusicBoard a;
    a.on_ReInit_clicked();
}

void PreferencesForm::on_buttonBox_accepted()
{
    MusicBoard a;
    a.on_ReInit_clicked();
}

void PreferencesForm::on_HiddenReInitButton_clicked()
{
    extern QFont Font;
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CButtons;
    extern QString CFile;
    extern QString CKeyboard;
    extern QString MainColor;
    extern int ReVal; // ColorPicker
    extern int GrVal; // ColorPicker
    extern int BlVal; // ColorPicker
    extern QFont Font;
    extern QFont Font;
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    /// a.ui->Name->setFont(Font);
    ui4->FontLabel_2->setFont(Font);
    ui4->ColorsLabel_4->setFont(Font);
    ui4->ColorsLabel_5->setFont(Font);
    ui4->ColorsLabel_6->setFont(Font);
    ui4->ColorsLabel_7->setFont(Font);
    ui4->ColorsLabel_8->setFont(Font);
    ui4->ColorsLabel_9->setFont(Font);
    ui4->ColorPLabelText->setFont(Font);
    ui4->SureShow->setFont(Font);
    ui4->ImageShow->setFont(Font);
    ////ui4->CtrlR->setFont(Font);
    ui4->NumLockShow->setFont(Font);
    ui4->MusicBoardCoverShow->setFont(Font);
    ui4->SelectImage_2->setFont(Font);
    ui4->CPUEnable->setFont(Font);
    ui4->KeyboardAsLaunchpadShow->setFont(Font);
    ui4->Notes1->setFont(Font);
    ui4->Notes2->setFont(Font);


    ui4->ShowColorLabel_6->setStyleSheet("background-color: "+CFont+";");
    ui4->ColorsLabel_6->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->MainColorLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->SelectImage_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->FontLabel_2->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorsLabel_4->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorsLabel_5->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorsLabel_7->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorsLabel_8->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorsLabel_9->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");
    ui4->ColorPLabelText->setStyleSheet("background-color: rgba(255, 255, 255, 0); color: "+CFont+";");

ui4->RSlider_2->setSliderPosition(ReVal);
ui4->RSlider_2->setValue(ReVal);

ui4->GSlider_2->setSliderPosition(GrVal);
ui4->GSlider_2->setValue(GrVal);

ui4->BSlider_2->setSliderPosition(BlVal);
ui4->BSlider_2->setValue(BlVal);

    ui4->PHelp->hide();

    extern int On;
    extern int On1;
    extern int Bg;



    ui4->PHelp->setStyleSheet("background-color: "+C1+";");

    ui4->CustomColor_4->setText(C1);
    ui4->CustomColor_5->setText(C12);
    ui4->CustomColor_6->setText(CFont);
    ui4->CustomColor_7->setText(CKeyboard);
    ui4->CustomColor_8->setText(CButtons);
    ui4->CustomColor_9->setText(CFile);
    ui4->ShowColorLabel_4->setStyleSheet("background-color: "+C1+";");
    ui4->ShowColorLabel_5->setStyleSheet("background-color: "+C12+";");
    ui4->ShowColorLabel_6->setStyleSheet("background-color: "+CFont+";");


    ui4->Picture_4->setStyleSheet("background-color: " +C1+ ";");
    ui4->Picture_5->setStyleSheet("background-color: " +C1+ ";");
    ui4->Picture_6->setStyleSheet("background-color: " +C1+ ";");
    ui4->Picture_7->setStyleSheet("background-color: " +C1+ ";");
    ui4->Picture_8->setStyleSheet("background-color: " +C1+ ";");



    if (Bg==2){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.95008, y1:0.051, x2:1, y2:0, stop:0.20398 rgba(100, 119, 149, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==3){ui4->Picture->setStyleSheet("background-color: qradialgradient(spread:repeat, cx:1, cy:0, radius:1.226, fx:0.141, fy:0.840545, stop:0 rgba(255, 255, 255, 255), stop:0.985075 rgba(135, 48, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==0){
           ui4->Picture_4->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_5->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_6->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_7->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_8->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.313, y2:0.630682, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(142, 125, 217, 255));");}
       if (Bg==14){
           ui4->Picture_4->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_5->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_6->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_7->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_8->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.313, y2:0.630682, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(142, 125, 217, 255));");}
       if (Bg==1){ui4->Picture->setStyleSheet("background-image: url(:/pictures/Theme24.png); image: url(:/pictures/Theme24.png); background-color: rgba(0, 0, 0, 0)");}
       if (Bg==4){ui4->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.495, cy:0.494, angle:226.6, stop:0 rgba(87, 64, 98, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==5){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(103, 61, 113, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==6){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.516, y1:0.187136, x2:1, y2:0, stop:0.01 rgba(132, 84, 162, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==7){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==8){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:0.896, y1:0.08, x2:1, y2:0, stop:0 rgba(114, 0, 128, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==9){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.0447761 rgba(56, 0, 53, 255), stop:0.467662 rgba(91, 0, 122, 255), stop:0.950249 rgba(255, 180, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==10){ui4->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:224.8, stop:0 rgba(211, 215, 207, 255), stop:0.189055 rgba(105, 0, 219, 255), stop:0.40796 rgba(0, 0, 131, 255), stop:0.606965 rgba(175, 0, 194, 255), stop:0.741294 rgba(97, 146, 189, 255), stop:1 rgba(255, 255, 255, 255))");}
       if (Bg==41){ui4->Picture->setStyleSheet("background-color: "+MainColor+";");
       ui4->Picture_4->setStyleSheet("background-color: "+MainColor+";");
       ui4->Picture_5->setStyleSheet("background-color: "+MainColor+";");
       ui4->Picture_6->setStyleSheet("background-color: "+MainColor+";");
       ui4->Picture_7->setStyleSheet("background-color: "+MainColor+";");
       ui4->Picture_8->setStyleSheet("background-color: "+MainColor+";");
       }

    on_ColorsCombo_4_currentIndexChanged(On);
    on_ColorsCombo_5_currentIndexChanged(On1);

    if (CButtons.length()<17){
    ui4->ApplyButton_3->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->PreferencesHelpButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendFileButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendC1Button->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendC2Button->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendTextButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendMainButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendKeysButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->SendBtnsButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_1->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_2->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_3->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_4->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_5->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_6->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_7->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_8->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_9->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_10->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_11->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_12->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_13->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_14->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
    ui4->Theme_15->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
   }
    else {
    ui4->ApplyButton_3->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
    ui4->PreferencesHelpButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
    ui4->SendFileButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendC1Button->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendC2Button->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendTextButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendMainButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendKeysButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->SendBtnsButton->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_1->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_2->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_3->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_4->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_5->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_6->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_7->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_8->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_9->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_10->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_11->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_12->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_13->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_14->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    ui4->Theme_15->setStyleSheet("background-color: "+CButtons+";color: rgb(0, 0, 0);");
    }




    on_ColorsCombo_4_currentIndexChanged(9);
    on_ColorsCombo_5_currentIndexChanged(9);
    on_ColorsCombo_6_currentIndexChanged(9);



    ui4->Picture_4->setStyleSheet("background-color: " +C1+ ";");
    ui4->Picture_5->setStyleSheet("background-color: " +C1+ ";");
    ui4->Picture_6->setStyleSheet("background-color: " +C1+ ";");
    ui4->Picture_7->setStyleSheet("background-color: " +C1+ ";");
    ui4->Picture_8->setStyleSheet("background-color: " +C1+ ";");



    if (Bg==2){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.95008, y1:0.051, x2:1, y2:0, stop:0.20398 rgba(100, 119, 149, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==3){ui4->Picture->setStyleSheet("background-color: qradialgradient(spread:repeat, cx:1, cy:0, radius:1.226, fx:0.141, fy:0.840545, stop:0 rgba(255, 255, 255, 255), stop:0.985075 rgba(135, 48, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==0){
           ui4->Picture_4->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_5->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_6->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_7->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_8->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.313, y2:0.630682, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(142, 125, 217, 255));");}
       if (Bg==14){
           ui4->Picture_4->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_5->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_6->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_7->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture_8->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
           ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.313, y2:0.630682, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(142, 125, 217, 255));");}
       if (Bg==1){ui4->Picture->setStyleSheet("background-image: url(:/pictures/Theme24.png); image: url(:/pictures/Theme24.png); background-color: rgba(0, 0, 0, 0)");}
       if (Bg==4){ui4->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.495, cy:0.494, angle:226.6, stop:0 rgba(87, 64, 98, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==5){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(103, 61, 113, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==6){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.516, y1:0.187136, x2:1, y2:0, stop:0.01 rgba(132, 84, 162, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==7){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==8){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:0.896, y1:0.08, x2:1, y2:0, stop:0 rgba(114, 0, 128, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==9){ui4->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.0447761 rgba(56, 0, 53, 255), stop:0.467662 rgba(91, 0, 122, 255), stop:0.950249 rgba(255, 180, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
       if (Bg==10){ui4->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:224.8, stop:0 rgba(211, 215, 207, 255), stop:0.189055 rgba(105, 0, 219, 255), stop:0.40796 rgba(0, 0, 131, 255), stop:0.606965 rgba(175, 0, 194, 255), stop:0.741294 rgba(97, 146, 189, 255), stop:1 rgba(255, 255, 255, 255))");}



}

void PreferencesForm::on_Theme_1_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(110, 110, 110)";
    C12="rgb(255, 159, 159)";
    CFont="rgb(255, 255, 255)";
    CKeyboard="rgb(81, 38, 255)";
    CButtons="rgb(83, 68, 150)";
    CFile="rgb(152, 130, 251)";
    Bg=0;
   ///

    on_HiddenReInitButton_clicked();
    ui4->Picture_4->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
    ui4->Picture_5->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
    ui4->Picture_6->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
    ui4->Picture_7->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
    ui4->Picture_8->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");
}

void PreferencesForm::on_Theme_2_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(110, 110, 110)";
    C12="rgb(110, 110, 110)";
    CFont="rgb(255, 255, 255)";
    CKeyboard="rgb(239, 0, 143)";
    CButtons="rgb(239, 0, 143)";
    CFile="rgb(249, 149, 199)";
    Bg=1;
   ///

    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_3_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(0, 100, 255)";
    C12="rgb(0, 169, 255)";
    CFont="rgb(0, 0, 0)";
    CKeyboard="rgb(0, 178, 255)";
    CButtons="rgb(169, 0, 178)";
    CFile="rgb(0, 175, 255)";
    Bg=6;


    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_4_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255))";
    C12="rgb(255, 159, 159)";
    CFont="rgb(255, 255, 255)";
    CKeyboard="rgb(255, 0, 255)";
    CButtons="rgb(0, 0, 0)";
    CFile="rgb(137, 0, 255)";////// CFile="rgb(106, 106, 255)";
    Bg=10;

    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_5_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(0, 0, 0)";
    C12="rgb(0, 0, 0)";
    CFont="rgb(255, 255, 255)";
    CKeyboard="rgb(0, 0, 0)";
    CButtons="rgb(0, 0, 0)";
    CFile="rgb(0, 0, 0)";
    Bg=7;


    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_6_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(124, 0, 255)";
    C12="rgb(124, 112, 189)";
    CFont="rgb(255, 255, 255)";
    CKeyboard="rgb(72, 171, 255)";
    CButtons="rgb(72, 171, 255)";
    CFile="rgb(72, 171, 255)";
    Bg=10;


    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_7_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(0, 0, 0)";
    C12="rgb(0, 0, 0)";
    CFont="rgb(255, 255, 255)";
    CKeyboard="rgb(255, 0, 255)";
    CButtons="rgb(107, 0, 255)";
    CFile="rgb(255, 0, 255)";
    Bg=9;


    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_8_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(0, 40, 237)";
    C12="rgb(128, 255, 255)";
    CFont="rgb(0, 0, 0);";
    CKeyboard="rgb(128, 255, 255)";
    CButtons="rgb(128, 255, 255)";
    CFile="rgb(128, 255, 255)";
    Bg=10;


    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_9_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(57, 128, 255)";
    C12="rgb(57, 128, 255)";
    CFont="rgb(255, 255, 255)";
    CKeyboard="rgb(57, 128, 255)";
    CButtons="rgb(57, 128, 255)";
    CFile="rgb(57, 128, 255)";
    Bg=4;


    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_10_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(83, 66, 183)";
    C12="rgb(83, 66, 183)";
    CFont="rgb(255, 255, 255)";
    CKeyboard="rgb(83, 66, 183)";
    CButtons="rgb(83, 66, 183)";
    CFile="rgb(83, 66, 183)";
    Bg=0;


    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_11_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255))";
    C12="qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255))";
    CFont="rgb(255, 255, 255)";
    CKeyboard="qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255))";
    CButtons="qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255))";
    CFile="qconicalgradient(cx:1, cy:0, angle:225.6, stop:0.502488 rgba(143, 118, 183, 255), stop:1 rgba(186, 186, 186, 255))";
    Bg=4;


    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_12_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(124, 124, 124)";
    C12="rgb(124, 124, 124)";
    CFont="rgb(255, 255, 255)";
    CKeyboard="rgb(124, 124, 124)";
    CButtons="rgb(124, 124, 124)";
    CFile="rgb(124, 124, 124)";
    Bg=7;

    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_13_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(197, 192, 255)";
    C12="rgb(197, 192, 255)";
    CFont="rgb(255, 255, 255)";
    CKeyboard="rgb(197, 192, 255)";
    CButtons="rgb(197, 192, 255)";
    CFile="rgb(197, 192, 255)";
    Bg=3;


    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_14_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(255, 0, 255)";
    C12="rgb(255, 0, 255)";
    CFont="rgb(255, 255, 255)";
    CKeyboard="rgb(255, 0, 255)";
    CButtons="rgb(255, 0, 255)";
    CFile="rgb(255, 0, 255)";
    Bg=10;


    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_Theme_15_clicked()
{
    extern QString C1;
    extern QString C12;
    extern QString CFont;
    extern QString CKeyboard;
    extern QString CButtons;
    extern QString isKeyboarsAsLaunchpadShow;
    extern QFont Font;
    extern QString CFile;
    extern int Bg;
    extern int On;

    C1="rgb(69, 75, 255)";
    C12="rgb(69, 75, 255)";
    CFont="rgb(0, 0, 0)";
    CKeyboard="rgb(69, 75, 255)";
    CButtons="rgb(69, 75, 255)";
    CFile="rgb(69, 75, 255)";
    Bg=6;


    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_ApplyCustomTheme_clicked()
{
    extern QString C1_Custom;
    extern QString C12_Custom;

    extern QString CFont_Custom;
    extern QString CKeyboard_Custom;
    extern QString CFile_Custom;
    extern QString CButtons_Custom;
    extern int Bg_Custom;

    extern QString C1;
    extern QString C12;

    extern QString CFont;
    extern QString CKeyboard;
    extern QString CFile;
    extern QString CButtons;
    extern int Bg;

     C1_Custom=C1;
     C12_Custom=C12;
     Bg_Custom=Bg;

     CFont_Custom=CFont;
     CKeyboard_Custom=CKeyboard;
     CFile_Custom=CFile;
     CButtons_Custom=CButtons;
}

void PreferencesForm::on_Theme_clicked()
{
    extern QString C1_Custom;
    extern QString C12_Custom;

    extern QString CFont_Custom;
    extern QString CKeyboard_Custom;
    extern QString CFile_Custom;
    extern QString CButtons_Custom;
    extern int Bg_Custom;

    extern QString C1;
    extern QString C12;

    extern QString CFont;
    extern QString CKeyboard;
    extern QString CFile;
    extern QString CButtons;
    extern int Bg;

     C1=C1_Custom;
     C12=C12_Custom;


     Bg=Bg_Custom;
     CFont=CFont_Custom;
     CKeyboard=CKeyboard_Custom;
     CFile=CFile_Custom;
     CButtons=CButtons_Custom;

     on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_MainColor_editingFinished()
{
    extern QString MainColor;
    extern int Bg;
    Bg=41;
    MainColor=ui4->MainColor->text();
    on_HiddenReInitButton_clicked();
}

void PreferencesForm::on_SendMainButton_clicked()
{

    ui4->MainColor->setText(ui4->RgbString_2->text());
    extern QString MainColor;
    MainColor=ui4->MainColor->text();
    on_MainColor_editingFinished();
}
