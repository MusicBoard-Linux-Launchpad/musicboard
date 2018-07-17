#include "settings.h"
#include "ui_settings.h"
#include "musicboard.h"
#include "ui_musicboard.h"
#include "global.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui1(new Ui::Settings)
{
    ui1->setupUi(this);
    ui1->SHelp->hide();
    //ui1->Sc_1->set
    ui1->LabelWeb->setText("<a style=\"color:#534496;\" href=\"https://musicboard-blog.weebly.com/\">Go to the MusicBoard Blog to find Out More!</a>");
    ui1->LabelWeb->setTextFormat(Qt::RichText);
    ui1->LabelWeb->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui1->LabelWeb->setOpenExternalLinks(true);

    ui1->LabelWeb1->setText("<a style=\"color:#534496;\" href=\"https://musicboard-blog.weebly.com/\">Developers</a>");
    ui1->LabelWeb1->setTextFormat(Qt::RichText);
    ui1->LabelWeb1->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui1->LabelWeb1->setOpenExternalLinks(true);


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
        ui1->P_1->setSliderPosition(P1_A);
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

}

Settings::~Settings()
{
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
{  /* extern int P1_A;
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
    extern int MasterVol;*/

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
