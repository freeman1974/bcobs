/********************************************************************************
** Form generated from reading UI file 'ColorSelect.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORSELECT_H
#define UI_COLORSELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorSelect
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *preset1;
    QPushButton *preset2;
    QPushButton *preset3;
    QPushButton *preset4;
    QPushButton *preset5;
    QPushButton *preset6;
    QPushButton *preset7;
    QPushButton *preset8;

    void setupUi(QWidget *ColorSelect)
    {
        if (ColorSelect->objectName().isEmpty())
            ColorSelect->setObjectName(QString::fromUtf8("ColorSelect"));
        ColorSelect->resize(98, 61);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ColorSelect->sizePolicy().hasHeightForWidth());
        ColorSelect->setSizePolicy(sizePolicy);
        ColorSelect->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid black;\n"
"}"));
        gridLayout_2 = new QGridLayout(ColorSelect);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        preset1 = new QPushButton(ColorSelect);
        preset1->setObjectName(QString::fromUtf8("preset1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(preset1->sizePolicy().hasHeightForWidth());
        preset1->setSizePolicy(sizePolicy1);
        preset1->setMinimumSize(QSize(16, 16));
        preset1->setMaximumSize(QSize(16, 16));
        preset1->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(preset1, 0, 0, 1, 1);

        preset2 = new QPushButton(ColorSelect);
        preset2->setObjectName(QString::fromUtf8("preset2"));
        sizePolicy1.setHeightForWidth(preset2->sizePolicy().hasHeightForWidth());
        preset2->setSizePolicy(sizePolicy1);
        preset2->setMinimumSize(QSize(16, 16));
        preset2->setMaximumSize(QSize(16, 16));

        gridLayout->addWidget(preset2, 0, 1, 1, 1);

        preset3 = new QPushButton(ColorSelect);
        preset3->setObjectName(QString::fromUtf8("preset3"));
        sizePolicy1.setHeightForWidth(preset3->sizePolicy().hasHeightForWidth());
        preset3->setSizePolicy(sizePolicy1);
        preset3->setMinimumSize(QSize(16, 16));
        preset3->setMaximumSize(QSize(16, 16));

        gridLayout->addWidget(preset3, 0, 2, 1, 1);

        preset4 = new QPushButton(ColorSelect);
        preset4->setObjectName(QString::fromUtf8("preset4"));
        sizePolicy1.setHeightForWidth(preset4->sizePolicy().hasHeightForWidth());
        preset4->setSizePolicy(sizePolicy1);
        preset4->setMinimumSize(QSize(16, 16));
        preset4->setMaximumSize(QSize(16, 16));

        gridLayout->addWidget(preset4, 0, 3, 1, 1);

        preset5 = new QPushButton(ColorSelect);
        preset5->setObjectName(QString::fromUtf8("preset5"));
        sizePolicy1.setHeightForWidth(preset5->sizePolicy().hasHeightForWidth());
        preset5->setSizePolicy(sizePolicy1);
        preset5->setMinimumSize(QSize(16, 16));
        preset5->setMaximumSize(QSize(16, 16));

        gridLayout->addWidget(preset5, 1, 0, 1, 1);

        preset6 = new QPushButton(ColorSelect);
        preset6->setObjectName(QString::fromUtf8("preset6"));
        sizePolicy1.setHeightForWidth(preset6->sizePolicy().hasHeightForWidth());
        preset6->setSizePolicy(sizePolicy1);
        preset6->setMinimumSize(QSize(16, 16));
        preset6->setMaximumSize(QSize(16, 16));

        gridLayout->addWidget(preset6, 1, 1, 1, 1);

        preset7 = new QPushButton(ColorSelect);
        preset7->setObjectName(QString::fromUtf8("preset7"));
        sizePolicy1.setHeightForWidth(preset7->sizePolicy().hasHeightForWidth());
        preset7->setSizePolicy(sizePolicy1);
        preset7->setMinimumSize(QSize(16, 16));
        preset7->setMaximumSize(QSize(16, 16));

        gridLayout->addWidget(preset7, 1, 2, 1, 1);

        preset8 = new QPushButton(ColorSelect);
        preset8->setObjectName(QString::fromUtf8("preset8"));
        sizePolicy1.setHeightForWidth(preset8->sizePolicy().hasHeightForWidth());
        preset8->setSizePolicy(sizePolicy1);
        preset8->setMinimumSize(QSize(16, 16));
        preset8->setMaximumSize(QSize(16, 16));

        gridLayout->addWidget(preset8, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ColorSelect);

        QMetaObject::connectSlotsByName(ColorSelect);
    } // setupUi

    void retranslateUi(QWidget *ColorSelect)
    {
        ColorSelect->setWindowTitle(QCoreApplication::translate("ColorSelect", "Form", nullptr));
        preset1->setText(QString());
        preset1->setProperty("preset", QVariant(QCoreApplication::translate("ColorSelect", "1", nullptr)));
        preset2->setText(QString());
        preset2->setProperty("preset", QVariant(QCoreApplication::translate("ColorSelect", "2", nullptr)));
        preset3->setText(QString());
        preset3->setProperty("preset", QVariant(QCoreApplication::translate("ColorSelect", "3", nullptr)));
        preset4->setText(QString());
        preset4->setProperty("preset", QVariant(QCoreApplication::translate("ColorSelect", "4", nullptr)));
        preset5->setText(QString());
        preset5->setProperty("preset", QVariant(QCoreApplication::translate("ColorSelect", "5", nullptr)));
        preset6->setText(QString());
        preset6->setProperty("preset", QVariant(QCoreApplication::translate("ColorSelect", "6", nullptr)));
        preset7->setText(QString());
        preset7->setProperty("preset", QVariant(QCoreApplication::translate("ColorSelect", "7", nullptr)));
        preset8->setText(QString());
        preset8->setProperty("preset8", QVariant(QString()));
    } // retranslateUi

};

namespace Ui {
    class ColorSelect: public Ui_ColorSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORSELECT_H
