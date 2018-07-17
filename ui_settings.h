/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QDialogButtonBox *Buttons;
    QLabel *label;
    QFrame *line;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *SettingsText;
    QListView *listView;
    QLabel *label_2;
    QLineEdit *P1_Text;
    QPushButton *SettingsApplyTextButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *P2_Text;
    QLineEdit *P3_Text;
    QLineEdit *P4_Text;
    QLineEdit *P5_Text;
    QLineEdit *P6_Text;
    QLineEdit *P7_Text;
    QLineEdit *P8_Text;
    QLineEdit *P9_Text;
    QLineEdit *P10_Text;
    QLineEdit *P11_Text;
    QLineEdit *P12_Text;
    QLineEdit *P13_Text;
    QLineEdit *P14_Text;
    QLineEdit *P15_Text;
    QLineEdit *P16_Text;
    QLineEdit *P17_Text;
    QLabel *Picture_2;
    QWidget *SettingsKeyboard;
    QLabel *label_19;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QKeySequenceEdit *Sc_1;
    QKeySequenceEdit *Sc_2;
    QKeySequenceEdit *Sc_3;
    QKeySequenceEdit *Sc_4;
    QKeySequenceEdit *Sc_5;
    QKeySequenceEdit *Sc_6;
    QKeySequenceEdit *Sc_7;
    QKeySequenceEdit *Sc_8;
    QKeySequenceEdit *Sc_9;
    QKeySequenceEdit *Sc_10;
    QKeySequenceEdit *Sc_11;
    QKeySequenceEdit *Sc_12;
    QKeySequenceEdit *Sc_13;
    QKeySequenceEdit *Sc_14;
    QKeySequenceEdit *Sc_15;
    QKeySequenceEdit *Sc_16;
    QKeySequenceEdit *Sc_17;
    QLabel *Picture_3;
    QFrame *frame_4;
    QFrame *OverEditableContent;
    QLabel *label_33;
    QWidget *SettingsMixer;
    QLabel *label_68;
    QSlider *P_1;
    QSlider *P_2;
    QSlider *P_3;
    QPushButton *SettingsApplyMixerButton;
    QSlider *P_4;
    QSlider *P_5;
    QSlider *P_6;
    QSlider *P_7;
    QSlider *P_8;
    QSlider *P_9;
    QSlider *P_10;
    QSlider *P_11;
    QSlider *P_12;
    QSlider *P_13;
    QSlider *P_14;
    QSlider *P_15;
    QSlider *P_16;
    QLabel *label_20;
    QSlider *KeyboardSlider;
    QLabel *label_21;
    QSlider *MasterSlider;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QSlider *R_1;
    QSlider *R_2;
    QSlider *R_3;
    QSlider *R_4;
    QSlider *R_5;
    QSlider *R_6;
    QSlider *R_7;
    QSlider *R_8;
    QLabel *Picture_4;
    QPushButton *SettingsMuteButton_2;
    QWidget *SettingsWeb;
    QLabel *Picture_5;
    QFrame *frame;
    QLabel *LabelWeb;
    QFrame *frame_3;
    QLabel *LabelWeb1;
    QLabel *label_30;
    QPushButton *SettingsMuteButton;
    QFrame *frame_2;
    QPushButton *SettingsHelpButton;
    QLabel *Picture;
    QFrame *SHelp;
    QFrame *line_8;
    QTextEdit *textEdit;
    QLabel *label_32;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QPushButton *SHelpClose;
    QLabel *label_31;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(400, 273);
        Settings->setMinimumSize(QSize(400, 273));
        Settings->setMaximumSize(QSize(400, 273));
        Settings->setCursor(QCursor(Qt::UpArrowCursor));
        Settings->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/pictures/MBIco.png"), QSize(), QIcon::Normal, QIcon::Off);
        Settings->setWindowIcon(icon);
        Settings->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
""));
        Buttons = new QDialogButtonBox(Settings);
        Buttons->setObjectName(QStringLiteral("Buttons"));
        Buttons->setGeometry(QRect(340, 240, 51, 31));
        Buttons->setLayoutDirection(Qt::LeftToRight);
        Buttons->setAutoFillBackground(false);
        Buttons->setStyleSheet(QLatin1String("/*background-color: rgba(136, 138, 133, 0);*/\n"
"font: 7pt \"Cantarell\";\n"
"background-color: rgb(255, 159, 159);"));
        Buttons->setOrientation(Qt::Vertical);
        Buttons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Buttons->setCenterButtons(false);
        label = new QLabel(Settings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, -10, 81, 51));
        label->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);"));
        line = new QFrame(Settings);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 30, 381, 5));
        line->setMinimumSize(QSize(0, 5));
        line->setMaximumSize(QSize(16777215, 5));
        line->setStyleSheet(QStringLiteral("background-color: rgb(255, 159, 159);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget = new QWidget(Settings);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 30, 381, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(gridLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"alternate-background-color: rgb(255, 255, 255);\n"
"selection-color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(255, 255, 255);"));
        tabWidget->setTabPosition(QTabWidget::South);
        SettingsText = new QWidget();
        SettingsText->setObjectName(QStringLiteral("SettingsText"));
        listView = new QListView(SettingsText);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, 0, 381, 201));
        label_2 = new QLabel(SettingsText);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 10, 21, 31));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgba(136, 138, 133, 0);\n"
