/********************************************************************************
** Form generated from reading UI file 'OBSLogReply.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSLOGREPLY_H
#define UI_OBSLOGREPLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OBSLogReply
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *urlEdit;
    QPushButton *copyURL;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSLogReply)
    {
        if (OBSLogReply->objectName().isEmpty())
            OBSLogReply->setObjectName(QString::fromUtf8("OBSLogReply"));
        OBSLogReply->resize(600, 95);
        verticalLayout = new QVBoxLayout(OBSLogReply);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        urlEdit = new QLineEdit(OBSLogReply);
        urlEdit->setObjectName(QString::fromUtf8("urlEdit"));
        urlEdit->setText(QString::fromUtf8(""));
        urlEdit->setReadOnly(true);

        horizontalLayout->addWidget(urlEdit);

        copyURL = new QPushButton(OBSLogReply);
        copyURL->setObjectName(QString::fromUtf8("copyURL"));

        horizontalLayout->addWidget(copyURL);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(OBSLogReply);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OBSLogReply);
        QObject::connect(buttonBox, SIGNAL(accepted()), OBSLogReply, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OBSLogReply, SLOT(reject()));

        QMetaObject::connectSlotsByName(OBSLogReply);
    } // setupUi

    void retranslateUi(QDialog *OBSLogReply)
    {
        OBSLogReply->setWindowTitle(QCoreApplication::translate("OBSLogReply", "LogReturnDialog", nullptr));
        copyURL->setText(QCoreApplication::translate("OBSLogReply", "LogReturnDialog.CopyURL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSLogReply: public Ui_OBSLogReply {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSLOGREPLY_H
