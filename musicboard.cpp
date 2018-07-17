#include "musicboard.h"
#include "ui_musicboard.h"
#include "string.h"

MusicBoard::MusicBoard(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MusicBoard)
{
  ui->setupUi(this);
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
  ui->K4->hide();
  ui->NumlockLabel_2->hide();
  ui->VolLabel->hide();
  ui->VolSlider->hide();
  ui->TrLeft->hide();
  ui->TrRight->hide();
  ui->HelpButton->hide();
  ui->AboutButton->hide();
}


MusicBoard::~MusicBoard()
{
  delete ui;
}

int setButton;

//Selectat Si Modulat Sunet

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



void MusicBoard::on_C_clicked()
{
  QMediaPlayer * C = new QMediaPlayer();
  //C->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/C.wav"));
  C->setMedia(QUrl(C_Song));
  C->play();
}


void MusicBoard::on_D_clicked()
{
  QMediaPlayer * D = new QMediaPlayer();
  //D->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/D.wav"));
  D->setMedia(QUrl(D_Song));
  D->play();
}

void MusicBoard::on_C_B_clicked()
{
  QMediaPlayer * C_B = new QMediaPlayer();
  //C_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/C_B.wav"));
  C_B->setMedia(QUrl(C_B_Song));
  C_B->play();
}

void MusicBoard::on_D_B_clicked()
{
  QMediaPlayer * D_B = new QMediaPlayer();
  //D_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/D_B.wav"));
  D_B->setMedia(QUrl(D_B_Song));
  D_B->play();
}

void MusicBoard::on_E_clicked()
{
  QMediaPlayer * E = new QMediaPlayer();
  //E->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/E.wav"));
  E->setMedia(QUrl(E_Song));
  E->play();
}

void MusicBoard::on_F_clicked()
{
  QMediaPlayer * F = new QMediaPlayer();
  //F->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/F.wav"));
  F->setMedia(QUrl(F_Song));
  F->play();
}

void MusicBoard::on_F_B_clicked()
{
  QMediaPlayer * F_B = new QMediaPlayer();
  //F_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/F_B.wav"));
  F_B->setMedia(QUrl(F_B_Song));
  F_B->play();
}

void MusicBoard::on_G_clicked()
{
  QMediaPlayer * G = new QMediaPlayer();
  //G->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/G.wav"));
  G->setMedia(QUrl(G_Song));
  G->play();
}

void MusicBoard::on_G_B_clicked()
{
  QMediaPlayer * G_B = new QMediaPlayer();
  //G_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/G_B.wav"));
  G_B->setMedia(QUrl(G_B_Song));
  G_B->play();
}

void MusicBoard::on_A_clicked()
{
  QMediaPlayer * A = new QMediaPlayer();
  //A->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/A.wav"));
  A->setMedia(QUrl(A_Song));
  A->play();
}

void MusicBoard::on_A_B_clicked()
{
  QMediaPlayer * A_B = new QMediaPlayer();
  //A_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/A_B.wav"));
  A_B->setMedia(QUrl(A_B_Song));
  A_B->play();
}

void MusicBoard::on_B_clicked()
{
  QMediaPlayer * B = new QMediaPlayer();
  //B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/B.wav"));
  B->setMedia(QUrl(B_Song));
  B->play();
}

void MusicBoard::on_C2_clicked()
{
  QMediaPlayer * C2 = new QMediaPlayer();
  //C2->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/C2.wav"));
  C2->setMedia(QUrl(C2_Song));
  C2->play();
}

void MusicBoard::on_C2_B_clicked()
{
  QMediaPlayer * C2_B = new QMediaPlayer();
  //C2_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/C2_B.wav"));
  C2_B->setMedia(QUrl(C2_B_Song));
  C2_B->play();
}

void MusicBoard::on_D2_clicked()
{
  QMediaPlayer * D2 = new QMediaPlayer();
  //D2->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/D2.wav"));
  D2->setMedia(QUrl(D2_Song));
  D2->play();
}

void MusicBoard::on_D2_B_clicked()
{
  QMediaPlayer * D2_B = new QMediaPlayer();
  //D2_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/D2_B.wav"));
  D2_B->setMedia(QUrl(D2_B_Song));
  D2_B->play();
}

void MusicBoard::on_E2_clicked()
{
  QMediaPlayer * E2 = new QMediaPlayer();
  //E2->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/E2.wav"));
  E2->setMedia(QUrl(E2_Song));
  E2->play();
}

void MusicBoard::on_F2_clicked()
{
  QMediaPlayer * F2 = new QMediaPlayer();
  //F2->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/F2.wav"));
  F2->setMedia(QUrl(F2_Song));
  F2->play();
}

void MusicBoard::on_F2_B_clicked()
{
  QMediaPlayer * F2_B = new QMediaPlayer();
  //F2_B->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/F2_B.wav"));
  F2_B->setMedia(QUrl(F2_B_Song));
  F2_B->play();
}

