#include <QFont>

#include "settings.h"
#include "ui_settings.h"
#include "musicboard.h"
#include "ui_musicboard.h"
#include "preferencesform.h"
#include "ui_preferencesform.h"
#include "global.h"


Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui1(new Ui::Settings)
{
    ui1->setupUi(this);
    ui1->SHelp->hide();
    MusicBoard on_ReInit_clicked();

    extern int NumLock;
    extern int Bg;
    extern QString C1;
    extern QString C12;
    extern QString MainColor;
    extern QString CFont;
    extern QString CButtons;
    extern QFont Font;

    ui1->SHelp->setStyleSheet("background-color: "+C1+";");

    if (Bg==2){ui1->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.95008, y1:0.051, x2:1, y2:0, stop:0.20398 rgba(100, 119, 149, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==3){ui1->Picture->setStyleSheet("background-color: qradialgradient(spread:repeat, cx:1, cy:0, radius:1.226, fx:0.141, fy:0.840545, stop:0 rgba(255, 255, 255, 255), stop:0.985075 rgba(135, 48, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==0){ui1->Picture->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");}
    if (Bg==14){ui1->Picture->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");}
   if (Bg==1){ui1->Picture->setStyleSheet("background-image: url(:/pictures/Theme24.png); image: url(:/pictures/Theme24.png); background-color: rgba(0, 0, 0, 0)");}
    if (Bg==4){ui1->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.495, cy:0.494, angle:226.6, stop:0 rgba(87, 64, 98, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==5){ui1->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(103, 61, 113, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==6){ui1->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.516, y1:0.187136, x2:1, y2:0, stop:0.01 rgba(132, 84, 162, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==7){ui1->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==8){ui1->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:0.896, y1:0.08, x2:1, y2:0, stop:0 rgba(114, 0, 128, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==9){ui1->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.0447761 rgba(56, 0, 53, 255), stop:0.467662 rgba(91, 0, 122, 255), stop:0.950249 rgba(255, 180, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==10){ui1->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:224.8, stop:0 rgba(211, 215, 207, 255), stop:0.189055 rgba(105, 0, 219, 255), stop:0.40796 rgba(0, 0, 131, 255), stop:0.606965 rgba(175, 0, 194, 255), stop:0.741294 rgba(97, 146, 189, 255), stop:1 rgba(255, 255, 255, 255))");}
    ///if (Bg==14){ui1->Picture->setStyleSheet("background-color: rgb(77, 68, 121);");}
    if (Bg==41){ui1->Picture->setStyleSheet("background-color: "+MainColor+";");}

    if (Bg==2){ui1->Picture_2->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.95008, y1:0.051, x2:1, y2:0, stop:0.20398 rgba(100, 119, 149, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==3){ui1->Picture_2->setStyleSheet("background-color: qradialgradient(spread:repeat, cx:1, cy:0, radius:1.226, fx:0.141, fy:0.840545, stop:0 rgba(255, 255, 255, 255), stop:0.985075 rgba(135, 48, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==0){ui1->Picture_2->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");}
    if (Bg==14){ui1->Picture_2->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");}
    if (Bg==1){ui1->Picture_2->setStyleSheet("background-image: url(:/pictures/Theme24.png); image: url(:/pictures/Theme24.png); background-color: rgba(0, 0, 0, 0)");}
    if (Bg==4){ui1->Picture_2->setStyleSheet("background-color: qconicalgradient(cx:0.495, cy:0.494, angle:226.6, stop:0 rgba(87, 64, 98, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==5){ui1->Picture_2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(103, 61, 113, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==6){ui1->Picture_2->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.516, y1:0.187136, x2:1, y2:0, stop:0.01 rgba(132, 84, 162, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==7){ui1->Picture_2->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==8){ui1->Picture_2->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:0.896, y1:0.08, x2:1, y2:0, stop:0 rgba(114, 0, 128, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==9){ui1->Picture_2->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.0447761 rgba(56, 0, 53, 255), stop:0.467662 rgba(91, 0, 122, 255), stop:0.950249 rgba(255, 180, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==10){ui1->Picture_2->setStyleSheet("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:224.8, stop:0 rgba(211, 215, 207, 255), stop:0.189055 rgba(105, 0, 219, 255), stop:0.40796 rgba(0, 0, 131, 255), stop:0.606965 rgba(175, 0, 194, 255), stop:0.741294 rgba(97, 146, 189, 255), stop:1 rgba(255, 255, 255, 255))");}
    ///if (Bg==14){ui1->Picture_2->setStyleSheet("background-color: rgb(77, 68, 121);");}
    if (Bg==41){ui1->Picture_2->setStyleSheet("background-color: "+MainColor+";");}

    if (Bg==2){ui1->Picture_3->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.95008, y1:0.051, x2:1, y2:0, stop:0.20398 rgba(100, 119, 149, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==3){ui1->Picture_3->setStyleSheet("background-color: qradialgradient(spread:repeat, cx:1, cy:0, radius:1.226, fx:0.141, fy:0.840545, stop:0 rgba(255, 255, 255, 255), stop:0.985075 rgba(135, 48, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==0){ui1->Picture_3->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");}
    if (Bg==14){ui1->Picture_3->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");}
    if (Bg==1){ui1->Picture_3->setStyleSheet("background-image: url(:/pictures/Theme24.png); image: url(:/pictures/Theme24.png); background-color: rgba(0, 0, 0, 0)");}
    if (Bg==4){ui1->Picture_3->setStyleSheet("background-color: qconicalgradient(cx:0.495, cy:0.494, angle:226.6, stop:0 rgba(87, 64, 98, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==5){ui1->Picture_3->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(103, 61, 113, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==6){ui1->Picture_3->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.516, y1:0.187136, x2:1, y2:0, stop:0.01 rgba(132, 84, 162, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==7){ui1->Picture_3->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==8){ui1->Picture_3->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:0.896, y1:0.08, x2:1, y2:0, stop:0 rgba(114, 0, 128, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==9){ui1->Picture_3->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.0447761 rgba(56, 0, 53, 255), stop:0.467662 rgba(91, 0, 122, 255), stop:0.950249 rgba(255, 180, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==10){ui1->Picture_3->setStyleSheet("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:224.8, stop:0 rgba(211, 215, 207, 255), stop:0.189055 rgba(105, 0, 219, 255), stop:0.40796 rgba(0, 0, 131, 255), stop:0.606965 rgba(175, 0, 194, 255), stop:0.741294 rgba(97, 146, 189, 255), stop:1 rgba(255, 255, 255, 255))");}
    ///if (Bg==14){ui1->Picture_3->setStyleSheet("background-color: rgb(77, 68, 121);");}
    if (Bg==41){ui1->Picture_3->setStyleSheet("background-color: "+MainColor+";");}

    if (Bg==2){ui1->Picture_4->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.95008, y1:0.051, x2:1, y2:0, stop:0.20398 rgba(100, 119, 149, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==3){ui1->Picture_4->setStyleSheet("background-color: qradialgradient(spread:repeat, cx:1, cy:0, radius:1.226, fx:0.141, fy:0.840545, stop:0 rgba(255, 255, 255, 255), stop:0.985075 rgba(135, 48, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==0){ui1->Picture_4->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");}
    if (Bg==14){ui1->Picture_4->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");}
    if (Bg==1){ui1->Picture_4->setStyleSheet("background-image: url(:/pictures/Theme24.png); image: url(:/pictures/Theme24.png); background-color: rgba(0, 0, 0, 0)");}
    if (Bg==4){ui1->Picture_4->setStyleSheet("background-color: qconicalgradient(cx:0.495, cy:0.494, angle:226.6, stop:0 rgba(87, 64, 98, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==5){ui1->Picture_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(103, 61, 113, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==6){ui1->Picture_4->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.516, y1:0.187136, x2:1, y2:0, stop:0.01 rgba(132, 84, 162, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==7){ui1->Picture_4->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==8){ui1->Picture_4->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:0.896, y1:0.08, x2:1, y2:0, stop:0 rgba(114, 0, 128, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==9){ui1->Picture_4->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.0447761 rgba(56, 0, 53, 255), stop:0.467662 rgba(91, 0, 122, 255), stop:0.950249 rgba(255, 180, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==10){ui1->Picture_4->setStyleSheet("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:224.8, stop:0 rgba(211, 215, 207, 255), stop:0.189055 rgba(105, 0, 219, 255), stop:0.40796 rgba(0, 0, 131, 255), stop:0.606965 rgba(175, 0, 194, 255), stop:0.741294 rgba(97, 146, 189, 255), stop:1 rgba(255, 255, 255, 255))");}
    ///if (Bg==14){ui1->Picture_4->setStyleSheet("background-color: rgb(77, 68, 121);");}
    if (Bg==41){ui1->Picture_4->setStyleSheet("background-color: "+MainColor+";");}

    if (Bg==2){ui1->Picture_5->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.95008, y1:0.051, x2:1, y2:0, stop:0.20398 rgba(100, 119, 149, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==3){ui1->Picture_5->setStyleSheet("background-color: qradialgradient(spread:repeat, cx:1, cy:0, radius:1.226, fx:0.141, fy:0.840545, stop:0 rgba(255, 255, 255, 255), stop:0.985075 rgba(135, 48, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==0){ui1->Picture_5->setStyleSheet("background-image: url(:/pictures/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");}
    if (Bg==14){ui1->Picture_5->setStyleSheet("background-image: url(:/s/SettingsPicture.png); image: url(:/pictures/SettingsPicture.png);");}
    if (Bg==1){ui1->Picture_5->setStyleSheet("background-image: url(:/pictures/Theme24.png); image: url(:/pictures/Theme24.png); background-color: rgba(0, 0, 0, 0)");}
    if (Bg==4){ui1->Picture_5->setStyleSheet("background-color: qconicalgradient(cx:0.495, cy:0.494, angle:226.6, stop:0 rgba(87, 64, 98, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==5){ui1->Picture_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(103, 61, 113, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==6){ui1->Picture_5->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.516, y1:0.187136, x2:1, y2:0, stop:0.01 rgba(132, 84, 162, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==7){ui1->Picture_5->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==8){ui1->Picture_5->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:0.896, y1:0.08, x2:1, y2:0, stop:0 rgba(114, 0, 128, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==9){ui1->Picture_5->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.0447761 rgba(56, 0, 53, 255), stop:0.467662 rgba(91, 0, 122, 255), stop:0.950249 rgba(255, 180, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==10){ui1->Picture_5->setStyleSheet("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:224.8, stop:0 rgba(211, 215, 207, 255), stop:0.189055 rgba(105, 0, 219, 255), stop:0.40796 rgba(0, 0, 131, 255), stop:0.606965 rgba(175, 0, 194, 255), stop:0.741294 rgba(97, 146, 189, 255), stop:1 rgba(255, 255, 255, 255))");}
    ///if (Bg==14){ui1->Picture_5->setStyleSheet("background-color: rgb(77, 68, 121);");}
    if (Bg==41){ui1->Picture_5->setStyleSheet("background-color: "+MainColor+";");}

    ui1->label_2->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_3->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_4->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_5->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_6->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_7->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_8->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_9->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_10->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_11->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_12->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_13->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_14->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_15->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_16->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_17->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_171->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_19->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_20->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_21->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_22->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_23->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_24->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_25->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_26->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_27->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_28->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_29->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_30->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_32->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_33->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_37->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_38->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_39->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_40->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_41->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_42->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_43->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_44->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_45->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_46->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_47->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_48->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_49->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_50->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_51->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_52->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui1->label_68->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ///ui1->label_->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ///ui1->label_->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ///ui1->label_->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");

    ui1->label_2->setFont(Font);
    ui1->label_3->setFont(Font);
    ui1->label_4->setFont(Font);
    ui1->label_5->setFont(Font);
    ui1->label_6->setFont(Font);
    ui1->label_7->setFont(Font);
    ui1->label_8->setFont(Font);
    ui1->label_9->setFont(Font);
    ui1->label_10->setFont(Font);
    ui1->label_11->setFont(Font);
    ui1->label_12->setFont(Font);
    ui1->label_13->setFont(Font);
    ui1->label_14->setFont(Font);
    ui1->label_15->setFont(Font);
    ui1->label_16->setFont(Font);
    ui1->label_17->setFont(Font);
    ui1->label_171->setFont(Font);
    ui1->label_19->setFont(Font);
    ui1->label_20->setFont(Font);
    ui1->label_21->setFont(Font);
    ui1->label_22->setFont(Font);
    ui1->label_23->setFont(Font);
    ui1->label_24->setFont(Font);
    ui1->label_25->setFont(Font);
    ui1->label_26->setFont(Font);
    ui1->label_27->setFont(Font);
    ui1->label_28->setFont(Font);
    ui1->label_29->setFont(Font);
    ui1->label_30->setFont(Font);
    ui1->label_32->setFont(Font);
    ui1->label_33->setFont(Font);
    ui1->label_37->setFont(Font);
    ui1->label_38->setFont(Font);
    ui1->label_39->setFont(Font);
    ui1->label_40->setFont(Font);
    ui1->label_41->setFont(Font);
    ui1->label_42->setFont(Font);
    ui1->label_43->setFont(Font);
    ui1->label_44->setFont(Font);
    ui1->label_45->setFont(Font);
    ui1->label_46->setFont(Font);
    ui1->label_47->setFont(Font);
    ui1->label_48->setFont(Font);
    ui1->label_49->setFont(Font);
    ui1->label_50->setFont(Font);
    ui1->label_51->setFont(Font);
    ui1->label_52->setFont(Font);
    ui1->label_68->setFont(Font);


    if (CButtons.length()<17){
        ui1->SettingsApplyMixerButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
        ui1->SettingsApplyTextButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
        ui1->SettingsClearLabels->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
        ui1->SettingsHelpButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
        ui1->SettingsMuteButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
  }
    else {
        ui1->SettingsApplyMixerButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
        ui1->SettingsApplyTextButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
        ui1->SettingsClearLabels->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
        ui1->SettingsHelpButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
        ui1->SettingsMuteButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
    }
    ui1->L1->setStyleSheet("background-color: "+C12+";");
    ui1->L2->setStyleSheet("background-color: "+C12+";");

    ui1->LabelWeb->setText("<a style=\"color:#534496;\" href=\"https://musicboard-blog.weebly.com/\">Go to the MusicBoard Blog to find Out More!</a>");
    ui1->LabelWeb->setTextFormat(Qt::RichText);
    ui1->LabelWeb->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui1->LabelWeb->setOpenExternalLinks(true);

    ui1->LabelWeb1->setText("<a style=\"color:#534496;\" href=\"https://github.com/MusicBoard/musicboard\">Developers</a>");
    ui1->LabelWeb1->setTextFormat(Qt::RichText);
    ui1->LabelWeb1->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui1->LabelWeb1->setOpenExternalLinks(true);

    ui1->LabelWeb2->setText("<a style=\"color:#534496;\" href=\"http://musicboard-launchpad.dx.am/\">Site</a>");
    ui1->LabelWeb2->setTextFormat(Qt::RichText);
    ui1->LabelWeb2->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui1->LabelWeb2->setOpenExternalLinks(true);

    ui1->LabelWeb3->setText("<a style=\"color:#534496;\" href=\"https://single-coil.weebly.com/\">Owner Blog</a>");
    ui1->LabelWeb3->setTextFormat(Qt::RichText);
    ui1->LabelWeb3->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui1->LabelWeb3->setOpenExternalLinks(true);

    extern int P1_A;
        extern int P2_A;
        extern int P3_A;
        extern int P4_A;
        extern int P5_A;
        extern int P6_A;
        extern int P7_A;
        extern int P8_A;
        extern int P9_A;
        extern int P10_A;
        extern int P11_A;
        extern int P12_A;
        extern int P13_A;
        extern int P14_A;
        extern int P15_A;
        extern int P16_A;
        extern int P17_A;
        extern int KeyboardVol;
        extern int MasterVol;
        extern int R1_A;
        extern int R2_A;
        extern int R3_A;
        extern int R4_A;
        extern int R5_A;
        extern int R6_A;
        extern int R7_A;
        extern int R8_A;
    ui1->KeyboardSlider->setSliderPosition(KeyboardVol);
    ui1->MasterSlider->setSliderPosition(MasterVol);
    ui1->P_1->setSliderPosition(P1_A);
    ui1->P_2->setSliderPosition(P2_A);
    ui1->P_3->setSliderPosition(P3_A);
    ui1->P_4->setSliderPosition(P4_A);
    ui1->P_5->setSliderPosition(P5_A);
    ui1->P_6->setSliderPosition(P6_A);
    ui1->P_7->setSliderPosition(P7_A);
    ui1->P_8->setSliderPosition(P8_A);
    ui1->P_9->setSliderPosition(P9_A);
    ui1->P_10->setSliderPosition(P11_A);
    ui1->P_11->setSliderPosition(P12_A);
    ui1->P_12->setSliderPosition(P13_A);
    ui1->P_13->setSliderPosition(P14_A);
    ui1->P_14->setSliderPosition(P15_A);
    ui1->P_15->setSliderPosition(P16_A);
    ui1->P_16->setSliderPosition(P17_A);

    ui1->R_1->setSliderPosition(R1_A);
    ui1->R_2->setSliderPosition(R2_A);
    ui1->R_3->setSliderPosition(R3_A);
    ui1->R_4->setSliderPosition(R4_A);
    ui1->R_5->setSliderPosition(R5_A);
    ui1->R_6->setSliderPosition(R6_A);
    ui1->R_7->setSliderPosition(R7_A);
    ui1->R_8->setSliderPosition(R8_A);

        ui1->KeyboardSlider->setValue(KeyboardVol);
        ui1->MasterSlider->setValue(MasterVol);
        ui1->P_1->setValue(P1_A);
        ui1->P_2->setValue(P2_A);
        ui1->P_3->setValue(P3_A);
        ui1->P_4->setValue(P4_A);
        ui1->P_5->setValue(P5_A);
        ui1->P_6->setValue(P6_A);
        ui1->P_7->setValue(P7_A);
        ui1->P_8->setValue(P8_A);
        ui1->P_9->setValue(P9_A);
        ui1->P_10->setValue(P11_A);
        ui1->P_11->setValue(P12_A);
        ui1->P_12->setValue(P13_A);
        ui1->P_13->setValue(P14_A);
        ui1->P_14->setValue(P15_A);
        ui1->P_15->setValue(P16_A);
        ui1->P_16->setValue(P17_A);

            ui1->R_1->setValue(R1_A);
            ui1->R_2->setValue(R2_A);
            ui1->R_3->setValue(R3_A);
            ui1->R_4->setValue(R4_A);
            ui1->R_5->setValue(R5_A);
            ui1->R_6->setValue(R6_A);
            ui1->R_7->setValue(R7_A);
            ui1->R_8->setValue(R8_A);
    extern QString P1_R;
    ui1->P1_Text->setText(P1_R);
   // extern QShortCut Sc1;
    //ui1->Sc_1->grabShortcut();
    extern QString P2_R;
    ui1->P2_Text->setText(P2_R);

    extern QString P3_R;
    ui1->P3_Text->setText(P3_R);

    extern QString P4_R;
    ui1->P4_Text->setText(P4_R);

    extern QString P5_R;
    ui1->P5_Text->setText(P5_R);

    extern QString P6_R;
    ui1->P6_Text->setText(P6_R);

    extern QString P7_R;
    ui1->P7_Text->setText(P7_R);

    extern QString P8_R;
    ui1->P8_Text->setText(P8_R);

    extern QString P9_R;
    ui1->P9_Text->setText(P9_R);

    extern QString P10_R;
    ui1->P10_Text->setText(P10_R);

    extern QString P11_R;
    ui1->P11_Text->setText(P11_R);

    extern QString P12_R;
    ui1->P12_Text->setText(P12_R);

    extern QString P13_R;
    ui1->P13_Text->setText(P13_R);

    extern QString P14_R;
    ui1->P14_Text->setText(P14_R);

    extern QString P15_R;
    ui1->P15_Text->setText(P15_R);

    extern QString P16_R;
    ui1->P16_Text->setText(P16_R);

    extern QString P17_R;
    ui1->P17_Text->setText(P17_R);

    PreferencesForm on_Theme_1_clicked();
}

Settings::~Settings()
{
    MusicBoard a;
    a.on_ReInit_clicked(); /// nu merg
    delete ui1;
}

void Settings::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui1->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Settings::on_SettingsApplyTextButton_clicked()
{
    extern QString P1_R;
    P1_R=ui1->P1_Text->text();

    extern QString P2_R;
    P2_R=ui1->P2_Text->text();

    extern QString P3_R;
    P3_R=ui1->P3_Text->text();

    extern QString P4_R;
    P4_R=ui1->P4_Text->text();

    extern QString P5_R;
    P5_R=ui1->P5_Text->text();

    extern QString P6_R;
    P6_R=ui1->P6_Text->text();

    extern QString P7_R;
    P7_R=ui1->P7_Text->text();

    extern QString P8_R;
    P8_R=ui1->P8_Text->text();

    extern QString P9_R;
    P9_R=ui1->P9_Text->text();

    extern QString P10_R;
    P10_R=ui1->P10_Text->text();

    extern QString P11_R;
    P11_R=ui1->P11_Text->text();

    extern QString P12_R;
    P12_R=ui1->P12_Text->text();

    extern QString P13_R;
    P13_R=ui1->P13_Text->text();

    extern QString P14_R;
    P14_R=ui1->P14_Text->text();

    extern QString P15_R;
    P15_R=ui1->P15_Text->text();

    extern QString P16_R;
    P16_R=ui1->P16_Text->text();

    extern QString P17_R;
    P17_R=ui1->P17_Text->text();

}


///void Settings::on_SettingsApplyTextButton_released()
///{
///    delete ui1;
///}

void Settings::on_HiddenCloseButton_clicked()
{
    Settings settings;
    settings.setModal(true);
    settings.close();
}

void Settings::on_Buttons_accepted()
{
    on_SettingsApplyTextButton_clicked();
}

void Settings::on_SettingsApplyMixerButton_clicked()
{   extern int R1_A;
    extern int R2_A;
    extern int R3_A;
    extern int R4_A;
    extern int R5_A;
    extern int R6_A;
    extern int R7_A;
    extern int R8_A;
    extern int P1_A;
    extern int P2_A;
    extern int P3_A;
    extern int P4_A;
    extern int P5_A;
    extern int P6_A;
    extern int P7_A;
    extern int P8_A;
    extern int P9_A;
    extern int P10_A;
    extern int P11_A;
    extern int P12_A;
    extern int P13_A;
    extern int P14_A;
    extern int P15_A;
    extern int P16_A;
    extern int P17_A;
    extern int KeyboardVol;
    extern int MasterVol;
    extern int R1_A;
    extern int R2_A;
    extern int R3_A;
    extern int R4_A;
    extern int R5_A;
    extern int R6_A;
    extern int R7_A;
    extern int R8_A;

    P1_A=ui1->P_1->value();
    P2_A=ui1->P_2->value();
    P3_A=ui1->P_3->value();
    P4_A=ui1->P_4->value();
    P5_A=ui1->P_5->value();
    P6_A=ui1->P_6->value();
    P7_A=ui1->P_7->value();
    P8_A=ui1->P_8->value();
    P9_A=ui1->P_9->value();
    //P10_A=ui1->P_10->value();
    P11_A=ui1->P_10->value();
    P12_A=ui1->P_11->value();
    P13_A=ui1->P_12->value();
    P14_A=ui1->P_13->value();
    P15_A=ui1->P_14->value();
    P16_A=ui1->P_15->value();
    P17_A=ui1->P_16->value();
    // P10 nu are vol.
    R1_A=ui1->R_1->value();
    R2_A=ui1->R_2->value();
    R3_A=ui1->R_3->value();
    R4_A=ui1->R_4->value();
    R5_A=ui1->R_5->value();
    R6_A=ui1->R_6->value();
    R7_A=ui1->R_7->value();
    R8_A=ui1->R_8->value();
    KeyboardVol=ui1->KeyboardSlider->value();
    MasterVol=ui1->MasterSlider->value();

}

void Settings::on_SettingsMuteButton_clicked()
{
//        extern int P1_A;
//        extern int P2_A;
//        extern int P3_A;
//        extern int P4_A;
//        extern int P5_A;
//        extern int P6_A;
//        extern int P7_A;
//        extern int P8_A;
//        extern int P9_A;
//        extern int P10_A;
//        extern int P11_A;
//        extern int P12_A;
//        extern int P13_A;
//        extern int P14_A;
//        extern int P15_A;
//        extern int P16_A;
//        extern int P17_A;
//        extern int KeyboardVol;
//        extern int MasterVol;
    ui1->KeyboardSlider->setSliderPosition(0);
    ui1->MasterSlider->setSliderPosition(0);
    ui1->P_1->setSliderPosition(0);
    ui1->P_2->setSliderPosition(0);
    ui1->P_3->setSliderPosition(0);
    ui1->P_4->setSliderPosition(0);
    ui1->P_5->setSliderPosition(0);
    ui1->P_6->setSliderPosition(0);
    ui1->P_7->setSliderPosition(0);
    ui1->P_8->setSliderPosition(0);
    ui1->P_9->setSliderPosition(0);
    ui1->P_10->setSliderPosition(0);
    ui1->P_11->setSliderPosition(0);
    ui1->P_12->setSliderPosition(0);
    ui1->P_13->setSliderPosition(0);
    ui1->P_14->setSliderPosition(0);
    ui1->P_15->setSliderPosition(0);
    ui1->P_16->setSliderPosition(0);

    ui1->R_1->setSliderPosition(0);
    ui1->R_2->setSliderPosition(0);
    ui1->R_3->setSliderPosition(0);
    ui1->R_4->setSliderPosition(0);
    ui1->R_5->setSliderPosition(0);
    ui1->R_6->setSliderPosition(0);
    ui1->R_7->setSliderPosition(0);
    ui1->R_8->setSliderPosition(0);

        ui1->KeyboardSlider->setValue(0);
        ui1->MasterSlider->setValue(0);
        ui1->P_1->setSliderPosition(0);
        ui1->P_2->setValue(0);
        ui1->P_3->setValue(0);
        ui1->P_4->setValue(0);
        ui1->P_5->setValue(0);
        ui1->P_6->setValue(0);
        ui1->P_7->setValue(0);
        ui1->P_8->setValue(0);
        ui1->P_9->setValue(0);
        ui1->P_10->setValue(0);
        ui1->P_11->setValue(0);
        ui1->P_12->setValue(0);
        ui1->P_13->setValue(0);
        ui1->P_14->setValue(0);
        ui1->P_15->setValue(0);
        ui1->P_16->setValue(0);

            ui1->R_1->setValue(0);
            ui1->R_2->setValue(0);
            ui1->R_3->setValue(0);
            ui1->R_4->setValue(0);
            ui1->R_5->setValue(0);
            ui1->R_6->setValue(0);
            ui1->R_7->setValue(0);
            ui1->R_8->setValue(0);
}

//void Settings::on_MasterSlider_sliderMoved(int position)
//{
//        extern int P1_A;
//        extern int P2_A;
//        extern int P3_A;
//        extern int P4_A;
//        extern int P5_A;
//        extern int P6_A;
//        extern int P7_A;
//        extern int P8_A;
//        extern int P9_A;
//        extern int P10_A;
//        extern int P11_A;
//        extern int P12_A;
//        extern int P13_A;
//        extern int P14_A;
//        extern int P15_A;
//        extern int P16_A;
//        extern int P17_A;
//        extern int KeyboardVol;
//        //extern int MasterVol;
//        extern int R1_A;
//        extern int R2_A;
//        extern int R3_A;
//        extern int R4_A;
//        extern int R5_A;
//        extern int R6_A;
//        extern int R7_A;
//        extern int R8_A;

////        P1_A=position+P1_A;
////        P2_A=position+P2_A;
////        P3_A=position+P3_A;
////        P4_A=position+P4_A;
////        P5_A=position+P5_A;
////        P6_A=position+P6_A;
////        P7_A=position+P7_A;
////        P8_A=position+P8_A;
////        P9_A=position+P9_A;
////        P10_A=position+P10_A;
////        P11_A=position+P11_A;
////        P12_A=position+P12_A;
////        P13_A=position+P13_A;
////        P14_A=position+P14_A;
////        P15_A=position+P15_A;
////        P16_A=position+P16_A;
////        P17_A=position+P17_A;
////        KeyboardVol=position+KeyboardVol;
////        //MasterVol=position+MasterVol;
////        R1_A=position+R1_A;
////        R2_A=position+R2_A;
////        R3_A=position+R3_A;
////        R4_A=position+R4_A;
////        R5_A=position+R5_A;
////        R6_A=position+R6_A;
////        R7_A=position+R7_A;
////        R8_A=position+R8_A;

//        P1_A=position;//P1_A;
//                P2_A=position;//P2_A;
//                P3_A=position;//P3_A;
//                P4_A=position;//P4_A;
//                P5_A=position;//P5_A;
//                P6_A=position;//P6_A;
//                P7_A=position;//P7_A;
//                P8_A=position;//P8_A;
//                P9_A=position;//P9_A;
//                P10_A=position;//P10_A;
//                P11_A=position;//P11_A;
//                P12_A=position;//P12_A;
//                P13_A=position;//P13_A;
//                P14_A=position;//P14_A;
//                P15_A=position;//P15_A;
//                P16_A=position;//P16_A;
//                P17_A=position;//P17_A;
//                KeyboardVol=position;//KeyboardVol;
//                //MasterVol=position;//MasterVol;
//                R1_A=position;//R1_A;
//                R2_A=position;//R2_A;
//                R3_A=position;//R3_A;
//                R4_A=position;//R4_A;
//                R5_A=position;//R5_A;
//                R6_A=position;//R6_A;
//                R7_A=position;//R7_A;
//                R8_A=position;//R8_A;

//    ui1->KeyboardSlider->setMaximum(KeyboardVol);
//    ui1->P_1->setMaximum(P1_A);
//        ui1->P_2->setMaximum(P2_A);
//        ui1->P_3->setMaximum(P3_A);
//        ui1->P_4->setMaximum(P4_A);
//        ui1->P_5->setMaximum(P5_A);
//        ui1->P_6->setMaximum(P6_A);
//        ui1->P_7->setMaximum(P7_A);
//        ui1->P_8->setMaximum(P8_A);
//        ui1->P_9->setMaximum(P9_A);
//        ui1->P_10->setMaximum(P11_A);
//        ui1->P_11->setMaximum(P12_A);
//        ui1->P_12->setMaximum(P13_A);
//        ui1->P_13->setMaximum(P14_A);
//        ui1->P_14->setMaximum(P15_A);
//        ui1->P_15->setMaximum(P16_A);
//        ui1->P_16->setMaximum(P17_A);

//        ui1->R_1->setMaximum(R1_A);
//        ui1->R_2->setMaximum(R2_A);
//        ui1->R_3->setMaximum(R3_A);
//        ui1->R_4->setMaximum(R4_A);
//        ui1->R_5->setMaximum(R5_A);
//        ui1->R_6->setMaximum(R6_A);
//        ui1->R_7->setMaximum(R7_A);
//        ui1->R_8->setMaximum(R8_A);
//    //ui1->MasterSlider->setSliderPosition(MasterVol);
////    ui1->P_1->setSliderPosition(P1_A);
////    ui1->P_2->setSliderPosition(P2_A);
////    ui1->P_3->setSliderPosition(P3_A);
////    ui1->P_4->setSliderPosition(P4_A);
////    ui1->P_5->setSliderPosition(P5_A);
////    ui1->P_6->setSliderPosition(P6_A);
////    ui1->P_7->setSliderPosition(P7_A);
////    ui1->P_8->setSliderPosition(P8_A);
////    ui1->P_9->setSliderPosition(P9_A);
////    ui1->P_10->setSliderPosition(P11_A);
////    ui1->P_11->setSliderPosition(P12_A);
////    ui1->P_12->setSliderPosition(P13_A);
////    ui1->P_13->setSliderPosition(P14_A);
////    ui1->P_14->setSliderPosition(P15_A);
////    ui1->P_15->setSliderPosition(P16_A);
////    ui1->P_16->setSliderPosition(P17_A);

////    ui1->R_1->setSliderPosition(R1_A);
////    ui1->R_2->setSliderPosition(R2_A);
////    ui1->R_3->setSliderPosition(R3_A);
////    ui1->R_4->setSliderPosition(R4_A);
////    ui1->R_5->setSliderPosition(R5_A);
////    ui1->R_6->setSliderPosition(R6_A);
////    ui1->R_7->setSliderPosition(R7_A);
////    ui1->R_8->setSliderPosition(R8_A);

////        ui1->KeyboardSlider->setValue(KeyboardVol);
////        //ui1->MasterSlider->setValue(MasterVol);


////        ui1->P_1->setSliderPosition(P1_A);
////        ui1->P_2->setValue(P2_A);
////        ui1->P_3->setValue(P3_A);
////        ui1->P_4->setValue(P4_A);
////        ui1->P_5->setValue(P5_A);
////        ui1->P_6->setValue(P6_A);
////        ui1->P_7->setValue(P7_A);
////        ui1->P_8->setValue(P8_A);
////        ui1->P_9->setValue(P9_A);
////        ui1->P_10->setValue(P11_A);
////        ui1->P_11->setValue(P12_A);
////        ui1->P_12->setValue(P13_A);
////        ui1->P_13->setValue(P14_A);
////        ui1->P_14->setValue(P15_A);
////        ui1->P_15->setValue(P16_A);
////        ui1->P_16->setValue(P17_A);

////            ui1->R_1->setValue(R1_A);
////            ui1->R_2->setValue(R2_A);
////            ui1->R_3->setValue(R3_A);
////            ui1->R_4->setValue(R4_A);
////            ui1->R_5->setValue(R5_A);
////            ui1->R_6->setValue(R6_A);
////            ui1->R_7->setValue(R7_A);
////            ui1->R_8->setValue(R8_A);
//}

void Settings::on_MasterSlider_valueChanged(int position)
{
    extern int P1_A;
    extern int P2_A;
    extern int P3_A;
    extern int P4_A;
    extern int P5_A;
    extern int P6_A;
    extern int P7_A;
    extern int P8_A;
    extern int P9_A;
    extern int P10_A;
    extern int P11_A;
    extern int P12_A;
    extern int P13_A;
    extern int P14_A;
    extern int P15_A;
    extern int P16_A;
    extern int P17_A;
    extern int KeyboardVol;
    //extern int MasterVol;
    extern int R1_A;
    extern int R2_A;
    extern int R3_A;
    extern int R4_A;
    extern int R5_A;
    extern int R6_A;
    extern int R7_A;
    extern int R8_A;
//    if (P1_A>position){
//    P1_A=position;}
//                    if (P2_A>position){
//    P2_A=position;}
//                    if (P3_A>position){
//    P3_A=position;}
//                    if (P4_A>position){
//    P4_A=position;}
//                    if (P5_A>position){
//    P5_A=position;}
//                    if (P6_A>position){
//    P6_A=position;}
//                    if (P7_A>position){
//    P7_A=position;}
//                    if (P8_A>position){
//    P8_A=position;}
//                    if (P9_A>position){
//    P9_A=position;}
//                    if (P10_A>position){
//    P10_A=position;}
//                    if (P11_A>position){
//    P11_A=position;}
//                    if (P12_A>position){
//    P12_A=position;}
//                    if (P13_A>position){
//    P13_A=position;}
//                    if (P14_A>position){
//    P14_A=position;}
//                    if (P15_A>position){
//    P15_A=position;}
//                    if (P16_A>position){
//    P16_A=position;}
//                    if (P17_A>position){
//    P17_A=position;}
    P1_A=position;//P1_A;
            P2_A=position;//P2_A;
            P3_A=position;//P3_A;
            P4_A=position;//P4_A;
            P5_A=position;//P5_A;
            P6_A=position;//P6_A;
            P7_A=position;//P7_A;
            P8_A=position;//P8_A;
            P9_A=position;//P9_A;
            P10_A=position;//P10_A;
            P11_A=position;//P11_A;
            P12_A=position;//P12_A;
            P13_A=position;//P13_A;
            P14_A=position;//P14_A;
            P15_A=position;//P15_A;
            P16_A=position;//P16_A;
            P17_A=position;//P17_A;
            KeyboardVol=position;//KeyboardVol;
            //MasterVol=position;//MasterVol;
            R1_A=position;//R1_A;
            R2_A=position;//R2_A;
            R3_A=position;//R3_A;
            R4_A=position;//R4_A;
            R5_A=position;//R5_A;
            R6_A=position;//R6_A;
            R7_A=position;//R7_A;
            R8_A=position;//R8_A;
            KeyboardVol=position;//KeyboardVol;
            //MasterVol=position;//MasterVol;
            R1_A=position;//R1_A;
            R2_A=position;//R2_A;
            R3_A=position;//R3_A;
            R4_A=position;//R4_A;
            R5_A=position;//R5_A;
            R6_A=position;//R6_A;
            R7_A=position;//R7_A;
            R8_A=position;//R8_A;


                ui1->KeyboardSlider->setValue(KeyboardVol);
                ui1->P_1->setValue(P1_A);
                ui1->P_2->setValue(P2_A);
                ui1->P_3->setValue(P3_A);
                ui1->P_4->setValue(P4_A);
                ui1->P_5->setValue(P5_A);
                ui1->P_6->setValue(P6_A);
                ui1->P_7->setValue(P7_A);
                ui1->P_8->setValue(P8_A);
                ui1->P_9->setValue(P9_A);
                ui1->P_10->setValue(P11_A);
                ui1->P_11->setValue(P12_A);
                ui1->P_12->setValue(P13_A);
                ui1->P_13->setValue(P14_A);
                ui1->P_14->setValue(P15_A);
                ui1->P_15->setValue(P16_A);
                ui1->P_16->setValue(P17_A);

                ui1->R_1->setValue(R1_A);
                ui1->R_2->setValue(R2_A);
                ui1->R_3->setValue(R3_A);
                ui1->R_4->setValue(R4_A);
                ui1->R_5->setValue(R5_A);
                ui1->R_6->setValue(R6_A);
                ui1->R_7->setValue(R7_A);
                ui1->R_8->setValue(R8_A);

                ui1->KeyboardSlider->setSliderPosition(KeyboardVol);
                ui1->P_1->setSliderPosition(P1_A);
                    ui1->P_2->setSliderPosition(P2_A);
                    ui1->P_3->setSliderPosition(P3_A);
                    ui1->P_4->setSliderPosition(P4_A);
                    ui1->P_5->setSliderPosition(P5_A);
                    ui1->P_6->setSliderPosition(P6_A);
                    ui1->P_7->setSliderPosition(P7_A);
                    ui1->P_8->setSliderPosition(P8_A);
                    ui1->P_9->setSliderPosition(P9_A);
                    ui1->P_10->setSliderPosition(P11_A);
                    ui1->P_11->setSliderPosition(P12_A);
                    ui1->P_12->setSliderPosition(P13_A);
                    ui1->P_13->setSliderPosition(P14_A);
                    ui1->P_14->setSliderPosition(P15_A);
                    ui1->P_15->setSliderPosition(P16_A);
                    ui1->P_16->setSliderPosition(P17_A);

                    ui1->R_1->setSliderPosition(R1_A);
                    ui1->R_2->setSliderPosition(R2_A);
                    ui1->R_3->setSliderPosition(R3_A);
                    ui1->R_4->setSliderPosition(R4_A);
                    ui1->R_5->setSliderPosition(R5_A);
                    ui1->R_6->setSliderPosition(R6_A);
                    ui1->R_7->setSliderPosition(R7_A);
                    ui1->R_8->setSliderPosition(R8_A);

//ui1->KeyboardSlider->setMaximum(KeyboardVol);
//ui1->P_1->setMaximum(P1_A);
//    ui1->P_2->setValue(P2_A);
//    ui1->P_3->setMaximum(P3_A);
//    ui1->P_4->setMaximum(P4_A);
//    ui1->P_5->setMaximum(P5_A);
//    ui1->P_6->setMaximum(P6_A);
//    ui1->P_7->setMaximum(P7_A);
//    ui1->P_8->setMaximum(P8_A);
//    ui1->P_9->setMaximum(P9_A);
//    ui1->P_10->setMaximum(P11_A);
//    ui1->P_11->setMaximum(P12_A);
//    ui1->P_12->setMaximum(P13_A);
//    ui1->P_13->setMaximum(P14_A);
//    ui1->P_14->setMaximum(P15_A);
//    ui1->P_15->setMaximum(P16_A);
//    ui1->P_16->setMaximum(P17_A);

//    ui1->R_1->setMaximum(R1_A);
//    ui1->R_2->setMaximum(R2_A);
//    ui1->R_3->setMaximum(R3_A);
//    ui1->R_4->setMaximum(R4_A);
//    ui1->R_5->setMaximum(R5_A);
//    ui1->R_6->setMaximum(R6_A);
//    ui1->R_7->setMaximum(R7_A);
//    ui1->R_8->setMaximum(R8_A);
//      extern int Masters;
//      if (Masters==1){
//      MusicBoard a;
//      a.ui->VolSlider->setValue(position);
//      a.ui->VolSlider->setSliderPosition(position);\
//      Masters=0;
//      }
//      Masters=1;
}

void Settings::on_P_1_sliderPressed()
{   on_SettingsApplyMixerButton_clicked();
    MusicBoard a;
    a.on_P1_clicked();
}

void Settings::on_P_2_sliderPressed()
{   on_SettingsApplyMixerButton_clicked();
    MusicBoard a;
    a.on_P2_clicked();
}

void Settings::on_P_3_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P3_clicked();
}

void Settings::on_P_4_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P4_clicked();
}

void Settings::on_P_5_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P5_clicked();
}

void Settings::on_P_6_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P6_clicked();
}

void Settings::on_P_7_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P7_clicked();
}

void Settings::on_P_8_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P8_clicked();
}

void Settings::on_P_9_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P9_clicked();
}

void Settings::on_P_10_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P11_clicked();
}

void Settings::on_P_11_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P12_clicked();
}

void Settings::on_P_12_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P13_clicked();
}

void Settings::on_P_13_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P14_clicked();
}

void Settings::on_P_14_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P15_clicked();
}

void Settings::on_P_15_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P16_clicked();
}

void Settings::on_P_16_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P17_clicked();
}

void Settings::on_R_1_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_R1_clicked();
}

void Settings::on_R_2_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_R2_clicked();
}

void Settings::on_R_3_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_R3_clicked();
}

void Settings::on_R_4_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_R4_clicked();
}

void Settings::on_R_5_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_R5_clicked();
}

void Settings::on_R_6_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_R6_clicked();
}

void Settings::on_R_7_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_R7_clicked();
}

