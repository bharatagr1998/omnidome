/********************************************************************************
** Form generated from reading UI file 'omni_ui_AffineTransform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_AFFINETRANSFORM_H
#define UI_OMNI_UI_AFFINETRANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <omni/ui/RangedFloat.h>
#include <omni/ui/Rotation.h>

namespace omni {
namespace ui {

class Ui_AffineTransform
{
public:
    QVBoxLayout *verticalLayout;
    QToolButton *btnRotate;
    omni::ui::Rotation *rotation;
    QToolButton *btnTranslate;
    omni::ui::RangedFloat *offsetX;
    omni::ui::RangedFloat *offsetY;
    omni::ui::RangedFloat *offsetZ;
    QToolButton *btnScale;
    QCheckBox *chkUniformScale;
    omni::ui::RangedFloat *scale;
    omni::ui::RangedFloat *scaleX;
    omni::ui::RangedFloat *scaleY;
    omni::ui::RangedFloat *scaleZ;
    QWidget *toggles;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *omni__ui__AffineTransform)
    {
        if (omni__ui__AffineTransform->objectName().isEmpty())
            omni__ui__AffineTransform->setObjectName(QString::fromUtf8("omni__ui__AffineTransform"));
        omni__ui__AffineTransform->resize(350, 333);
        verticalLayout = new QVBoxLayout(omni__ui__AffineTransform);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        btnRotate = new QToolButton(omni__ui__AffineTransform);
        btnRotate->setObjectName(QString::fromUtf8("btnRotate"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnRotate->sizePolicy().hasHeightForWidth());
        btnRotate->setSizePolicy(sizePolicy);
        btnRotate->setMaximumSize(QSize(16777215, 16));
        btnRotate->setCheckable(true);

        verticalLayout->addWidget(btnRotate);

        rotation = new omni::ui::Rotation(omni__ui__AffineTransform);
        rotation->setObjectName(QString::fromUtf8("rotation"));
        rotation->setMinimumSize(QSize(0, 72));
        rotation->setMaximumSize(QSize(16777215, 96));

        verticalLayout->addWidget(rotation);

        btnTranslate = new QToolButton(omni__ui__AffineTransform);
        btnTranslate->setObjectName(QString::fromUtf8("btnTranslate"));
        sizePolicy.setHeightForWidth(btnTranslate->sizePolicy().hasHeightForWidth());
        btnTranslate->setSizePolicy(sizePolicy);
        btnTranslate->setMaximumSize(QSize(16777215, 16));
        btnTranslate->setCheckable(true);

        verticalLayout->addWidget(btnTranslate);

        offsetX = new omni::ui::RangedFloat(omni__ui__AffineTransform);
        offsetX->setObjectName(QString::fromUtf8("offsetX"));
        offsetX->setMinimumSize(QSize(0, 24));

        verticalLayout->addWidget(offsetX);

        offsetY = new omni::ui::RangedFloat(omni__ui__AffineTransform);
        offsetY->setObjectName(QString::fromUtf8("offsetY"));
        offsetY->setMinimumSize(QSize(0, 24));

        verticalLayout->addWidget(offsetY);

        offsetZ = new omni::ui::RangedFloat(omni__ui__AffineTransform);
        offsetZ->setObjectName(QString::fromUtf8("offsetZ"));
        offsetZ->setMinimumSize(QSize(0, 24));

        verticalLayout->addWidget(offsetZ);

        btnScale = new QToolButton(omni__ui__AffineTransform);
        btnScale->setObjectName(QString::fromUtf8("btnScale"));
        sizePolicy.setHeightForWidth(btnScale->sizePolicy().hasHeightForWidth());
        btnScale->setSizePolicy(sizePolicy);
        btnScale->setMaximumSize(QSize(16777215, 16));
        btnScale->setCheckable(true);

        verticalLayout->addWidget(btnScale);

        chkUniformScale = new QCheckBox(omni__ui__AffineTransform);
        chkUniformScale->setObjectName(QString::fromUtf8("chkUniformScale"));
        chkUniformScale->setChecked(true);

        verticalLayout->addWidget(chkUniformScale);

        scale = new omni::ui::RangedFloat(omni__ui__AffineTransform);
        scale->setObjectName(QString::fromUtf8("scale"));
        scale->setMinimumSize(QSize(0, 24));

        verticalLayout->addWidget(scale);

        scaleX = new omni::ui::RangedFloat(omni__ui__AffineTransform);
        scaleX->setObjectName(QString::fromUtf8("scaleX"));
        scaleX->setMinimumSize(QSize(0, 24));

        verticalLayout->addWidget(scaleX);

        scaleY = new omni::ui::RangedFloat(omni__ui__AffineTransform);
        scaleY->setObjectName(QString::fromUtf8("scaleY"));
        scaleY->setMinimumSize(QSize(0, 24));

        verticalLayout->addWidget(scaleY);

        scaleZ = new omni::ui::RangedFloat(omni__ui__AffineTransform);
        scaleZ->setObjectName(QString::fromUtf8("scaleZ"));
        scaleZ->setMinimumSize(QSize(0, 24));

        verticalLayout->addWidget(scaleZ);

        toggles = new QWidget(omni__ui__AffineTransform);
        toggles->setObjectName(QString::fromUtf8("toggles"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toggles->sizePolicy().hasHeightForWidth());
        toggles->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(toggles);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);

        verticalLayout->addWidget(toggles);


        retranslateUi(omni__ui__AffineTransform);

        QMetaObject::connectSlotsByName(omni__ui__AffineTransform);
    } // setupUi

    void retranslateUi(QWidget *omni__ui__AffineTransform)
    {
        omni__ui__AffineTransform->setWindowTitle(QCoreApplication::translate("omni::ui::AffineTransform", "Form", nullptr));
        btnRotate->setText(QCoreApplication::translate("omni::ui::AffineTransform", "Rotate", nullptr));
        btnTranslate->setText(QCoreApplication::translate("omni::ui::AffineTransform", "Translate", nullptr));
        btnScale->setText(QCoreApplication::translate("omni::ui::AffineTransform", "Scale", nullptr));
        chkUniformScale->setText(QCoreApplication::translate("omni::ui::AffineTransform", "Uniform scale", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class AffineTransform: public Ui_AffineTransform {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_AFFINETRANSFORM_H
