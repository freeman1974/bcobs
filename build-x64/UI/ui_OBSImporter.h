/********************************************************************************
** Form generated from reading UI file 'OBSImporter.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSIMPORTER_H
#define UI_OBSIMPORTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_OBSImporter
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QDialogButtonBox *buttonBox;
    QTableView *tableView;

    void setupUi(QDialog *OBSImporter)
    {
        if (OBSImporter->objectName().isEmpty())
            OBSImporter->setObjectName(QString::fromUtf8("OBSImporter"));
        OBSImporter->resize(850, 400);
        gridLayout = new QGridLayout(OBSImporter);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(OBSImporter);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        buttonBox = new QDialogButtonBox(OBSImporter);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Open|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        tableView = new QTableView(OBSImporter);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->horizontalHeader()->setMinimumSectionSize(23);
        tableView->horizontalHeader()->setDefaultSectionSize(23);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setDefaultSectionSize(23);

        gridLayout->addWidget(tableView, 1, 0, 1, 1);


        retranslateUi(OBSImporter);

        QMetaObject::connectSlotsByName(OBSImporter);
    } // setupUi

    void retranslateUi(QDialog *OBSImporter)
    {
        OBSImporter->setWindowTitle(QCoreApplication::translate("OBSImporter", "Importer", nullptr));
        label->setText(QCoreApplication::translate("OBSImporter", "Importer.HelpText", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSImporter: public Ui_OBSImporter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSIMPORTER_H
