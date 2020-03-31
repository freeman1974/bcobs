/********************************************************************************
** Form generated from reading UI file 'OBSUpdate.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSUPDATE_H
#define UI_OBSUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OBSUpdate
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *text;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *yes;
    QPushButton *no;
    QPushButton *skip;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *OBSUpdate)
    {
        if (OBSUpdate->objectName().isEmpty())
            OBSUpdate->setObjectName(QString::fromUtf8("OBSUpdate"));
        OBSUpdate->resize(611, 526);
        verticalLayout = new QVBoxLayout(OBSUpdate);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(OBSUpdate);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        text = new QTextEdit(OBSUpdate);
        text->setObjectName(QString::fromUtf8("text"));
        text->setReadOnly(true);

        verticalLayout->addWidget(text);

        line = new QFrame(OBSUpdate);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        yes = new QPushButton(OBSUpdate);
        yes->setObjectName(QString::fromUtf8("yes"));

        horizontalLayout->addWidget(yes);

        no = new QPushButton(OBSUpdate);
        no->setObjectName(QString::fromUtf8("no"));

        horizontalLayout->addWidget(no);

        skip = new QPushButton(OBSUpdate);
        skip->setObjectName(QString::fromUtf8("skip"));

        horizontalLayout->addWidget(skip);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OBSUpdate);

        yes->setDefault(true);


        QMetaObject::connectSlotsByName(OBSUpdate);
    } // setupUi

    void retranslateUi(QDialog *OBSUpdate)
    {
        OBSUpdate->setWindowTitle(QCoreApplication::translate("OBSUpdate", "Updater.Title", nullptr));
        label->setText(QCoreApplication::translate("OBSUpdate", "Updater.Text", nullptr));
        text->setHtml(QCoreApplication::translate("OBSUpdate", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", nullptr));
        yes->setText(QCoreApplication::translate("OBSUpdate", "Updater.UpdateNow", nullptr));
        no->setText(QCoreApplication::translate("OBSUpdate", "Updater.RemindMeLater", nullptr));
        skip->setText(QCoreApplication::translate("OBSUpdate", "Updater.Skip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSUpdate: public Ui_OBSUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSUPDATE_H
