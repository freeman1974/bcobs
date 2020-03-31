/********************************************************************************
** Form generated from reading UI file 'OBSRemux.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSREMUX_H
#define UI_OBSREMUX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_OBSRemux
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QDialogButtonBox *buttonBox;
    QTableView *tableView;
    QProgressBar *progressBar;

    void setupUi(QDialog *OBSRemux)
    {
        if (OBSRemux->objectName().isEmpty())
            OBSRemux->setObjectName(QString::fromUtf8("OBSRemux"));
        OBSRemux->resize(850, 400);
        gridLayout = new QGridLayout(OBSRemux);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(OBSRemux);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        buttonBox = new QDialogButtonBox(OBSRemux);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);

        horizontalLayout_4->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        tableView = new QTableView(OBSRemux);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->horizontalHeader()->setMinimumSectionSize(23);
        tableView->horizontalHeader()->setDefaultSectionSize(23);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setDefaultSectionSize(23);

        gridLayout->addWidget(tableView, 1, 0, 1, 1);

        progressBar = new QProgressBar(OBSRemux);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 2, 0, 1, 1);


        retranslateUi(OBSRemux);

        QMetaObject::connectSlotsByName(OBSRemux);
    } // setupUi

    void retranslateUi(QDialog *OBSRemux)
    {
        OBSRemux->setWindowTitle(QCoreApplication::translate("OBSRemux", "RemuxRecordings", nullptr));
        label->setText(QCoreApplication::translate("OBSRemux", "Remux.HelpText", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSRemux: public Ui_OBSRemux {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSREMUX_H