"font: 75 11pt \"Cantarell\";"));
        P1_Text = new QLineEdit(SettingsText);
        P1_Text->setObjectName(QStringLiteral("P1_Text"));
        P1_Text->setGeometry(QRect(30, 10, 71, 31));
        P1_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        SettingsApplyTextButton = new QPushButton(SettingsText);
        SettingsApplyTextButton->setObjectName(QStringLiteral("SettingsApplyTextButton"));
        SettingsApplyTextButton->setGeometry(QRect(280, 170, 71, 21));
        SettingsApplyTextButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));
        label_3 = new QLabel(SettingsText);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 40, 21, 31));
        label_3->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_4 = new QLabel(SettingsText);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 70, 21, 31));
        label_4->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_5 = new QLabel(SettingsText);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 100, 21, 31));
        label_5->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_6 = new QLabel(SettingsText);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 130, 21, 31));
        label_6->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_7 = new QLabel(SettingsText);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 160, 21, 31));
        label_7->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_8 = new QLabel(SettingsText);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 10, 21, 31));
        label_8->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_9 = new QLabel(SettingsText);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 40, 21, 31));
        label_9->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_10 = new QLabel(SettingsText);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(120, 70, 21, 31));
        label_10->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_11 = new QLabel(SettingsText);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(110, 100, 31, 31));
        label_11->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_12 = new QLabel(SettingsText);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(110, 130, 31, 31));
        label_12->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_13 = new QLabel(SettingsText);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(110, 160, 31, 31));
        label_13->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_14 = new QLabel(SettingsText);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(230, 10, 31, 31));
        label_14->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_15 = new QLabel(SettingsText);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(230, 40, 31, 31));
        label_15->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_16 = new QLabel(SettingsText);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(230, 70, 31, 31));
        label_16->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_17 = new QLabel(SettingsText);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(230, 100, 31, 31));
        label_17->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_18 = new QLabel(SettingsText);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(230, 130, 31, 31));
        label_18->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        P2_Text = new QLineEdit(SettingsText);
        P2_Text->setObjectName(QStringLiteral("P2_Text"));
        P2_Text->setGeometry(QRect(30, 40, 71, 31));
        P2_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P3_Text = new QLineEdit(SettingsText);
        P3_Text->setObjectName(QStringLiteral("P3_Text"));
        P3_Text->setGeometry(QRect(30, 70, 71, 31));
        P3_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P4_Text = new QLineEdit(SettingsText);
        P4_Text->setObjectName(QStringLiteral("P4_Text"));
        P4_Text->setGeometry(QRect(30, 100, 71, 31));
        P4_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P5_Text = new QLineEdit(SettingsText);
        P5_Text->setObjectName(QStringLiteral("P5_Text"));
        P5_Text->setGeometry(QRect(30, 130, 71, 31));
        P5_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P6_Text = new QLineEdit(SettingsText);
        P6_Text->setObjectName(QStringLiteral("P6_Text"));
        P6_Text->setGeometry(QRect(30, 160, 71, 31));
        P6_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P7_Text = new QLineEdit(SettingsText);
        P7_Text->setObjectName(QStringLiteral("P7_Text"));
        P7_Text->setGeometry(QRect(150, 10, 71, 31));
        P7_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P8_Text = new QLineEdit(SettingsText);
        P8_Text->setObjectName(QStringLiteral("P8_Text"));
        P8_Text->setGeometry(QRect(150, 40, 71, 31));
        P8_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P9_Text = new QLineEdit(SettingsText);
        P9_Text->setObjectName(QStringLiteral("P9_Text"));
        P9_Text->setGeometry(QRect(150, 70, 71, 31));
        P9_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P10_Text = new QLineEdit(SettingsText);
        P10_Text->setObjectName(QStringLiteral("P10_Text"));
        P10_Text->setGeometry(QRect(150, 100, 71, 31));
        P10_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P11_Text = new QLineEdit(SettingsText);
        P11_Text->setObjectName(QStringLiteral("P11_Text"));
        P11_Text->setGeometry(QRect(150, 130, 71, 31));
        P11_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P12_Text = new QLineEdit(SettingsText);
        P12_Text->setObjectName(QStringLiteral("P12_Text"));
        P12_Text->setGeometry(QRect(150, 160, 71, 31));
        P12_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P13_Text = new QLineEdit(SettingsText);
        P13_Text->setObjectName(QStringLiteral("P13_Text"));
        P13_Text->setGeometry(QRect(270, 10, 71, 31));
        P13_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P14_Text = new QLineEdit(SettingsText);
        P14_Text->setObjectName(QStringLiteral("P14_Text"));
        P14_Text->setGeometry(QRect(270, 40, 71, 31));
        P14_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P15_Text = new QLineEdit(SettingsText);
        P15_Text->setObjectName(QStringLiteral("P15_Text"));
        P15_Text->setGeometry(QRect(270, 70, 71, 31));
        P15_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P16_Text = new QLineEdit(SettingsText);
        P16_Text->setObjectName(QStringLiteral("P16_Text"));
        P16_Text->setGeometry(QRect(270, 100, 71, 31));
        P16_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        P17_Text = new QLineEdit(SettingsText);
        P17_Text->setObjectName(QStringLiteral("P17_Text"));
        P17_Text->setGeometry(QRect(270, 130, 71, 31));
        P17_Text->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Picture_2 = new QLabel(SettingsText);
        Picture_2->setObjectName(QStringLiteral("Picture_2"));
        Picture_2->setGeometry(QRect(-10, -30, 400, 273));
        Picture_2->setStyleSheet(QLatin1String("background-image: url(:/pictures/SettingsPicture.png);\n"
"image: url(:/pictures/SettingsPicture.png);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/pictures/MB.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(SettingsText, icon1, QString());
        Picture_2->raise();
        listView->raise();
        label_2->raise();
        P1_Text->raise();
        SettingsApplyTextButton->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        P2_Text->raise();
        P3_Text->raise();
        P4_Text->raise();
        P5_Text->raise();
        P6_Text->raise();
        P7_Text->raise();
        P8_Text->raise();
        P9_Text->raise();
        P10_Text->raise();
        P11_Text->raise();
        P12_Text->raise();
        P13_Text->raise();
        P14_Text->raise();
        P15_Text->raise();
        P16_Text->raise();
        P17_Text->raise();
        SettingsKeyboard = new QWidget();
        SettingsKeyboard->setObjectName(QStringLiteral("SettingsKeyboard"));
        label_19 = new QLabel(SettingsKeyboard);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(230, 100, 31, 31));
        label_19->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_37 = new QLabel(SettingsKeyboard);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(120, 10, 21, 31));
        label_37->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_38 = new QLabel(SettingsKeyboard);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(230, 70, 31, 31));
        label_38->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_39 = new QLabel(SettingsKeyboard);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(0, 100, 21, 31));
        label_39->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_40 = new QLabel(SettingsKeyboard);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(120, 70, 21, 31));
        label_40->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_41 = new QLabel(SettingsKeyboard);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(0, 40, 21, 31));
        label_41->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_42 = new QLabel(SettingsKeyboard);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(0, 160, 21, 31));
        label_42->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_43 = new QLabel(SettingsKeyboard);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(110, 160, 31, 31));
        label_43->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_44 = new QLabel(SettingsKeyboard);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(230, 130, 31, 31));
        label_44->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_45 = new QLabel(SettingsKeyboard);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(120, 40, 21, 31));
        label_45->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_46 = new QLabel(SettingsKeyboard);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(0, 130, 21, 31));
        label_46->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_47 = new QLabel(SettingsKeyboard);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(230, 40, 31, 31));
        label_47->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_48 = new QLabel(SettingsKeyboard);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(230, 10, 31, 31));
        label_48->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_49 = new QLabel(SettingsKeyboard);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(110, 100, 31, 31));
        label_49->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_50 = new QLabel(SettingsKeyboard);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(0, 10, 21, 31));
        label_50->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_51 = new QLabel(SettingsKeyboard);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(110, 130, 31, 31));
        label_51->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        label_52 = new QLabel(SettingsKeyboard);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(0, 70, 21, 31));
        label_52->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Cantarell\";"));
        Sc_1 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_1->setObjectName(QStringLiteral("Sc_1"));
        Sc_1->setEnabled(true);
        Sc_1->setGeometry(QRect(30, 10, 71, 31));
        Sc_1->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_1->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_1->setInputMethodHints(Qt::ImhNone);
        Sc_2 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_2->setObjectName(QStringLiteral("Sc_2"));
        Sc_2->setEnabled(true);
        Sc_2->setGeometry(QRect(30, 40, 71, 31));
        Sc_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_2->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_2->setInputMethodHints(Qt::ImhNone);
        Sc_3 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_3->setObjectName(QStringLiteral("Sc_3"));
        Sc_3->setEnabled(true);
        Sc_3->setGeometry(QRect(30, 70, 71, 31));
        Sc_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_3->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_3->setInputMethodHints(Qt::ImhNone);
        Sc_4 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_4->setObjectName(QStringLiteral("Sc_4"));
        Sc_4->setEnabled(true);
        Sc_4->setGeometry(QRect(30, 100, 71, 31));
        Sc_4->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_4->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_4->setInputMethodHints(Qt::ImhNone);
        Sc_5 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_5->setObjectName(QStringLiteral("Sc_5"));
        Sc_5->setEnabled(true);
        Sc_5->setGeometry(QRect(30, 130, 71, 31));
        Sc_5->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_5->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_5->setInputMethodHints(Qt::ImhNone);
        Sc_6 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_6->setObjectName(QStringLiteral("Sc_6"));
        Sc_6->setEnabled(true);
        Sc_6->setGeometry(QRect(30, 160, 71, 31));
        Sc_6->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_6->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_6->setInputMethodHints(Qt::ImhNone);
        Sc_7 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_7->setObjectName(QStringLiteral("Sc_7"));
        Sc_7->setEnabled(true);
        Sc_7->setGeometry(QRect(150, 10, 71, 31));
        Sc_7->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_7->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_7->setInputMethodHints(Qt::ImhNone);
        Sc_8 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_8->setObjectName(QStringLiteral("Sc_8"));
        Sc_8->setEnabled(true);
        Sc_8->setGeometry(QRect(150, 40, 71, 31));
        Sc_8->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_8->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_8->setInputMethodHints(Qt::ImhNone);
        Sc_9 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_9->setObjectName(QStringLiteral("Sc_9"));
        Sc_9->setEnabled(true);
        Sc_9->setGeometry(QRect(150, 70, 71, 31));
        Sc_9->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_9->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_9->setInputMethodHints(Qt::ImhNone);
        Sc_10 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_10->setObjectName(QStringLiteral("Sc_10"));
        Sc_10->setEnabled(true);
        Sc_10->setGeometry(QRect(150, 100, 71, 31));
        Sc_10->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_10->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_10->setInputMethodHints(Qt::ImhNone);
        Sc_11 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_11->setObjectName(QStringLiteral("Sc_11"));
        Sc_11->setEnabled(true);
        Sc_11->setGeometry(QRect(150, 130, 71, 31));
        Sc_11->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_11->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_11->setInputMethodHints(Qt::ImhNone);
        Sc_12 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_12->setObjectName(QStringLiteral("Sc_12"));
        Sc_12->setEnabled(true);
        Sc_12->setGeometry(QRect(150, 160, 71, 31));
        Sc_12->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_12->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_12->setInputMethodHints(Qt::ImhNone);
        Sc_13 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_13->setObjectName(QStringLiteral("Sc_13"));
        Sc_13->setEnabled(true);
        Sc_13->setGeometry(QRect(270, 10, 71, 31));
        Sc_13->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_13->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_13->setInputMethodHints(Qt::ImhNone);
        Sc_14 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_14->setObjectName(QStringLiteral("Sc_14"));
        Sc_14->setEnabled(true);
        Sc_14->setGeometry(QRect(270, 40, 71, 31));
        Sc_14->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_14->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_14->setInputMethodHints(Qt::ImhNone);
        Sc_15 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_15->setObjectName(QStringLiteral("Sc_15"));
        Sc_15->setEnabled(true);
        Sc_15->setGeometry(QRect(270, 70, 71, 31));
        Sc_15->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_15->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_15->setInputMethodHints(Qt::ImhNone);
        Sc_16 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_16->setObjectName(QStringLiteral("Sc_16"));
        Sc_16->setEnabled(true);
        Sc_16->setGeometry(QRect(270, 100, 71, 31));
        Sc_16->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_16->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_16->setInputMethodHints(Qt::ImhNone);
        Sc_17 = new QKeySequenceEdit(SettingsKeyboard);
        Sc_17->setObjectName(QStringLiteral("Sc_17"));
        Sc_17->setEnabled(true);
        Sc_17->setGeometry(QRect(270, 130, 71, 31));
        Sc_17->setContextMenuPolicy(Qt::DefaultContextMenu);
        Sc_17->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Courier 10 Pitch\";"));
        Sc_17->setInputMethodHints(Qt::ImhNone);
        Picture_3 = new QLabel(SettingsKeyboard);
        Picture_3->setObjectName(QStringLiteral("Picture_3"));
        Picture_3->setGeometry(QRect(-10, -30, 400, 273));
        Picture_3->setStyleSheet(QLatin1String("background-image: url(:/pictures/SettingsPicture.png);\n"
"image: url(:/pictures/SettingsPicture.png);"));
        frame_4 = new QFrame(SettingsKeyboard);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(60, 130, 120, 80));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        OverEditableContent = new QFrame(SettingsKeyboard);
        OverEditableContent->setObjectName(QStringLiteral("OverEditableContent"));
        OverEditableContent->setGeometry(QRect(-1, -1, 381, 211));
        OverEditableContent->setStyleSheet(QStringLiteral("background-color: rgba(136, 138, 133, 51);"));
        OverEditableContent->setFrameShape(QFrame::StyledPanel);
        OverEditableContent->setFrameShadow(QFrame::Raised);
        label_33 = new QLabel(OverEditableContent);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(230, 150, 171, 53));
        label_33->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgba(136, 138, 133, 0);"));
        tabWidget->addTab(SettingsKeyboard, icon1, QString());
        Picture_3->raise();
        label_19->raise();
        label_37->raise();
        label_38->raise();
        label_39->raise();
        label_40->raise();
        label_41->raise();
        label_42->raise();
        label_43->raise();
        label_44->raise();
        label_45->raise();
        label_46->raise();
        label_47->raise();
        label_48->raise();
        label_49->raise();
        label_50->raise();
        label_51->raise();
        label_52->raise();
        Sc_1->raise();
        Sc_2->raise();
        Sc_3->raise();
        Sc_4->raise();
        Sc_5->raise();
        Sc_6->raise();
        Sc_7->raise();
        Sc_8->raise();
        Sc_9->raise();
        Sc_10->raise();
        Sc_11->raise();
        Sc_12->raise();
        Sc_13->raise();
        Sc_14->raise();
        Sc_15->raise();
        Sc_16->raise();
        Sc_17->raise();
        frame_4->raise();
        OverEditableContent->raise();
        SettingsMixer = new QWidget();
        SettingsMixer->setObjectName(QStringLiteral("SettingsMixer"));
        label_68 = new QLabel(SettingsMixer);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setGeometry(QRect(0, 150, 391, 41));
        label_68->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10.5pt \"Cantarell\";"));
        P_1 = new QSlider(SettingsMixer);
        P_1->setObjectName(QStringLiteral("P_1"));
        P_1->setGeometry(QRect(-7, 39, 27, 121));
        P_1->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(83, 68, 150);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
