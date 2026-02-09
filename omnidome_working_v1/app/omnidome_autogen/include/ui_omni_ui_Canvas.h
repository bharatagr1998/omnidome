/********************************************************************************
** Form generated from reading UI file 'omni_ui_Canvas.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_CANVAS_H
#define UI_OMNI_UI_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace omni {
namespace ui {

class Ui_Canvas
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *boxCanvasSelect;

    void setupUi(QWidget *omni__ui__Canvas)
    {
        if (omni__ui__Canvas->objectName().isEmpty())
            omni__ui__Canvas->setObjectName(QString::fromUtf8("omni__ui__Canvas"));
        omni__ui__Canvas->resize(399, 382);
        verticalLayout = new QVBoxLayout(omni__ui__Canvas);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        boxCanvasSelect = new QComboBox(omni__ui__Canvas);
        boxCanvasSelect->setObjectName(QString::fromUtf8("boxCanvasSelect"));

        verticalLayout->addWidget(boxCanvasSelect);


        retranslateUi(omni__ui__Canvas);

        QMetaObject::connectSlotsByName(omni__ui__Canvas);
    } // setupUi

    void retranslateUi(QWidget *omni__ui__Canvas)
    {
        omni__ui__Canvas->setWindowTitle(QCoreApplication::translate("omni::ui::Canvas", "Form", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class Canvas: public Ui_Canvas {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_CANVAS_H
