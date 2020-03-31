/********************************************************************************
** Form generated from reading UI file 'OBSBasicSourceSelect.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICSOURCESELECT_H
#define UI_OBSBASICSOURCESELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicSourceSelect
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *createNew;
    QLineEdit *sourceName;
    QRadioButton *selectExisting;
    QListWidget *sourceList;
    QCheckBox *sourceVisible;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicSourceSelect)
    {
        if (OBSBasicSourceSelect->objectName().isEmpty())
            OBSBasicSourceSelect->setObjectName(QString::fromUtf8("OBSBasicSourceSelect"));
        OBSBasicSourceSelect->setWindowModality(Qt::WindowModal);
        OBSBasicSourceSelect->resize(352, 314);
        verticalLayout = new QVBoxLayout(OBSBasicSourceSelect);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        createNew = new QRadioButton(OBSBasicSourceSelect);
        createNew->setObjectName(QString::fromUtf8("createNew"));
        createNew->setChecked(true);

        verticalLayout_2->addWidget(createNew);

        sourceName = new QLineEdit(OBSBasicSourceSelect);
        sourceName->setObjectName(QString::fromUtf8("sourceName"));

        verticalLayout_2->addWidget(sourceName);

        selectExisting = new QRadioButton(OBSBasicSourceSelect);
        selectExisting->setObjectName(QString::fromUtf8("selectExisting"));

        verticalLayout_2->addWidget(selectExisting);

        sourceList = new QListWidget(OBSBasicSourceSelect);
        sourceList->setObjectName(QString::fromUtf8("sourceList"));
        sourceList->setEnabled(false);
        sourceList->setSortingEnabled(true);

        verticalLayout_2->addWidget(sourceList);

        sourceVisible = new QCheckBox(OBSBasicSourceSelect);
        sourceVisible->setObjectName(QString::fromUtf8("sourceVisible"));
        sourceVisible->setChecked(true);

        verticalLayout_2->addWidget(sourceVisible);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(OBSBasicSourceSelect);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OBSBasicSourceSelect);
        QObject::connect(createNew, SIGNAL(toggled(bool)), sourceName, SLOT(setEnabled(bool)));
        QObject::connect(selectExisting, SIGNAL(toggled(bool)), sourceList, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(OBSBasicSourceSelect);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicSourceSelect)
    {
        OBSBasicSourceSelect->setWindowTitle(QCoreApplication::translate("OBSBasicSourceSelect", "Basic.SourceSelect", nullptr));
        createNew->setText(QCoreApplication::translate("OBSBasicSourceSelect", "Basic.SourceSelect.CreateNew", nullptr));
        selectExisting->setText(QCoreApplication::translate("OBSBasicSourceSelect", "Basic.SourceSelect.AddExisting", nullptr));
        sourceVisible->setText(QCoreApplication::translate("OBSBasicSourceSelect", "Basic.SourceSelect.AddVisible", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicSourceSelect: public Ui_OBSBasicSourceSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICSOURCESELECT_H