""));
        P_1->setValue(99);
        P_1->setOrientation(Qt::Vertical);
        P_1->setTickPosition(QSlider::TicksAbove);
        P_2 = new QSlider(SettingsMixer);
        P_2->setObjectName(QStringLiteral("P_2"));
        P_2->setGeometry(QRect(20, 39, 20, 121));
        P_2->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(83, 68, 150);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
""));
        P_2->setValue(99);
        P_2->setOrientation(Qt::Vertical);
        P_3 = new QSlider(SettingsMixer);
        P_3->setObjectName(QStringLiteral("P_3"));
        P_3->setGeometry(QRect(40, 39, 20, 121));
        P_3->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(83, 68, 150);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
""));
        P_3->setValue(99);
        P_3->setOrientation(Qt::Vertical);
        SettingsApplyMixerButton = new QPushButton(SettingsMixer);
        SettingsApplyMixerButton->setObjectName(QStringLiteral("SettingsApplyMixerButton"));
        SettingsApplyMixerButton->setGeometry(QRect(310, 180, 61, 20));
        SettingsApplyMixerButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));
        P_4 = new QSlider(SettingsMixer);
        P_4->setObjectName(QStringLiteral("P_4"));
        P_4->setGeometry(QRect(60, 39, 20, 121));
        P_4->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(83, 68, 150);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
