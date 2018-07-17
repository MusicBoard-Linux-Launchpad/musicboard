#include "musicboard.h"
#include "ui_musicboard.h"
#include "string.h"
#include <iostream>
#include <QTimer>
#include <QElapsedTimer>
#include "settings.h"
#include "ui_settings.h"
#include "digitalclock.h"
#include "audiorecorder.h"
#include "preferencesform.h"

#ifdef _WIN32
#include <Windows.h>
#endif

#ifdef _UNIX
#include <X11/Xlib.h>
#endif
//void MusicBoard::TimeShow()
//{
//    QTime time = QTime::currentTime();
//    QString text = time.toString("mm:ss");
//    //ui->Time->displayText(text);
//    if ((time.second() % 2) == 0){
//        text[2] = ' ';}
//    ui->LCD->display(text);
//}


///int NumLock=10;

//void NmLk (){
//    if (is_numlock_activated()){
//        NumLock=1;
//    }
//    else {
//        NumLock=0;
//    }
//}

bool is_numlock_activated()
{
#ifdef _WIN32
    short status = GetKeyState(VK_NUMLOCK);
    return status == 1;
#endif

#ifdef _UNIX
    Display *dpy = XOpenDisplay(":0");
    XKeyboardState x;
    XGetKeyboardControl(dpy, &x);
    XCloseDisplay(dpy);
    return x.led_mask & 2;
#endif
}


MusicBoard::MusicBoard(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MusicBoard)
{
  ui->setupUi(this);
  extern int NumLock;
  ui->VolSlider->setStyleSheet("QSlider {background-color: rgba(136, 138, 133, 0);selection-background-color: rgb(255, 255, 255);}QSlider::handle:horizontal {height: 10px;background-image: url(:/pictures/Slider14.png);image: url(:/pictures/Slider14.png);background-color: rgba(136, 138, 133, 0)}");
  ui->VolLabel->setStyleSheet("color: rgb(255, 255, 255);background-color: rgba(136, 138, 133, 0);");
  if (NumLock==1){
      ui->NumlockLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0);color: rgb(239, 41, 41);");
      //NumLock=0;
      ui->NmLkOnOff->setText("ON");
      ui->UnderOn->show();
  }
  else {
      ui->NumlockLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
      //NumLock=1;
      ui->NmLkOnOff->setText("OFF");
      ui->UnderOn->hide();
  }

//  QTimer *timer = new QTimer(this);
//  connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
//  timer->start(1000);

//  QTime time = QTime::currentTime();
//  QString text = time.toString("hh:mm:ss");

//  //ui->Time->setText(text);

  ui->MBTerminal->hide();
  ui->Demo1->hide();
  ui->Demo2->hide();
  ui->Demo3->hide();
  ui->Demo4->hide();
  ui->Demo5->hide();
  ui->Demo6->hide();
  ui->Demo7->hide();
  //  TimeShow();
  ui->UnderOn->hide();
  ui->P7->setStyleSheet("background-color: rgba(136, 138, 133, 179);background-image: url(:/pictures/LaunchPad.png);image: url(:/pictures/LaunchPad.png);");
  ui->K1->setStyleSheet("background-color: rgba(255, 159, 159, 179);image: url(:/pictures/KeysLF.png);background-image: url(:/pictures/KeysLF.png);color: rgb(255, 255, 255);");
  ui->Set1->setStyleSheet("color: rgb(255, 255, 255);background-image: url(:/pictures/Sets.png);image: url(:/pictures/Sets.png);background-color: rgba(159, 138, 252, 153);border-color: rgba(159, 138, 252, 153);");
  ui->Error->setReadOnly(true);
  ui->Path->setReadOnly(true);
  ui->NumlockLabel->setReadOnly(true);
  QString sPath = "file:///home/n";
  dirmodel = new QFileSystemModel (this);
  dirmodel->setRootPath(sPath);
  dirmodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
  ui->File1->setModel(dirmodel);
  filemodel = new QFileSystemModel(this);
  filemodel->setRootPath(sPath);
  filemodel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
  ui->File2->setModel(filemodel);
  //QTreeView::hideColumn();
  ui->File1->hideColumn(1);
  ui->File1->hideColumn(2);
  ui->File1->hideColumn(3);
  ui->About->hide();
  ui->Help->hide();
  ui->K4->hide();
  ui->NumlockLabel_2->hide();
  //ui->VolLabel->hide();
  //ui->VolSlider->hide();
  ui->TrLeft->hide();
  ui->TrRight->hide();
  //ui->HelpButton->hide();CloseClose_2
  //ui->AboutButton->hide();
  ui->Sure->hide();
  ui->File->hide();
  ui->Clear->hide();
  ui->Edit->hide();
  ui->ProjectNotes->hide();
  ui->MBoard->hide();
  ui->ClearEdit->hide();
  ui->Licence->hide();
  ///ui->ThemeEdit->hide();///aici Gelu
  ui->NotesEdit->hide();
  ui->ThemesEdit->hide();
  ui->Rhythm2->hide();
  //int i=0;
  //while (QTime::currentTime().second()>i){
  //{
  ///ui->Time->setText(QTime::currentTime().toString());
  //i=QTime::currentTime().second();
  //}
/// QTimer *timer = new QTimer(this);
///  connect(timer, SIGNAL(timeout()), this, SLOT(update()));
///  timer->start(1000);
//  if (){
//      i=i+1;
//      ui->Time->setText(QString::number(i));
//  }
  //ui->Time->setText(QTimer::timer.toString());
}

/// Cum Scriu in terminal?
/// cout<<"dfg";

MusicBoard::~MusicBoard()
{
  delete ui;
}

//QAudioRecorder * audioRecorder = new QAudioRecorder();

//QAudioEncoderSettings * sets = newQAudioEncoderSettings();
//sets.setCodec(boxValue(ui->audioCodecBox).toString());
//sets.setSampleRate(boxValue(ui->sampleRateBox).toInt());
//sets.setBitRate(boxValue(ui->bitrateBox).toInt());
//sets.setQuality(QMultimedia::EncodingQuality(ui->qualitySlider->value()));
//sets.setEncodingMode(ui->constantQualityRadioButton->isChecked() ?
//                         QMultimedia::ConstantQualityEncoding :
//                         QMultimedia::ConstantBitRateEncoding);

//QString container = boxValue(ui->containerBox).toString();

//   audioRecorder->setEncodingSettings(settings, QVideoEncoderSettings(), container);
//   audioRecorder->record();

//   ui->statusbar->showMessage(tr("Recorded %1 sec").arg(duration / 1000));


int setButton;
int isHelp=0;
int isAbout=0;
int isFile=0;
int isEdit=0;
int ClearWhat=0;
int isProjectNotes=0;
int isMBoard=0;
int isClearEdit=0;
int isLicence=0;
int isThemesEdit=0;
int isNotesEdit=0;
int isRhythm2=0;
int isP11=0;
int isP12=0;
int isP13=0;
int isP14=0;
int isP21=0;
int isP22=0;
int isP23=0;
int isP24=0;
int isP31=0;
int isP32=0;
int isP33=0;
int isP34=0;
int isStartRhythm=0;
int TIndicator=1;// pana fac functie de temp. (BPM)
int isSettings=0;
int isDemo=0;
int isDemoKey=0;
int isDemoFunction=0;
int isMBTerminal=0;
///int isThemeEdit=0;//aici Gelu
//isHelp=0; // de ce nu merge asa
//isAbout=0;
//Selectat Si Modulat Sunet
//TIndicator=1;// pana fac functie de temp. (BPM)
QMediaPlayer * C = new QMediaPlayer();
QMediaPlayer * C_B = new QMediaPlayer();
QMediaPlayer * D = new QMediaPlayer();
QMediaPlayer * D_B = new QMediaPlayer();
QMediaPlayer * E = new QMediaPlayer();
QMediaPlayer * F = new QMediaPlayer();
QMediaPlayer * F_B = new QMediaPlayer();
QMediaPlayer * G = new QMediaPlayer();
QMediaPlayer * G_B = new QMediaPlayer();
QMediaPlayer * A = new QMediaPlayer();
QMediaPlayer * A_B = new QMediaPlayer();
QMediaPlayer * B = new QMediaPlayer();
QMediaPlayer * C2 = new QMediaPlayer();
QMediaPlayer * C2_B = new QMediaPlayer();
QMediaPlayer * D2 = new QMediaPlayer();
QMediaPlayer * D2_B = new QMediaPlayer();
QMediaPlayer * E2 = new QMediaPlayer();
QMediaPlayer * F2 = new QMediaPlayer();
QMediaPlayer * F2_B = new QMediaPlayer();
QMediaPlayer * G2 = new QMediaPlayer();
QMediaPlayer * Close = new QMediaPlayer();
//QMediaPlayer * MB = new QMediaPlayer();
//MB->setMedia(QUrl("qrc:/sounds/MBoard/Sounds/MusicBoard_Last.mp3"));
//MB->play();
QMediaPlayer * Silance = new QMediaPlayer();
QString C_Song;
QString C_B_Song;
QString D_Song;
QString D_B_Song;
QString E_Song;
QString F_Song;
QString F_B_Song;
QString G_Song;
QString G_B_Song;
QString A_Song;
QString A_B_Song;
QString B_Song;
QString C2_Song;
QString C2_B_Song;
QString D2_Song;
QString D2_B_Song;
QString E2_Song;
QString F2_Song;
QString F2_B_Song;
QString G2_Song;
QString Silance_Song;



void MusicBoard::on_C_clicked()
{
  QMediaPlayer * C = new QMediaPlayer();
  C->setMedia(QUrl(C_Song));
  extern int KeyboardVol;
  C->setVolume(KeyboardVol);
  C->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}


