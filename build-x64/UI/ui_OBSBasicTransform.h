/********************************************************************************
** Form generated from reading UI file 'OBSBasicTransform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICTRANSFORM_H
#define UI_OBSBASICTRANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicTransform
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *positionX;
    QDoubleSpinBox *positionY;
    QLabel *label_2;
    QDoubleSpinBox *rotation;
    QLabel *label_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *sizeX;
    QDoubleSpinBox *sizeY;
    QLabel *label_4;
    QComboBox *align;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QComboBox *boundsType;
    QLabel *label_6;
    QComboBox *boundsAlign;
    QLabel *label_7;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *boundsWidth;
    QDoubleSpinBox *boundsHeight;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_8;
    QGridLayout *gridLayout;
    QSpinBox *cropLeft;
    QSpinBox *cropRight;
    QLabel *label_9;
    QLabel *label_12;
    QSpinBox *cropTop;
    QSpinBox *cropBottom;
    QLabel *label_11;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicTransform)
    {
        if (OBSBasicTransform->objectName().isEmpty())
            OBSBasicTransform->setObjectName(QString::fromUtf8("OBSBasicTransform"));
        OBSBasicTransform->setEnabled(false);
        OBSBasicTransform->resize(564, 241);
        verticalLayout = new QVBoxLayout(OBSBasicTransform);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(OBSBasicTransform);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(170, 0));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        widget = new QWidget(OBSBasicTransform);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        positionX = new QDoubleSpinBox(widget);
        positionX->setObjectName(QString::fromUtf8("positionX"));
        positionX->setMinimumSize(QSize(100, 0));
        positionX->setDecimals(4);
        positionX->setMinimum(-90001.000000000000000);
        positionX->setMaximum(90001.000000000000000);

        horizontalLayout->addWidget(positionX);

        positionY = new QDoubleSpinBox(widget);
        positionY->setObjectName(QString::fromUtf8("positionY"));
        positionY->setMinimumSize(QSize(100, 0));
        positionY->setDecimals(4);
        positionY->setMinimum(-90001.000000000000000);
        positionY->setMaximum(90001.000000000000000);

        horizontalLayout->addWidget(positionY);


        formLayout->setWidget(0, QFormLayout::FieldRole, widget);

        label_2 = new QLabel(OBSBasicTransform);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        rotation = new QDoubleSpinBox(OBSBasicTransform);
        rotation->setObjectName(QString::fromUtf8("rotation"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(rotation->sizePolicy().hasHeightForWidth());
        rotation->setSizePolicy(sizePolicy2);
        rotation->setMinimumSize(QSize(100, 0));
        rotation->setMinimum(-360.000000000000000);
        rotation->setMaximum(360.000000000000000);
        rotation->setSingleStep(0.100000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, rotation);

        label_3 = new QLabel(OBSBasicTransform);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        widget_2 = new QWidget(OBSBasicTransform);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        sizeX = new QDoubleSpinBox(widget_2);
        sizeX->setObjectName(QString::fromUtf8("sizeX"));
        sizeX->setMinimumSize(QSize(100, 0));
        sizeX->setDecimals(4);
        sizeX->setMinimum(-90001.000000000000000);
        sizeX->setMaximum(90001.000000000000000);
        sizeX->setSingleStep(1.000000000000000);

        horizontalLayout_2->addWidget(sizeX);

        sizeY = new QDoubleSpinBox(widget_2);
        sizeY->setObjectName(QString::fromUtf8("sizeY"));
        sizeY->setMinimumSize(QSize(100, 0));
        sizeY->setDecimals(4);
        sizeY->setMinimum(-90001.000000000000000);
        sizeY->setMaximum(90001.000000000000000);
        sizeY->setSingleStep(1.000000000000000);

        horizontalLayout_2->addWidget(sizeY);


        formLayout->setWidget(2, QFormLayout::FieldRole, widget_2);

        label_4 = new QLabel(OBSBasicTransform);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        align = new QComboBox(OBSBasicTransform);
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->addItem(QString());
        align->setObjectName(QString::fromUtf8("align"));

        formLayout->setWidget(3, QFormLayout::FieldRole, align);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer);

        label_5 = new QLabel(OBSBasicTransform);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        boundsType = new QComboBox(OBSBasicTransform);
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->addItem(QString());
        boundsType->setObjectName(QString::fromUtf8("boundsType"));

        formLayout->setWidget(5, QFormLayout::FieldRole, boundsType);

        label_6 = new QLabel(OBSBasicTransform);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        boundsAlign = new QComboBox(OBSBasicTransform);
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->addItem(QString());
        boundsAlign->setObjectName(QString::fromUtf8("boundsAlign"));
        boundsAlign->setEnabled(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, boundsAlign);

        label_7 = new QLabel(OBSBasicTransform);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        widget_3 = new QWidget(OBSBasicTransform);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy3.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy3);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        boundsWidth = new QDoubleSpinBox(widget_3);
        boundsWidth->setObjectName(QString::fromUtf8("boundsWidth"));
        boundsWidth->setEnabled(false);
        boundsWidth->setMinimumSize(QSize(100, 0));
        boundsWidth->setDecimals(4);
        boundsWidth->setMinimum(1.000000000000000);
        boundsWidth->setMaximum(90001.000000000000000);

        horizontalLayout_3->addWidget(boundsWidth);

        boundsHeight = new QDoubleSpinBox(widget_3);
        boundsHeight->setObjectName(QString::fromUtf8("boundsHeight"));
        boundsHeight->setEnabled(false);
        boundsHeight->setMinimumSize(QSize(100, 0));
        boundsHeight->setDecimals(4);
        boundsHeight->setMinimum(1.000000000000000);
        boundsHeight->setMaximum(90001.000000000000000);

        horizontalLayout_3->addWidget(boundsHeight);


        formLayout->setWidget(7, QFormLayout::FieldRole, widget_3);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(8, QFormLayout::FieldRole, verticalSpacer_2);

        label_8 = new QLabel(OBSBasicTransform);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_8);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cropLeft = new QSpinBox(OBSBasicTransform);
        cropLeft->setObjectName(QString::fromUtf8("cropLeft"));
        sizePolicy2.setHeightForWidth(cropLeft->sizePolicy().hasHeightForWidth());
        cropLeft->setSizePolicy(sizePolicy2);
        cropLeft->setMinimumSize(QSize(70, 0));
        cropLeft->setMaximum(100000);

        gridLayout->addWidget(cropLeft, 0, 1, 1, 1);

        cropRight = new QSpinBox(OBSBasicTransform);
        cropRight->setObjectName(QString::fromUtf8("cropRight"));
        sizePolicy2.setHeightForWidth(cropRight->sizePolicy().hasHeightForWidth());
        cropRight->setSizePolicy(sizePolicy2);
        cropRight->setMinimumSize(QSize(70, 0));
        cropRight->setMaximum(100000);

        gridLayout->addWidget(cropRight, 0, 3, 1, 1);

        label_9 = new QLabel(OBSBasicTransform);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_12 = new QLabel(OBSBasicTransform);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 1, 2, 1, 1);

        cropTop = new QSpinBox(OBSBasicTransform);
        cropTop->setObjectName(QString::fromUtf8("cropTop"));
        sizePolicy2.setHeightForWidth(cropTop->sizePolicy().hasHeightForWidth());
        cropTop->setSizePolicy(sizePolicy2);
        cropTop->setMinimumSize(QSize(70, 0));
        cropTop->setMaximum(100000);

        gridLayout->addWidget(cropTop, 1, 1, 1, 1);

        cropBottom = new QSpinBox(OBSBasicTransform);
        cropBottom->setObjectName(QString::fromUtf8("cropBottom"));
        sizePolicy2.setHeightForWidth(cropBottom->sizePolicy().hasHeightForWidth());
        cropBottom->setSizePolicy(sizePolicy2);
        cropBottom->setMinimumSize(QSize(70, 0));
        cropBottom->setMaximum(100000);

        gridLayout->addWidget(cropBottom, 1, 3, 1, 1);

        label_11 = new QLabel(OBSBasicTransform);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        label_10 = new QLabel(OBSBasicTransform);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);


        formLayout->setLayout(9, QFormLayout::FieldRole, gridLayout);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(OBSBasicTransform);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Reset|QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_9->setBuddy(cropLeft);
        label_12->setBuddy(cropBottom);
        label_11->setBuddy(cropTop);
        label_10->setBuddy(cropRight);
#endif // QT_CONFIG(shortcut)

        retranslateUi(OBSBasicTransform);
        QObject::connect(buttonBox, SIGNAL(rejected()), OBSBasicTransform, SLOT(reject()));

        QMetaObject::connectSlotsByName(OBSBasicTransform);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicTransform)
    {
        OBSBasicTransform->setWindowTitle(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow", nullptr));
        label->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Position", nullptr));
        label_2->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Rotation", nullptr));
        label_3->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Size", nullptr));
        label_4->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment", nullptr));
        align->setItemText(0, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", nullptr));
        align->setItemText(1, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopCenter", nullptr));
        align->setItemText(2, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopRight", nullptr));
        align->setItemText(3, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterLeft", nullptr));
        align->setItemText(4, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.Center", nullptr));
        align->setItemText(5, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterRight", nullptr));
        align->setItemText(6, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomLeft", nullptr));
        align->setItemText(7, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomCenter", nullptr));
        align->setItemText(8, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomRight", nullptr));

        align->setCurrentText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", nullptr));
        label_5->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType", nullptr));
        boundsType->setItemText(0, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.None", nullptr));
        boundsType->setItemText(1, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.Stretch", nullptr));
        boundsType->setItemText(2, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleInner", nullptr));
        boundsType->setItemText(3, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleOuter", nullptr));
        boundsType->setItemText(4, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleToWidth", nullptr));
        boundsType->setItemText(5, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleToHeight", nullptr));
        boundsType->setItemText(6, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.MaxOnly", nullptr));

        label_6->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsAlignment", nullptr));
        boundsAlign->setItemText(0, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", nullptr));
        boundsAlign->setItemText(1, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopCenter", nullptr));
        boundsAlign->setItemText(2, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopRight", nullptr));
        boundsAlign->setItemText(3, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterLeft", nullptr));
        boundsAlign->setItemText(4, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.Center", nullptr));
        boundsAlign->setItemText(5, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterRight", nullptr));
        boundsAlign->setItemText(6, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomLeft", nullptr));
        boundsAlign->setItemText(7, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomCenter", nullptr));
        boundsAlign->setItemText(8, QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomRight", nullptr));

        boundsAlign->setCurrentText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", nullptr));
        label_7->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Bounds", nullptr));
        label_8->setText(QCoreApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Crop", nullptr));
        label_9->setText(QCoreApplication::translate("OBSBasicTransform", "Left", nullptr));
        label_12->setText(QCoreApplication::translate("OBSBasicTransform", "Bottom", nullptr));
        label_11->setText(QCoreApplication::translate("OBSBasicTransform", "Top", nullptr));
        label_10->setText(QCoreApplication::translate("OBSBasicTransform", "Right", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicTransform: public Ui_OBSBasicTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICTRANSFORM_H
