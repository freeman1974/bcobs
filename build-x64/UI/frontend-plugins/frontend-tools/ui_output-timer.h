/********************************************************************************
** Form generated from reading UI file 'output-timer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUT_2D_TIMER_H
#define UI_OUTPUT_2D_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_OutputTimer
{
public:
    QGridLayout *timerLayout;
    QLabel *hoursLabel;
    QSpinBox *recordingTimerHours;
    QSpinBox *streamingTimerSeconds;
    QPushButton *outputTimerStream;
    QSpinBox *recordingTimerMinutes;
    QLabel *streamingLabel;
    QSpinBox *streamingTimerMinutes;
    QPushButton *outputTimerRecord;
    QLabel *recordStoppingIn;
    QLabel *secondsLabel_2;
    QLabel *streamTime;
    QLabel *minutesLabel_2;
    QSpinBox *streamingTimerHours;
    QLabel *recordTime;
    QLabel *minutesLabel;
    QLabel *recordingLabel;
    QSpinBox *recordingTimerSeconds;
    QCheckBox *autoStartStreamTimer;
    QLabel *streamStoppingIn;
    QCheckBox *autoStartRecordTimer;
    QDialogButtonBox *buttonBox;
    QLabel *hoursLabel_2;
    QLabel *secondsLabel;
    QCheckBox *pauseRecordTimer;

    void setupUi(QDialog *OutputTimer)
    {
        if (OutputTimer->objectName().isEmpty())
            OutputTimer->setObjectName(QString::fromUtf8("OutputTimer"));
        OutputTimer->resize(697, 240);
        timerLayout = new QGridLayout(OutputTimer);
        timerLayout->setObjectName(QString::fromUtf8("timerLayout"));
        hoursLabel = new QLabel(OutputTimer);
        hoursLabel->setObjectName(QString::fromUtf8("hoursLabel"));

        timerLayout->addWidget(hoursLabel, 0, 3, 1, 1);

        recordingTimerHours = new QSpinBox(OutputTimer);
        recordingTimerHours->setObjectName(QString::fromUtf8("recordingTimerHours"));
        recordingTimerHours->setMinimum(0);
        recordingTimerHours->setMaximum(24);
        recordingTimerHours->setValue(0);

        timerLayout->addWidget(recordingTimerHours, 3, 2, 1, 1);

        streamingTimerSeconds = new QSpinBox(OutputTimer);
        streamingTimerSeconds->setObjectName(QString::fromUtf8("streamingTimerSeconds"));
        streamingTimerSeconds->setMinimum(0);
        streamingTimerSeconds->setMaximum(59);
        streamingTimerSeconds->setValue(30);

        timerLayout->addWidget(streamingTimerSeconds, 0, 6, 1, 1);

        outputTimerStream = new QPushButton(OutputTimer);
        outputTimerStream->setObjectName(QString::fromUtf8("outputTimerStream"));
        outputTimerStream->setCheckable(true);

        timerLayout->addWidget(outputTimerStream, 0, 8, 1, 1);

        recordingTimerMinutes = new QSpinBox(OutputTimer);
        recordingTimerMinutes->setObjectName(QString::fromUtf8("recordingTimerMinutes"));
        recordingTimerMinutes->setMinimum(0);
        recordingTimerMinutes->setMaximum(59);
        recordingTimerMinutes->setValue(0);

        timerLayout->addWidget(recordingTimerMinutes, 3, 4, 1, 1);

        streamingLabel = new QLabel(OutputTimer);
        streamingLabel->setObjectName(QString::fromUtf8("streamingLabel"));

        timerLayout->addWidget(streamingLabel, 0, 1, 1, 1);

        streamingTimerMinutes = new QSpinBox(OutputTimer);
        streamingTimerMinutes->setObjectName(QString::fromUtf8("streamingTimerMinutes"));
        streamingTimerMinutes->setMaximum(59);
        streamingTimerMinutes->setValue(0);

        timerLayout->addWidget(streamingTimerMinutes, 0, 4, 1, 1);

        outputTimerRecord = new QPushButton(OutputTimer);
        outputTimerRecord->setObjectName(QString::fromUtf8("outputTimerRecord"));
        outputTimerRecord->setCheckable(true);

        timerLayout->addWidget(outputTimerRecord, 3, 8, 1, 1);

        recordStoppingIn = new QLabel(OutputTimer);
        recordStoppingIn->setObjectName(QString::fromUtf8("recordStoppingIn"));

        timerLayout->addWidget(recordStoppingIn, 6, 1, 1, 1);

        secondsLabel_2 = new QLabel(OutputTimer);
        secondsLabel_2->setObjectName(QString::fromUtf8("secondsLabel_2"));

        timerLayout->addWidget(secondsLabel_2, 3, 7, 1, 1);

        streamTime = new QLabel(OutputTimer);
        streamTime->setObjectName(QString::fromUtf8("streamTime"));

        timerLayout->addWidget(streamTime, 2, 2, 1, 1);

        minutesLabel_2 = new QLabel(OutputTimer);
        minutesLabel_2->setObjectName(QString::fromUtf8("minutesLabel_2"));

        timerLayout->addWidget(minutesLabel_2, 3, 5, 1, 1);

        streamingTimerHours = new QSpinBox(OutputTimer);
        streamingTimerHours->setObjectName(QString::fromUtf8("streamingTimerHours"));
        streamingTimerHours->setMinimum(0);
        streamingTimerHours->setMaximum(24);
        streamingTimerHours->setValue(0);

        timerLayout->addWidget(streamingTimerHours, 0, 2, 1, 1);

        recordTime = new QLabel(OutputTimer);
        recordTime->setObjectName(QString::fromUtf8("recordTime"));

        timerLayout->addWidget(recordTime, 6, 2, 1, 1);

        minutesLabel = new QLabel(OutputTimer);
        minutesLabel->setObjectName(QString::fromUtf8("minutesLabel"));

        timerLayout->addWidget(minutesLabel, 0, 5, 1, 1);

        recordingLabel = new QLabel(OutputTimer);
        recordingLabel->setObjectName(QString::fromUtf8("recordingLabel"));

        timerLayout->addWidget(recordingLabel, 3, 1, 1, 1);

        recordingTimerSeconds = new QSpinBox(OutputTimer);
        recordingTimerSeconds->setObjectName(QString::fromUtf8("recordingTimerSeconds"));
        recordingTimerSeconds->setMinimum(0);
        recordingTimerSeconds->setMaximum(59);
        recordingTimerSeconds->setValue(30);

        timerLayout->addWidget(recordingTimerSeconds, 3, 6, 1, 1);

        autoStartStreamTimer = new QCheckBox(OutputTimer);
        autoStartStreamTimer->setObjectName(QString::fromUtf8("autoStartStreamTimer"));

        timerLayout->addWidget(autoStartStreamTimer, 1, 1, 1, 3);

        streamStoppingIn = new QLabel(OutputTimer);
        streamStoppingIn->setObjectName(QString::fromUtf8("streamStoppingIn"));

        timerLayout->addWidget(streamStoppingIn, 2, 1, 1, 1);

        autoStartRecordTimer = new QCheckBox(OutputTimer);
        autoStartRecordTimer->setObjectName(QString::fromUtf8("autoStartRecordTimer"));

        timerLayout->addWidget(autoStartRecordTimer, 4, 1, 1, 3);

        buttonBox = new QDialogButtonBox(OutputTimer);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        timerLayout->addWidget(buttonBox, 7, 8, 1, 1);

        hoursLabel_2 = new QLabel(OutputTimer);
        hoursLabel_2->setObjectName(QString::fromUtf8("hoursLabel_2"));

        timerLayout->addWidget(hoursLabel_2, 3, 3, 1, 1);

        secondsLabel = new QLabel(OutputTimer);
        secondsLabel->setObjectName(QString::fromUtf8("secondsLabel"));

        timerLayout->addWidget(secondsLabel, 0, 7, 1, 1);

        pauseRecordTimer = new QCheckBox(OutputTimer);
        pauseRecordTimer->setObjectName(QString::fromUtf8("pauseRecordTimer"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pauseRecordTimer->sizePolicy().hasHeightForWidth());
        pauseRecordTimer->setSizePolicy(sizePolicy);
        pauseRecordTimer->setChecked(true);

        timerLayout->addWidget(pauseRecordTimer, 5, 1, 1, 3);

        QWidget::setTabOrder(streamingTimerHours, streamingTimerMinutes);
        QWidget::setTabOrder(streamingTimerMinutes, streamingTimerSeconds);
        QWidget::setTabOrder(streamingTimerSeconds, outputTimerStream);
        QWidget::setTabOrder(outputTimerStream, autoStartStreamTimer);
        QWidget::setTabOrder(autoStartStreamTimer, recordingTimerHours);
        QWidget::setTabOrder(recordingTimerHours, recordingTimerMinutes);
        QWidget::setTabOrder(recordingTimerMinutes, recordingTimerSeconds);
        QWidget::setTabOrder(recordingTimerSeconds, outputTimerRecord);
        QWidget::setTabOrder(outputTimerRecord, autoStartRecordTimer);
        QWidget::setTabOrder(autoStartRecordTimer, pauseRecordTimer);

        retranslateUi(OutputTimer);

        QMetaObject::connectSlotsByName(OutputTimer);
    } // setupUi

    void retranslateUi(QDialog *OutputTimer)
    {
        OutputTimer->setWindowTitle(QCoreApplication::translate("OutputTimer", "OutputTimer", nullptr));
        hoursLabel->setText(QCoreApplication::translate("OutputTimer", "Hours", nullptr));
        outputTimerStream->setText(QCoreApplication::translate("OutputTimer", "Start", nullptr));
        streamingLabel->setText(QCoreApplication::translate("OutputTimer", "OutputTimer.Stream", nullptr));
        outputTimerRecord->setText(QCoreApplication::translate("OutputTimer", "Start", nullptr));
        recordStoppingIn->setText(QCoreApplication::translate("OutputTimer", "OutputTimer.Record.StoppingIn", nullptr));
        secondsLabel_2->setText(QCoreApplication::translate("OutputTimer", "Seconds", nullptr));
        streamTime->setText(QCoreApplication::translate("OutputTimer", "00:00:00", nullptr));
        minutesLabel_2->setText(QCoreApplication::translate("OutputTimer", "Minutes", nullptr));
        recordTime->setText(QCoreApplication::translate("OutputTimer", "00:00:00", nullptr));
        minutesLabel->setText(QCoreApplication::translate("OutputTimer", "Minutes", nullptr));
        recordingLabel->setText(QCoreApplication::translate("OutputTimer", "OutputTimer.Record", nullptr));
        autoStartStreamTimer->setText(QCoreApplication::translate("OutputTimer", "OutputTimer.Stream.EnableEverytime", nullptr));
        streamStoppingIn->setText(QCoreApplication::translate("OutputTimer", "OutputTimer.Stream.StoppingIn", nullptr));
        autoStartRecordTimer->setText(QCoreApplication::translate("OutputTimer", "OutputTimer.Record.EnableEverytime", nullptr));
        hoursLabel_2->setText(QCoreApplication::translate("OutputTimer", "Hours", nullptr));
        secondsLabel->setText(QCoreApplication::translate("OutputTimer", "Seconds", nullptr));
        pauseRecordTimer->setText(QCoreApplication::translate("OutputTimer", "OutputTimer.Record.PauseTimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutputTimer: public Ui_OutputTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT_2D_TIMER_H
