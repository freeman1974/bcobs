/********************************************************************************
** Form generated from reading UI file 'OBSAbout.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSABOUT_H
#define UI_OBSABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickable-label.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSAbout
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *icon;
    QVBoxLayout *verticalLayout;
    QLabel *name;
    QLabel *version;
    QLabel *info;
    QLabel *contribute;
    QLabel *donate;
    QLabel *getInvolved;
    QSpacerItem *verticalSpacer;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    ClickableLabel *about;
    ClickableLabel *authors;
    ClickableLabel *license;

    void setupUi(QWidget *OBSAbout)
    {
        if (OBSAbout->objectName().isEmpty())
            OBSAbout->setObjectName(QString::fromUtf8("OBSAbout"));
        OBSAbout->resize(840, 519);
        verticalLayout_2 = new QVBoxLayout(OBSAbout);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(30);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 10, 6, 6);
        icon = new QLabel(OBSAbout);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setMinimumSize(QSize(256, 256));
        icon->setMaximumSize(QSize(256, 256));
        icon->setPixmap(QPixmap(QString::fromUtf8(":res/images/obs.png")));
        icon->setScaledContents(true);

        horizontalLayout_2->addWidget(icon);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        name = new QLabel(OBSAbout);
        name->setObjectName(QString::fromUtf8("name"));
        name->setText(QString::fromUtf8("OBS Studio"));

        verticalLayout->addWidget(name);

        version = new QLabel(OBSAbout);
        version->setObjectName(QString::fromUtf8("version"));
        version->setText(QString::fromUtf8("Version"));

        verticalLayout->addWidget(version);

        info = new QLabel(OBSAbout);
        info->setObjectName(QString::fromUtf8("info"));
        info->setWordWrap(true);

        verticalLayout->addWidget(info);

        contribute = new QLabel(OBSAbout);
        contribute->setObjectName(QString::fromUtf8("contribute"));
        contribute->setText(QString::fromUtf8("Contribute"));
        contribute->setWordWrap(true);

        verticalLayout->addWidget(contribute);

        donate = new QLabel(OBSAbout);
        donate->setObjectName(QString::fromUtf8("donate"));
        donate->setText(QString::fromUtf8("Donate"));

        verticalLayout->addWidget(donate);

        getInvolved = new QLabel(OBSAbout);
        getInvolved->setObjectName(QString::fromUtf8("getInvolved"));
        getInvolved->setText(QString::fromUtf8("Get Involved"));

        verticalLayout->addWidget(getInvolved);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        textBrowser = new QTextBrowser(OBSAbout);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setOpenExternalLinks(true);

        verticalLayout->addWidget(textBrowser);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        widget = new QWidget(OBSAbout);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 60));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        about = new ClickableLabel(widget);
        about->setObjectName(QString::fromUtf8("about"));
        about->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(about);

        authors = new ClickableLabel(widget);
        authors->setObjectName(QString::fromUtf8("authors"));
        authors->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(authors);

        license = new ClickableLabel(widget);
        license->setObjectName(QString::fromUtf8("license"));
        license->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(license);


        verticalLayout_2->addWidget(widget);


        retranslateUi(OBSAbout);

        QMetaObject::connectSlotsByName(OBSAbout);
    } // setupUi

    void retranslateUi(QWidget *OBSAbout)
    {
        OBSAbout->setWindowTitle(QCoreApplication::translate("OBSAbout", "About", nullptr));
        icon->setText(QString());
        info->setText(QCoreApplication::translate("OBSAbout", "About.Info", nullptr));
        about->setText(QCoreApplication::translate("OBSAbout", "About", nullptr));
        authors->setText(QCoreApplication::translate("OBSAbout", "Authors", nullptr));
        license->setText(QCoreApplication::translate("OBSAbout", "License", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSAbout: public Ui_OBSAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSABOUT_H