""));
        P_4->setValue(99);
        P_4->setOrientation(Qt::Vertical);
        P_5 = new QSlider(SettingsMixer);
        P_5->setObjectName(QStringLiteral("P_5"));
        P_5->setGeometry(QRect(80, 39, 20, 121));
        P_5->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(83, 68, 150);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
""));
        P_5->setValue(99);
        P_5->setOrientation(Qt::Vertical);
        P_6 = new QSlider(SettingsMixer);
        P_6->setObjectName(QStringLiteral("P_6"));
        P_6->setGeometry(QRect(100, 39, 20, 121));
        P_6->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(83, 68, 150);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
""));
        P_6->setValue(99);
        P_6->setOrientation(Qt::Vertical);
        P_7 = new QSlider(SettingsMixer);
        P_7->setObjectName(QStringLiteral("P_7"));
        P_7->setGeometry(QRect(120, 39, 20, 121));
        P_7->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(83, 68, 150);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
""));
        P_7->setValue(99);
        P_7->setOrientation(Qt::Vertical);
        P_8 = new QSlider(SettingsMixer);
        P_8->setObjectName(QStringLiteral("P_8"));
        P_8->setGeometry(QRect(140, 39, 20, 121));
        P_8->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(83, 68, 150);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
""));
        P_8->setValue(99);
        P_8->setOrientation(Qt::Vertical);
        P_9 = new QSlider(SettingsMixer);
        P_9->setObjectName(QStringLiteral("P_9"));
        P_9->setGeometry(QRect(160, 39, 20, 121));
        P_9->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(83, 68, 150);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
""));
        P_9->setValue(99);
        P_9->setOrientation(Qt::Vertical);
        P_10 = new QSlider(SettingsMixer);
        P_10->setObjectName(QStringLiteral("P_10"));
        P_10->setGeometry(QRect(180, 39, 20, 121));
        P_10->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(83, 68, 150);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
""));
        P_10->setValue(99);
        P_10->setOrientation(Qt::Vertical);
        P_11 = new QSlider(SettingsMixer);
        P_11->setObjectName(QStringLiteral("P_11"));
        P_11->setGeometry(QRect(210, 39, 20, 121));
        P_11->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(142, 125, 218);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        P_11->setValue(99);
        P_11->setOrientation(Qt::Vertical);
        P_12 = new QSlider(SettingsMixer);
        P_12->setObjectName(QStringLiteral("P_12"));
        P_12->setGeometry(QRect(240, 39, 20, 121));
        P_12->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(142, 125, 218);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        P_12->setValue(99);
        P_12->setOrientation(Qt::Vertical);
        P_13 = new QSlider(SettingsMixer);
        P_13->setObjectName(QStringLiteral("P_13"));
        P_13->setGeometry(QRect(270, 39, 19, 121));
        P_13->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(142, 125, 218);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        P_13->setValue(99);
        P_13->setOrientation(Qt::Vertical);
        P_14 = new QSlider(SettingsMixer);
        P_14->setObjectName(QStringLiteral("P_14"));
        P_14->setGeometry(QRect(300, 39, 20, 121));
        P_14->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(142, 125, 218);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        P_14->setValue(99);
        P_14->setOrientation(Qt::Vertical);
        P_15 = new QSlider(SettingsMixer);
        P_15->setObjectName(QStringLiteral("P_15"));
        P_15->setGeometry(QRect(321, 39, 29, 121));
        P_15->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(142, 125, 218);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        P_15->setValue(99);
        P_15->setOrientation(Qt::Vertical);
        P_16 = new QSlider(SettingsMixer);
        P_16->setObjectName(QStringLiteral("P_16"));
        P_16->setGeometry(QRect(349, 39, 31, 121));
        P_16->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(142, 125, 218);\n"
