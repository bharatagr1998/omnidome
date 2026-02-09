/********************************************************************************
** Form generated from reading UI file 'omni_ui_Scene.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_SCENE_H
#define UI_OMNI_UI_SCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <omni/ui/RangedFloat.h>

namespace omni {
namespace ui {

class Ui_Scene
{
public:
    QFormLayout *formLayout_2;
    QLabel *lbSceneSize;
    QComboBox *boxSize;
    QLabel *lbUnit;
    QComboBox *boxUnit;
    QPushButton *btnFitToCanvas;
    QCheckBox *chkRescaleValues;
    QLabel *lbDisplay;
    QFrame *frameDisplay;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkInput;
    QCheckBox *chkGrid;
    QLabel *lbProjectors;
    QComboBox *boxProjectors;
    QLabel *lbProjectedAreas;
    QComboBox *boxProjectedAreas;
    QLabel *lbInsideOutside;
    omni::ui::RangedFloat *sliderInsideOutside;
    QLabel *lbCameraFOV;
    omni::ui::RangedFloat *sliderFOV;
    QLabel *lbWireframe;
    omni::ui::RangedFloat *sliderWireframe;

    void setupUi(QWidget *omni__ui__Scene)
    {
        if (omni__ui__Scene->objectName().isEmpty())
            omni__ui__Scene->setObjectName(QString::fromUtf8("omni__ui__Scene"));
        omni__ui__Scene->resize(327, 272);
        formLayout_2 = new QFormLayout(omni__ui__Scene);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_2->setHorizontalSpacing(-1);
        formLayout_2->setVerticalSpacing(2);
        formLayout_2->setContentsMargins(6, 6, 18, 6);
        lbSceneSize = new QLabel(omni__ui__Scene);
        lbSceneSize->setObjectName(QString::fromUtf8("lbSceneSize"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, lbSceneSize);

        boxSize = new QComboBox(omni__ui__Scene);
        boxSize->addItem(QString());
        boxSize->addItem(QString());
        boxSize->addItem(QString());
        boxSize->addItem(QString());
        boxSize->addItem(QString());
        boxSize->addItem(QString());
        boxSize->addItem(QString());
        boxSize->addItem(QString());
        boxSize->addItem(QString());
        boxSize->setObjectName(QString::fromUtf8("boxSize"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(boxSize->sizePolicy().hasHeightForWidth());
        boxSize->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, boxSize);

        lbUnit = new QLabel(omni__ui__Scene);
        lbUnit->setObjectName(QString::fromUtf8("lbUnit"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, lbUnit);

        boxUnit = new QComboBox(omni__ui__Scene);
        boxUnit->addItem(QString());
        boxUnit->addItem(QString());
        boxUnit->addItem(QString());
        boxUnit->addItem(QString());
        boxUnit->addItem(QString());
        boxUnit->setObjectName(QString::fromUtf8("boxUnit"));
        sizePolicy.setHeightForWidth(boxUnit->sizePolicy().hasHeightForWidth());
        boxUnit->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, boxUnit);

        btnFitToCanvas = new QPushButton(omni__ui__Scene);
        btnFitToCanvas->setObjectName(QString::fromUtf8("btnFitToCanvas"));
        sizePolicy.setHeightForWidth(btnFitToCanvas->sizePolicy().hasHeightForWidth());
        btnFitToCanvas->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, btnFitToCanvas);

        chkRescaleValues = new QCheckBox(omni__ui__Scene);
        chkRescaleValues->setObjectName(QString::fromUtf8("chkRescaleValues"));
        chkRescaleValues->setChecked(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, chkRescaleValues);

        lbDisplay = new QLabel(omni__ui__Scene);
        lbDisplay->setObjectName(QString::fromUtf8("lbDisplay"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, lbDisplay);

        frameDisplay = new QFrame(omni__ui__Scene);
        frameDisplay->setObjectName(QString::fromUtf8("frameDisplay"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frameDisplay->sizePolicy().hasHeightForWidth());
        frameDisplay->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(frameDisplay);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(12, 8, -1, 8);
        chkInput = new QCheckBox(frameDisplay);
        chkInput->setObjectName(QString::fromUtf8("chkInput"));
        chkInput->setChecked(true);

        verticalLayout->addWidget(chkInput);

        chkGrid = new QCheckBox(frameDisplay);
        chkGrid->setObjectName(QString::fromUtf8("chkGrid"));
        chkGrid->setChecked(true);

        verticalLayout->addWidget(chkGrid);


        formLayout_2->setWidget(8, QFormLayout::FieldRole, frameDisplay);

        lbProjectors = new QLabel(omni__ui__Scene);
        lbProjectors->setObjectName(QString::fromUtf8("lbProjectors"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, lbProjectors);

        boxProjectors = new QComboBox(omni__ui__Scene);
        boxProjectors->addItem(QString());
        boxProjectors->addItem(QString());
        boxProjectors->addItem(QString());
        boxProjectors->setObjectName(QString::fromUtf8("boxProjectors"));
        sizePolicy.setHeightForWidth(boxProjectors->sizePolicy().hasHeightForWidth());
        boxProjectors->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(9, QFormLayout::FieldRole, boxProjectors);

        lbProjectedAreas = new QLabel(omni__ui__Scene);
        lbProjectedAreas->setObjectName(QString::fromUtf8("lbProjectedAreas"));

        formLayout_2->setWidget(10, QFormLayout::LabelRole, lbProjectedAreas);

        boxProjectedAreas = new QComboBox(omni__ui__Scene);
        boxProjectedAreas->addItem(QString());
        boxProjectedAreas->addItem(QString());
        boxProjectedAreas->addItem(QString());
        boxProjectedAreas->setObjectName(QString::fromUtf8("boxProjectedAreas"));
        sizePolicy.setHeightForWidth(boxProjectedAreas->sizePolicy().hasHeightForWidth());
        boxProjectedAreas->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(10, QFormLayout::FieldRole, boxProjectedAreas);

        lbInsideOutside = new QLabel(omni__ui__Scene);
        lbInsideOutside->setObjectName(QString::fromUtf8("lbInsideOutside"));

        formLayout_2->setWidget(11, QFormLayout::LabelRole, lbInsideOutside);

        sliderInsideOutside = new omni::ui::RangedFloat(omni__ui__Scene);
        sliderInsideOutside->setObjectName(QString::fromUtf8("sliderInsideOutside"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sliderInsideOutside->sizePolicy().hasHeightForWidth());
        sliderInsideOutside->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(11, QFormLayout::FieldRole, sliderInsideOutside);

        lbCameraFOV = new QLabel(omni__ui__Scene);
        lbCameraFOV->setObjectName(QString::fromUtf8("lbCameraFOV"));

        formLayout_2->setWidget(12, QFormLayout::LabelRole, lbCameraFOV);

        sliderFOV = new omni::ui::RangedFloat(omni__ui__Scene);
        sliderFOV->setObjectName(QString::fromUtf8("sliderFOV"));
        sizePolicy2.setHeightForWidth(sliderFOV->sizePolicy().hasHeightForWidth());
        sliderFOV->setSizePolicy(sizePolicy2);

        formLayout_2->setWidget(12, QFormLayout::FieldRole, sliderFOV);

        lbWireframe = new QLabel(omni__ui__Scene);
        lbWireframe->setObjectName(QString::fromUtf8("lbWireframe"));

        formLayout_2->setWidget(13, QFormLayout::LabelRole, lbWireframe);

        sliderWireframe = new omni::ui::RangedFloat(omni__ui__Scene);
        sliderWireframe->setObjectName(QString::fromUtf8("sliderWireframe"));
        sizePolicy1.setHeightForWidth(sliderWireframe->sizePolicy().hasHeightForWidth());
        sliderWireframe->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(13, QFormLayout::FieldRole, sliderWireframe);


        retranslateUi(omni__ui__Scene);

        QMetaObject::connectSlotsByName(omni__ui__Scene);
    } // setupUi

    void retranslateUi(QWidget *omni__ui__Scene)
    {
        omni__ui__Scene->setWindowTitle(QCoreApplication::translate("omni::ui::Scene", "Form", nullptr));
        lbSceneSize->setText(QCoreApplication::translate("omni::ui::Scene", "Scene Size", nullptr));
        boxSize->setItemText(0, QCoreApplication::translate("omni::ui::Scene", "0.01", nullptr));
        boxSize->setItemText(1, QCoreApplication::translate("omni::ui::Scene", "0.1", nullptr));
        boxSize->setItemText(2, QCoreApplication::translate("omni::ui::Scene", "0.5", nullptr));
        boxSize->setItemText(3, QCoreApplication::translate("omni::ui::Scene", "1.0", nullptr));
        boxSize->setItemText(4, QCoreApplication::translate("omni::ui::Scene", "5.0", nullptr));
        boxSize->setItemText(5, QCoreApplication::translate("omni::ui::Scene", "10.0", nullptr));
        boxSize->setItemText(6, QCoreApplication::translate("omni::ui::Scene", "25.0", nullptr));
        boxSize->setItemText(7, QCoreApplication::translate("omni::ui::Scene", "50.0", nullptr));
        boxSize->setItemText(8, QCoreApplication::translate("omni::ui::Scene", "100.0", nullptr));

        lbUnit->setText(QCoreApplication::translate("omni::ui::Scene", "Unit", nullptr));
        boxUnit->setItemText(0, QCoreApplication::translate("omni::ui::Scene", "m (meters)", nullptr));
        boxUnit->setItemText(1, QCoreApplication::translate("omni::ui::Scene", "cm (centimeters)", nullptr));
        boxUnit->setItemText(2, QCoreApplication::translate("omni::ui::Scene", "mm (millimeters)", nullptr));
        boxUnit->setItemText(3, QCoreApplication::translate("omni::ui::Scene", "in (inches)", nullptr));
        boxUnit->setItemText(4, QCoreApplication::translate("omni::ui::Scene", "ft (feet)", nullptr));

        btnFitToCanvas->setText(QCoreApplication::translate("omni::ui::Scene", "Fit to canvas", nullptr));
#if QT_CONFIG(tooltip)
        chkRescaleValues->setToolTip(QCoreApplication::translate("omni::ui::Scene", "Positions and sizes are rescaled when checked", nullptr));
#endif // QT_CONFIG(tooltip)
        chkRescaleValues->setText(QCoreApplication::translate("omni::ui::Scene", "Rescale values", nullptr));
        lbDisplay->setText(QCoreApplication::translate("omni::ui::Scene", "Display", nullptr));
#if QT_CONFIG(whatsthis)
        chkInput->setWhatsThis(QCoreApplication::translate("omni::ui::Scene", "Display selected input on canvas", nullptr));
#endif // QT_CONFIG(whatsthis)
        chkInput->setText(QCoreApplication::translate("omni::ui::Scene", "Input", nullptr));
#if QT_CONFIG(whatsthis)
        chkGrid->setWhatsThis(QCoreApplication::translate("omni::ui::Scene", "Display grid", nullptr));
#endif // QT_CONFIG(whatsthis)
        chkGrid->setText(QCoreApplication::translate("omni::ui::Scene", "Grid", nullptr));
        lbProjectors->setText(QCoreApplication::translate("omni::ui::Scene", "Projectors", nullptr));
        boxProjectors->setItemText(0, QCoreApplication::translate("omni::ui::Scene", "Display all", nullptr));
        boxProjectors->setItemText(1, QCoreApplication::translate("omni::ui::Scene", "Display selected only", nullptr));
        boxProjectors->setItemText(2, QCoreApplication::translate("omni::ui::Scene", "Display none", nullptr));

        lbProjectedAreas->setText(QCoreApplication::translate("omni::ui::Scene", "Projected Areas", nullptr));
        boxProjectedAreas->setItemText(0, QCoreApplication::translate("omni::ui::Scene", "Display all", nullptr));
        boxProjectedAreas->setItemText(1, QCoreApplication::translate("omni::ui::Scene", "Display selected only", nullptr));
        boxProjectedAreas->setItemText(2, QCoreApplication::translate("omni::ui::Scene", "Display none", nullptr));

        lbInsideOutside->setText(QCoreApplication::translate("omni::ui::Scene", "Inside / Outside", nullptr));
        lbCameraFOV->setText(QCoreApplication::translate("omni::ui::Scene", "Camera FOV", nullptr));
        lbWireframe->setText(QCoreApplication::translate("omni::ui::Scene", "Wireframe", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class Scene: public Ui_Scene {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_SCENE_H
