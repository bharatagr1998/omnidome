/********************************************************************************
** Form generated from reading UI file 'omni_ui_Mapping.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_MAPPING_H
#define UI_OMNI_UI_MAPPING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace omni {
namespace ui {

class Ui_Mapping
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *boxMappingSelect;

    void setupUi(QWidget *omni__ui__Mapping)
    {
        if (omni__ui__Mapping->objectName().isEmpty())
            omni__ui__Mapping->setObjectName(QString::fromUtf8("omni__ui__Mapping"));
        omni__ui__Mapping->resize(374, 200);
        verticalLayout = new QVBoxLayout(omni__ui__Mapping);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        boxMappingSelect = new QComboBox(omni__ui__Mapping);
        boxMappingSelect->setObjectName(QString::fromUtf8("boxMappingSelect"));

        verticalLayout->addWidget(boxMappingSelect);


        retranslateUi(omni__ui__Mapping);

        QMetaObject::connectSlotsByName(omni__ui__Mapping);
    } // setupUi

    void retranslateUi(QWidget *omni__ui__Mapping)
    {
        omni__ui__Mapping->setWindowTitle(QCoreApplication::translate("omni::ui::Mapping", "Form", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class Mapping: public Ui_Mapping {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_MAPPING_H