"}\n"
" QSlider::handle:vertical {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider1.png);\n"
"	image: url(:/pictures/Slider1.png);\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        P_16->setValue(99);
        P_16->setOrientation(Qt::Vertical);
        P_16->setTickPosition(QSlider::TicksBelow);
        label_20 = new QLabel(SettingsMixer);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(0, 180, 71, 20));
        label_20->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);"));
        KeyboardSlider = new QSlider(SettingsMixer);
        KeyboardSlider->setObjectName(QStringLiteral("KeyboardSlider"));
        KeyboardSlider->setGeometry(QRect(70, 180, 81, 21));
        KeyboardSlider->setCursor(QCursor(Qt::UpArrowCursor));
        KeyboardSlider->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(255, 255, 255);\n"
"}\n"
" QSlider::handle:horizontal {\n"
"     height: 10px;\n"
"\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider14.png);\n"
"	image: url(:/pictures/Slider14.png);\n"
"\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        KeyboardSlider->setValue(99);
        KeyboardSlider->setOrientation(Qt::Horizontal);
        KeyboardSlider->setTickPosition(QSlider::TicksBothSides);
        label_21 = new QLabel(SettingsMixer);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(160, 180, 71, 20));
        label_21->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);"));
        MasterSlider = new QSlider(SettingsMixer);
        MasterSlider->setObjectName(QStringLiteral("MasterSlider"));
        MasterSlider->setGeometry(QRect(220, 180, 81, 21));
        MasterSlider->setCursor(QCursor(Qt::UpArrowCursor));
        MasterSlider->setFocusPolicy(Qt::StrongFocus);
        MasterSlider->setLayoutDirection(Qt::LeftToRight);
        MasterSlider->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(255, 255, 255);\n"
"}\n"
" QSlider::handle:horizontal {\n"
"     height: 10px;\n"
"\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider14.png);\n"
"	image: url(:/pictures/Slider14.png);\n"
"\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        MasterSlider->setMinimum(1);
        MasterSlider->setPageStep(1);
        MasterSlider->setValue(99);
        MasterSlider->setOrientation(Qt::Horizontal);
        MasterSlider->setInvertedAppearance(false);
        MasterSlider->setInvertedControls(false);
        MasterSlider->setTickPosition(QSlider::TicksBothSides);
        MasterSlider->setTickInterval(0);
        label_22 = new QLabel(SettingsMixer);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(0, 0, 21, 20));
        label_22->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);"));
        label_23 = new QLabel(SettingsMixer);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(0, 20, 21, 20));
        label_23->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);"));
        label_24 = new QLabel(SettingsMixer);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(90, 0, 21, 20));
        label_24->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_25 = new QLabel(SettingsMixer);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(90, 20, 21, 20));
        label_25->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_26 = new QLabel(SettingsMixer);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(180, 0, 21, 20));
        label_26->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_27 = new QLabel(SettingsMixer);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(180, 20, 21, 20));
        label_27->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_28 = new QLabel(SettingsMixer);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(270, 0, 21, 20));
        label_28->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_29 = new QLabel(SettingsMixer);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(270, 20, 21, 20));
        label_29->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        R_1 = new QSlider(SettingsMixer);
        R_1->setObjectName(QStringLiteral("R_1"));
        R_1->setGeometry(QRect(30, 0, 51, 16));
        R_1->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(64, 191, 191);\n"
"}\n"
" QSlider::handle:horizontal {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider14.png);\n"
"	image: url(:/pictures/Slider14.png);\n"
"\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        R_1->setValue(99);
        R_1->setOrientation(Qt::Horizontal);
        R_1->setTickPosition(QSlider::TicksBothSides);
        R_2 = new QSlider(SettingsMixer);
        R_2->setObjectName(QStringLiteral("R_2"));
        R_2->setGeometry(QRect(30, 20, 51, 16));
        R_2->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(64, 191, 191);\n"
"}\n"
" QSlider::handle:horizontal {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider14.png);\n"
"	image: url(:/pictures/Slider14.png);\n"
"\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        R_2->setValue(99);
        R_2->setOrientation(Qt::Horizontal);
        R_2->setTickPosition(QSlider::TicksBothSides);
        R_3 = new QSlider(SettingsMixer);
        R_3->setObjectName(QStringLiteral("R_3"));
        R_3->setGeometry(QRect(120, 0, 51, 16));
        R_3->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(64, 191, 191);\n"
"}\n"
" QSlider::handle:horizontal {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider14.png);\n"
"	image: url(:/pictures/Slider14.png);\n"
"\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        R_3->setValue(99);
        R_3->setOrientation(Qt::Horizontal);
        R_3->setTickPosition(QSlider::TicksBothSides);
        R_4 = new QSlider(SettingsMixer);
        R_4->setObjectName(QStringLiteral("R_4"));
        R_4->setGeometry(QRect(120, 20, 51, 16));
        R_4->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(64, 191, 191);\n"
"}\n"
" QSlider::handle:horizontal {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider14.png);\n"
"	image: url(:/pictures/Slider14.png);\n"
"\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        R_4->setValue(99);
        R_4->setOrientation(Qt::Horizontal);
        R_4->setTickPosition(QSlider::TicksBothSides);
        R_5 = new QSlider(SettingsMixer);
        R_5->setObjectName(QStringLiteral("R_5"));
        R_5->setGeometry(QRect(210, 0, 51, 16));
        R_5->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(64, 191, 191);\n"