void MusicBoard::on_D_clicked()
{
  QMediaPlayer * D = new QMediaPlayer();
  //D->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/D.wav"));
  D->setMedia(QUrl(D_Song));
  extern int KeyboardVol;
  D->setVolume(KeyboardVol);
  D->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_C_B_clicked()
{
  QMediaPlayer * C_B = new QMediaPlayer();
  //C_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/C_B.wav"));
  C_B->setMedia(QUrl(C_B_Song));
  extern int KeyboardVol;
  C_B->setVolume(KeyboardVol);
  C_B->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_D_B_clicked()
{
  QMediaPlayer * D_B = new QMediaPlayer();
  //D_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/D_B.wav"));
  D_B->setMedia(QUrl(D_B_Song));
  extern int KeyboardVol;
  D_B->setVolume(KeyboardVol);
  D_B->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_E_clicked()
{
  QMediaPlayer * E = new QMediaPlayer();
  //E->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/E.wav"));
  E->setMedia(QUrl(E_Song));
  extern int KeyboardVol;
  E->setVolume(KeyboardVol);
  E->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_F_clicked()
{
  QMediaPlayer * F = new QMediaPlayer();
  //F->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/F.wav"));
  F->setMedia(QUrl(F_Song));
  extern int KeyboardVol;
  F->setVolume(KeyboardVol);
  F->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_F_B_clicked()
{
  QMediaPlayer * F_B = new QMediaPlayer();
  //F_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/F_B.wav"));
  F_B->setMedia(QUrl(F_B_Song));
  extern int KeyboardVol;
  F_B->setVolume(KeyboardVol);
  F_B->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_G_clicked()
{
  QMediaPlayer * G = new QMediaPlayer();
  //G->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/G.wav"));
  G->setMedia(QUrl(G_Song));
  extern int KeyboardVol;
  G->setVolume(KeyboardVol);
  G->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_G_B_clicked()
{
  QMediaPlayer * G_B = new QMediaPlayer();
  //G_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/G_B.wav"));
  G_B->setMedia(QUrl(G_B_Song));
  extern int KeyboardVol;
  G_B->setVolume(KeyboardVol);
  G_B->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_A_clicked()
{
  QMediaPlayer * A = new QMediaPlayer();
  //A->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/A.wav"));
  A->setMedia(QUrl(A_Song));
  extern int KeyboardVol;
  A->setVolume(KeyboardVol);
  A->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_A_B_clicked()
{
  QMediaPlayer * A_B = new QMediaPlayer();
  //A_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/A_B.wav"));
  A_B->setMedia(QUrl(A_B_Song));
  extern int KeyboardVol;
  A_B->setVolume(KeyboardVol);
  A_B->play();
  ui->NumLockLabel->setText("Click on \"NumLock\"");
  extern int NumLock;
  if (NumLock==10){
  NumLock=7;
  }
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_B_clicked()
{
  QMediaPlayer * B = new QMediaPlayer();
  //B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/B.wav"));
  B->setMedia(QUrl(B_Song));
  extern int KeyboardVol;
  B->setVolume(KeyboardVol);
  B->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_C2_clicked()
{
  QMediaPlayer * C2 = new QMediaPlayer();
  //C2->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/C2.wav"));
  C2->setMedia(QUrl(C2_Song));
  extern int KeyboardVol;
  C2->setVolume(KeyboardVol);
  C2->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_C2_B_clicked()
{
  QMediaPlayer * C2_B = new QMediaPlayer();
  //C2_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/C2_B.wav"));
  C2_B->setMedia(QUrl(C2_B_Song));
  extern int KeyboardVol;
  C2_B->setVolume(KeyboardVol);
  C2_B->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_D2_clicked()
{
  QMediaPlayer * D2 = new QMediaPlayer();
  //D2->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/D2.wav"));
  D2->setMedia(QUrl(D2_Song));
  extern int KeyboardVol;
  D2->setVolume(KeyboardVol);
  D2->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_D2_B_clicked()
{
  QMediaPlayer * D2_B = new QMediaPlayer();
  //D2_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/D2_B.wav"));
  D2_B->setMedia(QUrl(D2_B_Song));
  extern int KeyboardVol;
  D2_B->setVolume(KeyboardVol);
  D2_B->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_E2_clicked()
{
  QMediaPlayer * E2 = new QMediaPlayer();
  //E2->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/E2.wav"));
  E2->setMedia(QUrl(E2_Song));
  extern int KeyboardVol;
  E2->setVolume(KeyboardVol);
  E2->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_F2_clicked()
{
  QMediaPlayer * F2 = new QMediaPlayer();
  //F2->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/F2.wav"));
  F2->setMedia(QUrl(F2_Song));
  extern int KeyboardVol;
  F2->setVolume(KeyboardVol);
  F2->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_F2_B_clicked()
{
  QMediaPlayer * F2_B = new QMediaPlayer();
  //F2_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/F2_B.wav"));
  F2_B->setMedia(QUrl(F2_B_Song));
  extern int KeyboardVol;
  F2_B->setVolume(KeyboardVol);
  F2_B->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

void MusicBoard::on_G2_clicked()
{
  QMediaPlayer * G2 = new QMediaPlayer();
  //G2->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/G2.wav"));
  G2->setMedia(QUrl(G2_Song));
  extern int KeyboardVol;
  G2->setVolume(KeyboardVol);
  G2->play();
  if (isDemo==2){
      on_HiddenHideAllButton_clicked();
      isDemo=3;
      ui->Demo2->hide();
      ui->Demo3->show();
  }
}

// Percussion

QMediaPlayer * P1 = new QMediaPlayer();
QMediaPlayer * P2 = new QMediaPlayer();
QMediaPlayer * P3 = new QMediaPlayer();
QMediaPlayer * P4 = new QMediaPlayer();
QMediaPlayer * P5 = new QMediaPlayer();
QMediaPlayer * P6 = new QMediaPlayer();
QMediaPlayer * P7 = new QMediaPlayer();
QMediaPlayer * P8 = new QMediaPlayer();
QMediaPlayer * P9 = new QMediaPlayer();
QMediaPlayer * P11 = new QMediaPlayer();
QMediaPlayer * P12 = new QMediaPlayer();
QMediaPlayer * P13 = new QMediaPlayer();
QMediaPlayer * P14 = new QMediaPlayer();
QMediaPlayer * P15 = new QMediaPlayer();
QMediaPlayer * P16 = new QMediaPlayer();
QMediaPlayer * P17 = new QMediaPlayer();
QMediaPlayer * R1 = new QMediaPlayer();
QMediaPlayer * R2 = new QMediaPlayer();
QMediaPlayer * R3 = new QMediaPlayer();
QMediaPlayer * R4 = new QMediaPlayer();
QMediaPlayer * R5 = new QMediaPlayer();
QMediaPlayer * R6 = new QMediaPlayer();
QMediaPlayer * R7 = new QMediaPlayer();
QMediaPlayer * R8 = new QMediaPlayer();
QString P1_Song;
QString P2_Song;
QString P3_Song;
QString P4_Song;
QString P5_Song;
QString P6_Song;
QString P7_Song;
QString P8_Song;
QString P9_Song;
QString P11_Song;
QString P12_Song;
QString P13_Song;
QString P14_Song;
QString P15_Song;
QString P16_Song;
QString P17_Song;
QString R1_Song;
QString R2_Song;
QString R3_Song;
QString R4_Song;
QString R5_Song;
QString R6_Song;
QString R7_Song;
QString R8_Song;



void MusicBoard::on_P1_clicked()
{
  setButton=1;
  QMediaPlayer * P1 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P1 = new QMediaPlayer();
  //P1->setMedia(QUrl("qrc:/sounds/Percussion/Dubstep/Kick.wav"));
  P1->setMedia(QUrl(P1_Song));
  extern int P1_A;
  P1->setVolume(P1_A);
  P1->play();
  extern int NumLock;
  if (NumLock==10){
      ui->NumLockInfo->hide();
      ui->NmLkOnOff->setStyleSheet("color: rgb(255, 255, 255);background-color: rgba(136, 138, 133, 0);");
      ui->NmLkOnOff->setText("OFF");
      NumLock=0;
  }
  if (isDemo==4){
      on_HiddenHideAllButton_clicked();
     isDemo=5;
     ui->Demo4->hide();
     ui->Demo5->show();
  }
}

void MusicBoard::on_P2_clicked()
{ setButton=2;
  QMediaPlayer * P2 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P2 = new QMediaPlayer();
  //P2->setMedia(QUrl("qrc:/sounds/Percussion/Dubstep/Kick2.wav"));
  P2->setMedia(QUrl(P2_Song));
  extern int P2_A;
  P2->setVolume(P2_A);
  P2->play();
  if (isDemo==4){
      on_HiddenHideAllButton_clicked();
     isDemo=5;
     ui->Demo4->hide();
     ui->Demo5->show();
  }
}

void MusicBoard::on_P3_clicked()
{ setButton=3;
    if (isDemo==4){
        on_HiddenHideAllButton_clicked();
       isDemo=5;
       //ui->MBTerminal->setText("A intrat.");
       ui->Demo4->hide();
       ui->Demo5->show();
    }
  QMediaPlayer * P3 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P3 = new QMediaPlayer();
  //P3->setMedia(QUrl("qrc:/sounds/Percussion/Dubstep/Snare.wav"));
  P3->setMedia(QUrl(P3_Song));
  extern int P3_A;
  P3->setVolume(P3_A);
  P3->play();

}

void MusicBoard::on_P4_clicked()
{ setButton=4;
  QMediaPlayer * P4 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  P4->setMedia(QUrl(P4_Song));
  extern int P4_A;
  P4->setVolume(P4_A);
  P4->play();
  if (isDemo==4){
      on_HiddenHideAllButton_clicked();
     isDemo=5;
     ui->Demo4->hide();
     ui->Demo5->show();
  }
}

void MusicBoard::on_P5_clicked()
{ setButton=5;
  QMediaPlayer * P5 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P5 = new QMediaPlayer();
  //P5->setMedia(QUrl("qrc:/sounds/Dub_Selection/FX5.wav"));
  P5->setMedia(QUrl(P5_Song));
  extern int P5_A;
  P5->setVolume(P5_A);
  P5->play();
  if (isDemo==4){
      on_HiddenHideAllButton_clicked();
     isDemo=5;
     ui->Demo4->hide();
     ui->Demo5->show();
  }
}

void MusicBoard::on_P6_clicked()
{ setButton=6;
  QMediaPlayer * P6 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P6 = new QMediaPlayer();
  //P6->setMedia(QUrl("qrc:/sounds/Dub_Selection/DROP 07 Scos Sfarsit Scos.wav"));
  P6->setMedia(QUrl(P6_Song));
  extern int P6_A;
  P6->setVolume(P6_A);
  P6->play();
  if (isDemo==4){
      on_HiddenHideAllButton_clicked();
     isDemo=5;
     ui->Demo4->hide();
     ui->Demo5->show();
  }
}

void MusicBoard::on_P7_clicked()
{ setButton=7;
  QMediaPlayer * P7 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P7 = new QMediaPlayer();
  //P7->setMedia(QUrl("qrc:/sounds/Dub_Selection/006.wav"));
  P7->setMedia(QUrl(P7_Song));
  extern int P7_A;
  P7->setVolume(P7_A);
  P7->play();
  if (isDemo==4){
      on_HiddenHideAllButton_clicked();
     isDemo=5;
     ui->Demo4->hide();
     ui->Demo5->show();
  }
}

void MusicBoard::on_File1_clicked(const QModelIndex &index)
{
  QString sPath = dirmodel->fileInfo(index).absoluteFilePath();
  ui->File2->setRootIndex (filemodel->setRootPath(sPath));
}
int CheckWAV (QString a){
   QString v;
   int i;
   int n;
    n=a.length();
    for (i=0;i<=n;i=i+1){
          v[n-i]=a[i];
      }
    if (v[1]=='v' && v[2]=='a' && v[3]=='w' && v[4]=='.'){
        return 1;
      }
    else {
        return 0;
      }
}

int CheckMP3 (QString a){
   QString v;
   int i;
   int n;
    n=a.length();
    for (i=0;i<=n;i=i+1){
          v[n-i]=a[i];
      }
    if (v[1]=='3' && v[2]=='p' && v[3]=='m' && v[4]=='.'){
        return 1;
      }
    else {
        return 0;
      }
}

int CheckOgg (QString a){
   QString v;
   int i;
   int n;
    n=a.length();
    for (i=0;i<=n;i=i+1){
          v[n-i]=a[i];
      }
    if (v[1]=='g' && v[2]=='g' && v[3]=='o' && v[4]=='.'){
        return 1;
      }
    else {
        return 0;
      }
}

int CheckWma (QString a){
   QString v;
   int i;
   int n;
    n=a.length();
    for (i=0;i<=n;i=i+1){
          v[n-i]=a[i];
      }
    if (v[1]=='a' && v[2]=='m' && v[3]=='w' && v[4]=='.'){
        return 1;
      }
    else {
        return 0;
      }
}

int CheckAiff (QString a){
   QString v;
   int i;
   int n;
    n=a.length();
    for (i=0;i<=n;i=i+1){
          v[n-i]=a[i];
      }
    if (v[1]=='f' && v[2]=='f' && v[3]=='i' && v[4]=='a' && v[5]=='.'){
        return 1;
      }
    else {
        return 0;
      }
}

int CheckVox (QString a){
   QString v;
   int i;
   int n;
    n=a.length();
    for (i=0;i<=n;i=i+1){
          v[n-i]=a[i];
      }
    if (v[1]=='x' && v[2]=='o' && v[3]=='v' && v[4]=='.'){
        return 1;
      }
    else {
        return 0;
      }
}

int CheckFlac (QString a){
   QString v;
   int i;
   int n;
    n=a.length();
    for (i=0;i<=n;i=i+1){
          v[n-i]=a[i];
      }
    if (v[1]=='c' && v[2]=='a' && v[3]=='l' && v[4]=='f' && v[5]=='.'){
        return 1;
      }
    else {
        return 0;
      }
}
int CheckM4p (QString a){
    QString v;
    int i;
    int n;
    n=a.length();
    for (i=0;i<=n;i=i+1){
       v[n-i]=a[i];
    }
    if (v[1]=='p' && v[2]=='4' && v[3]=='m' && v[4]=='.'){
    return 1;
    }
    else {
    return 0;
    }
}

int CheckJpg (QString a){
    QString v;
    int i;
    int n;
    n=a.length();
    for (i=0;i<=n;i=i+1){
       v[n-i]=a[i];
    }
    if (v[1]=='g' && v[2]=='p' && v[3]=='j' && v[4]=='.'){
    return 1;
    }
    else {
    return 0;
    }
}

int Check3gp (QString a){
    QString v;
    int i;
    int n;
    n=a.length();
    for (i=0;i<=n;i=i+1){
       v[n-i]=a[i];
    }
    if (v[1]=='p' && v[2]=='g' && v[3]=='3' && v[4]=='.'){
    return 1;
    }
    else {
    return 0;
    }
}

int CheckAac (QString a){
   QString v;
   int i;
   int n;
    n=a.length();
    for (i=0;i<=n;i=i+1){
          v[n-i]=a[i];
      }
    if (v[1]=='c' && v[2]=='a' && v[3]=='a' && v[4]=='.'){
        return 1;
      }
    else {
        return 0;
      }
}

void MusicBoard::on_File2_clicked(const QModelIndex &index)
{
    QString FilePath = filemodel->fileInfo(index).absoluteFilePath();
    if (CheckWAV(FilePath)==1 || CheckMP3(FilePath)==1 || CheckOgg(FilePath)==1 || CheckM4p(FilePath)==1 || CheckWma(FilePath)==1 || CheckAiff(FilePath)==1 || CheckVox(FilePath)==1 || CheckFlac(FilePath)==1 || Check3gp(FilePath)==1 || CheckAac(FilePath)==1){
// Attribute the FilePath to the path of the meida of the button
        //ui->Error->setText("Button?");
        FilePath = "file://" + FilePath;
        ui->Path->setText(FilePath);
      //  /////if (setButton==1){P1->setMedia(QUrl("file://"+FilePath)); P1->play();}
        //if (setButton==1){P1->setMedia(QUrl("qrc:/sounds/Dub_Selection/DROP 07 Scos Sfarsit Scos.wav")); P1->play();}
        //if (setButton==1){P1_Song=FilePath;}
        if (setButton==1){P1_Song = FilePath; on_P1_clicked();}
        if (setButton==2){P2_Song = FilePath; on_P2_clicked();}
        if (setButton==3){P3_Song = FilePath; on_P3_clicked();}
        if (setButton==4){P4_Song = FilePath; on_P4_clicked();}
        if (setButton==5){P5_Song = FilePath; on_P5_clicked();}
        if (setButton==6){P6_Song = FilePath; on_P6_clicked();}
        if (setButton==7){P7_Song = FilePath; on_P7_clicked();}
        if (setButton==8){P8_Song = FilePath; on_P8_clicked();}
        if (setButton==9){P9_Song = FilePath; on_P9_clicked();}
        if (setButton==11){P11_Song = FilePath; on_P11_clicked();}
        if (setButton==12){P12_Song = FilePath; on_P12_clicked();}
        if (setButton==13){P13_Song = FilePath; on_P13_clicked();}
        if (setButton==14){P14_Song = FilePath; on_P14_clicked();}
        if (setButton==15){P15_Song = FilePath; on_P15_clicked();}
        if (setButton==16){P16_Song = FilePath; on_P16_clicked();}
        if (setButton==17){P17_Song = FilePath; on_P17_clicked();}
        if (setButton==19){R1_Song = FilePath; on_R1_clicked();}
        if (setButton==20){R2_Song = FilePath; on_R2_clicked();}
        if (setButton==21){R3_Song = FilePath; on_R3_clicked();}
        if (setButton==22){R4_Song = FilePath; on_R4_clicked();}
        if (setButton==23){R5_Song = FilePath; on_R5_clicked();}
        if (setButton==24){R6_Song = FilePath; on_R6_clicked();}
        if (setButton==25){R7_Song = FilePath; on_R7_clicked();}
        if (setButton==26){R8_Song = FilePath; on_R8_clicked();}

        // Se Poate cu buton?
        setButton=0;
        ui->Error->setText("Set");
      }
//    if (CheckJpg(FilePath)==1) {
//        QDir dir("/home/n/Downloads/Project_8_9_MusicBoard/Project_9_1_4_Last_WIthout_Help_File_Formats_Maked_JKL_Keys_Did_Not_Compile_Help_About_Last_Settings_NumLock_On_Off_Master_Set_Without_Rec_With");
//        FilePath=dir.relativeFilePath(FilePath);
//        ui->Path->setText(FilePath);

//        if (setButton==1){
//            //FilePath = ":" + FilePath;
//            ui->P1->setStyleSheet("background-image: url(:/pictures/Presets.jpg); image: url(:/pictures/Presets.jpg); background-color: rgb(136, 138, 133);  color: rgb(255, 255, 255);");
////            QPixmap pixmap(FilePath);
////            QIcon P1Ic(pixmap);
////            ui->P1->setIcon(P1Ic);
////            ui->P1->setIconSize(pixmap.rect().size());
//        }
//    }
        else {
        ui->Error->setText("Error");
      }
}

void MusicBoard::on_P8_clicked()
{ setButton=8;
  QMediaPlayer * P8 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P8 = new QMediaPlayer();
  P8->setMedia(QUrl(P8_Song));
  extern int P8_A;
  P8->setVolume(P8_A);
  P8->play();
  if (isDemo==4){
      on_HiddenHideAllButton_clicked();
     isDemo=5;
     ui->Demo4->hide();
     ui->Demo5->show();
  }
}

void MusicBoard::on_P9_clicked()
{ setButton=9;
  QMediaPlayer * P9 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P9 = new QMediaPlayer();
  P9->setMedia(QUrl(P9_Song));
  extern int P9_A;
  P9->setVolume(P9_A);
  P9->play();
  if (isDemo==4){
      on_HiddenHideAllButton_clicked();
     isDemo=5;
     ui->Demo4->hide();
     ui->Demo5->show();
  }
}

void MusicBoard::on_P10_clicked()
{   //Have to have those?
    //setButton=10;
    //ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P10 = new QMediaPlayer();
    //P10->play();
   int k=0;
   extern int NumLock;
   if (NumLock==0){
        NumLock=1;
        ui->NmLkOnOff->setStyleSheet("background-color: rgba(255, 255, 255, 0);color: rgb(239, 41, 41);");
        ui->NmLkOnOff->setText("ON");
        ui->UnderOn->show();
        k=1;
    }
    if (NumLock==1 && k==0) {
        ui->NmLkOnOff->setStyleSheet("color: rgb(255, 255, 255);background-color: rgba(136, 138, 133, 0);");
        ui->NmLkOnOff->setText("OFF");
        ui->UnderOn->hide();
        NumLock=0;
    }
    if (NumLock==7){
        ui->NumLockInfo->hide();
        ui->NmLkOnOff->setText("OFF");
        ui->NmLkOnOff->setStyleSheet("color: rgb(255, 255, 255);background-color: rgba(136, 138, 133, 0);");
        NumLock=0;
        k=1;
    }
    //ui->Time->setText(QString::number(NumLock));
    k=1;
}

void MusicBoard::on_P11_clicked()
{
    setButton=11;
    QMediaPlayer * P11 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P11 = new QMediaPlayer();
    P11->setMedia(QUrl(P11_Song));
    extern int P11_A;
    P11->setVolume(P11_A);
    P11->play();
    if (isDemo==4){
        on_HiddenHideAllButton_clicked();
       isDemo=5;
       ui->Demo4->hide();
       ui->Demo5->show();
    }
}

void MusicBoard::on_P12_clicked()
{
    setButton=12;
    QMediaPlayer * P12 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P12 = new QMediaPlayer();
    P12->setMedia(QUrl(P12_Song));
    extern int P12_A;
    P12->setVolume(P12_A);
    P12->play();
    if (isDemo==4){
        on_HiddenHideAllButton_clicked();
       isDemo=5;
       ui->Demo4->hide();
       ui->Demo5->show();
    }
}

void MusicBoard::on_P13_clicked()
{
    setButton=13;
    QMediaPlayer * P13 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P13 = new QMediaPlayer();
    P13->setMedia(QUrl(P13_Song));
    extern int P13_A;
    P13->setVolume(P13_A);
    P13->play();
    if (isDemo==4){
        on_HiddenHideAllButton_clicked();
       isDemo=5;
       ui->Demo4->hide();
       ui->Demo5->show();
    }
}

void MusicBoard::on_P14_clicked()
{
    setButton=14;
    QMediaPlayer * P14 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P14 = new QMediaPlayer();
    P14->setMedia(QUrl(P14_Song));
    extern int P14_A;
    P14->setVolume(P14_A);
    P14->play();
    if (isDemo==4){
        on_HiddenHideAllButton_clicked();
       isDemo=5;
       ui->Demo4->hide();
       ui->Demo5->show();
    }
}

void MusicBoard::on_P15_clicked()
{
    setButton=15;
    QMediaPlayer * P15 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P15 = new QMediaPlayer();
    P15->setMedia(QUrl(P15_Song));
    extern int P15_A;
    P15->setVolume(P15_A);
    P15->play();
    if (isDemo==4){
        on_HiddenHideAllButton_clicked();
       isDemo=5;
       ui->Demo4->hide();
       ui->Demo5->show();
    }
}

void MusicBoard::on_P16_clicked()
{
    setButton=16;
    QMediaPlayer * P16 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P16 = new QMediaPlayer();
    P16->setMedia(QUrl(P16_Song));
    extern int P16_A;
    P16->setVolume(P16_A);
    P16->play();
    if (isDemo==4){
        on_HiddenHideAllButton_clicked();
       isDemo=5;
       ui->Demo4->hide();
       ui->Demo5->show();
    }
}

void MusicBoard::on_P17_clicked()
{
    setButton=17;
    QMediaPlayer * P17 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P17 = new QMediaPlayer();
    P17->setMedia(QUrl(P17_Song));
    extern int P17_A;
    P17->setVolume(P17_A);
    P17->play();
    if (isDemo==4){
       on_HiddenHideAllButton_clicked();
       isDemo=5;
       ui->Demo4->hide();
       ui->Demo5->show();
    }
}

void MusicBoard::on_Close_clicked()
{
    delete ui;
    //on_CloseButton_clicked();
}

void MusicBoard::on_Close_released()
{
    delete ui;
}

// Rhythms

//int Rhythm;
//Rhythm=0;

void MusicBoard::on_R1_clicked()
{
  R2->setMedia(QUrl("qrc:/sounds/Silance.wav"));
  R2->pause();
  setButton=19;
  QMediaPlayer * R1 = new QMediaPlayer();
  ui->Error->setText("R1");
  //QMediaPlayer * P17 = new QMediaPlayer();
  extern int R1_A;
  R1->setVolume(R1_A);
  R1->setMedia(QUrl(R1_Song));
  R1->play();
}

void MusicBoard::on_R2_clicked()
{
    setButton=20;
    QMediaPlayer * R2 = new QMediaPlayer();
    ui->Rhythm2->show();
    on_StartRhythm_clicked();
    ui->Error->setText("R2");
    R2->setMedia(QUrl(R2_Song));
    extern int R2_A;
    R2->setVolume(R2_A);
    R2->play();
   // if (isRhythm2==0){
    //isRhythm2=1;
    //}
   // else {
    //ui->Rhythm2->hide();
    //isRhythm2=0;
    //}
    if (isDemo==5){
        on_HiddenHideAllButton_clicked();
        isDemo=6;
        ui->Demo5->hide();
        ui->Demo6->show();
    }
}

void MusicBoard::on_R3_clicked()
{
    setButton=21;
    QMediaPlayer * R3 = new QMediaPlayer();
    ui->Error->setText("R3");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R3->setMedia(QUrl(R3_Song));
    extern int R3_A;
    R3->setVolume(R3_A);
    R3->play();
    if (isDemo==5){
        on_HiddenHideAllButton_clicked();
        isDemo=6;
        ui->Demo5->hide();
        ui->Demo6->show();
    }
}

void MusicBoard::on_R4_clicked()
{
    setButton=22;
    QMediaPlayer * R4 = new QMediaPlayer();
    ui->Error->setText("R4");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R4->setMedia(QUrl(R4_Song));
    extern int R4_A;
    R4->setVolume(R4_A);
    R4->play();
    if (isDemo==5){
        on_HiddenHideAllButton_clicked();
        isDemo=6;
        ui->Demo5->hide();
        ui->Demo6->show();
    }
}

void MusicBoard::on_R5_clicked()
{
    setButton=23;
    QMediaPlayer * R5 = new QMediaPlayer();
    ui->Error->setText("R5");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R5->setMedia(QUrl(R5_Song));
    extern int R5_A;
    R5->setVolume(R5_A);
    R5->play();
    if (isDemo==5){
        on_HiddenHideAllButton_clicked();
        isDemo=6;
        ui->Demo5->hide();
        ui->Demo6->show();
    }
}

void MusicBoard::on_R6_clicked()
{
    setButton=24;
    QMediaPlayer * R6 = new QMediaPlayer();
    ui->Error->setText("R6");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R6->setMedia(QUrl(R6_Song));
    extern int R6_A;
    R6->setVolume(R6_A);
    R6->play();
    if (isDemo==5){
        on_HiddenHideAllButton_clicked();
        isDemo=6;
        ui->Demo5->hide();
        ui->Demo6->show();
    }
}

void MusicBoard::on_R7_clicked()
{
    setButton=25;
    QMediaPlayer * R7 = new QMediaPlayer();
    ui->Error->setText("R7");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R7->setMedia(QUrl(R7_Song));
    extern int R7_A;
    R7->setVolume(R7_A);
    R7->play();
    if (isDemo==5){
        on_HiddenHideAllButton_clicked();
        isDemo=6;
        ui->Demo5->hide();
        ui->Demo6->show();
    }
}

void MusicBoard::on_R8_clicked()
{
    setButton=26;
    QMediaPlayer * R8 = new QMediaPlayer();
    ui->Error->setText("R8");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R8->setMedia(QUrl(R8_Song));
    extern int R8_A;
    R8->setVolume(R8_A);
    R8->play();
    if (isDemo==5){
        on_HiddenHideAllButton_clicked();
        isDemo=6;
        ui->Demo5->hide();
        ui->Demo6->show();
    }
}

void MusicBoard::on_K2_clicked()
{
    if (isDemo==1){
        on_HiddenHideAllButton_clicked();
        ui->Demo1->hide();
        ui->Demo2->show();
        isDemo=2;
//        if (isDemo==5){
//            isDemo=6;
//            ui->Demo5->hide();
//            ui->Demo6->show();
//        }
    }
C_Song="qrc:/sounds/Keyboards/Keyboard2/2C.wav";
C_B_Song="qrc:/sounds/Keyboards/Keyboard2/2C_B.wav";
D_Song="qrc:/sounds/Keyboards/Keyboard2/2D.wav";
D_B_Song="qrc:/sounds/Keyboards/Keyboard2/2D_B.wav";
E_Song="qrc:/sounds/Keyboards/Keyboard2/2E.wav";
F_Song="qrc:/sounds/Keyboards/Keyboard2/2F.wav";
F_B_Song="qrc:/sounds/Keyboards/Keyboard2/2F_B.wav";
G_Song="qrc:/sounds/Keyboards/Keyboard2/2G.wav";
G_B_Song="qrc:/sounds/Keyboards/Keyboard2/2G_B.wav";
A_Song="qrc:/sounds/Keyboards/Keyboard2/2A.wav";
A_B_Song="qrc:/sounds/Keyboards/Keyboard2/2A_B.wav";
B_Song="qrc:/sounds/Keyboards/Keyboard2/2B.wav";
C2_Song="qrc:/sounds/Keyboards/Keyboard2/2C2.wav";
C2_B_Song="qrc:/sounds/Keyboards/Keyboard2/2C2_B.wav";
D2_Song="qrc:/sounds/Keyboards/Keyboard2/2D2.wav";
D2_B_Song="qrc:/sounds/Keyboards/Keyboard2/2D2_B.wav";
E2_Song="qrc:/sounds/Keyboards/Keyboard2/2E2.wav";
F2_Song="qrc:/sounds/Keyboards/Keyboard2/2F2.wav";
F2_B_Song="qrc:/sounds/Keyboards/Keyboard2/2F2_B.wav";
G2_Song="qrc:/sounds/Keyboards/Keyboard2/2G2.wav";

}

void MusicBoard::on_K1_clicked()
{
    if (isDemo==1){
        on_HiddenHideAllButton_clicked();
        ui->Demo1->hide();
        ui->Demo2->show();
        isDemo=2;
    }
  C_Song="qrc:/sounds/PianoSounds/Edit/C.wav";
  C_B_Song="qrc:/sounds/PianoSounds/Edit/C_B.wav";
  D_Song="qrc:/sounds/PianoSounds/Edit/D.wav";
  D_B_Song="qrc:/sounds/PianoSounds/Edit/D_B.wav";
  E_Song="qrc:/sounds/PianoSounds/Edit/E.wav";
  F_Song="qrc:/sounds/PianoSounds/Edit/F.wav";
  F_B_Song="qrc:/sounds/PianoSounds/Edit/F_B.wav";
  G_Song="qrc:/sounds/PianoSounds/Edit/G.wav";
  G_B_Song="qrc:/sounds/PianoSounds/Edit/G_B.wav";
  A_Song="qrc:/sounds/PianoSounds/Edit/A.wav";
  A_B_Song="qrc:/sounds/PianoSounds/Edit/A_B.wav";
  B_Song="qrc:/sounds/PianoSounds/Edit/B.wav";
  C2_Song="qrc:/sounds/PianoSounds/Edit/C2.wav";
  C2_B_Song="qrc:/sounds/PianoSounds/Edit/C2_B.wav";
  D2_Song="qrc:/sounds/PianoSounds/Edit/D2.wav";
  D2_B_Song="qrc:/sounds/PianoSounds/Edit/D2_B.wav";
  E2_Song="qrc:/sounds/PianoSounds/Edit/E2.wav";
  F2_Song="qrc:/sounds/PianoSounds/Edit/F2.wav";
  F2_B_Song="qrc:/sounds/PianoSounds/Edit/F2_B.wav";
  G2_Song="qrc:/sounds/PianoSounds/Edit/G2.wav";

}

void MusicBoard::on_K3_clicked()
{
  on_K4_clicked();
  if (isDemo==1){
      on_HiddenHideAllButton_clicked();
      ui->Demo1->hide();
      ui->Demo2->show();
      isDemo=2;
  }
//  C_Song="qrc:/sounds/Keyboards/Keyboard3/3_C.wav";
//  C_B_Song="qrc:/sounds/Keyboards/Keyboard3/4_CB.wav";
//  D_Song="qrc:/sounds/Keyboards/Keyboard3/5_D.wav";
//  D_B_Song="qrc:/sounds/Keyboards/Keyboard3/6_DB.wav";
//  E_Song="qrc:/sounds/Keyboards/Keyboard3/7_E.wav";
//  F_Song="qrc:/sounds/Keyboards/Keyboard3/8_F.wav";
//  F_B_Song="qrc:/sounds/Keyboards/Keyboard3/9_FB.wav";
//  G_Song="qrc:/sounds/Keyboards/Keyboard3/10_G.wav";
//  G_B_Song="qrc:/sounds/Keyboards/Keyboard3/11_GB.wav";
//  A_Song="qrc:/sounds/Keyboards/Keyboard3/12_A.wav";
//  A_B_Song.="qrc:/sounds/Keyboards/Keyboard3/13_AB.wav";
//  B_Song="qrc:/sounds/Keyboards/Keyboard3/14_B.wav";
//  C2_Song="qrc:/sounds/Keyboards/Keyboard3/15_C.wav";
//  C2_B_Song="qrc:/sounds/Keyboards/Keyboard3/16_CB.wav";
//  D2_Song="qrc:/sounds/Keyboards/Keyboard3/17_D.wav";
//  D2_B_Song="qrc:/sounds/Keyboards/Keyboard3/17_1_DB.wav";
//  E2_Song="qrc:/sounds/Keyboards/Keyboard3/19_E.wav";
//  F2_Song="qrc:/sounds/Keyboards/Keyboard3/20_F.wav";
//  F2_B_Song="qrc:/sounds/Keyboards/Keyboard3/21_FB.wav";
//  G2_Song="qrc:/sounds/Keyboards/Keyboard3/23_G.wav";
}

void MusicBoard::on_K4_clicked()
{
  C_Song="qrc:/sounds/Keyboards/Keyboard4/4_1_C.wav";
  C_B_Song="qrc:/sounds/Keyboards/Keyboard4/4_2_CB.wav";
  D_Song="qrc:/sounds/Keyboards/Keyboard4/4_3_D.wav";
  D_B_Song="qrc:/sounds/Keyboards/Keyboard4/4_4_DB.wav";
  E_Song="qrc:/sounds/Keyboards/Keyboard4/4_5_E.wav";
  F_Song="qrc:/sounds/Keyboards/Keyboard4/4_6_F.wav";
  F_B_Song="qrc:/sounds/Keyboards/Keyboard4/4_7_FB.wav";
  G_Song="qrc:/sounds/Keyboards/Keyboard4/4_8_G.wav";
  G_B_Song="qrc:/sounds/Keyboards/Keyboard4/4_9_GB.wav";
  A_Song="qrc:/sounds/Keyboards/Keyboard4/4_10_A.wav";
  A_B_Song="qrc:/sounds/Keyboards/Keyboard4/4_11_AB.wav";
  B_Song="qrc:/sounds/Keyboards/Keyboard4/4_12_B.wav";
  C2_Song="qrc:/sounds/Keyboards/Keyboard4/4_13_C.wav";
  C2_B_Song="qrc:/sounds/Keyboards/Keyboard4/4_14_CB.wav";
  D2_Song="qrc:/sounds/Keyboards/Keyboard4/4_15_D.wav";
  D2_B_Song="qrc:/sounds/Keyboards/Keyboard4/4_16_1_DB.wav";
  E2_Song="qrc:/sounds/Keyboards/Keyboard4/4_17_E.wav";
  F2_Song="qrc:/sounds/Keyboards/Keyboard4/4_17_1_F.wav";
  F2_B_Song="qrc:/sounds/Keyboards/Keyboard4/4_19_FB.wav";
  G2_Song="qrc:/sounds/Keyboards/Keyboard4/4_20_G.wav";
}

void MusicBoard::on_AboutClose_clicked()
{
    ui->About->hide();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    ///isThemeEdit=0;// aici Gelu
    isClearEdit=0;
    isAbout=0;
}

void MusicBoard::on_AboutButton_clicked()
{
    if (isAbout==0){
    ui->About->show();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isAbout=1;
    }
    else {
    ui->About->hide();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isAbout=0;
    }
}

void MusicBoard::on_Set1_clicked()
{   /// Sa ramana keyboard?
    ///on_K1_clicked();
    //ui->Set1->setStyleSheet("color: rgb(255, 255, 255);background-image: url(:/pictures/Sets1.png);image: url(:/pictures/Sets1.png);background-color: rgba(159, 138, 252, 153);border-color: rgba(159, 138, 252, 153);");
    P1_Song="qrc:/sounds/Dub_Selection/TMS3_NuKick_165.wav";
    P2_Song="qrc:/sounds/Dub_Selection/TMS3_Snare_002.wav";
    P3_Song="qrc:/sounds/Dub_Selection/Orchestra Hit 001 Revved.wav";
    P4_Song="qrc:/sounds/Dub_Selection/Bass Drop (Extended) (Louder).wav";
    P5_Song="qrc:/sounds/Dub_Selection/ufx_imp_atomic.wav";
    P6_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_01.wav";
    P7_Song="qrc:/sounds/Dub_Selection/FX4.wav";
    P8_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_04.wav";
    P9_Song="qrc:/sounds/Dub_Selection/Build Up 01.wav";
    P11_Song="qrc:/sounds/Dub_Selection/FILTER DOWN 32.wav";
    P12_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_09.wav";
    P13_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_03.wav";
    P14_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_01.wav";
    P15_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_14.wav";
    P16_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_02.wav";
    P17_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_07.wav";
    R3_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_13.wav";
    R4_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_12.wav";
    R5_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_10.wav";
    R6_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_04.wav";
    R7_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_017.wav";
    R8_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_06.wav";


    if (isDemo==3){
    on_HiddenHideAllButton_clicked();
    isDemo=4;
    ui->Demo3->hide();
    ui->Demo4->show();
    }

    //extern QString P1_R;
    ui->P1->setText("Kick");
    ui->P1->setShortcut(Qt::Key_Home);

    //extern QString P2_R;
    ui->P2->setText("Snare");
    ui->P2->setShortcut(Qt::Key_Up);


    //extern QString P3_R;
    ui->P3->setText("Orch");
    ui->P3->setShortcut(Qt::Key_PageUp);

    //extern QString P4_R;
    ui->P4->setText("Drop");
    ui->P4->setShortcut(Qt::Key_Left);

    //extern QString P5_R;
    ui->P5->setText("Bam");
    ui->P5->setShortcut(Qt::Key_Clear);

    //extern QString P6_R;
    ui->P6->setText("Rpt");
    ui->P6->setShortcut(Qt::Key_Right);

    //extern QString P7_R;
    ui->P7->setText("Wom");
    ui->P7->setShortcut(Qt::Key_End);

    //extern QString P8_R;
    ui->P8->setText("Lift");
    ui->P8->setShortcut(Qt::Key_Down);

    //extern QString P9_R;
    ui->P9->setText("Pass");
    ui->P9->setShortcut(Qt::Key_PageDown);

    //extern QString P10_R;
    ui->P10->setText("NmLk");
    ui->P10->setShortcut(Qt::Key_NumLock);

    //extern QString P11_R;
    ui->P11->setText("Down");
    ui->P11->setShortcut(Qt::Key_Slash);

    //extern QString P12_R;
    ui->P12->setText("Wbl");
    ui->P12->setShortcut(Qt::Key_Asterisk);

    //extern QString P13_R;
    ui->P13->setText("Wbl");
    ui->P13->setShortcut(Qt::Key_Minus);

    //extern QString P14_R;
    ui->P14->setText("UpDn");
    ui->P14->setShortcut(Qt::Key_Plus);

    //extern QString P15_R;
    ui->P15->setText("Lift");
    ui->P15->setShortcut(Qt::Key_Enter);

    //extern QString P16_R;
    ui->P16->setText("Low");
    ui->P16->setShortcut(Qt::Key_Insert);

    //extern QString P17_R;
    ui->P17->setText("Wbl");
    ui->P17->setShortcut(Qt::Key_Delete);

    ui->C->setShortcut(Qt::Key_Q);
    ui->C_B->setShortcut(Qt::Key_2);
    ui->D->setShortcut(Qt::Key_W);
    ui->D_B->setShortcut(Qt::Key_3);
    ui->E->setShortcut(Qt::Key_E);
    ui->F->setShortcut(Qt::Key_R);
    ui->F_B->setShortcut(Qt::Key_5);
    ui->G->setShortcut(Qt::Key_T);
    ui->G_B->setShortcut(Qt::Key_6);
    ui->A->setShortcut(Qt::Key_Y);
    ui->A_B->setShortcut(Qt::Key_7);
    ui->B->setShortcut(Qt::Key_U);
    ui->C2->setShortcut(Qt::Key_I);
    ui->C2_B->setShortcut(Qt::Key_9);
    ui->D2->setShortcut(Qt::Key_O);
    ui->D2_B->setShortcut(Qt::Key_0);
    ui->E2->setShortcut(Qt::Key_P);
    ui->F2->setShortcut(Qt::Key_BracketLeft);// " [ " Cum e?
    ui->F2_B->setShortcut(Qt::Key_Equal);
    //ui->F2_B->setShortcut(Qt::Key_BracketRight);// " ] " Cum e?
    ui->R2->setShortcut(Qt::Key_S);
    ui->R3->setShortcut(Qt::Key_D);
    ui->R4->setShortcut(Qt::Key_F);
    ui->R5->setShortcut(Qt::Key_Z);
    ui->R6->setShortcut(Qt::Key_X);
    ui->R7->setShortcut(Qt::Key_C);
    ui->R8->setShortcut(Qt::Key_V);
}

void MusicBoard::on_Set2_clicked()
{ /// Sa ramana keyboard?
  ///on_K2_clicked();
  P1_Song="qrc:/sounds/Dub_Selection/TMS3_NuKick_165.wav";
  P2_Song="qrc:/sounds/Dub_Selection/TMS3_Snare_002.wav";
  P3_Song="qrc:/sounds/Dub_Selection/FX4.wav";
  P4_Song="qrc:/sounds/Dub_Selection/Orchestra Hit 001 Revved.wav";
  P5_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_07.wav";
  P6_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_08.wav";
  P7_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_09.wav";
  P8_Song="qrc:/sounds/Dub_Selection/Bass Drop (Extended) (Louder).wav";
  ;P9_Song="qrc:/sounds/Dub_Selection/FX5.wav";
  P11_Song="qrc:/sounds/Dub_Selection/ufx_imp_atomic.wav";
  P12_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_01.wav";
  P13_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_02.wav";
  P14_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_03.wav";
  P15_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_04.wav";
  P16_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_05.wav";
  P17_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_06.wav";
  R3_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_17.wav";
  R4_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_16.wav";
  R5_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_15.wav";
  R6_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_14.wav";
  R7_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_13.wav";
  R8_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_12.wav";

  if (isDemo==3){
  on_HiddenHideAllButton_clicked();
  isDemo=4;
  ui->Demo3->hide();
  ui->Demo4->show();
  }

  //extern QString P1_R;
  ui->P1->setText("Kick");
  ui->P1->setShortcut(Qt::Key_Home);

  //extern QString P2_R;
  ui->P2->setText("Snare");
  ui->P2->setShortcut(Qt::Key_Up);


  //extern QString P3_R;
  ui->P3->setText("Wom");
  ui->P3->setShortcut(Qt::Key_PageUp);

  //extern QString P4_R;
  ui->P4->setText("Orch");
  ui->P4->setShortcut(Qt::Key_Left);

  //extern QString P5_R;
  ui->P5->setText("Rpt");
  ui->P5->setShortcut(Qt::Key_Clear);

  //extern QString P6_R;
  ui->P6->setText("Wbl");
  ui->P6->setShortcut(Qt::Key_Right);

  //extern QString P7_R;
  ui->P7->setText("Low");
  ui->P7->setShortcut(Qt::Key_End);

  //extern QString P8_R;
  ui->P8->setText("Drop");
  ui->P8->setShortcut(Qt::Key_Down);

  //extern QString P9_R;
  ui->P9->setText("Clk");
  ui->P9->setShortcut(Qt::Key_PageDown);

  //extern QString P10_R;
  ui->P10->setText("NmLk");
  ui->P10->setShortcut(Qt::Key_NumLock);

  //extern QString P11_R;
  ui->P11->setText("Bam");
  ui->P11->setShortcut(Qt::Key_Slash);

  //extern QString P12_R;
  ui->P12->setText("Wbl");
  ui->P12->setShortcut(Qt::Key_Asterisk);

  //extern QString P13_R;
  ui->P13->setText("Lift");
  ui->P13->setShortcut(Qt::Key_Minus);

  //extern QString P14_R;
  ui->P14->setText("UpDn");
  ui->P14->setShortcut(Qt::Key_Plus);

  //extern QString P15_R;
  ui->P15->setText("Lift");
  ui->P15->setShortcut(Qt::Key_Enter);

  //extern QString P16_R;
  ui->P16->setText("Low");
  ui->P16->setShortcut(Qt::Key_Insert);

  //extern QString P17_R;
  ui->P17->setText("Wbl");
  ui->P17->setShortcut(Qt::Key_Delete);

  ui->C->setShortcut(Qt::Key_Q);
  ui->C_B->setShortcut(Qt::Key_2);
  ui->D->setShortcut(Qt::Key_W);
  ui->D_B->setShortcut(Qt::Key_3);
  ui->E->setShortcut(Qt::Key_E);
  ui->F->setShortcut(Qt::Key_R);
  ui->F_B->setShortcut(Qt::Key_5);
  ui->G->setShortcut(Qt::Key_T);
  ui->G_B->setShortcut(Qt::Key_6);
  ui->A->setShortcut(Qt::Key_Y);
  ui->A_B->setShortcut(Qt::Key_7);
  ui->B->setShortcut(Qt::Key_U);
  ui->C2->setShortcut(Qt::Key_I);
  ui->C2_B->setShortcut(Qt::Key_9);
  ui->D2->setShortcut(Qt::Key_O);
  ui->D2_B->setShortcut(Qt::Key_0);
  ui->E2->setShortcut(Qt::Key_P);
  ui->F2->setShortcut(Qt::Key_BracketLeft);// " [ " Cum e?
  ui->F2_B->setShortcut(Qt::Key_Equal);
  //ui->F2_B->setShortcut(Qt::Key_BracketRight);// " ] " Cum e?
  ui->R2->setShortcut(Qt::Key_S);
  ui->R3->setShortcut(Qt::Key_D);
  ui->R4->setShortcut(Qt::Key_F);
  ui->R5->setShortcut(Qt::Key_Z);
  ui->R6->setShortcut(Qt::Key_X);
  ui->R7->setShortcut(Qt::Key_C);
  ui->R8->setShortcut(Qt::Key_V);
}

void MusicBoard::on_Set3_clicked()
{ /// Sa ramana keyboard?
  ///on_K3_clicked();
  P1_Song="qrc:/sounds/Dub_Selection/Bass Drop (Extended) (Louder).wav";
  P2_Song="qrc:/sounds/Dub_Selection/Build Up 01.wav";
  P3_Song="qrc:/sounds/Dub_Selection/DROP 07 Scos Sfarsit Scos.wav";
  P4_Song="qrc:/sounds/Dub_Selection/FILTER DOWN 32.wav";
  P5_Song="qrc:/sounds/Dub_Selection/FX4.wav";
  P6_Song="qrc:/sounds/Dub_Selection/Orchestra Hit 001 Revved.wav";
  P7_Song="qrc:/sounds/Dub_Selection/ufx_imp_atomic.wav";
  P8_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_01.wav";
  P9_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_14.wav";
  P11_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_17.wav";
  P12_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_03.wav";
  P13_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_04.wav";
  P14_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_07.wav";
  P15_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_09.wav";
  P16_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_08.wav";
  P17_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_10.wav";
  R3_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_02.wav";
  R4_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_05.wav";
  R5_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_06.wav";
  R6_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_11.wav";
  R7_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_12.wav";
  R8_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_13.wav";

  if (isDemo==3){
  on_HiddenHideAllButton_clicked();
  isDemo=4;
  ui->Demo3->hide();
  ui->Demo4->show();
  }

  //extern QString P1_R;
  ui->P1->setText("Drop");
  ui->P1->setShortcut(Qt::Key_Home);

  //extern QString P2_R;
  ui->P2->setText("Pass");
  ui->P2->setShortcut(Qt::Key_Up);


  //extern QString P3_R;
  ui->P3->setText("Lock");
  ui->P3->setShortcut(Qt::Key_PageUp);

  //extern QString P4_R;
  ui->P4->setText("Down");
  ui->P4->setShortcut(Qt::Key_Left);

  //extern QString P5_R;
  ui->P5->setText("Wom");
  ui->P5->setShortcut(Qt::Key_Clear);

  //extern QString P6_R;
  ui->P6->setText("Orch");
  ui->P6->setShortcut(Qt::Key_Right);

  //extern QString P7_R;
  ui->P7->setText("Bam");
  ui->P7->setShortcut(Qt::Key_End);

  //extern QString P8_R;
  ui->P8->setText("Wbl");
  ui->P8->setShortcut(Qt::Key_Down);

  //extern QString P9_R;
  ui->P9->setText("Lift");
  ui->P9->setShortcut(Qt::Key_PageDown);

  //extern QString P10_R;
  ui->P10->setText("NmLk");
  ui->P10->setShortcut(Qt::Key_NumLock);

  //extern QString P11_R;
  ui->P11->setText("UpDn");
  ui->P11->setShortcut(Qt::Key_Slash);

  //extern QString P12_R;
  ui->P12->setText("Wbl");
  ui->P12->setShortcut(Qt::Key_Asterisk);

  //extern QString P13_R;
  ui->P13->setText("Lift");
  ui->P13->setShortcut(Qt::Key_Minus);

  //extern QString P14_R;
  ui->P14->setText("Rpt");
  ui->P14->setShortcut(Qt::Key_Plus);

  //extern QString P15_R;
  ui->P15->setText("Low");
  ui->P15->setShortcut(Qt::Key_Enter);

  //extern QString P16_R;
  ui->P16->setText("Tble");
  ui->P16->setShortcut(Qt::Key_Insert);

  //extern QString P17_R;
  ui->P17->setText("Wbl");
  ui->P17->setShortcut(Qt::Key_Delete);

  ui->C->setShortcut(Qt::Key_Q);
  ui->C_B->setShortcut(Qt::Key_2);
  ui->D->setShortcut(Qt::Key_W);
  ui->D_B->setShortcut(Qt::Key_3);
  ui->E->setShortcut(Qt::Key_E);
  ui->F->setShortcut(Qt::Key_R);
  ui->F_B->setShortcut(Qt::Key_5);
  ui->G->setShortcut(Qt::Key_T);
  ui->G_B->setShortcut(Qt::Key_6);
  ui->A->setShortcut(Qt::Key_Y);
  ui->A_B->setShortcut(Qt::Key_7);
  ui->B->setShortcut(Qt::Key_U);
  ui->C2->setShortcut(Qt::Key_I);
  ui->C2_B->setShortcut(Qt::Key_9);
  ui->D2->setShortcut(Qt::Key_O);
  ui->D2_B->setShortcut(Qt::Key_0);
  ui->E2->setShortcut(Qt::Key_P);
  ui->F2->setShortcut(Qt::Key_BracketLeft);// " [ " Cum e?
  ui->F2_B->setShortcut(Qt::Key_Equal);
  //ui->F2_B->setShortcut(Qt::Key_BracketRight);// " ] " Cum e?
  ui->R2->setShortcut(Qt::Key_S);
  ui->R3->setShortcut(Qt::Key_D);
  ui->R4->setShortcut(Qt::Key_F);
  ui->R5->setShortcut(Qt::Key_Z);
  ui->R6->setShortcut(Qt::Key_X);
  ui->R7->setShortcut(Qt::Key_C);
  ui->R8->setShortcut(Qt::Key_V);
}

void MusicBoard::on_Set4_clicked()
{ /// Sa ramana keyboard?
  ///on_K4_clicked(); //momentan
  //on_K3_clicked();
  P1_Song="qrc:/sounds/Dub_Selection/TMS3_NuKick_165.wav";
  P2_Song="qrc:/sounds/Dub_Selection/TMS3_Snare_002.wav";
  P3_Song="qrc:/sounds/Dub_Selection/FX4.wav";
  P4_Song="qrc:/sounds/Dub_Selection/Build Up 01.wav";
  P5_Song="qrc:/sounds/Dub_Selection/Bass Drop (Extended) (Louder).wav";
  P6_Song="qrc:/sounds/Dub_Selection/DROP 07 Scos Sfarsit Scos.wav";
  P7_Song="qrc:/sounds/Dub_Selection/FILTER DOWN 32.wav";
  P8_Song="qrc:/sounds/Dub_Selection/Orchestra Hit 001 Revved.wav";
  P9_Song="qrc:/sounds/Dub_Selection/ufx_imp_atomic.wav";
  P11_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_01.wav";
  P12_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_02.wav";
  P13_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_03.wav";
  P14_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_04.wav";
  P15_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_05.wav";
  P16_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_06.wav";
  P17_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_07.wav";
  //R1_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_08.wav";
  //R2_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_09.wav";
  R3_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_10.wav";
  R4_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_11.wav";
  R5_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_12.wav";
  R6_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_13.wav";
  R7_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_14.wav";
  R8_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_15.wav";

  if (isDemo==3){
  on_HiddenHideAllButton_clicked();
  isDemo=4;
  ui->Demo3->hide();
  ui->Demo4->show();
  }

  //extern QString P1_R;
  ui->P1->setText("Kick");
  ui->P1->setShortcut(Qt::Key_Home);

  //extern QString P2_R;
  ui->P2->setText("Snare");
  ui->P2->setShortcut(Qt::Key_Up);


  //extern QString P3_R;
  ui->P3->setText("Wom");
  ui->P3->setShortcut(Qt::Key_PageUp);

  //extern QString P4_R;
  ui->P4->setText("Pass");
  ui->P4->setShortcut(Qt::Key_Left);

  //extern QString P5_R;
  ui->P5->setText("Drop");
  ui->P5->setShortcut(Qt::Key_Clear);

  //extern QString P6_R;
  ui->P6->setText("Lock");
  ui->P6->setShortcut(Qt::Key_Right);

  //extern QString P7_R;
  ui->P7->setText("Low");
  ui->P7->setShortcut(Qt::Key_End);

  //extern QString P8_R;
  ui->P8->setText("Orch");
  ui->P8->setShortcut(Qt::Key_Down);

  //extern QString P9_R;
  ui->P9->setText("Bam");
  ui->P9->setShortcut(Qt::Key_PageDown);

  //extern QString P10_R;
  ui->P10->setText("NmLk");
  ui->P10->setShortcut(Qt::Key_NumLock);

  //extern QString P11_R;
  ui->P11->setText("Clk");
  ui->P11->setShortcut(Qt::Key_Slash);

  //extern QString P12_R;
  ui->P12->setText("Swp");
  ui->P12->setShortcut(Qt::Key_Asterisk);

  //extern QString P13_R;
  ui->P13->setText("Wbl");
  ui->P13->setShortcut(Qt::Key_Minus);

  //extern QString P14_R;
  ui->P14->setText("Lift");
  ui->P14->setShortcut(Qt::Key_Plus);

  //extern QString P15_R;
  ui->P15->setText("Low");
  ui->P15->setShortcut(Qt::Key_Enter);

  //extern QString P16_R;
  ui->P16->setText("Lift");
  ui->P16->setShortcut(Qt::Key_Insert);

  //extern QString P17_R;
  ui->P17->setText("Rpt");
  ui->P17->setShortcut(Qt::Key_Delete);

  ui->C->setShortcut(Qt::Key_Q);
  ui->C_B->setShortcut(Qt::Key_2);
  ui->D->setShortcut(Qt::Key_W);
  ui->D_B->setShortcut(Qt::Key_3);
  ui->E->setShortcut(Qt::Key_E);
  ui->F->setShortcut(Qt::Key_R);
  ui->F_B->setShortcut(Qt::Key_5);
  ui->G->setShortcut(Qt::Key_T);
  ui->G_B->setShortcut(Qt::Key_6);
  ui->A->setShortcut(Qt::Key_Y);
  ui->A_B->setShortcut(Qt::Key_7);
  ui->B->setShortcut(Qt::Key_U);
  ui->C2->setShortcut(Qt::Key_I);
  ui->C2_B->setShortcut(Qt::Key_9);
  ui->D2->setShortcut(Qt::Key_O);
  ui->D2_B->setShortcut(Qt::Key_0);
  ui->E2->setShortcut(Qt::Key_P);
  ui->F2->setShortcut(Qt::Key_BracketLeft);// " [ " Cum e?
  ui->F2_B->setShortcut(Qt::Key_Equal);
  //ui->F2_B->setShortcut(Qt::Key_BracketRight);// " ] " Cum e?
  ui->R2->setShortcut(Qt::Key_S);
  ui->R3->setShortcut(Qt::Key_D);
  ui->R4->setShortcut(Qt::Key_F);
  ui->R5->setShortcut(Qt::Key_Z);
  ui->R6->setShortcut(Qt::Key_X);
  ui->R7->setShortcut(Qt::Key_C);
  ui->R8->setShortcut(Qt::Key_V);
}


//void MusicBoard::on_AboutClose_4_clicked()
//{
//  ui->
//}

//void MusicBoard::on_HelpClose_clicked()
//{
//}

void MusicBoard::on_HelpClose_clicked()
{
    ui->Help->hide();
    ui->Licence->hide();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isFile=0;
//    isEdit=0;
//    isThemeEdit=0;
//    isClearEdit=0;
    on_HiddenHideAllButton_clicked();
    isLicence=0;
    isHelp=0;
}

void MusicBoard::on_HelpButton_clicked()
{
    if (isHelp==0){
    ui->Help->show();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isHelp=1;
    }
    else {
    ui->Help->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isHelp=0;
    }
    if (isDemo==6){
        isDemo=7;
        ui->Demo6->hide();
        ui->Demo7->show();
    }
}

void MusicBoard::on_FileButton_clicked()
{
    if (isFile==0){
    ui->File->show();
    ui->Edit->hide();
   /// ui->ThemeEdit->hide();//aici Gelu
    ui->ClearEdit->hide();
    ui->NotesEdit->hide();
    ui->ThemesEdit->hide();
    ///isThemeEdit=0;//aici Gelu
    isClearEdit=0;
    isEdit=0;
    //on_HiddenHideAllButton_clicked();
    isFile=1;
    isNotesEdit=0;
    isThemesEdit=0;
    }
    else {
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isEdit=0;
//    isFile=0;
    on_HiddenHideAllButton_clicked();
    }
}

//void Sure (){
//    ui->Sure->show();
//}

void MusicBoard::on_CloseButton_clicked()
{
    ui->Sure->show();
//    QMediaPlayer * Close = new QMediaPlayer;
//    Close->setMedia(QUrl("qrc:/sounds/MBoard/Sounds/Want_To_Close.mp3"));
//    Close->play();
}

void MusicBoard::on_SureYes_clicked()
{
    delete ui;
}

void MusicBoard::on_SureCancel_clicked()
{
    ui->Sure->hide();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
}

void MusicBoard::on_ClearRhythms_clicked()
{   //ui->ClearText->setTextColor();
    ui->ClearText->setText(" Clear Rhythms?");
    ui->Clear->show();
    ClearWhat=1;
}

void MusicBoard::on_ClearLaunchpad_clicked()
{   ui->ClearText->setText("Clear Launchpad?");
    ui->Clear->show();
    ClearWhat=2;
}

void MusicBoard::on_CleaKeyboard_clicked()/// corectat scris ClearKeyBoard
{   ui->ClearText->setText(" Clear Keyboard?");
    ui->Clear->show();
    ClearWhat=3;
}


void MusicBoard::on_ClearAll_clicked()
{   ui->ClearText->setText("       Clear All?");
    ui->Clear->show();
    ClearWhat=4;
}


void MusicBoard::on_ClearYes_clicked()
{
    if(ClearWhat==1) {
        //ClearRhythms();
        R1_Song="qrc:/sounds/Silance.wav";
        R2_Song="qrc:/sounds/Silance.wav";
        R3_Song="qrc:/sounds/Silance.wav";
        R4_Song="qrc:/sounds/Silance.wav";
        R5_Song="qrc:/sounds/Silance.wav";
        R6_Song="qrc:/sounds/Silance.wav";
        R7_Song="qrc:/sounds/Silance.wav";
        R8_Song="qrc:/sounds/Silance.wav";
        ClearWhat=0;
        ui->Clear->hide();
       // ui->Edit->hide();
        //ui->ClearEdit=0;
       // isClearEdit=0;
       // isEdit=0;
        on_HiddenHideAllButton_clicked();
        }
    if(ClearWhat==2) {
        //ClearLaunchpad();
        P1_Song="qrc:/sounds/Silance.wav";
        P2_Song="qrc:/sounds/Silance.wav";
        P3_Song="qrc:/sounds/Silance.wav";
        P4_Song="qrc:/sounds/Silance.wav";
        P5_Song="qrc:/sounds/Silance.wav";
        P6_Song="qrc:/sounds/Silance.wav";
        P7_Song="qrc:/sounds/Silance.wav";
        P8_Song="qrc:/sounds/Silance.wav";
        //P10_Song="qrc:/sounds/Silance.wav";
        P11_Song="qrc:/sounds/Silance.wav";
        P12_Song="qrc:/sounds/Silance.wav";
        P13_Song="qrc:/sounds/Silance.wav";
        P14_Song="qrc:/sounds/Silance.wav";
        P15_Song="qrc:/sounds/Silance.wav";
        P16_Song="qrc:/sounds/Silance.wav";
        P17_Song="qrc:/sounds/Silance.wav";
        ClearWhat=0;
        ui->Clear->hide();
//        ui->Edit->hide();
//        ui->ClearEdit->hide();
//        ui->ThemeEdit->hide();
//        isThemeEdit=0;
//        isClearEdit=0;
//        isEdit=0;
        on_HiddenHideAllButton_clicked();
        }
    if(ClearWhat==3) {
        //ClearKeyboard();
        C_Song="qrc:/sounds/Silance.wav";
        C_B_Song="qrc:/sounds/Silance.wav";
        D_Song="qrc:/sounds/Silance.wav";
        D_B_Song="qrc:/sounds/Silance.wav";
        E_Song="qrc:/sounds/Silance.wav";
        F_Song="qrc:/sounds/Silance.wav";
        F_B_Song="qrc:/sounds/Silance.wav";
        G_Song="qrc:/sounds/Silance.wav";
        G_B_Song="qrc:/sounds/Silance.wav";
        A_Song="qrc:/sounds/Silance.wav";
        A_B_Song="qrc:/sounds/Silance.wav";
        B_Song="qrc:/sounds/Silance.wav";
        C2_Song="qrc:/sounds/Silance.wav";
        C2_B_Song="qrc:/sounds/Silance.wav";
        D2_Song="qrc:/sounds/Silance.wav";
        D2_B_Song="qrc:/sounds/Silance.wav";
        E2_Song="qrc:/sounds/Silance.wav";
        F2_Song="qrc:/sounds/Silance.wav";
        F2_B_Song="qrc:/sounds/Silance.wav";
        G2_Song="qrc:/sounds/Silance.wav";
        ClearWhat=0;
        ui->Clear->hide();
//        ui->Edit->hide();
//        ui->ClearEdit->hide();
//        ui->ThemeEdit->hide();
//        isThemeEdit=0;
//        isClearEdit=0;
//        isEdit=0;
        on_HiddenHideAllButton_clicked();
        }
    if(ClearWhat==4) {
        //ClearRhythms();
        R1_Song="qrc:/sounds/Silance.wav";
        R2_Song="qrc:/sounds/Silance.wav";
        R3_Song="qrc:/sounds/Silance.wav";
        R4_Song="qrc:/sounds/Silance.wav";
        R5_Song="qrc:/sounds/Silance.wav";
        R6_Song="qrc:/sounds/Silance.wav";
        R7_Song="qrc:/sounds/Silance.wav";
        R8_Song="qrc:/sounds/Silance.wav";
        //ClearLaunchpad();
        P1_Song="qrc:/sounds/Silance.wav";
        P2_Song="qrc:/sounds/Silance.wav";
        P3_Song="qrc:/sounds/Silance.wav";
        P4_Song="qrc:/sounds/Silance.wav";
        P5_Song="qrc:/sounds/Silance.wav";
        P6_Song="qrc:/sounds/Silance.wav";
        P7_Song="qrc:/sounds/Silance.wav";
        P8_Song="qrc:/sounds/Silance.wav";
        //P10_Song="qrc:/sounds/Silance.wav";
        P11_Song="qrc:/sounds/Silance.wav";
        P12_Song="qrc:/sounds/Silance.wav";
        P13_Song="qrc:/sounds/Silance.wav";
        P14_Song="qrc:/sounds/Silance.wav";
        P15_Song="qrc:/sounds/Silance.wav";
        P16_Song="qrc:/sounds/Silance.wav";
        P17_Song="qrc:/sounds/Silance.wav";
        //ClearKeyboards();
        C_Song="qrc:/sounds/Silance.wav";
        C_B_Song="qrc:/sounds/Silance.wav";
        D_Song="qrc:/sounds/Silance.wav";
        D_B_Song="qrc:/sounds/Silance.wav";
        E_Song="qrc:/sounds/Silance.wav";
        F_Song="qrc:/sounds/Silance.wav";
        F_B_Song="qrc:/sounds/Silance.wav";
        G_Song="qrc:/sounds/Silance.wav";
        G_B_Song="qrc:/sounds/Silance.wav";
        A_Song="qrc:/sounds/Silance.wav";
        A_B_Song="qrc:/sounds/Silance.wav";
        B_Song="qrc:/sounds/Silance.wav";
        C2_Song="qrc:/sounds/Silance.wav";
        C2_B_Song="qrc:/sounds/Silance.wav";
        D2_Song="qrc:/sounds/Silance.wav";
        D2_B_Song="qrc:/sounds/Silance.wav";
        E2_Song="qrc:/sounds/Silance.wav";
        F2_Song="qrc:/sounds/Silance.wav";
        F2_B_Song="qrc:/sounds/Silance.wav";
        G2_Song="qrc:/sounds/Silance.wav";
        ClearWhat=0;
        ui->Clear->hide();
//        ui->Edit->hide();
//        ui->ClearEdit->hide();
//        ui->ThemeEdit->hide();
//        isThemeEdit=0;
//        isClearEdit=0;
//        isEdit=0;
        on_HiddenHideAllButton_clicked();
        }
}

//void ClearRhythms (){
//    R1_Song="qrc:/sounds/Silance.wav";
//    R2_Song="qrc:/sounds/Silance.wav";
//    R3_Song="qrc:/sounds/Silance.wav";
//    R4_Song="qrc:/sounds/Silance.wav";
//    R5_Song="qrc:/sounds/Silance.wav";
//    R6_Song="qrc:/sounds/Silance.wav";
//    R7_Song="qrc:/sounds/Silance.wav";
//    R8_Song="qrc:/sounds/Silance.wav";
//}

//void ClearLaunchpad (){
//    P1_Song="qrc:/sounds/Silance.wav";
//    P2_Song="qrc:/sounds/Silance.wav";
//    P3_Song="qrc:/sounds/Silance.wav";
//    P4_Song="qrc:/sounds/Silance.wav";
//    P5_Song="qrc:/sounds/Silance.wav";
//    P6_Song="qrc:/sounds/Silance.wav";
//    P7_Song="qrc:/sounds/Silance.wav";
//    P8_Song="qrc:/sounds/Silance.wav";
//    P10_Song="qrc:/sounds/Silance.wav";
//    P11_Song="qrc:/sounds/Silance.wav";
//    P12_Song="qrc:/sounds/Silance.wav";
//    P13_Song="qrc:/sounds/Silance.wav";
//    P14_Song="qrc:/sounds/Silance.wav";
//    P15_Song="qrc:/sounds/Silance.wav";
//    P16_Song="qrc:/sounds/Silance.wav";
//    P17_Song="qrc:/sounds/Silance.wav";
//}

//void ClearKeyboard (){
//    C_Song="qrc:/sounds/Silance.wav";
//    C_B_Song="qrc:/sounds/Silance.wav";
//    D_Song="qrc:/sounds/Silance.wav";
//    D_B_Song="qrc:/sounds/Silance.wav";
//    E_Song="qrc:/sounds/Silance.wav";
//    F_Song="qrc:/sounds/Silance.wav";
//    F_B_Song="qrc:/sounds/Silance.wav";
//    G_Song="qrc:/sounds/Silance.wav";
//    G_B_Song="qrc:/sounds/Silance.wav";
//    A_Song="qrc:/sounds/Silance.wav";
//    A_B_Song="qrc:/sounds/Silance.wav";
//    B_Song="qrc:/sounds/Silance.wav";
//    C2_Song="qrc:/sounds/Silance.wav";
//    C2_B_Song="qrc:/sounds/Silance.wav";
//    D2_Song="qrc:/sounds/Silance.wav";
//    D2_B_Song="qrc:/sounds/Silance.wav";
//    E2_Song="qrc:/sounds/Silance.wav";
//    F2_Song="qrc:/sounds/Silance.wav";
//    F2_B_Song="qrc:/sounds/Silance.wav";
//    G2_Song="qrc:/sounds/Silance.wav";
//}

void MusicBoard::on_ClearCancel_clicked()
{
    ui->Clear->hide();
//    ui->Edit->hide();
//    ui->ClearEdit->hide();
//    ui->ThemeEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();

}

void MusicBoard::on_EditButton_clicked()
{
    if (isEdit==0){
        ui->Edit->show();
        ui->File->hide();
        ///ui->ThemeEdit->hide();//aici Gelu
        ui->ClearEdit->hide();
        ///isThemeEdit=0;//aici Gelu
        isClearEdit=0;
        isFile=0;
        //on_HiddenHideAllButton_clicked();
        isEdit=1;
        if (isMBoard==0){
        ui->MBoardButton->setText("Show MBoard");
        }
        else {
        ui->MBoardButton->setText("Hide MBoard");
        }
    }
    else {
//        ui->Edit->hide();
//        ui->ThemeEdit->hide();
//        ui->ClearEdit->hide();
//        isThemeEdit=0;
//        isClearEdit=0;
//        isFile=0;
//        isEdit=0;
        on_HiddenHideAllButton_clicked();
        if (isMBoard==0){
        ui->MBoardButton->setText("Show MBoard");
        }
        else {
        ui->MBoardButton->setText("Hide MBoard");
        }
    }
}



void MusicBoard::on_CloseClose_clicked()
{
    on_SureCancel_clicked();
}


void MusicBoard::on_ClearCancel_X_clicked()
{
    on_ClearCancel_clicked();
}

void MusicBoard::on_ProjectNotesButton_clicked()
{
    if (isProjectNotes==0){
    ui->ProjectNotes->show();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isProjectNotes=1;
    }
    else {
    ui->ProjectNotes->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isProjectNotes=0;
    }
}

void MusicBoard::on_CloseProjectNotes_clicked()
{
    ui->ProjectNotes->hide();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isFile=0;
//    isEdit=0;
//    isThemeEdit=0;
//    isClearEdit=0;
    on_HiddenHideAllButton_clicked();
    isProjectNotes=0;
}

/// the following button is sent behind the files selector
void MusicBoard::on_HiddenProjectNotesButton_clicked()
{
    //ui->Edit->show();
    //on_ProjectNotesButton_clicked();
    //ui->Edit->hide();
    if (isProjectNotes==0){
    ui->ProjectNotes->show();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isProjectNotes=1;
    }
    else  {
    ui->ProjectNotes->hide();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isProjectNotes=0;
    }
}

void MusicBoard::on_HiddenHelpButton_clicked()
{
    if (isHelp==0){
    ui->Help->show();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isHelp=1;
    }
    else {
    ui->Help->hide();
    ui->Licence->hide();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isHelp=0;
    isLicence=0;
    }
    if (isDemo==6){
        isDemo=7;
        ui->Demo6->hide();
        ui->Demo7->show();
    }
}

void MusicBoard::on_HiddenAboutButton_clicked()
{
    if (isAbout==0){
    ui->About->show();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isAbout=1;
    }
    else {
    ui->About->hide();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isAbout=0;
    }
}

void MusicBoard::on_MBoardButton_clicked()
{
    if (isMBoard==0){
    ui->MBoard->show();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isMBoard=1;
    }
    else {
    ui->MBoard->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    isMBoard=0;
    }
}

void MusicBoard::on_HiddenMButtonushButton_clicked()
{
    if (isMBoard==0){
    ui->MBoard->show();
    isMBoard=1;
    }
    else {
    ui->MBoard->hide();
    isMBoard=0;
    }
}

void MusicBoard::on_CloseMBoard_clicked()
{
    ui->MBoard->hide();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isFile=0;
//    isEdit=0;
//    isThemeEdit=0;
//    isClearEdit=0;
    on_HiddenHideAllButton_clicked();
    isMBoard=0;
}

void MusicBoard::on_ClearButton_clicked()
{
    if (isClearEdit==0){
    ui->ClearEdit->show();
    ///ui->ThemeEdit->hide();//aici Gelu
    ///isThemeEdit=0;//aici Gelu
    isClearEdit=1;
    ui->NotesEdit->hide();
    ui->ThemesEdit->hide();
    isThemesEdit=0;
    isNotesEdit=0;
    }
    else {
    ui->ClearEdit->hide();
    ui->ThemesEdit->hide();
    isThemesEdit=0;
    ///ui->ThemeEdit->hide(); //aici Gelu
    ///isThemeEdit=0;//aici Gelu
    isClearEdit=0;
    }

}

void MusicBoard::on_LicenceButton_clicked()
{
    if (isLicence==0){
    ui->Licence->show();
    isLicence=1;
    }
    else {
    ui->Licence->hide();
    isLicence=0;
    }
}

void MusicBoard::on_CloseLicence_clicked()
{
    ui->Licence->hide();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isFile=0;
//    isEdit=0;
//    isThemeEdit=0;
//    isClearEdit=0;
    on_HiddenHideAllButton_clicked();
    isLicence=0;
}

/*void MusicBoard::on_ThemeButton_clicked()
{
    ///if (isThemeEdit==0){
    ///ui->ThemeEdit->show();//aici Gelu
    ui->ClearEdit->hide();
    isClearEdit=0;
    isThemeEdit=1;
    }
    else {
    ///ui->ThemeEdit->hide();//aici Gelu
    ui->ClearEdit->hide();
    isClearEdit=0;
    isThemeEdit=0;
    }
}*/ //aici Gelu

/*
void MusicBoard::on_Theme1Button_clicked()
{
    ///ui->ThemeEdit->hide();//aici Gelu
    ui->Edit->hide();
    isThemeEdit=0;
    on_HiddenHideAllButton_clicked();
    isEdit=0;
}*///aici Gelu

/*
void MusicBoard::on_Theme2Button_clicked()
{
    ///ui->ThemeEdit->hide();//aici Gelu
    ui->Edit->hide();
    isThemeEdit=0;
    on_HiddenHideAllButton_clicked();
    isEdit=0;
}

void MusicBoard::on_Theme3Button_clicked()
{

    ///ui->ThemeEdit->hide();//aici Gelu
    ui->Edit->hide();
    isThemeEdit=0;
    on_HiddenHideAllButton_clicked();
    isEdit=0;
}
*///aici Gelu


void MusicBoard::on_NewSessionButton_clicked()
{
    on_ClearAll_clicked();
//    ui->File->hide();
//    ui->Edit->hide();
//    ui->ThemeEdit->hide();
//    ui->ClearEdit->hide();
//    isThemeEdit=0;
//    isClearEdit=0;
//    isFile=0;
//    isEdit=0;
    on_HiddenHideAllButton_clicked();
    // more to put here, new file and more
}

/// Hide All

void MusicBoard::on_HiddenHideAllButton_clicked()
{
    ui->File->hide();
    ui->Edit->hide();
    ///ui->ThemeEdit->hide();//aici Gelu
    ui->ThemesEdit->hide();
    ui->ClearEdit->hide();
    ///isThemeEdit=0;//aici Gelu
    ui->NotesEdit->hide();
    isClearEdit=0;
    isFile=0;
    isEdit=0;
    isNotesEdit=0;
    isThemesEdit=0;
}

/// Hide All

void MusicBoard::on_SettingsButton_clicked()
{
    ui->VolSlider->setStyleSheet("QSlider {background-color: rgba(136, 138, 133, 0);selection-background-color: rgb(136, 138, 133);}QSlider::handle:horizontal {height: 10px;/*background-image: url(:/pictures/Color_0.jpg);  img image: url(:/pictures/Color_0.jpg);*/background-image: url(:/pictures/Slider14.png);image: url(:/pictures/Slider14.png);background-color: rgba(136, 138, 133, 0)}");
    ui->VolLabel->setStyleSheet("background-color: rgba(136, 138, 133, 0);color: rgb(136, 138, 133);");
    //if (isSettings==0){
    on_HiddenHideAllButton_clicked();
    Settings settings;
    settings.setModal(true);
    settings.exec();
    //isSettings=1;
    //}
//    else {
//    on_HiddenHideAllButton_clicked();
//    Settings settings;
//    settings.setModal(false);
//    settings.exec();
//    isSettings=0;
//    }
    if (isDemo==6){
        isDemo=7;
        ui->Demo6->hide();
        ui->Demo7->show();
    }
}

void MusicBoard::on_ShowNotesButton_clicked()
{
    if (isNotesEdit==0){
    ui->NotesEdit->show();
    ui->File->hide();
    ui->ThemesEdit->hide();
    ui->ClearEdit->hide();
    isClearEdit=0;
    isFile=0;
    isThemesEdit=0;
    isNotesEdit=1;
    }
    else {
    ui->NotesEdit->hide();
    ui->File->hide();
    ui->ThemesEdit->hide();
    ui->ClearEdit->hide();
    isClearEdit=0;
    isFile=0;
    isThemesEdit=0;
    isNotesEdit=0;
    }
}

void MusicBoard::on_ThemesButton_clicked()
{
    if (isThemesEdit==0){
    ui->ThemesEdit->show();
    ui->File->hide();
    ui->ClearEdit->hide();
    ui->NotesEdit->hide();
    isClearEdit=0;
    isFile=0;
    isNotesEdit=0;;
    isThemesEdit=1;
}
    else {
    ui->ThemesEdit->hide();
    ui->File->hide();
    ui->ClearEdit->hide();
    ui->NotesEdit->hide();
    isClearEdit=0;
    isFile=0;
    isNotesEdit=0;
    isThemesEdit=0;
    }
}

void MusicBoard::on_ShowNotes1Button_clicked()
{
    on_HiddenHideAllButton_clicked();
    ui->C->setText("C4");
    ui->C_B->setText("C#");
    ui->D->setText("D");
    ui->D_B->setText("D#");
    ui->E->setText("E");
    ui->F->setText("F");
    ui->F_B->setText("F#");
    ui->G->setText("G");
    ui->G_B->setText("G#");
    ui->A->setText("A");
    ui->A_B->setText("A#");
    ui->B->setText("B");
    ui->C2->setText("C5");
    ui->C2_B->setText("C#");
    ui->D2->setText("D");
    ui->D2_B->setText("D#");
    ui->E2->setText("E");
    ui->F2->setText("F");
    ui->F2_B->setText("F#");
    ui->G2->setText("G");
//    if (isDemo==2){
//    isDemoFunction=1;
//        if (isDemoKey==1){
//        isDemo=3;
//        ui->Demo2->hide();
//        ui->Demo3->show();
//        }
//    }
}

void MusicBoard::on_ShowNotes2Button_clicked()
{
    on_HiddenHideAllButton_clicked();
    ui->C->setText("Do4");
    ui->C_B->setText("Do#");
    ui->D->setText("Re");
    ui->D_B->setText("Re#");
    ui->E->setText("Mi");
    ui->F->setText("Fa");
    ui->F_B->setText("Fa#");
    ui->G->setText("Sol");
    ui->G_B->setText("Sol#");
    ui->A->setText("La");
    ui->A_B->setText("La#");
    ui->B->setText("Si");
    ui->C2->setText("Do5");
    ui->C2_B->setText("Do#");
    ui->D2->setText("Re");
    ui->D2_B->setText("Re#");
    ui->E2->setText("Mi");
    ui->F2->setText("Fa");
    ui->F2_B->setText("Fa#");
    ui->G2->setText("Sol");
//    if (isDemo==2){
//    isDemoFunction=1;
//        if (isDemoKey==1){
//        isDemo=3;
//        ui->Demo2->hide();
//ui->Demo3->show();
//        }
//    }
}


void MusicBoard::on_HideNotesButton_clicked()
{
    on_HiddenHideAllButton_clicked();
    ui->C->setText("");
    ui->C_B->setText("");
    ui->D->setText("");
    ui->D_B->setText("");
    ui->E->setText("");
    ui->F->setText("");
    ui->F_B->setText("");
    ui->G->setText("");
    ui->G_B->setText("");
    ui->A->setText("");
    ui->A_B->setText("");
    ui->B->setText("");
    ui->C2->setText("");
    ui->C2_B->setText("");
    ui->D2->setText("");
    ui->D2_B->setText("");
    ui->E2->setText("");
    ui->F2->setText("");
    ui->F2_B->setText("");
    ui->G2->setText("");
//    if (isDemo==2){
//    isDemoFunction=1;
//        if (isDemoKey==1){
//        isDemo=3;
//        ui->Demo2->hide();
//        ui->Demo3->show();
//        }
//    }
}

void MusicBoard::on_HiddenShowNotes1_clicked()
{
    on_ShowNotes1Button_clicked();
}

void MusicBoard::on_HiddenShowNotes2_clicked()
{
    on_ShowNotes2Button_clicked();
}

void MusicBoard::on_HiddenHideNotes_clicked()
{
    on_HideNotesButton_clicked();
}

void MusicBoard::on_CloseRhythm2_clicked()
{
    ui->Rhythm2->hide();
    isRhythm2=0;
}

void MusicBoard::on_R_11_clicked()
{
    if (isP11==0){
    isP11=1;
    ui->R_11->setStyleSheet("background-color: rgb(255, 159, 159);");
    }
    else {
    isP11=0;
    ui->R_11->setStyleSheet("background-color: rgb(159, 138, 252);");
    }
}

void MusicBoard::on_R_12_clicked()
{
    if (isP12==0){
        isP12=1;
        ui->R_12->setStyleSheet("background-color: rgb(255, 159, 159);");
        }
        else {
        isP12=0;
        ui->R_12->setStyleSheet("background-color: rgb(159, 138, 252);");
        }
}

void MusicBoard::on_R_13_clicked()
{
    if (isP13==0){
        isP13=1;
        ui->R_13->setStyleSheet("background-color: rgb(255, 159, 159);");
        }
        else {
        isP13=0;
        ui->R_13->setStyleSheet("background-color: rgb(159, 138, 252);");
        }
}

void MusicBoard::on_R_14_clicked()
{
    if (isP14==0){
        isP14=1;
        ui->R_14->setStyleSheet("background-color: rgb(255, 159, 159);");
        }
        else {
        isP14=0;
        ui->R_14->setStyleSheet("background-color: rgb(159, 148, 252);");
        }
}

void MusicBoard::on_R_21_clicked()
{
    if (isP21==0){
        isP21=1;
        ui->R_21->setStyleSheet("background-color: rgb(255, 159, 159);");
        }
        else {
        isP21=0;
        ui->R_21->setStyleSheet("background-color: rgb(159, 148, 252);");
        }
}

void MusicBoard::on_R_22_clicked()
{
    if (isP22==0){
        isP22=1;
        ui->R_22->setStyleSheet("background-color: rgb(255, 159, 159);");
        }
        else {
        isP22=0;
        ui->R_22->setStyleSheet("background-color: rgb(159, 148, 252);");
        }
}

void MusicBoard::on_R_23_clicked()
{
    if (isP23==0){
        isP23=1;
        ui->R_23->setStyleSheet("background-color: rgb(255, 159, 159);");
        }
        else {
        isP23=0;
        ui->R_23->setStyleSheet("background-color: rgb(159, 148, 252);");
        }
}

void MusicBoard::on_R_24_clicked()
{
    if (isP24==0){
        isP24=1;
        ui->R_24->setStyleSheet("background-color: rgb(255, 159, 159);");
        }
        else {
        isP24=0;
        ui->R_24->setStyleSheet("background-color: rgb(159, 148, 252);");
        }
}

void MusicBoard::on_R_31_clicked()
{
    if (isP31==0){
        isP31=1;
        ui->R_31->setStyleSheet("background-color: rgb(255, 159, 159);");
        }
        else {
        isP31=0;
        ui->R_31->setStyleSheet("background-color: rgb(159, 148, 252);");
        }
}

void MusicBoard::on_R_32_clicked()
{
    if (isP32==0){
        isP32=1;
        ui->R_32->setStyleSheet("background-color: rgb(255, 159, 159);");
        }
        else {
        isP32=0;
        ui->R_32->setStyleSheet("background-color: rgb(159, 148, 252);");
        }
}

void MusicBoard::on_R_33_clicked()
{
    if (isP33==0){
        isP33=1;
        ui->R_33->setStyleSheet("background-color: rgb(255, 159, 159);");
        }
        else {
        isP33=0;
        ui->R_33->setStyleSheet("background-color: rgb(159, 148, 252);");
        }
}

void MusicBoard::on_R_34_clicked()
{
    if (isP34==0){
        isP34=1;
        ui->R_34->setStyleSheet("background-color: rgb(255, 159, 159);");
        }
        else {
        isP34=0;
        ui->R_34->setStyleSheet("background-color: rgb(159, 148, 252);");
        }
}

QString s;
QString f;

//QTime *time = new QTime();
QTimer *timer = new QTimer;
//QElapsedTimer *time = new QElapsedTimer();
void MusicBoard::on_StartRhythm_clicked()
{   s=QTime::currentTime().second();
    //if (isStartRhythm==0){
    if (isP11==1 /*QTime::currentTime().toString*/) {on_P1_clicked();}
    if (isP21==1) {on_P2_clicked();}
    if (isP31==1) {on_P3_clicked();}
    //isStartRhythm=1;
    on_HiddenSilanceButton_clicked();
////    QString Path = ":/sounds/Dub_Selection/006.wav";
    ///QSound Silances(Path);
    ////// "Dub_Selection/006.wav"
    ///Silances.play();
    if (isP12==1) {on_P4_clicked();}
    if (isP22==1) {on_P5_clicked();}
    if (isP32==1) {on_P6_clicked();}
    if (isP13==1) {on_P7_clicked();}
    if (isP23==1) {on_P8_clicked();}
    if (isP33==1) {on_P9_clicked();}
    if (isP14==1) {on_P11_clicked();}
    if (isP24==1) {on_P12_clicked();}
    if (isP34==1) {on_P13_clicked();}
    //isStartRhythm=1;
    //}
//    else {
//    isStartRhythm=0;
//    }
}

//QTimer time;
//QTimer timer = new QTimer();
void MusicBoard::on_HiddenSilanceButton_clicked()
{   //QMediaPlayer * Silance = new QMediaPlayer();
    //if (TIndicator==1){
    //Silance_Song="qrc:/sounds/Keyboards/Keyboard2/2A.wav";
    //}
    //Silance->setMedia(QUrl(Silance_Song));// legat de temp. (BPM)
    //Silance->play();
///    timer->start(2000);
///    if (timer->isActive()==false){
///        isStartRhythm=0;
///    }
        timer->start(2000);
        ///ui->Error->setText(QTime::currentTime().toString());
        if (timer->remainingTime()==false){
            isStartRhythm=0;
        }
    //if (Silance->positionChanged(12312)){
    //    Silance->play();
//    }
}

void MusicBoard::on_SureYes_released()
{
    delete ui;
}

void MusicBoard::on_ReInit_clicked()
{
    extern int NumLock;

    if (NumLock==1){
        ui->NmLkOnOff->setStyleSheet("background-color: rgba(255, 255, 255, 0);color: rgb(239, 41, 41);");
        //NumLock=0;
        ui->NmLkOnOff->setText("ON");
        ui->UnderOn->show();
    }
    else {
        ui->NumlockLabel->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
        //NumLock=1;
        ui->NmLkOnOff->setText("OFF");
        ui->UnderOn->hide();
    }

    extern QString P1_R;
    ui->P1->setText(P1_R);
    ui->P1->setShortcut(Qt::Key_Home);

    extern QString P2_R;
    ui->P2->setText(P2_R);
    ui->P2->setShortcut(Qt::Key_Up);

    extern QString P3_R;
    ui->P3->setText(P3_R);
    ui->P3->setShortcut(Qt::Key_PageUp);

    extern QString P4_R;
    ui->P4->setText(P4_R);
    ui->P4->setShortcut(Qt::Key_Left);

    extern QString P5_R;
    ui->P5->setText(P5_R);
    ui->P5->setShortcut(Qt::Key_Clear);

    extern QString P6_R;
    ui->P6->setText(P6_R);
    ui->P6->setShortcut(Qt::Key_Right);

    extern QString P7_R;
    ui->P7->setText(P7_R);
    ui->P7->setShortcut(Qt::Key_End);

    extern QString P8_R;
    ui->P8->setText(P8_R);
    ui->P8->setShortcut(Qt::Key_Down);

    extern QString P9_R;
    ui->P9->setText(P9_R);
    ui->P9->setShortcut(Qt::Key_PageDown);

    extern QString P10_R;
    ui->P10->setText(P10_R);
    ui->P10->setShortcut(Qt::Key_NumLock);

    extern QString P11_R;
    ui->P11->setText(P11_R);
    ui->P11->setShortcut(Qt::Key_Slash);

    extern QString P12_R;
    ui->P12->setText(P12_R);
    ui->P12->setShortcut(Qt::Key_multiply);

    extern QString P13_R;
    ui->P13->setText(P13_R);
    ui->P13->setShortcut(Qt::Key_Minus);

    extern QString P14_R;
    ui->P14->setText(P14_R);
    ui->P14->setShortcut(Qt::Key_Plus);

    extern QString P15_R;
    ui->P15->setText(P15_R);
    ui->P15->setShortcut(Qt::Key_Enter);

    extern QString P16_R;
    ui->P16->setText(P16_R);
    ui->P16->setShortcut(Qt::Key_Insert);

    extern QString P17_R;
    ui->P17->setText(P17_R);
    ui->P17->setShortcut(Qt::Key_Delete);

    ui->C->setShortcut(Qt::Key_Q);
    ui->C_B->setShortcut(Qt::Key_2);
    ui->D->setShortcut(Qt::Key_W);
    ui->D_B->setShortcut(Qt::Key_3);
    ui->E->setShortcut(Qt::Key_E);
    ui->F->setShortcut(Qt::Key_R);
    ui->F_B->setShortcut(Qt::Key_5);
    ui->G->setShortcut(Qt::Key_T);
    ui->G_B->setShortcut(Qt::Key_6);
    ui->A->setShortcut(Qt::Key_Y);
    ui->A_B->setShortcut(Qt::Key_7);
    ui->B->setShortcut(Qt::Key_U);
    ui->C2->setShortcut(Qt::Key_I);
    ui->C2_B->setShortcut(Qt::Key_9);
    ui->D2->setShortcut(Qt::Key_O);
    ui->D2_B->setShortcut(Qt::Key_0);
    ui->E2->setShortcut(Qt::Key_P);
    ui->F2->setShortcut(Qt::Key_BracketLeft);// " [ " Cum e?
    ui->F2_B->setShortcut(Qt::Key_Equal);
    //ui->F2_B->setShortcut(Qt::Key_BracketRight);// " ] " Cum e?
    ui->R2->setShortcut(Qt::Key_S);
    ui->R3->setShortcut(Qt::Key_D);
    ui->R4->setShortcut(Qt::Key_F);
    ui->R5->setShortcut(Qt::Key_Z);
    ui->R6->setShortcut(Qt::Key_X);
    ui->R7->setShortcut(Qt::Key_C);
    ui->R8->setShortcut(Qt::Key_V);

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
    extern int R1_A;
    extern int R2_A;
    extern int R3_A;
    extern int R4_A;
    extern int R5_A;
    extern int R6_A;
    extern int R7_A;
    extern int R8_A;

    P1->setVolume(P1_A);
    P2->setVolume(P2_A);
    P3->setVolume(P3_A);
    P4->setVolume(P4_A);
    P5->setVolume(P5_A);
    P6->setVolume(P6_A);
    P7->setVolume(P7_A);
    P8->setVolume(P8_A);
    P9->setVolume(P9_A);
    //P10->setVolume(P10_A);
    P11->setVolume(P11_A);
    P12->setVolume(P12_A);
    P13->setVolume(P13_A);
    P14->setVolume(P14_A);
    P15->setVolume(P15_A);
    P16->setVolume(P16_A);
    P17->setVolume(P17_A);
    R1->setVolume(R1_A);
    R2->setVolume(R2_A);
    R3->setVolume(R3_A);
    R4->setVolume(R4_A);
    R5->setVolume(R5_A);
    R6->setVolume(R6_A);
    R7->setVolume(R7_A);
    R8->setVolume(R8_A);
}

void MusicBoard::on_HiddenSettingsButton_clicked()
{
    on_SettingsButton_clicked();
    if (isDemo==6){
        isDemo=7;
        ui->Demo6->hide();
        ui->Demo7->show();
    }
}

void MusicBoard::on_HiddenCloseButtonDel_clicked()
{
    ui->Sure->show();
}

void MusicBoard::on_Theme1Button_clicked()
{
    on_HiddenHideAllButton_clicked();
    ui->Picture->setStyleSheet("background-image: url(:/pictures/Picture1_4.png); image: url(:/pictures/Picture1_4.png);");
    ui->C_B->setStyleSheet("background-color: rgb(81, 38, 255); font: 7.4pt \"Cantarell\";");
    ui->D_B->setStyleSheet("background-color: rgb(81, 38, 255); font: 7.4pt \"Cantarell\";");
    ui->F_B->setStyleSheet("background-color: rgb(81, 38, 255); font: 7.4pt \"Cantarell\";");
    ui->G_B->setStyleSheet("background-color: rgb(81, 38, 255); font: 7.4pt \"Cantarell\";");
    ui->A_B->setStyleSheet("background-color: rgb(81, 38, 255); font: 7.4pt \"Cantarell\";");
    ui->C2_B->setStyleSheet("background-color: rgb(81, 38, 255); font: 7.4pt \"Cantarell\";");
    ui->D2_B->setStyleSheet("background-color: rgb(81, 38, 255); font: 7.4pt \"Cantarell\";");
    ui->F2_B->setStyleSheet("background-color: rgb(81, 38, 255); font: 7.4pt \"Cantarell\";");
    ui->L1->setStyleSheet("background-color: rgb(255, 159, 159);");
    ui->L2->setStyleSheet("background-color: rgb(255, 159, 159);");
    ui->L3->setStyleSheet("background-color: rgb(255, 159, 159);");
    ui->L4->setStyleSheet("background-color: rgb(255, 159, 159);");
    ui->L5->setStyleSheet("background-color: rgb(255, 159, 159);");
    ui->L6->setStyleSheet("background-color: rgb(255, 159, 159);");
    ui->L7->setStyleSheet("background-color: rgb(255, 159, 159);");
    ui->L8->setStyleSheet("background-color: rgb(255, 159, 159);");
    ui->L9->setStyleSheet("background-color: rgb(255, 159, 159);");
    ui->L10->setStyleSheet("background-color: rgb(255, 159, 159);");
    ui->FileButton->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(83, 68, 150);");
    ui->EditButton->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(83, 68, 150);");
    ui->HelpButton->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(83, 68, 150);");
    ui->AboutButton->setStyleSheet("color: rgb(255, 255, 255); background-color: rgb(83, 68, 150);");
    ui->Keys->setStyleSheet("background-color: rgb(85, 87, 83);");
    ui->File1->setStyleSheet("background-color: rgb(152, 130, 251);");
    ui->File2->setStyleSheet("background-color: rgb(152, 130, 251);");
}

void MusicBoard::on_Theme2Button_clicked()
{
    on_HiddenHideAllButton_clicked();
    //ui->Picture->setStyleSheet("background-image: url(:/pictures/Theme2.png); image: url(:/pictures/Theme2.png);");
    //ui->Picture->setStyleSheet("image: url(:/pictures/Theme21.png); background-image: url(:/pictures/Theme21.png);");
    ui->Picture->setStyleSheet("background-image: url(:/pictures/Theme24.png); image: url(:/pictures/Theme24.png);");
    ui->C_B->setStyleSheet("background-color: rgb(239, 0, 143); font: 7.4pt \"Cantarell\";");
    ui->D_B->setStyleSheet("background-color: rgb(239, 0, 143); font: 7.4pt \"Cantarell\";");
    ui->F_B->setStyleSheet("background-color: rgb(239, 0, 143); font: 7.4pt \"Cantarell\";");
    ui->G_B->setStyleSheet("background-color: rgb(239, 0, 143); font: 7.4pt \"Cantarell\";");
    ui->A_B->setStyleSheet("background-color: rgb(239, 0, 143); font: 7.4pt \"Cantarell\";");
    ui->C2_B->setStyleSheet("background-color: rgb(239, 0, 143); font: 7.4pt \"Cantarell\";");
    ui->D2_B->setStyleSheet("background-color: rgb(239, 0, 143); font: 7.4pt \"Cantarell\";");
    ui->F2_B->setStyleSheet("background-color: rgb(239, 0, 143); font: 7.4pt \"Cantarell\";");
    ui->L1->setStyleSheet("background-color: rgb(83, 68, 150);");
    ui->L2->setStyleSheet("background-color: rgb(83, 68, 150);");
    ui->L3->setStyleSheet("background-color: rgb(83, 68, 150);");
    ui->L4->setStyleSheet("background-color: rgb(83, 68, 150);");
    ui->L5->setStyleSheet("background-color: rgb(83, 68, 150);");
    ui->L6->setStyleSheet("background-color: rgb(83, 68, 150);");
    ui->L7->setStyleSheet("background-color: rgb(83, 68, 150);");
    ui->L8->setStyleSheet("background-color: rgb(83, 68, 150);");
    ui->L9->setStyleSheet("background-color: rgb(83, 68, 150);");
    ui->L10->setStyleSheet("background-color: rgb(83, 68, 150);");
    ui->FileButton->setStyleSheet("background-color: rgb(239, 0, 143); color: rgb(255, 255, 255);");
    ui->EditButton->setStyleSheet("background-color: rgb(239, 0, 143); color: rgb(255, 255, 255);");
    ui->HelpButton->setStyleSheet("background-color: rgb(239, 0, 143); color: rgb(255, 255, 255);");
    ui->AboutButton->setStyleSheet("background-color: rgb(239, 0, 143); color: rgb(255, 255, 255);");
    ui->Keys->setStyleSheet("background-color: rgb(81, 81, 81)");
    ui->File1->setStyleSheet("background-color: rgb(249, 149, 199)");
    ui->File2->setStyleSheet("background-color: rgb(249, 149, 199)");
}

//void MusicBoard::on_MuteButton_clicked()
//{
//    // De ce nu merge? Se blocheaza?

//    QMediaPlayer * C = new QMediaPlayer();
//    QMediaPlayer * C_B = new QMediaPlayer();
//    QMediaPlayer * D = new QMediaPlayer();
//    QMediaPlayer * D_B = new QMediaPlayer();
//    QMediaPlayer * E = new QMediaPlayer();
//    QMediaPlayer * F = new QMediaPlayer();
//    QMediaPlayer * F_B = new QMediaPlayer();
//    QMediaPlayer * G = new QMediaPlayer();
//    QMediaPlayer * G_B = new QMediaPlayer();
//    QMediaPlayer * A = new QMediaPlayer();
//    QMediaPlayer * A_B = new QMediaPlayer();
//    QMediaPlayer * B = new QMediaPlayer();
//    QMediaPlayer * C2 = new QMediaPlayer();
//    QMediaPlayer * C2_B = new QMediaPlayer();
//    QMediaPlayer * D2 = new QMediaPlayer();
//    QMediaPlayer * D2_B = new QMediaPlayer();
//    QMediaPlayer * E2 = new QMediaPlayer();
//    QMediaPlayer * F2 = new QMediaPlayer();
//    QMediaPlayer * F2_B = new QMediaPlayer();
//    QMediaPlayer * G2 = new QMediaPlayer();
//    QMediaPlayer * Close = new QMediaPlayer();
//    QMediaPlayer * P1 = new QMediaPlayer();
//    QMediaPlayer * P2 = new QMediaPlayer();
//    QMediaPlayer * P3 = new QMediaPlayer();
//    QMediaPlayer * P4 = new QMediaPlayer();
//    QMediaPlayer * P5 = new QMediaPlayer();
//    QMediaPlayer * P6 = new QMediaPlayer();
//    QMediaPlayer * P7 = new QMediaPlayer();
//    QMediaPlayer * P8 = new QMediaPlayer();
//    QMediaPlayer * P9 = new QMediaPlayer();
//    QMediaPlayer * P11 = new QMediaPlayer();
//    QMediaPlayer * P12 = new QMediaPlayer();
//    QMediaPlayer * P13 = new QMediaPlayer();
//    QMediaPlayer * P14 = new QMediaPlayer();
//    QMediaPlayer * P15 = new QMediaPlayer();
//    QMediaPlayer * P16 = new QMediaPlayer();
//    QMediaPlayer * P17 = new QMediaPlayer();
//    QMediaPlayer * R1 = new QMediaPlayer();
//    QMediaPlayer * R2 = new QMediaPlayer();
//    QMediaPlayer * R3 = new QMediaPlayer();
//    QMediaPlayer * R4 = new QMediaPlayer();
//    QMediaPlayer * R5 = new QMediaPlayer();
//    QMediaPlayer * R6 = new QMediaPlayer();
//    QMediaPlayer * R7 = new QMediaPlayer();
//    QMediaPlayer * R8 = new QMediaPlayer();

//    C->setVolume(0);
//    C_B->setVolume(0);
//    D->setVolume(0);
//    D_B->setVolume(0);
//    E->setVolume(0);
//    F->setVolume(0);
//    F_B->setVolume(0);
//    G->setVolume(0);
//    G_B->setVolume(0);
//    A->setVolume(0);
//    A_B->setVolume(0);
//    B->setVolume(0);
//    C2->setVolume(0);
//    C2_B->setVolume(0);
//    D2->setVolume(0);
//    D2_B->setVolume(0);
//    E2->setVolume(0);
//    F2->setVolume(0);
//    F2_B->setVolume(0);
//    G2->setVolume(0);
//    Close->setVolume(0);
//    P1->setVolume(0);
//    P2->setVolume(0);
//    P3->setVolume(0);
//    P4->setVolume(0);
//    P5->setVolume(0);
//    P6->setVolume(0);
//    P7->setVolume(0);
//    P8->setVolume(0);
//    P9->setVolume(0);
//    P11->setVolume(0);
//    P12->setVolume(0);
//    P13->setVolume(0);
//    P14->setVolume(0);
//    P15->setVolume(0);
//    P16->setVolume(0);
//    P17->setVolume(0);
//    R1->setVolume(0);
//    R2->setVolume(0);
//    R3->setVolume(0);
//    R4->setVolume(0);
//    R5->setVolume(0);
//    R6->setVolume(0);
//    R7->setVolume(0);
//    R8->setVolume(0);
//}



void MusicBoard::on_Set1_pressed()
{
    ui->Set1->setStyleSheet("color: rgb(255, 255, 255);background-image: url(:/pictures/Sets1.png);image: url(:/pictures/Sets1.png);background-color: rgba(159, 138, 252, 153);border-color: rgba(159, 138, 252, 153);");
}

void MusicBoard::on_Set1_released()
{
    ui->Set1->setStyleSheet("color: rgb(255, 255, 255);background-image: url(:/pictures/Sets.png);image: url(:/pictures/Sets.png);background-color: rgba(159, 138, 252, 153);border-color: rgba(159, 138, 252, 153);");
}

void MusicBoard::on_Set2_pressed()
{
    ui->Set2->setStyleSheet("color: rgb(255, 255, 255);background-image: url(:/pictures/Sets1.png);image: url(:/pictures/Sets1.png);background-color: rgba(159, 138, 252, 153);border-color: rgba(159, 138, 252, 153);");
}

void MusicBoard::on_Set2_released()
{
    ui->Set2->setStyleSheet("color: rgb(255, 255, 255);background-image: url(:/pictures/Sets.png);image: url(:/pictures/Sets.png);background-color: rgba(159, 138, 252, 153);border-color: rgba(159, 138, 252, 153);");
}

void MusicBoard::on_Set3_pressed()
{
    ui->Set3->setStyleSheet("color: rgb(255, 255, 255);background-image: url(:/pictures/Sets1.png);image: url(:/pictures/Sets1.png);background-color: rgba(159, 138, 252, 153);border-color: rgba(159, 138, 252, 153);");
}

void MusicBoard::on_Set3_released()
{
    ui->Set3->setStyleSheet("color: rgb(255, 255, 255);background-image: url(:/pictures/Sets.png);image: url(:/pictures/Sets.png);background-color: rgba(159, 138, 252, 153);border-color: rgba(159, 138, 252, 153);");
}

void MusicBoard::on_Set4_pressed()
{
    ui->Set4->setStyleSheet("color: rgb(255, 255, 255);background-image: url(:/pictures/Sets1.png);image: url(:/pictures/Sets1.png);background-color: rgba(159, 138, 252, 153);border-color: rgba(159, 138, 252, 153);");
}

void MusicBoard::on_Set4_released()
{
    ui->Set4->setStyleSheet("color: rgb(255, 255, 255);background-image: url(:/pictures/Sets.png);image: url(:/pictures/Sets.png);background-color: rgba(159, 138, 252, 153);border-color: rgba(159, 138, 252, 153);");
}

QString K_Released="background-color: rgba(255, 159, 159, 179);image: url(:/pictures/KeysLF.png);background-image: url(:/pictures/KeysLF.png);color: rgb(255, 255, 255);";
QString K_Pre="background-color: rgba(255, 159, 159, 179);background-image: url(:/pictures/KeysLF1.png);image: url(:/pictures/KeysLF1.png);color: rgb(255, 255, 255);";

void MusicBoard::on_K1_released()
{
    ui->K1->setStyleSheet(K_Released);
}

void MusicBoard::on_K1_pressed()
{
    ui->K1->setStyleSheet(K_Pre);
}

void MusicBoard::on_K2_released()
{
    ui->K2->setStyleSheet(K_Released);
}

void MusicBoard::on_K2_pressed()
{
    ui->K2->setStyleSheet(K_Pre);
}

void MusicBoard::on_K3_released()
{
    ui->K3->setStyleSheet(K_Released);
}

void MusicBoard::on_K3_pressed()
{
    ui->K3->setStyleSheet(K_Pre);
}

void MusicBoard::on_K4_released()
{
    ui->K4->setStyleSheet(K_Released);
}

void MusicBoard::on_K4_pressed()
{
    ui->K4->setStyleSheet(K_Pre);
}

QString P_Released="background-color: rgba(136, 138, 133, 179);background-image: url(:/pictures/LaunchPad.png);image: url(:/pictures/LaunchPad.png);";
QString P_Pre="background-color: rgba(136, 138, 133, 179);background-image: url(:/pictures/LaunchPad1.png);image: url(:/pictures/LaunchPad1.png);";

void MusicBoard::on_P7_released()
{
    ui->P7->setStyleSheet(P_Released);
}

void MusicBoard::on_P7_pressed()
{
    ui->P7->setStyleSheet(P_Pre);
}

void MusicBoard::on_P8_released()
{
    ui->P8->setStyleSheet(P_Released);
}


void MusicBoard::on_P8_pressed()
{
    ui->P8->setStyleSheet(P_Pre);
}


void MusicBoard::on_P1_pressed()
{
    ui->P1->setStyleSheet(P_Pre);
}

void MusicBoard::on_P1_released()
{
    ui->P1->setStyleSheet(P_Released);
}

void MusicBoard::on_P10_pressed()
{
    ui->P10->setStyleSheet(P_Pre);
}

void MusicBoard::on_P10_released()
{
    ui->P10->setStyleSheet(P_Released);
}

void MusicBoard::on_P11_pressed()
{
    ui->P11->setStyleSheet(P_Pre);
}

void MusicBoard::on_P11_released()
{
    ui->P11->setStyleSheet(P_Released);
}

void MusicBoard::on_P12_pressed()
{
    ui->P12->setStyleSheet(P_Pre);
}

void MusicBoard::on_P12_released()
{
    ui->P12->setStyleSheet(P_Released);
}

void MusicBoard::on_P2_pressed()
{
    ui->P2->setStyleSheet(P_Pre);
}

void MusicBoard::on_P2_released()
{
    ui->P2->setStyleSheet(P_Released);
}

void MusicBoard::on_P3_pressed()
{
    ui->P3->setStyleSheet(P_Pre);
}

void MusicBoard::on_P3_released()
{
    ui->P3->setStyleSheet(P_Released);
}

void MusicBoard::on_P4_pressed()
{
    ui->P4->setStyleSheet(P_Pre);
}

void MusicBoard::on_P4_released()
{
    ui->P4->setStyleSheet(P_Released);
}

void MusicBoard::on_P5_pressed()
{
    ui->P5->setStyleSheet(P_Pre);
}

void MusicBoard::on_P5_released()
{
    ui->P5->setStyleSheet(P_Released);
}

void MusicBoard::on_P6_released()
{
    ui->P6->setStyleSheet(P_Released);
}

void MusicBoard::on_P6_pressed()
{
    ui->P6->setStyleSheet(P_Pre);
}

void MusicBoard::on_P9_pressed()
{
    ui->P9->setStyleSheet(P_Pre);
}

void MusicBoard::on_P9_released()
{
    ui->P9->setStyleSheet(P_Released);
}

void MusicBoard::on_P13_released()
{
    ui->P13->setStyleSheet("background-color: rgb(136, 138, 133);color: rgb(255, 255, 255);background-image: url(:/pictures/KeyD.png);image: url(:/pictures/KeyD.png);");
}

void MusicBoard::on_P13_pressed()
{
    ui->P13->setStyleSheet("background-color: rgb(136, 138, 133);color: rgb(255, 255, 255);background-image: url(:/pictures/KeyD1.png);image: url(:/pictures/KeyD1.png);");
}

void MusicBoard::on_P17_pressed()
{
    ui->P17->setStyleSheet("background-color: rgb(136, 138, 133);color: rgb(255, 255, 255);background-image: url(:/pictures/KeyD1.png);image: url(:/pictures/KeyD1.png);");
}

void MusicBoard::on_P17_released()
{
    ui->P17->setStyleSheet("background-color: rgb(136, 138, 133);color: rgb(255, 255, 255);background-image: url(:/pictures/KeyD.png);image: url(:/pictures/KeyD.png);");
}

void MusicBoard::on_P16_released()
{
    ui->P16->setStyleSheet("background-color: rgb(136, 138, 133);background-image: url(:/pictures/KeyDL.png);image: url(:/pictures/KeyDL.png);color: rgb(255, 255, 255);");
}

void MusicBoard::on_P16_pressed()
{
    ui->P16->setStyleSheet("background-color: rgb(136, 138, 133);background-image: url(:/pictures/KeyDL1.png);image: url(:/pictures/KeyDL1.png);color: rgb(255, 255, 255);");
}

void MusicBoard::on_P14_pressed()
{
    ui->P14->setStyleSheet("background-color: rgba(255, 255, 255, 0);background-image: url(:/pictures/KeysLT1.png);image: url(:/pictures/KeysLT1.png);color: rgb(255, 255, 255);");
}

void MusicBoard::on_P14_released()
{
    ui->P14->setStyleSheet("image: url(:/pictures/KeyLT.png);background-image: url(:/pictures/KeyLT.png);background-color: rgba(136, 138, 133, 179);color: rgb(255, 255, 255);");
}

void MusicBoard::on_P15_released()
{
    ui->P15->setStyleSheet("image: url(:/pictures/KeyLT.png);background-image: url(:/pictures/KeyLT.png);background-color: rgba(136, 138, 133, 179);color: rgb(255, 255, 255);");
}

void MusicBoard::on_P15_pressed()
{
    ui->P15->setStyleSheet("background-color: rgba(255, 255, 255, 0);background-image: url(:/pictures/KeysLT1.png);image: url(:/pictures/KeysLT1.png);color: rgb(255, 255, 255);");
}

void MusicBoard::on_VolSlider_valueChanged(int position)
{
    ui->VolSlider->setStyleSheet("QSlider {background-color: rgba(136, 138, 133, 0);selection-background-color: rgb(255, 255, 255);}QSlider::handle:horizontal {height: 10px;background-image: url(:/pictures/Slider14.png);image: url(:/pictures/Slider14.png);background-color: rgba(136, 138, 133, 0)}");
    ui->VolLabel->setStyleSheet("color: rgb(255, 255, 255);background-color: rgba(136, 138, 133, 0);");
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

    P1_A=position;
        P2_A=position;
        P3_A=position;
        P4_A=position;
        P5_A=position;
        P6_A=position;
        P7_A=position;
        P8_A=position;
        P9_A=position;
        P10_A=position;
        P11_A=position;
        P12_A=position;
        P13_A=position;
        P14_A=position;
        P15_A=position;
        P16_A=position;
        P17_A=position;
        KeyboardVol=position;
        MasterVol=position;
        R1_A=position;
        R2_A=position;
        R3_A=position;
        R4_A=position;
        R5_A=position;
        R6_A=position;
        R7_A=position;
        R8_A=position;
}

void MusicBoard::on_MasterLeft_clicked()
{
    ui->VolSlider->setValue(ui->VolSlider->value()-5);
    ui->VolSlider->setSliderPosition(ui->VolSlider->value()-5);
}

void MusicBoard::on_MasterRight_clicked()
{
    ui->VolSlider->setValue(ui->VolSlider->value()+5);
    ui->VolSlider->setSliderPosition(ui->VolSlider->value()+5);
}

//void MusicBoard::on_pushButton_clicked()
//{
//    AudioRecorder recorder;
//    recorder.show();
//}

void MusicBoard::on_RecButton_clicked()
{
    on_HiddenHideAllButton_clicked();
//    AudioRecorder settings;
//    settings.setModal(true);
//    settings.exec();
}

void MusicBoard::on_DemoButton_clicked()
{
    on_HiddenHideAllButton_clicked();
    if (isDemo==0){
    ui->Demo1->show();
    isDemo=1;
    } else {
        ui->Demo1->hide();
        ui->Demo2->hide();
        ui->Demo3->hide();
        ui->Demo4->hide();
        ui->Demo5->hide();
        ui->Demo6->hide();
        ui->Demo7->hide();
        isDemo=0;
    }
    // make else
}

//void MusicBoard::on_ShowKeysButton_clicked()
//{
//    on_HiddenHideAllButton_clicked();
//    ui->C->setText("Q");
//    ui->C_B->setText("2");
//    ui->D->setText("W");
//    ui->D_B->setText("3");
//    ui->E->setText("E");
//    ui->F->setText("R");
//    ui->F_B->setText("5");
//    ui->G->setText("T");
//    ui->G_B->setText("6");
//    ui->A->setText("Y");
//    ui->A_B->setText("7");
//    ui->B->setText("U");
//    ui->C2->setText("I");
//    ui->C2_B->setText("9");
//    ui->D2->setText("O");
//    ui->D2_B->setText("0");
//    ui->E2->setText("P");
//    ui->F2->setText("[");
//    ui->F2_B->setText("=");
//    ui->G2->setText("]");
//}

void MusicBoard::on_ShowMBoard_clicked()
{
    on_HiddenHideAllButton_clicked();
    ui->C->setText("Q");
    ui->C_B->setText("2");
    ui->D->setText("W");
    ui->D_B->setText("3");
    ui->E->setText("E");
    ui->F->setText("R");
    ui->F_B->setText("5");
    ui->G->setText("T");
    ui->G_B->setText("6");
    ui->A->setText("Y");
    ui->A_B->setText("7");
    ui->B->setText("U");
    ui->C2->setText("I");
    ui->C2_B->setText("9");
    ui->D2->setText("O");
    ui->D2_B->setText("0");
    ui->E2->setText("P");
    ui->F2->setText("[");
    ui->F2_B->setText("=");
    ui->G2->setText("]");
//    if (isDemo==2){
//    isDemoFunction=1;
//        if (isDemoKey==1){
//        isDemo=3;
//        ui->Demo2->hide();
//ui->Demo3->show();
//        }
//    }
}

void MusicBoard::on_HiddenShowMBoardButton_clicked()
{
    //on_HiddenHideAllButton_clicked();
    ui->C->setText("Q");
    ui->C_B->setText("2");
    ui->D->setText("W");
    ui->D_B->setText("3");
    ui->E->setText("E");
    ui->F->setText("R");
    ui->F_B->setText("5");
    ui->G->setText("T");
    ui->G_B->setText("6");
    ui->A->setText("Y");
    ui->A_B->setText("7");
    ui->B->setText("U");
    ui->C2->setText("I");
    ui->C2_B->setText("9");
    ui->D2->setText("O");
    ui->D2_B->setText("0");
    ui->E2->setText("P");
    ui->F2->setText("[");
    ui->F2_B->setText("=");
    ui->G2->setText("]");
    if (isDemo==2){
    isDemoFunction=1;
        if (isDemoKey==1){
        isDemo=3;
        ui->Demo2->hide();
ui->Demo3->show();
        }
    }
}

void MusicBoard::on_HiddenShowKeysButton_clicked()
{
    on_HiddenHideAllButton_clicked();
    ui->C->setText("Q");
    ui->C_B->setText("2");
    ui->D->setText("W");
    ui->D_B->setText("3");
    ui->E->setText("E");
    ui->F->setText("R");
    ui->F_B->setText("5");
    ui->G->setText("T");
    ui->G_B->setText("6");
    ui->A->setText("Y");
    ui->A_B->setText("7");
    ui->B->setText("U");
    ui->C2->setText("I");
    ui->C2_B->setText("9");
    ui->D2->setText("O");
    ui->D2_B->setText("0");
    ui->E2->setText("P");
    ui->F2->setText("[");
    ui->F2_B->setText("=");
    ui->G2->setText("]");
    if (isDemo==2){
    isDemoFunction=1;
        if (isDemoKey==1){
        isDemo=3;
        ui->Demo2->hide();
        ui->Demo3->show();
        }
    }
}

//void MusicBoard::on_DemoDoneButton_clicked()
//{
//    if (isDemo==5){
//        isDemo=6;
//        ui->Demo6->hide();
//        ui->Demo7->show();
//    }
//}

void MusicBoard::on_DoneDemoButton_1_clicked()
{   on_HiddenHideAllButton_clicked();
    if (isDemo==7){
        isDemo=0;
        ui->Demo7->hide();
    }
}

void MusicBoard::on_DoneDemoButton_clicked()
{
    on_HiddenHideAllButton_clicked();
    if (isDemo==6){
        isDemo=7;
        ui->Demo6->hide();
        ui->Demo7->show();
    }
}

void MusicBoard::on_ShowMBTerminalButton_clicked()
{
    if (isMBTerminal==0){
        ui->MBTerminal->show();
        isMBTerminal=1;
        ui->ShowMBTerminalButton->setText("Hide Terminal");
    } else {
        ui->MBTerminal->hide();
        isMBTerminal=0;
        ui->ShowMBTerminalButton->setText("Show Terminal");
    }
}

void MusicBoard::on_CloseMBTerminal_clicked()
{   on_HiddenHideAllButton_clicked();
    isMBTerminal=0;
    ui->MBTerminal->hide();
}

void MusicBoard::on_PreferencesButton_clicked()
{
    ///ui->VolSlider->setStyleSheet("QSlider {background-color: rgba(136, 138, 133, 0);selection-background-color: rgb(136, 138, 133);}QSlider::handle:horizontal {height: 10px;/*background-image: url(:/pictures/Color_0.jpg);  img image: url(:/pictures/Color_0.jpg);*/background-image: url(:/pictures/Slider14.png);image: url(:/pictures/Slider14.png);background-color: rgba(136, 138, 133, 0)}");
    ////ui->VolLabel->setStyleSheet("background-color: rgba(136, 138, 133, 0);color: rgb(136, 138, 133);");
    ///if (isSettings==0){
    on_HiddenHideAllButton_clicked();
    PreferencesForm settings;
    settings.setModal(true);
    settings.exec();
}
