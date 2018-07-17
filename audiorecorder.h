/// Copyright (C) 2015 The Qt Company Ltd.
/// Contact: http://www.qt.io/licensing/


#ifndef AUDIORECORDER_H
#define AUDIORECORDER_H

#include <QDialog>
#include <QtGui>
#include <QMediaRecorder>
#include <QUrl>
#include "global.h"

namespace Ui { class audiorecorder; }
class QAudioRecorder;
class QAudioProbe;
class QAudioBuffer;

class QAudioLevel;

class AudioRecorder : public QDialog
{
    Q_OBJECT

public:
    AudioRecorder(QWidget *parent = 0);
    ~AudioRecorder();

public slots:
    void processBuffer(const QAudioBuffer&);

public slots:
    void setOutputLocation();
    void togglePause();
    void toggleRecord();

    void updateStatus(QMediaRecorder::Status);
    void onStateChanged(QMediaRecorder::State);
    void updateProgress(qint64 pos);
    void displayErrorMessage();

    void on_HiddenNumLockButton_clicked();

    void on_outputButton_clicked();

    void on_recordButton_clicked();

    void on_pauseButton_clicked();

    void on_RecHelpButton_clicked();

    void on_RHelpClose_clicked();

public:
    void clearAudioLevels();

    Ui::audiorecorder *ui5;

    QAudioRecorder *audioRecorder;
    QAudioProbe *probe;
    QList<QAudioLevel*> audioLevels;
    bool outputLocationSet;

};

#endif // AUDIORECORDER_H
