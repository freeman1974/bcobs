/********************************************************************************
** Form generated from reading UI file 'AutoConfigStreamPage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOCONFIGSTREAMPAGE_H
#define UI_AUTOCONFIGSTREAMPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "url-push-button.hpp"

QT_BEGIN_NAMESPACE

class Ui_AutoConfigStreamPage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QFormLayout *topLayout;
    QSpacerItem *horizontalSpacer_6;
    QLabel *serviceLabel;
    QComboBox *service;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QFormLayout *loginPageLayout;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *connectAccount;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *useStreamKey;
    QSpacerItem *horizontalSpacer_8;
    QWidget *streamkeyPage;
    QFormLayout *streamkeyPageLayout;
    QLabel *serverLabel;
    QStackedWidget *serverStackedWidget;
    QWidget *servicePage;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *server;
    QWidget *customPage;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *customServer;
    QLabel *streamKeyLabel;
    QWidget *streamKeyWidget;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *key;
    QPushButton *show;
    UrlPushButton *streamKeyButton;
    QLabel *bitrateLabel;
    QSpinBox *bitrate;
    QCheckBox *preferHardware;
    QCheckBox *doBandwidthTest;
    QGroupBox *region;
    QGridLayout *gridLayout;
    QCheckBox *regionAsia;
    QCheckBox *regionUS;
    QCheckBox *regionEU;
    QCheckBox *regionOther;
    QPushButton *connectAccount2;
    QPushButton *disconnectAccount;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *AutoConfigStreamPage)
    {
        if (AutoConfigStreamPage->objectName().isEmpty())
            AutoConfigStreamPage->setObjectName(QString::fromUtf8("AutoConfigStreamPage"));
        AutoConfigStreamPage->resize(692, 407);
        AutoConfigStreamPage->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AutoConfigStreamPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(AutoConfigStreamPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        topLayout = new QFormLayout(widget);
        topLayout->setObjectName(QString::fromUtf8("topLayout"));
        topLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        topLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        topLayout->setContentsMargins(-1, -1, -1, 12);
        horizontalSpacer_6 = new QSpacerItem(87, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        topLayout->setItem(0, QFormLayout::LabelRole, horizontalSpacer_6);

        serviceLabel = new QLabel(widget);
        serviceLabel->setObjectName(QString::fromUtf8("serviceLabel"));

        topLayout->setWidget(1, QFormLayout::LabelRole, serviceLabel);

        service = new QComboBox(widget);
        service->setObjectName(QString::fromUtf8("service"));

        topLayout->setWidget(1, QFormLayout::FieldRole, service);

        verticalSpacer = new QSpacerItem(12, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        topLayout->setItem(2, QFormLayout::FieldRole, verticalSpacer);


        verticalLayout->addWidget(widget);

        stackedWidget = new QStackedWidget(AutoConfigStreamPage);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        loginPageLayout = new QFormLayout(loginPage);
        loginPageLayout->setObjectName(QString::fromUtf8("loginPageLayout"));
        loginPageLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        loginPageLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        horizontalSpacer_3 = new QSpacerItem(87, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        loginPageLayout->setItem(0, QFormLayout::LabelRole, horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        connectAccount = new QPushButton(loginPage);
        connectAccount->setObjectName(QString::fromUtf8("connectAccount"));

        horizontalLayout->addWidget(connectAccount);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        loginPageLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        horizontalSpacer_7 = new QSpacerItem(87, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        loginPageLayout->setItem(1, QFormLayout::LabelRole, horizontalSpacer_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        useStreamKey = new QPushButton(loginPage);
        useStreamKey->setObjectName(QString::fromUtf8("useStreamKey"));

        horizontalLayout_5->addWidget(useStreamKey);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        loginPageLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_5);

        stackedWidget->addWidget(loginPage);
        streamkeyPage = new QWidget();
        streamkeyPage->setObjectName(QString::fromUtf8("streamkeyPage"));
        streamkeyPageLayout = new QFormLayout(streamkeyPage);
        streamkeyPageLayout->setObjectName(QString::fromUtf8("streamkeyPageLayout"));
        streamkeyPageLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        streamkeyPageLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serverLabel = new QLabel(streamkeyPage);
        serverLabel->setObjectName(QString::fromUtf8("serverLabel"));

        streamkeyPageLayout->setWidget(0, QFormLayout::LabelRole, serverLabel);

        serverStackedWidget = new QStackedWidget(streamkeyPage);
        serverStackedWidget->setObjectName(QString::fromUtf8("serverStackedWidget"));
        servicePage = new QWidget();
        servicePage->setObjectName(QString::fromUtf8("servicePage"));
        horizontalLayout_2 = new QHBoxLayout(servicePage);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        server = new QComboBox(servicePage);
        server->setObjectName(QString::fromUtf8("server"));

        horizontalLayout_2->addWidget(server);

        serverStackedWidget->addWidget(servicePage);
        customPage = new QWidget();
        customPage->setObjectName(QString::fromUtf8("customPage"));
        horizontalLayout_3 = new QHBoxLayout(customPage);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        customServer = new QLineEdit(customPage);
        customServer->setObjectName(QString::fromUtf8("customServer"));

        horizontalLayout_3->addWidget(customServer);

        serverStackedWidget->addWidget(customPage);

        streamkeyPageLayout->setWidget(0, QFormLayout::FieldRole, serverStackedWidget);

        streamKeyLabel = new QLabel(streamkeyPage);
        streamKeyLabel->setObjectName(QString::fromUtf8("streamKeyLabel"));
        streamKeyLabel->setOpenExternalLinks(true);

        streamkeyPageLayout->setWidget(1, QFormLayout::LabelRole, streamKeyLabel);

        streamKeyWidget = new QWidget(streamkeyPage);
        streamKeyWidget->setObjectName(QString::fromUtf8("streamKeyWidget"));
        horizontalLayout_4 = new QHBoxLayout(streamKeyWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        key = new QLineEdit(streamKeyWidget);
        key->setObjectName(QString::fromUtf8("key"));
        key->setInputMask(QString::fromUtf8(""));
        key->setText(QString::fromUtf8(""));
        key->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(key);

        show = new QPushButton(streamKeyWidget);
        show->setObjectName(QString::fromUtf8("show"));

        horizontalLayout_4->addWidget(show);

        streamKeyButton = new UrlPushButton(streamKeyWidget);
        streamKeyButton->setObjectName(QString::fromUtf8("streamKeyButton"));

        horizontalLayout_4->addWidget(streamKeyButton);


        streamkeyPageLayout->setWidget(1, QFormLayout::FieldRole, streamKeyWidget);

        bitrateLabel = new QLabel(streamkeyPage);
        bitrateLabel->setObjectName(QString::fromUtf8("bitrateLabel"));

        streamkeyPageLayout->setWidget(2, QFormLayout::LabelRole, bitrateLabel);

        bitrate = new QSpinBox(streamkeyPage);
        bitrate->setObjectName(QString::fromUtf8("bitrate"));
        bitrate->setSuffix(QString::fromUtf8(""));
        bitrate->setMinimum(500);
        bitrate->setMaximum(10000);
        bitrate->setValue(2500);

        streamkeyPageLayout->setWidget(2, QFormLayout::FieldRole, bitrate);

        preferHardware = new QCheckBox(streamkeyPage);
        preferHardware->setObjectName(QString::fromUtf8("preferHardware"));
        preferHardware->setChecked(true);

        streamkeyPageLayout->setWidget(3, QFormLayout::FieldRole, preferHardware);

        doBandwidthTest = new QCheckBox(streamkeyPage);
        doBandwidthTest->setObjectName(QString::fromUtf8("doBandwidthTest"));
        doBandwidthTest->setChecked(true);

        streamkeyPageLayout->setWidget(4, QFormLayout::FieldRole, doBandwidthTest);

        region = new QGroupBox(streamkeyPage);
        region->setObjectName(QString::fromUtf8("region"));
        gridLayout = new QGridLayout(region);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        regionAsia = new QCheckBox(region);
        regionAsia->setObjectName(QString::fromUtf8("regionAsia"));

        gridLayout->addWidget(regionAsia, 2, 0, 1, 1);

        regionUS = new QCheckBox(region);
        regionUS->setObjectName(QString::fromUtf8("regionUS"));

        gridLayout->addWidget(regionUS, 0, 0, 1, 1);

        regionEU = new QCheckBox(region);
        regionEU->setObjectName(QString::fromUtf8("regionEU"));

        gridLayout->addWidget(regionEU, 0, 1, 1, 1);

        regionOther = new QCheckBox(region);
        regionOther->setObjectName(QString::fromUtf8("regionOther"));

        gridLayout->addWidget(regionOther, 2, 1, 1, 1);


        streamkeyPageLayout->setWidget(6, QFormLayout::FieldRole, region);

        connectAccount2 = new QPushButton(streamkeyPage);
        connectAccount2->setObjectName(QString::fromUtf8("connectAccount2"));

        streamkeyPageLayout->setWidget(7, QFormLayout::FieldRole, connectAccount2);

        disconnectAccount = new QPushButton(streamkeyPage);
        disconnectAccount->setObjectName(QString::fromUtf8("disconnectAccount"));

        streamkeyPageLayout->setWidget(8, QFormLayout::FieldRole, disconnectAccount);

        verticalSpacer_2 = new QSpacerItem(6, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        streamkeyPageLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer_2);

        stackedWidget->addWidget(streamkeyPage);

        verticalLayout->addWidget(stackedWidget);

#if QT_CONFIG(shortcut)
        serviceLabel->setBuddy(service);
        streamKeyLabel->setBuddy(key);
        bitrateLabel->setBuddy(bitrate);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AutoConfigStreamPage);
        QObject::connect(connectAccount2, SIGNAL(clicked()), connectAccount, SLOT(click()));

        stackedWidget->setCurrentIndex(1);
        serverStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AutoConfigStreamPage);
    } // setupUi

    void retranslateUi(QWidget *AutoConfigStreamPage)
    {
        serviceLabel->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.Service", nullptr));
        connectAccount->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.ConnectAccount", nullptr));
        useStreamKey->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.UseStreamKey", nullptr));
        serverLabel->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.Server", nullptr));
        streamKeyLabel->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.StreamKey", nullptr));
        show->setText(QCoreApplication::translate("AutoConfigStreamPage", "Show", nullptr));
        streamKeyButton->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.GetStreamKey", nullptr));
        bitrateLabel->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.Settings.Output.VideoBitrate", nullptr));
#if QT_CONFIG(tooltip)
        preferHardware->setToolTip(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.PreferHardwareEncoding.ToolTip", nullptr));
#endif // QT_CONFIG(tooltip)
        preferHardware->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.PreferHardwareEncoding", nullptr));
        doBandwidthTest->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.PerformBandwidthTest", nullptr));
        region->setTitle(QCoreApplication::translate("AutoConfigStreamPage", "BandwidthTest.Region", nullptr));
        regionAsia->setText(QCoreApplication::translate("AutoConfigStreamPage", "BandwidthTest.Region.Asia", nullptr));
        regionUS->setText(QCoreApplication::translate("AutoConfigStreamPage", "BandwidthTest.Region.US", nullptr));
        regionEU->setText(QCoreApplication::translate("AutoConfigStreamPage", "BandwidthTest.Region.EU", nullptr));
        regionOther->setText(QCoreApplication::translate("AutoConfigStreamPage", "BandwidthTest.Region.Other", nullptr));
        connectAccount2->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.ConnectAccount", nullptr));
        disconnectAccount->setText(QCoreApplication::translate("AutoConfigStreamPage", "Basic.AutoConfig.StreamPage.DisconnectAccount", nullptr));
        (void)AutoConfigStreamPage;
    } // retranslateUi

};

namespace Ui {
    class AutoConfigStreamPage: public Ui_AutoConfigStreamPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOCONFIGSTREAMPAGE_H
