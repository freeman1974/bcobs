/********************************************************************************
** Form generated from reading UI file 'AutoConfigTestPage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOCONFIGTESTPAGE_H
#define UI_AUTOCONFIGTESTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoConfigTestPage
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *testPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *progressLabel;
    QLabel *subProgressLabel;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QWidget *finishPage;
    QVBoxLayout *finishPageLayout;
    QLabel *finalResultLabel;
    QLabel *finalResultLabel_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *errorPage;
    QVBoxLayout *verticalLayout_3;
    QLabel *errorLabel;

    void setupUi(QWidget *AutoConfigTestPage)
    {
        if (AutoConfigTestPage->objectName().isEmpty())
            AutoConfigTestPage->setObjectName(QString::fromUtf8("AutoConfigTestPage"));
        AutoConfigTestPage->resize(400, 300);
        AutoConfigTestPage->setWindowTitle(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AutoConfigTestPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(AutoConfigTestPage);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        testPage = new QWidget();
        testPage->setObjectName(QString::fromUtf8("testPage"));
        verticalLayout_2 = new QVBoxLayout(testPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        progressLabel = new QLabel(testPage);
        progressLabel->setObjectName(QString::fromUtf8("progressLabel"));
        progressLabel->setText(QString::fromUtf8(""));

        verticalLayout_2->addWidget(progressLabel);

        subProgressLabel = new QLabel(testPage);
        subProgressLabel->setObjectName(QString::fromUtf8("subProgressLabel"));
        subProgressLabel->setText(QString::fromUtf8(""));

        verticalLayout_2->addWidget(subProgressLabel);

        progressBar = new QProgressBar(testPage);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        stackedWidget->addWidget(testPage);
        finishPage = new QWidget();
        finishPage->setObjectName(QString::fromUtf8("finishPage"));
        finishPageLayout = new QVBoxLayout(finishPage);
        finishPageLayout->setObjectName(QString::fromUtf8("finishPageLayout"));
        finalResultLabel = new QLabel(finishPage);
        finalResultLabel->setObjectName(QString::fromUtf8("finalResultLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(finalResultLabel->sizePolicy().hasHeightForWidth());
        finalResultLabel->setSizePolicy(sizePolicy);
        finalResultLabel->setWordWrap(true);

        finishPageLayout->addWidget(finalResultLabel);

        finalResultLabel_2 = new QLabel(finishPage);
        finalResultLabel_2->setObjectName(QString::fromUtf8("finalResultLabel_2"));
        finalResultLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        finalResultLabel_2->setWordWrap(true);

        finishPageLayout->addWidget(finalResultLabel_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        finishPageLayout->addItem(verticalSpacer_2);

        stackedWidget->addWidget(finishPage);
        errorPage = new QWidget();
        errorPage->setObjectName(QString::fromUtf8("errorPage"));
        verticalLayout_3 = new QVBoxLayout(errorPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        errorLabel = new QLabel(errorPage);
        errorLabel->setObjectName(QString::fromUtf8("errorLabel"));
        errorLabel->setText(QString::fromUtf8(""));
        errorLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        errorLabel->setWordWrap(true);

        verticalLayout_3->addWidget(errorLabel);

        stackedWidget->addWidget(errorPage);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(AutoConfigTestPage);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AutoConfigTestPage);
    } // setupUi

    void retranslateUi(QWidget *AutoConfigTestPage)
    {
        finalResultLabel->setText(QCoreApplication::translate("AutoConfigTestPage", "Basic.AutoConfig.TestPage.Result.Header", nullptr));
        finalResultLabel_2->setText(QCoreApplication::translate("AutoConfigTestPage", "Basic.AutoConfig.TestPage.Result.Footer", nullptr));
        (void)AutoConfigTestPage;
    } // retranslateUi

};

namespace Ui {
    class AutoConfigTestPage: public Ui_AutoConfigTestPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOCONFIGTESTPAGE_H
