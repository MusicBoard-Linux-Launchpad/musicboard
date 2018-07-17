#include "musicboard.h"
#include <QApplication>
#include <QShortcut>
#include <digitalclock.h>
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

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MusicBoard w;
  w.show();
  //DigitalClock clock;
  //clock.show();
  return a.exec();
}
