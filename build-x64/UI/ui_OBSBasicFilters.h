/********************************************************************************
** Form generated from reading UI file 'OBSBasicFilters.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICFILTERS_H
#define UI_OBSBASICFILTERS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "focus-list.hpp"
#include "qt-display.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasicFilters
{
public:
    QAction *actionRemoveFilter;
    QAction *actionMoveUp;
    QAction *actionMoveDown;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QWidget *asyncWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *asyncLabel;
    FocusList *asyncFilters;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addAsyncFilter;
    QPushButton *removeAsyncFilter;
    QPushButton *moveAsyncFilterUp;
    QPushButton *moveAsyncFilterDown;
    QFrame *separatorLine;
    QWidget *effectWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    FocusList *effectFilters;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addEffectFilter;
    QPushButton *removeEffectFilter;
    QPushButton *moveEffectFilterUp;
    QPushButton *moveEffectFilterDown;
    QVBoxLayout *rightContainerLayout;
    QVBoxLayout *rightLayout;
    OBSQTDisplay *preview;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicFilters)
    {
        if (OBSBasicFilters->objectName().isEmpty())
            OBSBasicFilters->setObjectName(QString::fromUtf8("OBSBasicFilters"));
        OBSBasicFilters->resize(861, 726);
        actionRemoveFilter = new QAction(OBSBasicFilters);
        actionRemoveFilter->setObjectName(QString::fromUtf8("actionRemoveFilter"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/list_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveFilter->setIcon(icon);
        actionMoveUp = new QAction(OBSBasicFilters);
        actionMoveUp->setObjectName(QString::fromUtf8("actionMoveUp"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/images/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMoveUp->setIcon(icon1);
        actionMoveDown = new QAction(OBSBasicFilters);
        actionMoveDown->setObjectName(QString::fromUtf8("actionMoveDown"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/images/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMoveDown->setIcon(icon2);
        verticalLayout = new QVBoxLayout(OBSBasicFilters);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        asyncWidget = new QWidget(OBSBasicFilters);
        asyncWidget->setObjectName(QString::fromUtf8("asyncWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(asyncWidget->sizePolicy().hasHeightForWidth());
        asyncWidget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(asyncWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        asyncLabel = new QLabel(asyncWidget);
        asyncLabel->setObjectName(QString::fromUtf8("asyncLabel"));

        verticalLayout_3->addWidget(asyncLabel);

        asyncFilters = new FocusList(asyncWidget);
        asyncFilters->setObjectName(QString::fromUtf8("asyncFilters"));
        sizePolicy.setHeightForWidth(asyncFilters->sizePolicy().hasHeightForWidth());
        asyncFilters->setSizePolicy(sizePolicy);
        asyncFilters->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_3->addWidget(asyncFilters);

        widget = new QWidget(asyncWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        addAsyncFilter = new QPushButton(widget);
        addAsyncFilter->setObjectName(QString::fromUtf8("addAsyncFilter"));
        addAsyncFilter->setMaximumSize(QSize(22, 22));
        addAsyncFilter->setText(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addAsyncFilter->setIcon(icon3);
        addAsyncFilter->setAutoDefault(false);
        addAsyncFilter->setFlat(true);

        horizontalLayout_4->addWidget(addAsyncFilter);

        removeAsyncFilter = new QPushButton(widget);
        removeAsyncFilter->setObjectName(QString::fromUtf8("removeAsyncFilter"));
        removeAsyncFilter->setMaximumSize(QSize(22, 22));
        removeAsyncFilter->setText(QString::fromUtf8(""));
        removeAsyncFilter->setIcon(icon);
        removeAsyncFilter->setAutoDefault(false);
        removeAsyncFilter->setFlat(true);

        horizontalLayout_4->addWidget(removeAsyncFilter);

        moveAsyncFilterUp = new QPushButton(widget);
        moveAsyncFilterUp->setObjectName(QString::fromUtf8("moveAsyncFilterUp"));
        moveAsyncFilterUp->setMaximumSize(QSize(22, 22));
        moveAsyncFilterUp->setText(QString::fromUtf8(""));
        moveAsyncFilterUp->setIcon(icon1);
        moveAsyncFilterUp->setAutoDefault(false);
        moveAsyncFilterUp->setFlat(true);

        horizontalLayout_4->addWidget(moveAsyncFilterUp);

        moveAsyncFilterDown = new QPushButton(widget);
        moveAsyncFilterDown->setObjectName(QString::fromUtf8("moveAsyncFilterDown"));
        moveAsyncFilterDown->setMaximumSize(QSize(22, 22));
        moveAsyncFilterDown->setText(QString::fromUtf8(""));
        moveAsyncFilterDown->setIcon(icon2);
        moveAsyncFilterDown->setAutoDefault(false);
        moveAsyncFilterDown->setFlat(true);

        horizontalLayout_4->addWidget(moveAsyncFilterDown);


        verticalLayout_3->addWidget(widget, 0, Qt::AlignLeft);


        verticalLayout_2->addWidget(asyncWidget);

        separatorLine = new QFrame(OBSBasicFilters);
        separatorLine->setObjectName(QString::fromUtf8("separatorLine"));
        separatorLine->setFrameShape(QFrame::HLine);
        separatorLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(separatorLine);

        effectWidget = new QWidget(OBSBasicFilters);
        effectWidget->setObjectName(QString::fromUtf8("effectWidget"));
        sizePolicy.setHeightForWidth(effectWidget->sizePolicy().hasHeightForWidth());
        effectWidget->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(effectWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(effectWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        effectFilters = new FocusList(effectWidget);
        effectFilters->setObjectName(QString::fromUtf8("effectFilters"));
        sizePolicy.setHeightForWidth(effectFilters->sizePolicy().hasHeightForWidth());
        effectFilters->setSizePolicy(sizePolicy);
        effectFilters->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_4->addWidget(effectFilters);

        widget_2 = new QWidget(effectWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_6 = new QHBoxLayout(widget_2);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        addEffectFilter = new QPushButton(widget_2);
        addEffectFilter->setObjectName(QString::fromUtf8("addEffectFilter"));
        addEffectFilter->setMaximumSize(QSize(22, 22));
        addEffectFilter->setText(QString::fromUtf8(""));
        addEffectFilter->setIcon(icon3);
        addEffectFilter->setAutoDefault(false);
        addEffectFilter->setFlat(true);

        horizontalLayout_6->addWidget(addEffectFilter);

        removeEffectFilter = new QPushButton(widget_2);
        removeEffectFilter->setObjectName(QString::fromUtf8("removeEffectFilter"));
        removeEffectFilter->setMaximumSize(QSize(22, 22));
        removeEffectFilter->setText(QString::fromUtf8(""));
        removeEffectFilter->setIcon(icon);
        removeEffectFilter->setAutoDefault(false);
        removeEffectFilter->setFlat(true);

        horizontalLayout_6->addWidget(removeEffectFilter);

        moveEffectFilterUp = new QPushButton(widget_2);
        moveEffectFilterUp->setObjectName(QString::fromUtf8("moveEffectFilterUp"));
        moveEffectFilterUp->setMaximumSize(QSize(22, 22));
        moveEffectFilterUp->setText(QString::fromUtf8(""));
        moveEffectFilterUp->setIcon(icon1);
        moveEffectFilterUp->setAutoDefault(false);
        moveEffectFilterUp->setFlat(true);

        horizontalLayout_6->addWidget(moveEffectFilterUp);

        moveEffectFilterDown = new QPushButton(widget_2);
        moveEffectFilterDown->setObjectName(QString::fromUtf8("moveEffectFilterDown"));
        moveEffectFilterDown->setMaximumSize(QSize(22, 22));
        moveEffectFilterDown->setText(QString::fromUtf8(""));
        moveEffectFilterDown->setIcon(icon2);
        moveEffectFilterDown->setAutoDefault(false);
        moveEffectFilterDown->setFlat(true);

        horizontalLayout_6->addWidget(moveEffectFilterDown);


        verticalLayout_4->addWidget(widget_2, 0, Qt::AlignLeft);


        verticalLayout_2->addWidget(effectWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        rightContainerLayout = new QVBoxLayout();
        rightContainerLayout->setObjectName(QString::fromUtf8("rightContainerLayout"));
        rightLayout = new QVBoxLayout();
        rightLayout->setObjectName(QString::fromUtf8("rightLayout"));
        preview = new OBSQTDisplay(OBSBasicFilters);
        preview->setObjectName(QString::fromUtf8("preview"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy1);
        preview->setMinimumSize(QSize(24, 24));

        rightLayout->addWidget(preview);


        rightContainerLayout->addLayout(rightLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(OBSBasicFilters);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Reset|QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        rightContainerLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(rightContainerLayout);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OBSBasicFilters);

        QMetaObject::connectSlotsByName(OBSBasicFilters);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicFilters)
    {
        OBSBasicFilters->setWindowTitle(QCoreApplication::translate("OBSBasicFilters", "Basic.Filters", nullptr));
        actionRemoveFilter->setText(QCoreApplication::translate("OBSBasicFilters", "Remove", nullptr));
#if QT_CONFIG(shortcut)
        actionRemoveFilter->setShortcut(QCoreApplication::translate("OBSBasicFilters", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveUp->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.MainMenu.Edit.Order.MoveUp", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveUp->setShortcut(QCoreApplication::translate("OBSBasicFilters", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.MainMenu.Edit.Order.MoveDown", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveDown->setShortcut(QCoreApplication::translate("OBSBasicFilters", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        asyncLabel->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.Filters.AsyncFilters", nullptr));
        addAsyncFilter->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "addIconSmall", nullptr)));
        removeAsyncFilter->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "removeIconSmall", nullptr)));
        moveAsyncFilterUp->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "upArrowIconSmall", nullptr)));
        moveAsyncFilterDown->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "downArrowIconSmall", nullptr)));
        label_2->setText(QCoreApplication::translate("OBSBasicFilters", "Basic.Filters.EffectFilters", nullptr));
        addEffectFilter->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "addIconSmall", nullptr)));
        removeEffectFilter->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "removeIconSmall", nullptr)));
        moveEffectFilterUp->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "upArrowIconSmall", nullptr)));
        moveEffectFilterDown->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicFilters", "downArrowIconSmall", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicFilters: public Ui_OBSBasicFilters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICFILTERS_H
