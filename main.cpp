#include "musicboard.h"
    #include <QApplication>
    #include <QShortcut>
    #include "audiorecorder.h"
    #include <QtWidgets>
    #include <QAudioProbe>
    #include <QAudioRecorder>
    #include <QDir>
    #include <QFileDialog>
    #include <QMediaRecorder>
    #include "preferencesform.h"
    #include <QFont>

QString P1_R="P1";
QString P2_R="P2";
QString P3_R="P3";
QString P4_R="P4";
QString P5_R="P5";
QString P6_R="P6";
QString P7_R="P7";
QString P8_R="P8";
QString P9_R="P9";
QString P10_R="P10";
QString P11_R="P11";
QString P12_R="P12";
QString P13_R="P13";
QString P14_R="P14";
QString P15_R="P15";
QString P16_R="P16";
QString P17_R="P17";
QString C1="rgb(110, 110, 110)";
QString C12="rgb(255, 159, 159)";
QString CFont="rgb(255, 255, 255)";
QString CKeyboard="rgb(81, 38, 255)";
QString CFile="rgb(152, 130, 251)";
QString C1_Custom="rgb(110, 110, 110)";
QString C12_Custom="rgb(255, 159, 159)";
QString CFont_Custom="rgb(255, 255, 255)";
QString CKeyboard_Custom="rgb(81, 38, 255)";
QString CFile_Custom="rgb(152, 130, 251)";
QString CButtons_Custom="rgb(83, 68, 150)";
QString MainColor="";
///QString ShowColor_4="rgb(?, ?, ?)";
///QString ShowColor_5="rgb(?, ?, ?)";
///QString ShowColor_6="rgb(?, ?, ?)";
QString CButtons="rgb(83, 68, 150)";

int Master;

//QShortcut P1_S;
//QShortcut P2_S;
//QShortcut P3_S;
//QShortcut P4_S;
//QShortcut P5_S;
//QShortcut P6_S;
//QShortcut P7_S;
//QShortcut P8_S;
//QShortcut P9_S;
//QShortcut P10_S;
//QShortcut P11_S;
//QShortcut P12_S;
//QShortcut P13_S;
//QShortcut P14_S;
//QShortcut P15_S;
//QShortcut P16_S;
//QShortcut P17_S;

QFont Font;

int P1_A=99;
int P2_A=99;
int P3_A=99;
int P4_A=99;
int P5_A=99;
int P6_A=99;
int P7_A=99;
int P8_A=99;
int P9_A=99;
int P10_A=99;
int P11_A=99;
int P12_A=99;
int P13_A=99;
int P14_A=99;
int P15_A=99;
int P16_A=99;
int P17_A=99;
int KeyboardVol=99;
int MasterVol=99;
int R1_A=99;
int R2_A=99;
int R3_A=99;
int R4_A=99;
int R5_A=99;
int R6_A=99;
int R7_A=99;
int R8_A=99;
int Masters=0;
int NumLock=10;
int FontColor=0;
int BgColor1=0;
int BgColor2=0;
int Bg=14;
int Bg_Custom=14;
int On=0;
int On1=0;
int isCoverShow=1;
int isNumLockShow=1;
int isSureShow=1;
int isImages=1;
int isCPUEnabled=1;
int isKeyboardAsLaunchpadShow=0;
int Notes=0;
extern int ReVal=0; // ColorPicker
extern int GrVal=0; // ColorPicker
extern int BlVal=0; // ColorPicker

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MusicBoard w;
  w.show();
//  AudioRecorder recorder;
//  recorder.show();
//  PreferencesForm preferences;
//  preferences.show();
return a.exec();
}