"}\n"
" QSlider::handle:horizontal {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider14.png);\n"
"	image: url(:/pictures/Slider14.png);\n"
"\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        R_5->setValue(99);
        R_5->setOrientation(Qt::Horizontal);
        R_5->setTickPosition(QSlider::TicksBothSides);
        R_6 = new QSlider(SettingsMixer);
        R_6->setObjectName(QStringLiteral("R_6"));
        R_6->setGeometry(QRect(210, 20, 51, 16));
        R_6->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(64, 191, 191);\n"
"}\n"
" QSlider::handle:horizontal {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider14.png);\n"
"	image: url(:/pictures/Slider14.png);\n"
"\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        R_6->setValue(99);
        R_6->setOrientation(Qt::Horizontal);
        R_6->setTickPosition(QSlider::TicksBothSides);
        R_7 = new QSlider(SettingsMixer);
        R_7->setObjectName(QStringLiteral("R_7"));
        R_7->setGeometry(QRect(300, 0, 51, 16));
        R_7->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(64, 191, 191);\n"
"}\n"
" QSlider::handle:horizontal {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider14.png);\n"
"	image: url(:/pictures/Slider14.png);\n"
"\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        R_7->setValue(99);
        R_7->setOrientation(Qt::Horizontal);
        R_7->setTickPosition(QSlider::TicksBothSides);
        R_8 = new QSlider(SettingsMixer);
        R_8->setObjectName(QStringLiteral("R_8"));
        R_8->setGeometry(QRect(300, 20, 51, 16));
        R_8->setStyleSheet(QLatin1String("QSlider {\n"
"selection-background-color: rgb(64, 191, 191);\n"
"}\n"
" QSlider::handle:horizontal {\n"
"     height: 10px;\n"
"	/*background-image: url(:/pictures/Color_0.jpg);  img \n"
"	image: url(:/pictures/Color_0.jpg);*/\n"
"	background-image: url(:/pictures/Slider14.png);\n"
"	image: url(:/pictures/Slider14.png);\n"
"\n"
"    background-color: rgba(136, 138, 133, 0)\n"
" }\n"
"\n"
""));
        R_8->setValue(99);
        R_8->setOrientation(Qt::Horizontal);
        R_8->setTickPosition(QSlider::NoTicks);
        Picture_4 = new QLabel(SettingsMixer);
        Picture_4->setObjectName(QStringLiteral("Picture_4"));
        Picture_4->setGeometry(QRect(0, 0, 400, 273));
        Picture_4->setStyleSheet(QLatin1String("background-image: url(:/pictures/SettingsPicture.png);\n"
"image: url(:/pictures/SettingsPicture.png);"));
        SettingsMuteButton_2 = new QPushButton(SettingsMixer);
        SettingsMuteButton_2->setObjectName(QStringLiteral("SettingsMuteButton_2"));
        SettingsMuteButton_2->setGeometry(QRect(200, -30, 45, 21));
        SettingsMuteButton_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));
        tabWidget->addTab(SettingsMixer, icon1, QString());
        Picture_4->raise();
        label_68->raise();
        P_1->raise();
        P_2->raise();
        P_3->raise();
        SettingsApplyMixerButton->raise();
        P_4->raise();
        P_5->raise();
        P_6->raise();
        P_7->raise();
        P_8->raise();
        P_9->raise();
        P_10->raise();
        P_11->raise();
        P_12->raise();
        P_13->raise();
        P_14->raise();
        P_15->raise();
        P_16->raise();
        label_20->raise();
        KeyboardSlider->raise();
        label_21->raise();
        MasterSlider->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        label_25->raise();
        label_26->raise();
        label_27->raise();
        label_28->raise();
        label_29->raise();
        R_1->raise();
        R_2->raise();
        R_3->raise();
        R_4->raise();
        R_5->raise();
        R_6->raise();
        R_7->raise();
        R_8->raise();
        SettingsMuteButton_2->raise();
        SettingsWeb = new QWidget();
        SettingsWeb->setObjectName(QStringLiteral("SettingsWeb"));
        Picture_5 = new QLabel(SettingsWeb);
        Picture_5->setObjectName(QStringLiteral("Picture_5"));
        Picture_5->setGeometry(QRect(-10, -30, 400, 273));
        Picture_5->setCursor(QCursor(Qt::UpArrowCursor));
        Picture_5->setStyleSheet(QLatin1String("background-image: url(:/pictures/SettingsPicture.png);\n"
"image: url(:/pictures/SettingsPicture.png);"));
        frame = new QFrame(SettingsWeb);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 60, 331, 71));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(4);
        LabelWeb = new QLabel(frame);
        LabelWeb->setObjectName(QStringLiteral("LabelWeb"));
        LabelWeb->setGeometry(QRect(20, 20, 301, 31));
        LabelWeb->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        LabelWeb->setTextFormat(Qt::RichText);
        LabelWeb->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        LabelWeb->setWordWrap(true);
        frame_3 = new QFrame(SettingsWeb);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 150, 111, 51));
        frame_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(4);
        LabelWeb1 = new QLabel(frame_3);
        LabelWeb1->setObjectName(QStringLiteral("LabelWeb1"));
        LabelWeb1->setGeometry(QRect(20, 10, 81, 31));
        tabWidget->addTab(SettingsWeb, icon1, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        label_30 = new QLabel(Settings);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(-10, 0, 62, 31));
        label_30->setStyleSheet(QLatin1String("background-image: url(:/pictures/MB.png);\n"
"background-color: rgba(136, 138, 133, 0);\n"
"image: url(:/pictures/MB.png);"));
        SettingsMuteButton = new QPushButton(Settings);
        SettingsMuteButton->setObjectName(QStringLiteral("SettingsMuteButton"));
        SettingsMuteButton->setGeometry(QRect(40, 0, 45, 21));
        SettingsMuteButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));
        frame_2 = new QFrame(Settings);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(34, -10, 111, 37));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(4);
        frame_2->setMidLineWidth(29);
        SettingsHelpButton = new QPushButton(frame_2);
        SettingsHelpButton->setObjectName(QStringLiteral("SettingsHelpButton"));
        SettingsHelpButton->setGeometry(QRect(60, 10, 45, 21));
        SettingsHelpButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));
        Picture = new QLabel(Settings);
        Picture->setObjectName(QStringLiteral("Picture"));
        Picture->setGeometry(QRect(0, 0, 400, 273));
        Picture->setStyleSheet(QLatin1String("background-image: url(:/pictures/SettingsPicture.png);\n"
"image: url(:/pictures/SettingsPicture.png);"));
        SHelp = new QFrame(Settings);
        SHelp->setObjectName(QStringLiteral("SHelp"));
        SHelp->setGeometry(QRect(50, 40, 301, 191));
        SHelp->setStyleSheet(QStringLiteral("background-color: rgb(110, 110, 110);"));
        SHelp->setFrameShape(QFrame::StyledPanel);
        SHelp->setFrameShadow(QFrame::Raised);
        line_8 = new QFrame(SHelp);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(10, 30, 281, 5));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_8->sizePolicy().hasHeightForWidth());
        line_8->setSizePolicy(sizePolicy);
        line_8->setMinimumSize(QSize(0, 5));
        line_8->setMaximumSize(QSize(16777215, 5));
        line_8->setStyleSheet(QStringLiteral("background-color: rgb(255, 159, 159);"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        textEdit = new QTextEdit(SHelp);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 49, 281, 131));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textEdit->setReadOnly(true);
        label_32 = new QLabel(SHelp);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(200, 0, 41, 31));
        label_32->setStyleSheet(QLatin1String("background-image: url(:/pictures/MB.png);\n"
"background-color: rgba(136, 138, 133, 0);\n"
"image: url(:/pictures/MB.png);"));
        label_32->setPixmap(QPixmap(QString::fromUtf8(":/pictures/MB.png")));
        verticalLayoutWidget_6 = new QWidget(SHelp);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(280, 0, 21, 21));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        SHelpClose = new QPushButton(verticalLayoutWidget_6);
        SHelpClose->setObjectName(QStringLiteral("SHelpClose"));
        SHelpClose->setMinimumSize(QSize(17, 17));
        SHelpClose->setMaximumSize(QSize(17, 17));
        SHelpClose->setCursor(QCursor(Qt::UpArrowCursor));
        SHelpClose->setStyleSheet(QLatin1String("background-color: rgb(239, 41, 41);\n"
""));

        verticalLayout_6->addWidget(SHelpClose);

        label_31 = new QLabel(SHelp);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(110, -20, 81, 71));
        label_31->setStyleSheet(QLatin1String("background-color: rgba(136, 138, 133, 0);\n"
"color: rgb(255, 255, 255);"));
        Picture->raise();
        frame_2->raise();
        label_30->raise();
        label->raise();
        gridLayoutWidget->raise();
        Buttons->raise();
        line->raise();
        SettingsMuteButton->raise();
        SHelp->raise();

        retranslateUi(Settings);
        QObject::connect(Buttons, SIGNAL(accepted()), Settings, SLOT(accept()));
        QObject::connect(Buttons, SIGNAL(rejected()), Settings, SLOT(reject()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "MusicBoard Settings", Q_NULLPTR));
        label->setText(QApplication::translate("Settings", "MusicBoard", Q_NULLPTR));
        label_2->setText(QApplication::translate("Settings", "<html><head/><body><p>P1:</p></body></html>", Q_NULLPTR));
        P1_Text->setText(QApplication::translate("Settings", "P1", Q_NULLPTR));
        SettingsApplyTextButton->setText(QApplication::translate("Settings", "Apply", Q_NULLPTR));
        SettingsApplyTextButton->setShortcut(QApplication::translate("Settings", "Ctrl+S", Q_NULLPTR));
        label_3->setText(QApplication::translate("Settings", "P2:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Settings", "P3:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Settings", "P4:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Settings", "P5:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Settings", "P6:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Settings", "P7:", Q_NULLPTR));
        label_9->setText(QApplication::translate("Settings", "P8:", Q_NULLPTR));
        label_10->setText(QApplication::translate("Settings", "P9:", Q_NULLPTR));
        label_11->setText(QApplication::translate("Settings", "P10:", Q_NULLPTR));
        label_12->setText(QApplication::translate("Settings", "P11:", Q_NULLPTR));
        label_13->setText(QApplication::translate("Settings", "P12:", Q_NULLPTR));
        label_14->setText(QApplication::translate("Settings", "P13:", Q_NULLPTR));
        label_15->setText(QApplication::translate("Settings", "P14:", Q_NULLPTR));
        label_16->setText(QApplication::translate("Settings", "P15:", Q_NULLPTR));
        label_17->setText(QApplication::translate("Settings", "P16:", Q_NULLPTR));
        label_18->setText(QApplication::translate("Settings", "P17:", Q_NULLPTR));
        P2_Text->setText(QApplication::translate("Settings", "P2", Q_NULLPTR));
        P3_Text->setText(QApplication::translate("Settings", "P3", Q_NULLPTR));
        P4_Text->setText(QApplication::translate("Settings", "P4", Q_NULLPTR));
        P5_Text->setText(QApplication::translate("Settings", "P5", Q_NULLPTR));
        P6_Text->setText(QApplication::translate("Settings", "P6", Q_NULLPTR));
        P7_Text->setText(QApplication::translate("Settings", "P7", Q_NULLPTR));
        P8_Text->setText(QApplication::translate("Settings", "P8", Q_NULLPTR));
        P9_Text->setText(QApplication::translate("Settings", "P9", Q_NULLPTR));
        P10_Text->setText(QApplication::translate("Settings", "P10", Q_NULLPTR));
        P11_Text->setText(QApplication::translate("Settings", "P11", Q_NULLPTR));
        P12_Text->setText(QApplication::translate("Settings", "P12", Q_NULLPTR));
        P13_Text->setText(QApplication::translate("Settings", "P13", Q_NULLPTR));
        P14_Text->setText(QApplication::translate("Settings", "P14", Q_NULLPTR));
        P15_Text->setText(QApplication::translate("Settings", "P15", Q_NULLPTR));
        P16_Text->setText(QApplication::translate("Settings", "P16", Q_NULLPTR));
        P17_Text->setText(QApplication::translate("Settings", "P17", Q_NULLPTR));
        Picture_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(SettingsText), QApplication::translate("Settings", "Text", Q_NULLPTR));
        label_19->setText(QApplication::translate("Settings", "P16:", Q_NULLPTR));
        label_37->setText(QApplication::translate("Settings", "P7:", Q_NULLPTR));
        label_38->setText(QApplication::translate("Settings", "P15:", Q_NULLPTR));
        label_39->setText(QApplication::translate("Settings", "P4:", Q_NULLPTR));
        label_40->setText(QApplication::translate("Settings", "P9:", Q_NULLPTR));
        label_41->setText(QApplication::translate("Settings", "P2:", Q_NULLPTR));
        label_42->setText(QApplication::translate("Settings", "P6:", Q_NULLPTR));
        label_43->setText(QApplication::translate("Settings", "P12:", Q_NULLPTR));
        label_44->setText(QApplication::translate("Settings", "P17:", Q_NULLPTR));
        label_45->setText(QApplication::translate("Settings", "P8:", Q_NULLPTR));
        label_46->setText(QApplication::translate("Settings", "P5:", Q_NULLPTR));
        label_47->setText(QApplication::translate("Settings", "P14:", Q_NULLPTR));
        label_48->setText(QApplication::translate("Settings", "P13:", Q_NULLPTR));
        label_49->setText(QApplication::translate("Settings", "P10:", Q_NULLPTR));
        label_50->setText(QApplication::translate("Settings", "P1:", Q_NULLPTR));
        label_51->setText(QApplication::translate("Settings", "P11:", Q_NULLPTR));
        label_52->setText(QApplication::translate("Settings", "P3:", Q_NULLPTR));
        Sc_1->setKeySequence(QApplication::translate("Settings", "Home", Q_NULLPTR));
        Sc_2->setKeySequence(QApplication::translate("Settings", "Up", Q_NULLPTR));
        Sc_3->setKeySequence(QApplication::translate("Settings", "PgUp", Q_NULLPTR));
        Sc_4->setKeySequence(QApplication::translate("Settings", "Left", Q_NULLPTR));
        Sc_5->setKeySequence(QApplication::translate("Settings", "Clear", Q_NULLPTR));
        Sc_6->setKeySequence(QApplication::translate("Settings", "Right", Q_NULLPTR));
        Sc_7->setKeySequence(QApplication::translate("Settings", "End", Q_NULLPTR));
        Sc_8->setKeySequence(QApplication::translate("Settings", "Down", Q_NULLPTR));
        Sc_9->setKeySequence(QApplication::translate("Settings", "PgDown", Q_NULLPTR));
        Sc_10->setKeySequence(QApplication::translate("Settings", "NumLock", Q_NULLPTR));
        Sc_11->setKeySequence(QApplication::translate("Settings", "/", Q_NULLPTR));
        Sc_12->setKeySequence(QApplication::translate("Settings", "*", Q_NULLPTR));
        Sc_13->setKeySequence(QApplication::translate("Settings", "-", Q_NULLPTR));
        Sc_14->setKeySequence(QApplication::translate("Settings", "+", Q_NULLPTR));
        Sc_15->setKeySequence(QApplication::translate("Settings", "Enter", Q_NULLPTR));
        Sc_16->setKeySequence(QApplication::translate("Settings", "Ins", Q_NULLPTR));
        Sc_17->setKeySequence(QApplication::translate("Settings", "Del", Q_NULLPTR));
        Picture_3->setText(QString());
        label_33->setText(QApplication::translate("Settings", "Note! Not Editable!", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(SettingsKeyboard), QApplication::translate("Settings", "MBoard", Q_NULLPTR));
        label_68->setText(QApplication::translate("Settings", "P1 P2 P3 P4 P5 P6 P7 P8 P9 P11 P12 P13 P14 P15 P16 P17", Q_NULLPTR));
        SettingsApplyMixerButton->setText(QApplication::translate("Settings", "Apply", Q_NULLPTR));
        SettingsApplyMixerButton->setShortcut(QApplication::translate("Settings", "Ctrl+S", Q_NULLPTR));
        label_20->setText(QApplication::translate("Settings", "Keyboard:", Q_NULLPTR));
        label_21->setText(QApplication::translate("Settings", "Master:", Q_NULLPTR));
        label_22->setText(QApplication::translate("Settings", "R1:", Q_NULLPTR));
        label_23->setText(QApplication::translate("Settings", "R2:", Q_NULLPTR));
        label_24->setText(QApplication::translate("Settings", "R3:", Q_NULLPTR));
        label_25->setText(QApplication::translate("Settings", "R4:", Q_NULLPTR));
        label_26->setText(QApplication::translate("Settings", "R5:", Q_NULLPTR));
        label_27->setText(QApplication::translate("Settings", "R6:", Q_NULLPTR));
        label_28->setText(QApplication::translate("Settings", "R7:", Q_NULLPTR));
        label_29->setText(QApplication::translate("Settings", "R8:", Q_NULLPTR));
        Picture_4->setText(QString());
        SettingsMuteButton_2->setText(QApplication::translate("Settings", "Mute", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(SettingsMixer), QApplication::translate("Settings", "Mixer", Q_NULLPTR));
        Picture_5->setText(QString());
        LabelWeb->setText(QApplication::translate("Settings", "Go to the MusicBoard Blog to find out more!", Q_NULLPTR));
        LabelWeb1->setText(QApplication::translate("Settings", "Developers", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(SettingsWeb), QApplication::translate("Settings", "Web", Q_NULLPTR));
        label_30->setText(QString());
        SettingsMuteButton->setText(QApplication::translate("Settings", "Mute", Q_NULLPTR));
        SettingsHelpButton->setText(QApplication::translate("Settings", "Help", Q_NULLPTR));
        SettingsHelpButton->setShortcut(QApplication::translate("Settings", "Ctrl+H", Q_NULLPTR));
        Picture->setText(QString());
        textEdit->setHtml(QApplication::translate("Settings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Text: Change the name of the Buttons for the Launchpad</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Type in the text for each button, then &quot;Enter&quot; (&quot;Return&quot;), then &quot;Ctrl + R&quot; in MusicBoard. The Buttons should have set. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bott"
                        "om:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">MBoard: Set Keys</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Not Editable in this Release. Informational purpose only. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mixer: Set Loudness</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent"
                        ":0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Each slider is correlated to a Button. The Master makes all Buttons the same loudness. Use the Master first, then the rest. In order to listen to the loudness, click the slider on the sliding Button.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Web: Help</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Access the Blog or go online and start Developing! Thank you!</p></body></ht"
                        "ml>", Q_NULLPTR));
        label_32->setText(QString());
        SHelpClose->setText(QApplication::translate("Settings", "\342\234\225", Q_NULLPTR));
        SHelpClose->setShortcut(QApplication::translate("Settings", "Esc", Q_NULLPTR));
        label_31->setText(QApplication::translate("Settings", "MusicBoard", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