void MusicBoard::on_G2_clicked()
{
  QMediaPlayer * G2 = new QMediaPlayer();
  //G2->setMedia(QUrl("qrc:/sounds/PianoSounds/Edit/G2.wav"));
  G2->setMedia(QUrl(G2_Song));
  G2->play();
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
  P1->play();
}

void MusicBoard::on_P2_clicked()
{ setButton=2;
  QMediaPlayer * P2 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P2 = new QMediaPlayer();
  //P2->setMedia(QUrl("qrc:/sounds/Percussion/Dubstep/Kick2.wav"));
  P2->setMedia(QUrl(P2_Song));
  P2->play();
}

void MusicBoard::on_P3_clicked()
{ setButton=3;
  QMediaPlayer * P3 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P3 = new QMediaPlayer();
  //P3->setMedia(QUrl("qrc:/sounds/Percussion/Dubstep/Snare.wav"));
  P3->setMedia(QUrl(P3_Song));
  P3->play();
}

void MusicBoard::on_P4_clicked()
{ setButton=4;
  QMediaPlayer * P4 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P4 = new QMediaPlayer();
  //P4->setMedia(QUrl("qrc:/sounds/Dub_Selection/FX4.wav"));
  P4->setMedia(QUrl(P4_Song));
  P4->play();
}

void MusicBoard::on_P5_clicked()
{ setButton=5;
  QMediaPlayer * P5 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P5 = new QMediaPlayer();
  //P5->setMedia(QUrl("qrc:/sounds/Dub_Selection/FX5.wav"));
  P5->setMedia(QUrl(P5_Song));
  P5->play();
}

void MusicBoard::on_P6_clicked()
{ setButton=6;
  QMediaPlayer * P6 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P6 = new QMediaPlayer();
  //P6->setMedia(QUrl("qrc:/sounds/Dub_Selection/DROP 07 Scos Sfarsit Scos.wav"));
  P6->setMedia(QUrl(P6_Song));
  P6->play();
}

