/********************************************************************************
** Form generated from reading UI file 'preferencesform.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESFORM_H
#define UI_PREFERENCESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesForm
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QPushButton *ApplyButton_3;
    QFrame *frame_4;
    QPushButton *ApplyButton_4;
    QFrame *L1;
    QTabWidget *Tabs;
    QWidget *tab_4;
    QLabel *FontLabel_2;
    QFontComboBox *FontsCombo_2;
    QLabel *Picture_4;
    QComboBox *ColorsCombo_4;
    QLabel *ColorsLabel_4;
    QLabel *ShowColorLabel_4;
    QLineEdit *CustomColor_4;
    QCheckBox *SureCheck_2;
    QComboBox *ColorsCombo_5;
    QLabel *ShowColorLabel_5;
    QLabel *ColorsLabel_5;
    QLineEdit *CustomColor_5;
    QLabel *ColorsLabel_6;
    QComboBox *ColorsCombo_6;
    QLineEdit *CustomColor_6;
    QLabel *ShowColorLabel_6;
    QCheckBox *LockMusicBoardCheck_2;
    QWidget *tab_5;
    QLabel *Picture_5;
    QCheckBox *NumlockCheck_2;
    QCheckBox *ImagesCheck_2;
    QLabel *label_5;
    QSlider *RSlider_2;
    QSlider *GSlider_2;
    QSlider *BSlider_2;
    QLabel *RLabel_2;
    QLabel *GLabel_2;
    QLabel *BLabel_2;
    QLabel *ColorPLabel_2;
    QLineEdit *RgbString_2;
    QWidget *tab_6;
    QLabel *SelectImage_2;
    QPushButton *Img1_2;
    QPushButton *Img2_2;
    QPushButton *Img3_2;
    QPushButton *Img4_2;
    QPushButton *Img6_2;
    QPushButton *Img5_2;
    QPushButton *Img7_2;
    QPushButton *Img8_2;
    QPushButton *Img9_2;
    QFrame *frame_6;
    QPushButton *SettingsButton_2;
    QLabel *label;
    QLabel *Picture;
    QLabel *CtrlR;

    void setupUi(QDialog *PreferencesForm)
    {
        if (PreferencesForm->objectName().isEmpty())
            PreferencesForm->setObjectName(QStringLiteral("PreferencesForm"));
        PreferencesForm->resize(400, 287);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PreferencesForm->sizePolicy().hasHeightForWidth());
        PreferencesForm->setSizePolicy(sizePolicy);
        PreferencesForm->setMaximumSize(QSize(16777215, 287));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pictures/MBIco.png"), QSize(), QIcon::Normal, QIcon::Off);
        PreferencesForm->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(PreferencesForm);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(260, 260, 131, 20));
        buttonBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 159, 159);"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(PreferencesForm);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(321, -15, 68, 38));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(6);
        ApplyButton_3 = new QPushButton(frame);
        ApplyButton_3->setObjectName(QStringLiteral("ApplyButton_3"));
        ApplyButton_3->setGeometry(QRect(7, 10, 54, 21));
        ApplyButton_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(-110, 0, 68, 38));
        frame_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_4->setFrameShape(QFrame::Panel);
        frame_4->setFrameShadow(QFrame::Plain);
        frame_4->setLineWidth(6);
        ApplyButton_4 = new QPushButton(frame_4);
        ApplyButton_4->setObjectName(QStringLiteral("ApplyButton_4"));
        ApplyButton_4->setGeometry(QRect(7, 10, 54, 21));
        ApplyButton_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(112, 12, 137);"));
        L1 = new QFrame(PreferencesForm);
        L1->setObjectName(QStringLiteral("L1"));
        L1->setGeometry(QRect(8, 25, 385, 6));
        L1->setMinimumSize(QSize(0, 6));
        L1->setMaximumSize(QSize(16777215, 6));
        L1->setStyleSheet(QStringLiteral("background-color: rgb(255, 159, 159);"));
        L1->setFrameShape(QFrame::HLine);
        L1->setFrameShadow(QFrame::Sunken);
        Tabs = new QTabWidget(PreferencesForm);
        Tabs->setObjectName(QStringLiteral("Tabs"));
        Tabs->setGeometry(QRect(8, 35, 385, 243));
        Tabs->setStyleSheet(QStringLiteral("background-color: rgb(159, 125, 255);"));
        Tabs->setTabPosition(QTabWidget::South);
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        FontLabel_2 = new QLabel(tab_4);
        FontLabel_2->setObjectName(QStringLiteral("FontLabel_2"));
        FontLabel_2->setGeometry(QRect(0, 10, 161, 21));
        FontLabel_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        FontsCombo_2 = new QFontComboBox(tab_4);
        FontsCombo_2->setObjectName(QStringLiteral("FontsCombo_2"));
        FontsCombo_2->setGeometry(QRect(170, 10, 141, 25));
        FontsCombo_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Picture_4 = new QLabel(tab_4);
        Picture_4->setObjectName(QStringLiteral("Picture_4"));
        Picture_4->setGeometry(QRect(-55, -60, 470, 309));
        Picture_4->setStyleSheet(QLatin1String("background-image: url(:/pictures/SettingsPicture.png);\n"
"image: url(:/pictures/SettingsPicture.png);"));
        ColorsCombo_4 = new QComboBox(tab_4);
        ColorsCombo_4->setObjectName(QStringLiteral("ColorsCombo_4"));
        ColorsCombo_4->setGeometry(QRect(220, 43, 86, 25));
        ColorsCombo_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ColorsLabel_4 = new QLabel(tab_4);
        ColorsLabel_4->setObjectName(QStringLiteral("ColorsLabel_4"));
        ColorsLabel_4->setGeometry(QRect(0, 40, 161, 28));
        ColorsLabel_4->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        ShowColorLabel_4 = new QLabel(tab_4);
        ShowColorLabel_4->setObjectName(QStringLiteral("ShowColorLabel_4"));
        ShowColorLabel_4->setGeometry(QRect(149, 47, 56, 17));
        ShowColorLabel_4->setStyleSheet(QStringLiteral("background-color: rgb(128, 33, 152);"));
        CustomColor_4 = new QLineEdit(tab_4);
        CustomColor_4->setObjectName(QStringLiteral("CustomColor_4"));
        CustomColor_4->setGeometry(QRect(138, 43, 78, 25));
        CustomColor_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        SureCheck_2 = new QCheckBox(tab_4);
        SureCheck_2->setObjectName(QStringLiteral("SureCheck_2"));
        SureCheck_2->setGeometry(QRect(10, 140, 323, 23));
        SureCheck_2->setChecked(true);
        ColorsCombo_5 = new QComboBox(tab_4);
        ColorsCombo_5->setObjectName(QStringLiteral("ColorsCombo_5"));
        ColorsCombo_5->setGeometry(QRect(220, 74, 85, 25));
        ColorsCombo_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ShowColorLabel_5 = new QLabel(tab_4);
        ShowColorLabel_5->setObjectName(QStringLiteral("ShowColorLabel_5"));
        ShowColorLabel_5->setGeometry(QRect(149, 78, 55, 17));
        ShowColorLabel_5->setStyleSheet(QStringLiteral("background-color: rgb(251, 170, 184);"));
        ColorsLabel_5 = new QLabel(tab_4);
        ColorsLabel_5->setObjectName(QStringLiteral("ColorsLabel_5"));
        ColorsLabel_5->setGeometry(QRect(0, 71, 161, 28));
        ColorsLabel_5->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        CustomColor_5 = new QLineEdit(tab_4);
        CustomColor_5->setObjectName(QStringLiteral("CustomColor_5"));
        CustomColor_5->setGeometry(QRect(138, 75, 78, 24));
        CustomColor_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ColorsLabel_6 = new QLabel(tab_4);
        ColorsLabel_6->setObjectName(QStringLiteral("ColorsLabel_6"));
        ColorsLabel_6->setGeometry(QRect(0, 100, 161, 28));
        ColorsLabel_6->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        ColorsCombo_6 = new QComboBox(tab_4);
        ColorsCombo_6->setObjectName(QStringLiteral("ColorsCombo_6"));
        ColorsCombo_6->setGeometry(QRect(220, 106, 85, 25));
        ColorsCombo_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        CustomColor_6 = new QLineEdit(tab_4);
        CustomColor_6->setObjectName(QStringLiteral("CustomColor_6"));
        CustomColor_6->setGeometry(QRect(138, 106, 78, 25));
        CustomColor_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ShowColorLabel_6 = new QLabel(tab_4);
        ShowColorLabel_6->setObjectName(QStringLiteral("ShowColorLabel_6"));
        ShowColorLabel_6->setGeometry(QRect(147, 110, 57, 20));
        ShowColorLabel_6->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        LockMusicBoardCheck_2 = new QCheckBox(tab_4);
        LockMusicBoardCheck_2->setObjectName(QStringLiteral("LockMusicBoardCheck_2"));
        LockMusicBoardCheck_2->setGeometry(QRect(10, 173, 239, 23));
        LockMusicBoardCheck_2->setChecked(true);
        Tabs->addTab(tab_4, QString());
        Picture_4->raise();
        ColorsCombo_4->raise();
        ColorsLabel_4->raise();
        ShowColorLabel_4->raise();
        CustomColor_4->raise();
        SureCheck_2->raise();
        ColorsCombo_5->raise();
        ShowColorLabel_5->raise();
        ColorsLabel_5->raise();
        CustomColor_5->raise();
        ColorsLabel_6->raise();
        ColorsCombo_6->raise();
        ShowColorLabel_6->raise();
        LockMusicBoardCheck_2->raise();
        CustomColor_6->raise();
        FontLabel_2->raise();
        FontsCombo_2->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        Picture_5 = new QLabel(tab_5);
        Picture_5->setObjectName(QStringLiteral("Picture_5"));
        Picture_5->setGeometry(QRect(-30, -60, 470, 309));
        Picture_5->setStyleSheet(QLatin1String("background-image: url(:/pictures/SettingsPicture.png);\n"
"image: url(:/pictures/SettingsPicture.png);"));
        NumlockCheck_2 = new QCheckBox(tab_5);
        NumlockCheck_2->setObjectName(QStringLiteral("NumlockCheck_2"));
        NumlockCheck_2->setGeometry(QRect(10, 8, 273, 23));
        NumlockCheck_2->setChecked(true);
        ImagesCheck_2 = new QCheckBox(tab_5);
        ImagesCheck_2->setObjectName(QStringLiteral("ImagesCheck_2"));
        ImagesCheck_2->setGeometry(QRect(10, 40, 273, 23));
        ImagesCheck_2->setChecked(true);
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 70, 91, 17));
        label_5->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        RSlider_2 = new QSlider(tab_5);
        RSlider_2->setObjectName(QStringLiteral("RSlider_2"));
        RSlider_2->setGeometry(QRect(30, 110, 181, 16));
        RSlider_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        RSlider_2->setMaximum(255);
        RSlider_2->setOrientation(Qt::Horizontal);
        RSlider_2->setTickPosition(QSlider::NoTicks);
        GSlider_2 = new QSlider(tab_5);
        GSlider_2->setObjectName(QStringLiteral("GSlider_2"));
        GSlider_2->setGeometry(QRect(30, 140, 181, 16));
        GSlider_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        GSlider_2->setMaximum(255);
        GSlider_2->setOrientation(Qt::Horizontal);
        BSlider_2 = new QSlider(tab_5);
        BSlider_2->setObjectName(QStringLiteral("BSlider_2"));
        BSlider_2->setGeometry(QRect(30, 170, 181, 16));
        BSlider_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        BSlider_2->setMaximum(255);
        BSlider_2->setOrientation(Qt::Horizontal);
        RLabel_2 = new QLabel(tab_5);
        RLabel_2->setObjectName(QStringLiteral("RLabel_2"));
        RLabel_2->setGeometry(QRect(7, 106, 20, 21));
        RLabel_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        GLabel_2 = new QLabel(tab_5);
        GLabel_2->setObjectName(QStringLiteral("GLabel_2"));
        GLabel_2->setGeometry(QRect(6, 128, 20, 34));
        GLabel_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        BLabel_2 = new QLabel(tab_5);
        BLabel_2->setObjectName(QStringLiteral("BLabel_2"));
        BLabel_2->setGeometry(QRect(8, 159, 20, 29));
        BLabel_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        ColorPLabel_2 = new QLabel(tab_5);
        ColorPLabel_2->setObjectName(QStringLiteral("ColorPLabel_2"));
        ColorPLabel_2->setGeometry(QRect(100, 70, 67, 27));
        ColorPLabel_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        RgbString_2 = new QLineEdit(tab_5);
        RgbString_2->setObjectName(QStringLiteral("RgbString_2"));
        RgbString_2->setGeometry(QRect(179, 70, 138, 27));
        RgbString_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Tabs->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        SelectImage_2 = new QLabel(tab_6);
        SelectImage_2->setObjectName(QStringLiteral("SelectImage_2"));
        SelectImage_2->setGeometry(QRect(10, 0, 203, 21));
        SelectImage_2->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        Img1_2 = new QPushButton(tab_6);
        Img1_2->setObjectName(QStringLiteral("Img1_2"));
        Img1_2->setGeometry(QRect(30, 31, 86, 53));
        Img1_2->setMinimumSize(QSize(86, 53));
        Img1_2->setMaximumSize(QSize(86, 53));
        Img2_2 = new QPushButton(tab_6);
        Img2_2->setObjectName(QStringLiteral("Img2_2"));
        Img2_2->setGeometry(QRect(150, 30, 86, 53));
        Img2_2->setMinimumSize(QSize(86, 53));
        Img2_2->setMaximumSize(QSize(86, 53));
        Img3_2 = new QPushButton(tab_6);
        Img3_2->setObjectName(QStringLiteral("Img3_2"));
        Img3_2->setGeometry(QRect(270, 30, 86, 53));
        Img3_2->setMinimumSize(QSize(86, 53));
        Img3_2->setMaximumSize(QSize(86, 53));
        Img4_2 = new QPushButton(tab_6);
        Img4_2->setObjectName(QStringLiteral("Img4_2"));
        Img4_2->setGeometry(QRect(30, 91, 86, 53));
        Img4_2->setMinimumSize(QSize(86, 53));
        Img4_2->setMaximumSize(QSize(86, 53));
        Img6_2 = new QPushButton(tab_6);
        Img6_2->setObjectName(QStringLiteral("Img6_2"));
        Img6_2->setGeometry(QRect(270, 90, 86, 53));
        Img6_2->setMinimumSize(QSize(86, 53));
        Img6_2->setMaximumSize(QSize(86, 53));
        Img5_2 = new QPushButton(tab_6);
        Img5_2->setObjectName(QStringLiteral("Img5_2"));
        Img5_2->setGeometry(QRect(150, 90, 86, 53));
        Img5_2->setMinimumSize(QSize(86, 53));
        Img5_2->setMaximumSize(QSize(86, 53));
        Img7_2 = new QPushButton(tab_6);
        Img7_2->setObjectName(QStringLiteral("Img7_2"));
        Img7_2->setGeometry(QRect(30, 151, 86, 53));
        Img7_2->setMinimumSize(QSize(86, 53));
        Img7_2->setMaximumSize(QSize(86, 53));
        Img8_2 = new QPushButton(tab_6);
        Img8_2->setObjectName(QStringLiteral("Img8_2"));
        Img8_2->setGeometry(QRect(150, 150, 86, 53));
        Img8_2->setMinimumSize(QSize(86, 53));
        Img8_2->setMaximumSize(QSize(86, 53));
        Img9_2 = new QPushButton(tab_6);
        Img9_2->setObjectName(QStringLiteral("Img9_2"));
        Img9_2->setGeometry(QRect(270, 150, 86, 53));
        Img9_2->setMinimumSize(QSize(86, 53));
        Img9_2->setMaximumSize(QSize(86, 53));
        Tabs->addTab(tab_6, QString());
        SelectImage_2->raise();
        Img1_2->raise();
        Img2_2->raise();
        Img3_2->raise();
        Img4_2->raise();
        Img6_2->raise();
        Img5_2->raise();
        Img7_2->raise();
        Img8_2->raise();
        Img9_2->raise();
        frame_6 = new QFrame(PreferencesForm);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(8, -55, 87, 78));
        frame_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_6->setFrameShape(QFrame::Panel);
        frame_6->setFrameShadow(QFrame::Plain);
        frame_6->setLineWidth(6);
        SettingsButton_2 = new QPushButton(frame_6);
        SettingsButton_2->setObjectName(QStringLiteral("SettingsButton_2"));
        SettingsButton_2->setGeometry(QRect(7, 49, 73, 22));
        SettingsButton_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));
        label = new QLabel(PreferencesForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(158, -5, 81, 31));
        label->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        Picture = new QLabel(PreferencesForm);
        Picture->setObjectName(QStringLiteral("Picture"));
        Picture->setGeometry(QRect(-50, -20, 470, 309));
        Picture->setStyleSheet(QLatin1String("background-image: url(:/pictures/SettingsPicture.png);\n"
"image: url(:/pictures/SettingsPicture.png);"));
        CtrlR = new QLabel(PreferencesForm);
        CtrlR->setObjectName(QStringLiteral("CtrlR"));
        CtrlR->setGeometry(QRect(9, 2, 147, 20));
        CtrlR->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));
        frame_6->raise();
        Picture->raise();
        L1->raise();
        label->raise();
        Tabs->raise();
        buttonBox->raise();
        frame->raise();
        CtrlR->raise();

        retranslateUi(PreferencesForm);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesForm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesForm, SLOT(reject()));

        Tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesForm);
    } // setupUi

    void retranslateUi(QDialog *PreferencesForm)
    {
        PreferencesForm->setWindowTitle(QApplication::translate("PreferencesForm", "MusicBoard Preferences", Q_NULLPTR));
        ApplyButton_3->setText(QApplication::translate("PreferencesForm", "Apply", Q_NULLPTR));
        ApplyButton_4->setText(QApplication::translate("PreferencesForm", "Apply", Q_NULLPTR));
        FontLabel_2->setText(QApplication::translate("PreferencesForm", "MusicBoard Font:", Q_NULLPTR));
        Picture_4->setText(QString());
        ColorsCombo_4->clear();
        ColorsCombo_4->insertItems(0, QStringList()
         << QApplication::translate("PreferencesForm", "Mb1", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Mb2", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Red", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Black", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Gray", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad1", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad2", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad3", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad4", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Custom", Q_NULLPTR)
        );
        ColorsLabel_4->setText(QApplication::translate("PreferencesForm", "MusicBoard Color 1:", Q_NULLPTR));
        ShowColorLabel_4->setText(QString());
        CustomColor_4->setText(QApplication::translate("PreferencesForm", "rgb(?, ?, ?)", Q_NULLPTR));
        SureCheck_2->setText(QApplication::translate("PreferencesForm", "Show \"Are &you sure?\" Messages", Q_NULLPTR));
        ColorsCombo_5->clear();
        ColorsCombo_5->insertItems(0, QStringList()
         << QApplication::translate("PreferencesForm", "Mb2", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Mb1", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Red", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Black", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Gray", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad1", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad2", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad3", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad4", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Custom", Q_NULLPTR)
        );
        ShowColorLabel_5->setText(QString());
        ColorsLabel_5->setText(QApplication::translate("PreferencesForm", "MusicBoard Color 2:", Q_NULLPTR));
        CustomColor_5->setText(QApplication::translate("PreferencesForm", "rgb(?, ?, ?)", Q_NULLPTR));
        ColorsLabel_6->setText(QApplication::translate("PreferencesForm", "Text Color:", Q_NULLPTR));
        ColorsCombo_6->clear();
        ColorsCombo_6->insertItems(0, QStringList()
         << QApplication::translate("PreferencesForm", "Black", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Mb2", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Mb1", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Red", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Gray", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad1", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad2", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad3", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Grad4", Q_NULLPTR)
         << QApplication::translate("PreferencesForm", "Custom", Q_NULLPTR)
        );
        CustomColor_6->setText(QApplication::translate("PreferencesForm", "rgb(?, ?, ?)", Q_NULLPTR));
        ShowColorLabel_6->setText(QString());
        LockMusicBoardCheck_2->setText(QApplication::translate("PreferencesForm", "Enable Lock MusicBoard", Q_NULLPTR));
        Tabs->setTabText(Tabs->indexOf(tab_4), QApplication::translate("PreferencesForm", "UI", Q_NULLPTR));
        Picture_5->setText(QString());
        NumlockCheck_2->setText(QApplication::translate("PreferencesForm", "Show Numlock On / Off", Q_NULLPTR));
        ImagesCheck_2->setText(QApplication::translate("PreferencesForm", "Show Images", Q_NULLPTR));
        label_5->setText(QApplication::translate("PreferencesForm", "Color Picker", Q_NULLPTR));
        RLabel_2->setText(QApplication::translate("PreferencesForm", "R", Q_NULLPTR));
        GLabel_2->setText(QApplication::translate("PreferencesForm", "G", Q_NULLPTR));
        BLabel_2->setText(QApplication::translate("PreferencesForm", "B", Q_NULLPTR));
        ColorPLabel_2->setText(QString());
        RgbString_2->setText(QApplication::translate("PreferencesForm", "rgb(0, 0, 0)", Q_NULLPTR));
        Tabs->setTabText(Tabs->indexOf(tab_5), QApplication::translate("PreferencesForm", "RGB", Q_NULLPTR));
        SelectImage_2->setText(QApplication::translate("PreferencesForm", "Select Background Image:", Q_NULLPTR));
        Img1_2->setText(QString());
        Img2_2->setText(QString());
        Img3_2->setText(QString());
        Img4_2->setText(QString());
        Img6_2->setText(QString());
        Img5_2->setText(QString());
        Img7_2->setText(QString());
        Img8_2->setText(QString());
        Img9_2->setText(QString());
        Tabs->setTabText(Tabs->indexOf(tab_6), QApplication::translate("PreferencesForm", "IMG", Q_NULLPTR));
        SettingsButton_2->setText(QApplication::translate("PreferencesForm", "Settings", Q_NULLPTR));
        label->setText(QApplication::translate("PreferencesForm", "MusicBoard", Q_NULLPTR));
        Picture->setText(QString());
        CtrlR->setText(QApplication::translate("PreferencesForm", " Ctrl + R after closing ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PreferencesForm: public Ui_PreferencesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESFORM_H
