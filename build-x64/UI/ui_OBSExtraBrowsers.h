/********************************************************************************
** Form generated from reading UI file 'OBSExtraBrowsers.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSEXTRABROWSERS_H
#define UI_OBSEXTRABROWSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSExtraBrowsers
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *table;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *apply;
    QPushButton *close;

    void setupUi(QWidget *OBSExtraBrowsers)
    {
        if (OBSExtraBrowsers->objectName().isEmpty())
            OBSExtraBrowsers->setObjectName(QString::fromUtf8("OBSExtraBrowsers"));
        OBSExtraBrowsers->resize(785, 353);
        verticalLayout = new QVBoxLayout(OBSExtraBrowsers);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(OBSExtraBrowsers);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        table = new QTableView(OBSExtraBrowsers);
        table->setObjectName(QString::fromUtf8("table"));
        table->setSelectionMode(QAbstractItemView::NoSelection);
        table->horizontalHeader()->setMinimumSectionSize(23);
        table->horizontalHeader()->setDefaultSectionSize(23);
        table->verticalHeader()->setVisible(false);
        table->verticalHeader()->setDefaultSectionSize(23);

        verticalLayout->addWidget(table);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        apply = new QPushButton(OBSExtraBrowsers);
        apply->setObjectName(QString::fromUtf8("apply"));

        horizontalLayout->addWidget(apply);

        close = new QPushButton(OBSExtraBrowsers);
        close->setObjectName(QString::fromUtf8("close"));

        horizontalLayout->addWidget(close);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OBSExtraBrowsers);
        QObject::connect(close, SIGNAL(clicked()), OBSExtraBrowsers, SLOT(close()));

        QMetaObject::connectSlotsByName(OBSExtraBrowsers);
    } // setupUi

    void retranslateUi(QWidget *OBSExtraBrowsers)
    {
        OBSExtraBrowsers->setWindowTitle(QCoreApplication::translate("OBSExtraBrowsers", "ExtraBrowsers", nullptr));
        label->setText(QCoreApplication::translate("OBSExtraBrowsers", "ExtraBrowsers.Info", nullptr));
        apply->setText(QCoreApplication::translate("OBSExtraBrowsers", "Apply", nullptr));
        close->setText(QCoreApplication::translate("OBSExtraBrowsers", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSExtraBrowsers: public Ui_OBSExtraBrowsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSEXTRABROWSERS_H