void MusicBoard::on_P7_clicked()
{ setButton=7;
  QMediaPlayer * P7 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P7 = new QMediaPlayer();
  //P7->setMedia(QUrl("qrc:/sounds/Dub_Selection/006.wav"));
  P7->setMedia(QUrl(P7_Song));
  P7->play();
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

void MusicBoard::on_File2_clicked(const QModelIndex &index)
{
    QString FilePath = filemodel->fileInfo(index).absoluteFilePath();
    FilePath = "file://" + FilePath;
    if (CheckWAV(FilePath)==1 || CheckMP3(FilePath)==1){
// Attribute the FilePath to the path of the meida of the button
        //ui->Error->setText("Button?");
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
      } else {
        ui->Error->setText("Error");
      }
}

void MusicBoard::on_P8_clicked()
{ setButton=8;
  QMediaPlayer * P8 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P8 = new QMediaPlayer();
  P8->setMedia(QUrl(P8_Song));
  P8->play();
}

void MusicBoard::on_P9_clicked()
{ setButton=9;
  QMediaPlayer * P9 = new QMediaPlayer();
  ui->Error->setText(QString::number(setButton));
  //QMediaPlayer * P9 = new QMediaPlayer();
  P9->setMedia(QUrl(P9_Song));
  P9->play();
}

void MusicBoard::on_P10_clicked()
{   //Have to have those?
    //setButton=10;
    //ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P10 = new QMediaPlayer();
    //P10->play();
}

void MusicBoard::on_P11_clicked()
{
    setButton=11;
    QMediaPlayer * P11 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P11 = new QMediaPlayer();
    P11->setMedia(QUrl(P11_Song));
    P11->play();
}

void MusicBoard::on_P12_clicked()
{
    setButton=12;
    QMediaPlayer * P12 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P12 = new QMediaPlayer();
    P12->setMedia(QUrl(P12_Song));
    P12->play();
}

void MusicBoard::on_P13_clicked()
{
    setButton=13;
    QMediaPlayer * P13 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P13 = new QMediaPlayer();
    P13->setMedia(QUrl(P13_Song));
    P13->play();
}

void MusicBoard::on_P14_clicked()
{
    setButton=14;
    QMediaPlayer * P14 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P14 = new QMediaPlayer();
    P14->setMedia(QUrl(P14_Song));
    P14->play();
}

void MusicBoard::on_P15_clicked()
{
    setButton=15;
    QMediaPlayer * P15 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P15 = new QMediaPlayer();
    P15->setMedia(QUrl(P15_Song));
    P15->play();
}

void MusicBoard::on_P16_clicked()
{
    setButton=16;
    QMediaPlayer * P16 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P16 = new QMediaPlayer();
    P16->setMedia(QUrl(P16_Song));
    P16->play();
}

void MusicBoard::on_P17_clicked()
{
    setButton=17;
    QMediaPlayer * P17 = new QMediaPlayer();
    ui->Error->setText(QString::number(setButton));
    //QMediaPlayer * P17 = new QMediaPlayer();
    P17->setMedia(QUrl(P17_Song));
    P17->play();
}

void MusicBoard::on_Close_clicked()
{
    delete ui;
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
  R1->setMedia(QUrl(R1_Song));
  R1->play();
}

void MusicBoard::on_R2_clicked()
{
    setButton=20;
    QMediaPlayer * R2 = new QMediaPlayer();
    ui->Error->setText("R2");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R2->setMedia(QUrl(R2_Song));
    R2->play();
}

void MusicBoard::on_R3_clicked()
{
    setButton=21;
    QMediaPlayer * R3 = new QMediaPlayer();
    ui->Error->setText("R3");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R3->setMedia(QUrl(R3_Song));
    R3->play();
}

void MusicBoard::on_R4_clicked()
{
    setButton=22;
    QMediaPlayer * R4 = new QMediaPlayer();
    ui->Error->setText("R4");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R4->setMedia(QUrl(R4_Song));
    R4->play();
}

void MusicBoard::on_R5_clicked()
{
    setButton=23;
    QMediaPlayer * R5 = new QMediaPlayer();
    ui->Error->setText("R5");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R5->setMedia(QUrl(R5_Song));
    R5->play();
}

void MusicBoard::on_R6_clicked()
{
    setButton=24;
    QMediaPlayer * R6 = new QMediaPlayer();
    ui->Error->setText("R6");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R6->setMedia(QUrl(R6_Song));
    R6->play();
}

void MusicBoard::on_R7_clicked()
{
    setButton=25;
    QMediaPlayer * R7 = new QMediaPlayer();
    ui->Error->setText("R7");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R7->setMedia(QUrl(R7_Song));
    R7->play();
}

void MusicBoard::on_R8_clicked()
{
    setButton=26;
    QMediaPlayer * R8 = new QMediaPlayer();
    ui->Error->setText("R8");
    //QMediaPlayer * P17 = new QMediaPlayer();
    R8->setMedia(QUrl(R8_Song));
    R8->play();
}

void MusicBoard::on_K2_clicked()
{
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
//  A_B_Song="qrc:/sounds/Keyboards/Keyboard3/13_AB.wav";
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
}

void MusicBoard::on_AboutButton_clicked()
{
    ui->About->show();
}

void MusicBoard::on_Set1_clicked()
{
    on_K1_clicked();
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
    P12_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_01.wav";
    P13_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_02.wav";
    P14_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_03.wav";
    P15_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_04.wav";
    P16_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_05.wav";
    P17_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_06.wav";
    R1_Song="";
    R2_Song="";
    R3_Song="";
    R4_Song="";
    R5_Song="";
    R6_Song="";
    R7_Song="";
    R8_Song="";
}

void MusicBoard::on_Set2_clicked()
{
  on_K2_clicked();
  P1_Song="qrc:/sounds/Dub_Selection/TMS3_NuKick_165.wav";
  P2_Song="qrc:/sounds/Dub_Selection/TMS3_Snare_002.wav";
  P3_Song="qrc:/sounds/Dub_Selection/FX4.wav";
  P4_Song="qrc:/sounds/Dub_Selection/Orchestra Hit 001 Revved.wav";
  P5_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_07.wav";
  P6_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_08.wav";
  P7_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_09.wav";
  P8_Song="qrc:/sounds/Dub_Selection/Bass Drop (Extended) (Louder).wav";
  P9_Song="qrc:/sounds/Dub_Selection/FX5.wav";
  P11_Song="qrc:/sounds/Dub_Selection/ufx_imp_atomic.wav";
  P12_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_01.wav";
  P13_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_02.wav";
  P14_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_03.wav";
  P15_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_04.wav";
  P16_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_05.wav";
  P17_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_06.wav";
  R1_Song="";
  R2_Song="";
  R3_Song="";
  R4_Song="";
  R5_Song="";
  R6_Song="";
  R7_Song="";
  R8_Song="";
}

void MusicBoard::on_Set3_clicked()
{
  on_K3_clicked();
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
  R1_Song="";
  R2_Song="";
  R3_Song="";
  R4_Song="";
  R5_Song="";
  R6_Song="";
  R7_Song="";
  R8_Song="";
}

void MusicBoard::on_Set4_clicked()
{
  on_K4_clicked(); //momentan
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
  R1_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_08.wav";
  R2_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_09.wav";
  R3_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_10.wav";
  R4_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_11.wav";
  R5_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_12.wav";
  R6_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_13.wav";
  R7_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_14.wav";
  R8_Song="qrc:/sounds/Dub_Selection/Low_End_FX/LowEnd_FX_15.wav";
}


//void MusicBoard::on_AboutClose_4_clicked()
//{
//  ui->
//}

//void MusicBoard::on_HelpClose_clicked()
//{
//}
