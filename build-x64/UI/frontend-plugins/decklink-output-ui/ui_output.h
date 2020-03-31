/********************************************************************************
** Form generated from reading UI file 'output.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUT_H
#define UI_OUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Output
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QVBoxLayout *propertiesLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *outputButton;
    QLabel *label_2;
    QVBoxLayout *previewPropertiesLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *previewOutputButton;
    QSpacerItem *verticalSpacer;
    QLabel *keyerLabel;

    void setupUi(QDialog *Output)
    {
        if (Output->objectName().isEmpty())
            Output->setObjectName(QString::fromUtf8("Output"));
        Output->resize(785, 497);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Output->sizePolicy().hasHeightForWidth());
        Output->setSizePolicy(sizePolicy);
        Output->setSizeGripEnabled(true);
        Output->setModal(false);
        verticalLayout = new QVBoxLayout(Output);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(Output);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        propertiesLayout = new QVBoxLayout();
        propertiesLayout->setObjectName(QString::fromUtf8("propertiesLayout"));

        verticalLayout->addLayout(propertiesLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        outputButton = new QPushButton(Output);
        outputButton->setObjectName(QString::fromUtf8("outputButton"));
        outputButton->setCheckable(true);

        horizontalLayout->addWidget(outputButton);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(Output);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        previewPropertiesLayout = new QVBoxLayout();
        previewPropertiesLayout->setObjectName(QString::fromUtf8("previewPropertiesLayout"));

        verticalLayout->addLayout(previewPropertiesLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        previewOutputButton = new QPushButton(Output);
        previewOutputButton->setObjectName(QString::fromUtf8("previewOutputButton"));
        previewOutputButton->setCheckable(true);

        horizontalLayout_2->addWidget(previewOutputButton);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        keyerLabel = new QLabel(Output);
        keyerLabel->setObjectName(QString::fromUtf8("keyerLabel"));

        verticalLayout->addWidget(keyerLabel);


        retranslateUi(Output);

        QMetaObject::connectSlotsByName(Output);
    } // setupUi

    void retranslateUi(QDialog *Output)
    {
        Output->setWindowTitle(QCoreApplication::translate("Output", "Decklink Output", nullptr));
        label->setText(QCoreApplication::translate("Output", "Output", nullptr));
        outputButton->setText(QCoreApplication::translate("Output", "Start", nullptr));
        label_2->setText(QCoreApplication::translate("Output", "Preview Output", nullptr));
        previewOutputButton->setText(QCoreApplication::translate("Output", "Start", nullptr));
        keyerLabel->setText(QCoreApplication::translate("Output", "Keyer output requires RGB mode in advanced settings.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Output: public Ui_Output {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT_H
