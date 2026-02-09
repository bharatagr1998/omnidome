/********************************************************************************
** Form generated from reading UI file 'omni_ui_Warp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_WARP_H
#define UI_OMNI_UI_WARP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <omni/ui/RangedInt.h>

namespace omni {
namespace ui {

class Ui_Warp
{
public:
    QVBoxLayout *verticalLayout;
    QToolButton *btnResize;
    omni::ui::RangedInt *sliderHorz;
    omni::ui::RangedInt *sliderVert;
    QToolButton *btnReset;
    QComboBox *boxInterpolation;
    QCheckBox *chkShowBlendMask;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *omni__ui__Warp)
    {
        if (omni__ui__Warp->objectName().isEmpty())
            omni__ui__Warp->setObjectName(QString::fromUtf8("omni__ui__Warp"));
        omni__ui__Warp->resize(543, 396);
        verticalLayout = new QVBoxLayout(omni__ui__Warp);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnResize = new QToolButton(omni__ui__Warp);
        btnResize->setObjectName(QString::fromUtf8("btnResize"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnResize->sizePolicy().hasHeightForWidth());
        btnResize->setSizePolicy(sizePolicy);
        btnResize->setCheckable(true);
        btnResize->setAutoRaise(true);

        verticalLayout->addWidget(btnResize);

        sliderHorz = new omni::ui::RangedInt(omni__ui__Warp);
        sliderHorz->setObjectName(QString::fromUtf8("sliderHorz"));

        verticalLayout->addWidget(sliderHorz);

        sliderVert = new omni::ui::RangedInt(omni__ui__Warp);
        sliderVert->setObjectName(QString::fromUtf8("sliderVert"));

        verticalLayout->addWidget(sliderVert);

        btnReset = new QToolButton(omni__ui__Warp);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));
        sizePolicy.setHeightForWidth(btnReset->sizePolicy().hasHeightForWidth());
        btnReset->setSizePolicy(sizePolicy);
        btnReset->setAutoRaise(true);

        verticalLayout->addWidget(btnReset);

        boxInterpolation = new QComboBox(omni__ui__Warp);
        boxInterpolation->addItem(QString());
        boxInterpolation->addItem(QString());
        boxInterpolation->setObjectName(QString::fromUtf8("boxInterpolation"));

        verticalLayout->addWidget(boxInterpolation);

        chkShowBlendMask = new QCheckBox(omni__ui__Warp);
        chkShowBlendMask->setObjectName(QString::fromUtf8("chkShowBlendMask"));

        verticalLayout->addWidget(chkShowBlendMask);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(omni__ui__Warp);

        QMetaObject::connectSlotsByName(omni__ui__Warp);
    } // setupUi

    void retranslateUi(QWidget *omni__ui__Warp)
    {
        omni__ui__Warp->setWindowTitle(QCoreApplication::translate("omni::ui::Warp", "Form", nullptr));
        btnResize->setText(QCoreApplication::translate("omni::ui::Warp", "Resize", nullptr));
        btnReset->setText(QCoreApplication::translate("omni::ui::Warp", "Reset", nullptr));
        boxInterpolation->setItemText(0, QCoreApplication::translate("omni::ui::Warp", "Bicubic Interpolation", nullptr));
        boxInterpolation->setItemText(1, QCoreApplication::translate("omni::ui::Warp", "Linear Interpolation", nullptr));

        chkShowBlendMask->setText(QCoreApplication::translate("omni::ui::Warp", "Show Blend Mask", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class Warp: public Ui_Warp {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_WARP_H
