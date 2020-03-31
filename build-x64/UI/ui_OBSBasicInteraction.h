/********************************************************************************
** Form generated from reading UI file 'OBSBasicInteraction.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICINTERACTION_H
#define UI_OBSBASICINTERACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>
#include "qt-display.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasicInteraction
{
public:
    QVBoxLayout *verticalLayout;
    OBSQTDisplay *preview;

    void setupUi(QDialog *OBSBasicInteraction)
    {
        if (OBSBasicInteraction->objectName().isEmpty())
            OBSBasicInteraction->setObjectName(QString::fromUtf8("OBSBasicInteraction"));
        OBSBasicInteraction->resize(664, 562);
        OBSBasicInteraction->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(OBSBasicInteraction);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        preview = new OBSQTDisplay(OBSBasicInteraction);
        preview->setObjectName(QString::fromUtf8("preview"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy);
        preview->setMinimumSize(QSize(20, 20));

        verticalLayout->addWidget(preview);


        retranslateUi(OBSBasicInteraction);

        QMetaObject::connectSlotsByName(OBSBasicInteraction);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicInteraction)
    {
        OBSBasicInteraction->setWindowTitle(QCoreApplication::translate("OBSBasicInteraction", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicInteraction: public Ui_OBSBasicInteraction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICINTERACTION_H