void Settings::on_R_8_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_R8_clicked();
}

void Settings::on_KeyboardSlider_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_C_clicked();
}

void Settings::on_MasterSlider_sliderPressed()
{
    on_SettingsApplyMixerButton_clicked();
        MusicBoard a;
        a.on_P1_clicked();
}

int isSHelp=0;

void Settings::on_SettingsHelpButton_clicked()
{
    if (isSHelp==0){
        ui1->SHelp->show();
        isSHelp=1;
    }
    else {
        ui1->SHelp->hide();
        isSHelp=0;
    }
}

void Settings::on_SHelpClose_clicked()
{
    ui1->SHelp->hide();
    isSHelp=0;
}

//void Settings::on_Sc_1_editingFinished()
//{

//}

void Settings::on_SMasterLeft_clicked()
{
    ui1->MasterSlider->setValue(ui1->MasterSlider->value()-5);
    ui1->MasterSlider->setSliderPosition(ui1->MasterSlider->value()-5);
}

void Settings::on_SMasterRight_clicked()
{
    ui1->MasterSlider->setValue(ui1->MasterSlider->value()+5);
    ui1->MasterSlider->setSliderPosition(ui1->MasterSlider->value()+5);
}

void Settings::on_HiddenNumlockButton_clicked()
{
    extern int NumLock;
    if (NumLock==1){
        NumLock=0;
    }
    else {
        NumLock=1;
    }
    //ui1->lineEdit->setText(QString::number(NumLock));
}

void Settings::on_SettingsClearLabels_clicked()
{
    ui1->P1_Text->setText("");
    ui1->P2_Text->setText("");
    ui1->P3_Text->setText("");
    ui1->P4_Text->setText("");
    ui1->P5_Text->setText("");
    ui1->P6_Text->setText("");
    ui1->P7_Text->setText("");
    ui1->P8_Text->setText("");
    ui1->P9_Text->setText("");
    ui1->P10_Text->setText("");
    ui1->P11_Text->setText("");
    ui1->P12_Text->setText("");
    ui1->P13_Text->setText("");
    ui1->P14_Text->setText("");
    ui1->P15_Text->setText("");
    ui1->P16_Text->setText("");
    ui1->P17_Text->setText("");
}
