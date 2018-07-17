/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QAudioProbe>
#include <QAudioRecorder>
#include <QDir>
#include <QFileDialog>
#include <QMediaRecorder>
#include <QFont>

#include "audiorecorder.h"
#include "qaudiolevel.h"
#include "audiorecorder.h"
#include "ui_audiorecorder.h"

static qreal getPeakValue(const QAudioFormat &format);
static QVector<qreal> getBufferLevels(const QAudioBuffer &buffer);

template <class T>
static QVector<qreal> getBufferLevels(const T *buffer, int frames, int channels);

AudioRecorder::AudioRecorder(QWidget *parent) :
    QDialog(parent),
    ui5(new Ui::audiorecorder),
    outputLocationSet(false)
{
    ui5->setupUi(this);
    extern QString C1;
    extern QString C12;
    extern QString MainColor;
    extern QString CFont;
    extern QString CButtons;
    extern QFont Font;
    extern int On;
    extern int Bg;
    extern int NumLock;
    extern int FontColor;
    extern int BgColor1;
    extern int BgColor2;
    ui5->label_12->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui5->label_13->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui5->label_14->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui5->label_15->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");
    ui5->label_16->setStyleSheet("color: "+CFont+"; background-color: rgba(0, 0, 0, 0)");

    ui5->label_12 ->setFont(Font);
    ui5->label_13 ->setFont(Font);
    ui5->label_14 ->setFont(Font);
    ui5->label_15 ->setFont(Font);
    ui5->label_16 ->setFont(Font);

    ui5->Picture->setStyleSheet("background-color: "+C1+";");

    ui5->RHelp->hide();

    ui5->RHelp->setStyleSheet("background-color: "+C1+";");

    if (Bg==2){ui5->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.95008, y1:0.051, x2:1, y2:0, stop:0.20398 rgba(100, 119, 149, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==3){ui5->Picture->setStyleSheet("background-color: qradialgradient(spread:repeat, cx:1, cy:0, radius:1.226, fx:0.141, fy:0.840545, stop:0 rgba(255, 255, 255, 255), stop:0.985075 rgba(135, 48, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==0){ui5->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.313, y2:0.630682, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(142, 125, 217, 255));");}
    if (Bg==14){ui5->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0.313, y2:0.630682, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(142, 125, 217, 255));");}
    if (Bg==1){ui5->Picture->setStyleSheet("background-image: url(:/pictures/Theme24.png); image: url(:/pictures/Theme24.png); background-color: rgba(0, 0, 0, 0)");}
    if (Bg==4){ui5->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.495, cy:0.494, angle:226.6, stop:0 rgba(87, 64, 98, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==5){ui5->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(103, 61, 113, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==6){ui5->Picture->setStyleSheet("background-color: qlineargradient(spread:repeat, x1:0.516, y1:0.187136, x2:1, y2:0, stop:0.01 rgba(132, 84, 162, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==7){ui5->Picture->setStyleSheet("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==8){ui5->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:0.896, y1:0.08, x2:1, y2:0, stop:0 rgba(114, 0, 128, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==9){ui5->Picture->setStyleSheet("background-color: qlineargradient(spread:reflect, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:0.0447761 rgba(56, 0, 53, 255), stop:0.467662 rgba(91, 0, 122, 255), stop:0.950249 rgba(255, 180, 255, 255), stop:1 rgba(255, 255, 255, 255));");}
    if (Bg==10){ui5->Picture->setStyleSheet("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:224.8, stop:0 rgba(211, 215, 207, 255), stop:0.189055 rgba(105, 0, 219, 255), stop:0.40796 rgba(0, 0, 131, 255), stop:0.606965 rgba(175, 0, 194, 255), stop:0.741294 rgba(97, 146, 189, 255), stop:1 rgba(255, 255, 255, 255))");}
    ////if (Bg==14){ui5->Picture->setStyleSheet("background-color: rgb(77, 68, 121);");}
    if (Bg==41){ui5->Picture->setStyleSheet("background-color: "+MainColor+";");}
    ui5->L1->setStyleSheet("background-color: "+C12+";");

    if (CButtons.length()<17){
        ui5->outputButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
        ui5->pauseButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
        ui5->RecHelpButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
        ui5->recordButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(255, 255, 255);");
  }
    else {
        ui5->outputButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
        ui5->pauseButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
        ui5->RecHelpButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
        ui5->recordButton->setStyleSheet("background-color: "+CButtons+"; color: rgb(0, 0, 0);");
    }

    extern int NumLock;

    audioRecorder = new QAudioRecorder(this);
    probe = new QAudioProbe;
    connect(probe, SIGNAL(audioBufferProbed(QAudioBuffer)),
            this, SLOT(processBuffer(QAudioBuffer)));
    probe->setSource(audioRecorder);

    //audio devices
    ui5->audioDeviceBox_3->addItem(tr("Default"), QVariant(QString()));
    foreach (const QString &device, audioRecorder->audioInputs()) {
        ui5->audioDeviceBox_3->addItem(device, QVariant(device));
    }

    //audio codecs
    ui5->audioCodecBox_3->addItem(tr("Default"), QVariant(QString()));
    foreach (const QString &codecName, audioRecorder->supportedAudioCodecs()) {
        ui5->audioCodecBox_3->addItem(codecName, QVariant(codecName));
    }

    //containers
    ui5->containerBox_3->addItem(tr("Default"), QVariant(QString()));
    foreach (const QString &containerName, audioRecorder->supportedContainers()) {
        ui5->containerBox_3->addItem(containerName, QVariant(containerName));
    }

    //sample rate
    ui5->sampleRateBox_3->addItem(tr("Default"), QVariant(0));
    foreach (int sampleRate, audioRecorder->supportedAudioSampleRates()) {
        ui5->sampleRateBox_3->addItem(QString::number(sampleRate), QVariant(
                sampleRate));
    }

    //channels
    ui5->channelsBox_3->addItem(tr("Default"), QVariant(-1));
    ui5->channelsBox_3->addItem(QStringLiteral("1"), QVariant(1));
    ui5->channelsBox_3->addItem(QStringLiteral("2"), QVariant(2));
    ui5->channelsBox_3->addItem(QStringLiteral("4"), QVariant(4));

    //quality
    ui5->qualitySlider_3->setRange(0, int(QMultimedia::VeryHighQuality));
    ui5->qualitySlider_3->setValue(int(QMultimedia::NormalQuality));

    //bitrates:
    ui5->bitrateBox_3->addItem(tr("Default"), QVariant(0));
    ui5->bitrateBox_3->addItem(QStringLiteral("32000"), QVariant(32000));
    ui5->bitrateBox_3->addItem(QStringLiteral("64000"), QVariant(64000));
    ui5->bitrateBox_3->addItem(QStringLiteral("96000"), QVariant(96000));
    ui5->bitrateBox_3->addItem(QStringLiteral("128000"), QVariant(128000));

    connect(audioRecorder, SIGNAL(durationChanged(qint64)), this,
            SLOT(updateProgress(qint64)));
    connect(audioRecorder, SIGNAL(statusChanged(QMediaRecorder::Status)), this,
            SLOT(updateStatus(QMediaRecorder::Status)));
    connect(audioRecorder, SIGNAL(stateChanged(QMediaRecorder::State)),
            this, SLOT(onStateChanged(QMediaRecorder::State)));
    connect(audioRecorder, SIGNAL(error(QMediaRecorder::Error)), this,
            SLOT(displayErrorMessage()));
}

AudioRecorder::~AudioRecorder()
{
    delete audioRecorder;
    delete probe;
}

void AudioRecorder::updateProgress(qint64 duration)
{
    if (audioRecorder->error() != QMediaRecorder::NoError || duration < 2000)
        return;

    ///ui5->statusbar->showMessage(tr("Recorded %1 sec").arg(duration / 1000));
}

void AudioRecorder::updateStatus(QMediaRecorder::Status status)
{
    QString statusMessage;

    switch (status) {
    case QMediaRecorder::RecordingStatus:
        statusMessage = tr("Recording to %1").arg(audioRecorder->actualLocation().toString());
        break;
    case QMediaRecorder::PausedStatus:
        //clearAudioLevels();
        statusMessage = tr("Paused");
        break;
    case QMediaRecorder::UnloadedStatus:
    case QMediaRecorder::LoadedStatus:
        //clearAudioLevels();
        statusMessage = tr("Stopped");
    default:
        break;
    }

    ///if (audioRecorder->error() == QMediaRecorder::NoError)
        ///ui5->statusbar->showMessage(statusMessage);
}

void AudioRecorder::onStateChanged(QMediaRecorder::State state)
{
    switch (state) {
    case QMediaRecorder::RecordingState:
        ui5->recordButton->setText(tr("Stop"));
        ui5->pauseButton->setText(tr("Pause"));
        break;
    case QMediaRecorder::PausedState:
        ui5->recordButton->setText(tr("Stop"));
        ui5->pauseButton->setText(tr("Resume"));
        break;
    case QMediaRecorder::StoppedState:
        ui5->recordButton->setText(tr("Record"));
        ui5->pauseButton->setText(tr("Pause"));
        break;
    }

    ui5->pauseButton->setEnabled(audioRecorder->state() != QMediaRecorder::StoppedState);
}

static QVariant boxValue(const QComboBox *box)
{
    int idx = box->currentIndex();
    if (idx == -1)
        return QVariant();

    return box->itemData(idx);
}

//void AudioRecorder::toggleRecord()
//{
//    if (audioRecorder->state() == QMediaRecorder::StoppedState) {
//        audioRecorder->setAudioInput(boxValue(ui5->audioDeviceBox_3).toString());

//        QAudioEncoderSettings settings;
//        settings.setCodec(boxValue(ui5->audioCodecBox_3).toString());
//        settings.setSampleRate(boxValue(ui5->sampleRateBox_3).toInt());
//        settings.setBitRate(boxValue(ui5->bitrateBox_3).toInt());
//        settings.setChannelCount(boxValue(ui5->channelsBox_3).toInt());
//        settings.setQuality(QMultimedia::EncodingQuality(ui5->qualitySlider_3->value()));
//        settings.setEncodingMode(ui5->constantQualityRadioButton_3->isChecked() ?
//                                 QMultimedia::ConstantQualityEncoding :
//                                 QMultimedia::ConstantBitRateEncoding);

//        QString container = boxValue(ui5->containerBox_3).toString();

//        audioRecorder->setEncodingSettings(settings, QVideoEncoderSettings(), container);
//        audioRecorder->record();
//    }
//    else {
//        audioRecorder->stop();
//    }
//}

//void AudioRecorder::togglePause()
//{
//    if (audioRecorder->state() != QMediaRecorder::PausedState)
//        audioRecorder->pause();
//    else
//        audioRecorder->record();
//}

//void AudioRecorder::setOutputLocation()
//{
//    QString fileName = QFileDialog::getSaveFileName();
//    audioRecorder->setOutputLocation(QUrl::fromLocalFile(fileName));
//    outputLocationSet = true;
//}

void AudioRecorder::displayErrorMessage()
{
    //ui5->statusbar->showMessage(audioRecorder->errorString());
}

//void AudioRecorder::clearAudioLevels()
//{
//    for (int i = 0; i < audioLevels.size(); ++i)
//            audioLevels.at(i)->setLevel(0);
//}

// This function returns the maximum possible sample value for a given audio format
qreal getPeakValue(const QAudioFormat& format)
{
    // Note: Only the most common sample formats are supported
    if (!format.isValid())
        return qreal(0);

    if (format.codec() != "audio/pcm")
        return qreal(0);

    switch (format.sampleType()) {
    case QAudioFormat::Unknown:
        break;
    case QAudioFormat::Float:
        if (format.sampleSize() != 32) // other sample formats are not supported
            return qreal(0);
        return qreal(1.00003);
    case QAudioFormat::SignedInt:
        if (format.sampleSize() == 32)
            return qreal(INT_MAX);
        if (format.sampleSize() == 16)
            return qreal(SHRT_MAX);
        if (format.sampleSize() == 8)
            return qreal(CHAR_MAX);
        break;
    case QAudioFormat::UnSignedInt:
        if (format.sampleSize() == 32)
            return qreal(UINT_MAX);
        if (format.sampleSize() == 16)
            return qreal(USHRT_MAX);
        if (format.sampleSize() == 8)
            return qreal(UCHAR_MAX);
        break;
    }

    return qreal(0);
}

// returns the audio level for each channel
QVector<qreal> getBufferLevels(const QAudioBuffer& buffer)
{
    QVector<qreal> values;

    if (!buffer.format().isValid() || buffer.format().byteOrder() != QAudioFormat::LittleEndian)
        return values;

    if (buffer.format().codec() != "audio/pcm")
        return values;

    int channelCount = buffer.format().channelCount();
    values.fill(0, channelCount);
    qreal peak_value = getPeakValue(buffer.format());
    if (qFuzzyCompare(peak_value, qreal(0)))
        return values;

    switch (buffer.format().sampleType()) {
    case QAudioFormat::Unknown:
    case QAudioFormat::UnSignedInt:
        if (buffer.format().sampleSize() == 32)
            values = getBufferLevels(buffer.constData<quint32>(), buffer.frameCount(), channelCount);
        if (buffer.format().sampleSize() == 16)
            values = getBufferLevels(buffer.constData<quint16>(), buffer.frameCount(), channelCount);
        if (buffer.format().sampleSize() == 8)
            values = getBufferLevels(buffer.constData<quint8>(), buffer.frameCount(), channelCount);
        for (int i = 0; i < values.size(); ++i)
            values[i] = qAbs(values.at(i) - peak_value / 2) / (peak_value / 2);
        break;
    case QAudioFormat::Float:
        if (buffer.format().sampleSize() == 32) {
            values = getBufferLevels(buffer.constData<float>(), buffer.frameCount(), channelCount);
            for (int i = 0; i < values.size(); ++i)
                values[i] /= peak_value;
        }
        break;
    case QAudioFormat::SignedInt:
        if (buffer.format().sampleSize() == 32)
            values = getBufferLevels(buffer.constData<qint32>(), buffer.frameCount(), channelCount);
        if (buffer.format().sampleSize() == 16)
            values = getBufferLevels(buffer.constData<qint16>(), buffer.frameCount(), channelCount);
        if (buffer.format().sampleSize() == 8)
            values = getBufferLevels(buffer.constData<qint8>(), buffer.frameCount(), channelCount);
        for (int i = 0; i < values.size(); ++i)
            values[i] /= peak_value;
        break;
    }

    return values;
}

template <class T>
QVector<qreal> getBufferLevels(const T *buffer, int frames, int channels)
{
    QVector<qreal> max_values;
    max_values.fill(0, channels);

    for (int i = 0; i < frames; ++i) {
        for (int j = 0; j < channels; ++j) {
            qreal value = qAbs(qreal(buffer[i * channels + j]));
            if (value > max_values.at(j))
                max_values.replace(j, value);
        }
    }

    return max_values;
}

void AudioRecorder::processBuffer(const QAudioBuffer& buffer)
{
    if (audioLevels.count() != buffer.format().channelCount()) {
        qDeleteAll(audioLevels);
        audioLevels.clear();
        for (int i = 0; i < buffer.format().channelCount(); ++i) {
            //QAudioLevel *level = new QAudioLevel(ui5->centralwidget);
            //audioLevels.append(level);
            //ui5->levelsLayout->addWidget(level);
        }
    }

    QVector<qreal> levels = getBufferLevels(buffer);
    //for (int i = 0; i < levels.count(); ++i)
        //audioLevels.at(i)->setLevel(levels.at(i));
}

void AudioRecorder::on_HiddenNumLockButton_clicked()
{   extern int NumLock;
    if (NumLock==1){
        NumLock=0;
    }
    else {
        NumLock=1;
    }
}

void AudioRecorder::on_outputButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName();
    audioRecorder->setOutputLocation(QUrl::fromLocalFile(fileName));
    outputLocationSet = true;
}

void AudioRecorder::on_recordButton_clicked()
{
    if (audioRecorder->state() == QMediaRecorder::StoppedState) {
        audioRecorder->setAudioInput(boxValue(ui5->audioDeviceBox_3).toString());

        QAudioEncoderSettings settings;
        settings.setCodec(boxValue(ui5->audioCodecBox_3).toString());
        settings.setSampleRate(boxValue(ui5->sampleRateBox_3).toInt());
        settings.setBitRate(boxValue(ui5->bitrateBox_3).toInt());
        settings.setChannelCount(boxValue(ui5->channelsBox_3).toInt());
        settings.setQuality(QMultimedia::EncodingQuality(ui5->qualitySlider_3->value()));
        settings.setEncodingMode(ui5->constantQualityRadioButton_3->isChecked() ?
                                 QMultimedia::ConstantQualityEncoding :
                                 QMultimedia::ConstantBitRateEncoding);

        QString container = boxValue(ui5->containerBox_3).toString();

        audioRecorder->setEncodingSettings(settings, QVideoEncoderSettings(), container);
        audioRecorder->record();
    }
    else {
        audioRecorder->stop();
    }
}

void AudioRecorder::on_pauseButton_clicked()
{
    if (audioRecorder->state() != QMediaRecorder::PausedState)
        audioRecorder->pause();
    else
        audioRecorder->record();
}


int isRHelp=0;

void AudioRecorder::on_RecHelpButton_clicked()
{
    if (isRHelp==0){
        ui5->RHelp->show();
        isRHelp=1;
    }
    else {
        ui5->RHelp->hide();
        isRHelp=0;
    }
}

void AudioRecorder::on_RHelpClose_clicked()
{
    ui5->RHelp->hide();
    isRHelp=0;
}
