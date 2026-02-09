/********************************************************************************
** Form generated from reading UI file 'omni_ui_Blend.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_BLEND_H
#define UI_OMNI_UI_BLEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <omni/ui/RangedFloat.h>
#include "BrushPreview.h"

namespace omni {
namespace ui {

class Ui_Blend
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpBrush;
    QVBoxLayout *verticalLayout_3;
    omni::ui::BrushPreview *brushPreview;
    QCheckBox *chkInvert;
    omni::ui::RangedFloat *sliderSize;
    omni::ui::RangedFloat *sliderOpacity;
    omni::ui::RangedFloat *sliderFeather;
    QGroupBox *grpEdgeMask;
    QVBoxLayout *verticalLayout_2;
    omni::ui::RangedFloat *sliderGamma;
    omni::ui::RangedFloat *sliderTop;
    omni::ui::RangedFloat *sliderLeft;
    omni::ui::RangedFloat *sliderRight;
    omni::ui::RangedFloat *sliderBottom;
    QComboBox *boxMaskColor;
    omni::ui::RangedFloat *sliderInputOpacity;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *omni__ui__Blend)
    {
        if (omni__ui__Blend->objectName().isEmpty())
            omni__ui__Blend->setObjectName(QString::fromUtf8("omni__ui__Blend"));
        omni__ui__Blend->resize(394, 510);
        verticalLayout = new QVBoxLayout(omni__ui__Blend);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        grpBrush = new QGroupBox(omni__ui__Blend);
        grpBrush->setObjectName(QString::fromUtf8("grpBrush"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grpBrush->sizePolicy().hasHeightForWidth());
        grpBrush->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(grpBrush);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        brushPreview = new omni::ui::BrushPreview(grpBrush);
        brushPreview->setObjectName(QString::fromUtf8("brushPreview"));
        sizePolicy.setHeightForWidth(brushPreview->sizePolicy().hasHeightForWidth());
        brushPreview->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(brushPreview);

        chkInvert = new QCheckBox(grpBrush);
        chkInvert->setObjectName(QString::fromUtf8("chkInvert"));

        verticalLayout_3->addWidget(chkInvert);

        sliderSize = new omni::ui::RangedFloat(grpBrush);
        sliderSize->setObjectName(QString::fromUtf8("sliderSize"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sliderSize->sizePolicy().hasHeightForWidth());
        sliderSize->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(sliderSize);

        sliderOpacity = new omni::ui::RangedFloat(grpBrush);
        sliderOpacity->setObjectName(QString::fromUtf8("sliderOpacity"));

        verticalLayout_3->addWidget(sliderOpacity);

        sliderFeather = new omni::ui::RangedFloat(grpBrush);
        sliderFeather->setObjectName(QString::fromUtf8("sliderFeather"));
        sizePolicy1.setHeightForWidth(sliderFeather->sizePolicy().hasHeightForWidth());
        sliderFeather->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(sliderFeather);


        verticalLayout->addWidget(grpBrush);

        grpEdgeMask = new QGroupBox(omni__ui__Blend);
        grpEdgeMask->setObjectName(QString::fromUtf8("grpEdgeMask"));
        sizePolicy1.setHeightForWidth(grpEdgeMask->sizePolicy().hasHeightForWidth());
        grpEdgeMask->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(grpEdgeMask);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sliderGamma = new omni::ui::RangedFloat(grpEdgeMask);
        sliderGamma->setObjectName(QString::fromUtf8("sliderGamma"));

        verticalLayout_2->addWidget(sliderGamma);

        sliderTop = new omni::ui::RangedFloat(grpEdgeMask);
        sliderTop->setObjectName(QString::fromUtf8("sliderTop"));

        verticalLayout_2->addWidget(sliderTop);

        sliderLeft = new omni::ui::RangedFloat(grpEdgeMask);
        sliderLeft->setObjectName(QString::fromUtf8("sliderLeft"));

        verticalLayout_2->addWidget(sliderLeft);

        sliderRight = new omni::ui::RangedFloat(grpEdgeMask);
        sliderRight->setObjectName(QString::fromUtf8("sliderRight"));

        verticalLayout_2->addWidget(sliderRight);

        sliderBottom = new omni::ui::RangedFloat(grpEdgeMask);
        sliderBottom->setObjectName(QString::fromUtf8("sliderBottom"));

        verticalLayout_2->addWidget(sliderBottom);

        boxMaskColor = new QComboBox(grpEdgeMask);
        boxMaskColor->addItem(QString());
        boxMaskColor->addItem(QString());
        boxMaskColor->setObjectName(QString::fromUtf8("boxMaskColor"));

        verticalLayout_2->addWidget(boxMaskColor);

        sliderInputOpacity = new omni::ui::RangedFloat(grpEdgeMask);
        sliderInputOpacity->setObjectName(QString::fromUtf8("sliderInputOpacity"));

        verticalLayout_2->addWidget(sliderInputOpacity);


        verticalLayout->addWidget(grpEdgeMask);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(omni__ui__Blend);

        QMetaObject::connectSlotsByName(omni__ui__Blend);
    } // setupUi

    void retranslateUi(QWidget *omni__ui__Blend)
    {
        omni__ui__Blend->setWindowTitle(QCoreApplication::translate("omni::ui::Blend", "Form", nullptr));
        grpBrush->setTitle(QCoreApplication::translate("omni::ui::Blend", "Brush", nullptr));
        chkInvert->setText(QCoreApplication::translate("omni::ui::Blend", "Invert", nullptr));
        grpEdgeMask->setTitle(QCoreApplication::translate("omni::ui::Blend", "Edge Mask", nullptr));
        boxMaskColor->setItemText(0, QCoreApplication::translate("omni::ui::Blend", "Colored Mask", nullptr));
        boxMaskColor->setItemText(1, QCoreApplication::translate("omni::ui::Blend", "White Mask", nullptr));

        boxMaskColor->setCurrentText(QCoreApplication::translate("omni::ui::Blend", "Colored Mask", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class Blend: public Ui_Blend {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_BLEND_H
