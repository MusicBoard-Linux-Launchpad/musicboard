/********************************************************************************
** Form generated from reading UI file 'audiorecorder.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIORECORDER_H
#define UI_AUDIORECORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioRecorder
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QComboBox *channelsBox;
    QLabel *label_2;
    QLabel *label_5;
    QComboBox *audioDeviceBox;
    QComboBox *audioCodecBox;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *sampleRateBox;
    QComboBox *containerBox;
    QLabel *label;
    QPushButton *recordButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *constantQualityRadioButton;
    QSpacerItem *horizontalSpacer_2;
    QSlider *qualitySlider;
    QRadioButton *constantBitrateRadioButton;
    QSpacerItem *horizontalSpacer;
    QComboBox *bitrateBox;
    QPushButton *pauseButton;
    QPushButton *outputButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QFrame *line;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AudioRecorder)
    {
        if (AudioRecorder->objectName().isEmpty())
            AudioRecorder->setObjectName(QStringLiteral("AudioRecorder"));
        AudioRecorder->setWindowModality(Qt::NonModal);
        AudioRecorder->resize(297, 440);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AudioRecorder->sizePolicy().hasHeightForWidth());
        AudioRecorder->setSizePolicy(sizePolicy);
        AudioRecorder->setMinimumSize(QSize(297, 389));
        AudioRecorder->setMaximumSize(QSize(297, 440));
        AudioRecorder->setCursor(QCursor(Qt::UpArrowCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/pictures/MBIco.png"), QSize(), QIcon::Normal, QIcon::Off);
        AudioRecorder->setWindowIcon(icon);
        AudioRecorder->setLayoutDirection(Qt::LeftToRight);
        AudioRecorder->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(108, 99, 153);\n"
"/*background-color: qlineargradient(spread:reflect, x1:0.527, y1:0.483364, x2:0, y2:1, stop:0.383085 rgba(122, 84, 210, 255), stop:0.920398 rgba(132, 107, 252, 255), stop:1 rgba(255, 255, 255, 255));*/"));
        centralwidget = new QWidget(AudioRecorder);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        channelsBox = new QComboBox(centralwidget);
        channelsBox->setObjectName(QStringLiteral("channelsBox"));
        channelsBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));

        gridLayout_2->addWidget(channelsBox, 4, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        audioDeviceBox = new QComboBox(centralwidget);
        audioDeviceBox->setObjectName(QStringLiteral("audioDeviceBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(audioDeviceBox->sizePolicy().hasHeightForWidth());
        audioDeviceBox->setSizePolicy(sizePolicy1);
        audioDeviceBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));

        gridLayout_2->addWidget(audioDeviceBox, 0, 1, 1, 1);

        audioCodecBox = new QComboBox(centralwidget);
        audioCodecBox->setObjectName(QStringLiteral("audioCodecBox"));
        audioCodecBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));

        gridLayout_2->addWidget(audioCodecBox, 1, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        sampleRateBox = new QComboBox(centralwidget);
        sampleRateBox->setObjectName(QStringLiteral("sampleRateBox"));
        sampleRateBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));

        gridLayout_2->addWidget(sampleRateBox, 3, 1, 1, 1);

        containerBox = new QComboBox(centralwidget);
        containerBox->setObjectName(QStringLiteral("containerBox"));
        containerBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));

        gridLayout_2->addWidget(containerBox, 2, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 4, 0, 1, 3);

        recordButton = new QPushButton(centralwidget);
        recordButton->setObjectName(QStringLiteral("recordButton"));
        recordButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));

        gridLayout_3->addWidget(recordButton, 6, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(108, 99, 153);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        constantQualityRadioButton = new QRadioButton(groupBox);
        constantQualityRadioButton->setObjectName(QStringLiteral("constantQualityRadioButton"));
        constantQualityRadioButton->setChecked(true);

        gridLayout->addWidget(constantQualityRadioButton, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        qualitySlider = new QSlider(groupBox);
        qualitySlider->setObjectName(QStringLiteral("qualitySlider"));
        qualitySlider->setStyleSheet(QLatin1String("QSlider {\n"
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
        qualitySlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(qualitySlider, 1, 1, 1, 1);

        constantBitrateRadioButton = new QRadioButton(groupBox);
        constantBitrateRadioButton->setObjectName(QStringLiteral("constantBitrateRadioButton"));

        gridLayout->addWidget(constantBitrateRadioButton, 2, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        bitrateBox = new QComboBox(groupBox);
        bitrateBox->setObjectName(QStringLiteral("bitrateBox"));
        bitrateBox->setEnabled(false);
        bitrateBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));

        gridLayout->addWidget(bitrateBox, 3, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 5, 0, 1, 3);

        pauseButton = new QPushButton(centralwidget);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setEnabled(false);
        pauseButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));

        gridLayout_3->addWidget(pauseButton, 6, 2, 1, 1);

        outputButton = new QPushButton(centralwidget);
        outputButton->setObjectName(QStringLiteral("outputButton"));
        outputButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 68, 150);"));

        gridLayout_3->addWidget(outputButton, 6, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_2->setContentsMargins(-1, 27, -1, -1);

        gridLayout_3->addLayout(verticalLayout_2, 3, 0, 1, 3);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 3);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 6));
        line->setMaximumSize(QSize(16777215, 6));
        line->setStyleSheet(QStringLiteral("background-color: rgb(255, 159, 159);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 0, 1, 3);

        AudioRecorder->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AudioRecorder);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AudioRecorder->setStatusBar(statusbar);

        retranslateUi(AudioRecorder);
        QObject::connect(constantQualityRadioButton, SIGNAL(toggled(bool)), qualitySlider, SLOT(setEnabled(bool)));
        QObject::connect(constantBitrateRadioButton, SIGNAL(toggled(bool)), bitrateBox, SLOT(setEnabled(bool)));
        QObject::connect(outputButton, SIGNAL(clicked()), AudioRecorder, SLOT(setOutputLocation()));
        QObject::connect(recordButton, SIGNAL(clicked()), AudioRecorder, SLOT(toggleRecord()));
        QObject::connect(pauseButton, SIGNAL(clicked()), AudioRecorder, SLOT(togglePause()));

        QMetaObject::connectSlotsByName(AudioRecorder);
    } // setupUi

    void retranslateUi(QMainWindow *AudioRecorder)
    {
        AudioRecorder->setWindowTitle(QApplication::translate("AudioRecorder", "MusicBoard Rec", Q_NULLPTR));
        label_2->setText(QApplication::translate("AudioRecorder", "Audio Codec:", Q_NULLPTR));
        label_5->setText(QApplication::translate("AudioRecorder", "Channels:", Q_NULLPTR));
        label_4->setText(QApplication::translate("AudioRecorder", "Sample rate:", Q_NULLPTR));
        label_3->setText(QApplication::translate("AudioRecorder", "File Container:", Q_NULLPTR));
        label->setText(QApplication::translate("AudioRecorder", "Input Device:", Q_NULLPTR));
        recordButton->setText(QApplication::translate("AudioRecorder", "Record", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AudioRecorder", "Encoding Mode:", Q_NULLPTR));
        constantQualityRadioButton->setText(QApplication::translate("AudioRecorder", "Constant &Quality:", Q_NULLPTR));
        constantBitrateRadioButton->setText(QApplication::translate("AudioRecorder", "Constant Bitrate:", Q_NULLPTR));
        pauseButton->setText(QApplication::translate("AudioRecorder", "Pause", Q_NULLPTR));
        outputButton->setText(QApplication::translate("AudioRecorder", "Output...", Q_NULLPTR));
        label_6->setText(QApplication::translate("AudioRecorder", "<html><head/><body><p align=\"center\">MusicBoard</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AudioRecorder: public Ui_AudioRecorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIORECORDER_H
