/********************************************************************************
** Form generated from reading UI file 'omni_ui_Input.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_INPUT_H
#define UI_OMNI_UI_INPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace omni {
namespace ui {

class Ui_Input
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *boxButtons;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnAddInput;
    QToolButton *btnRemoveInput;
    QTreeView *inputList;

    void setupUi(QWidget *omni__ui__Input)
    {
        if (omni__ui__Input->objectName().isEmpty())
            omni__ui__Input->setObjectName(QString::fromUtf8("omni__ui__Input"));
        omni__ui__Input->resize(436, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(omni__ui__Input->sizePolicy().hasHeightForWidth());
        omni__ui__Input->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(omni__ui__Input);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(16, 16, 16, 16);
        boxButtons = new QWidget(omni__ui__Input);
        boxButtons->setObjectName(QString::fromUtf8("boxButtons"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(boxButtons->sizePolicy().hasHeightForWidth());
        boxButtons->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(boxButtons);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAddInput = new QToolButton(boxButtons);
        btnAddInput->setObjectName(QString::fromUtf8("btnAddInput"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnAddInput->sizePolicy().hasHeightForWidth());
        btnAddInput->setSizePolicy(sizePolicy2);
        btnAddInput->setPopupMode(QToolButton::InstantPopup);
        btnAddInput->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnAddInput->setAutoRaise(true);

        horizontalLayout->addWidget(btnAddInput);

        btnRemoveInput = new QToolButton(boxButtons);
        btnRemoveInput->setObjectName(QString::fromUtf8("btnRemoveInput"));
        sizePolicy2.setHeightForWidth(btnRemoveInput->sizePolicy().hasHeightForWidth());
        btnRemoveInput->setSizePolicy(sizePolicy2);
        btnRemoveInput->setPopupMode(QToolButton::InstantPopup);
        btnRemoveInput->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnRemoveInput->setAutoRaise(true);

        horizontalLayout->addWidget(btnRemoveInput);


        verticalLayout->addWidget(boxButtons);

        inputList = new QTreeView(omni__ui__Input);
        inputList->setObjectName(QString::fromUtf8("inputList"));
        inputList->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(inputList->sizePolicy().hasHeightForWidth());
        inputList->setSizePolicy(sizePolicy3);
        inputList->setMinimumSize(QSize(0, 128));

        verticalLayout->addWidget(inputList);


        retranslateUi(omni__ui__Input);

        QMetaObject::connectSlotsByName(omni__ui__Input);
    } // setupUi

    void retranslateUi(QWidget *omni__ui__Input)
    {
        omni__ui__Input->setWindowTitle(QCoreApplication::translate("omni::ui::Input", "Form", nullptr));
#if QT_CONFIG(whatsthis)
        btnAddInput->setWhatsThis(QCoreApplication::translate("omni::ui::Input", "Add a new input", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnAddInput->setText(QCoreApplication::translate("omni::ui::Input", "Add", nullptr));
#if QT_CONFIG(whatsthis)
        btnRemoveInput->setWhatsThis(QCoreApplication::translate("omni::ui::Input", "Remove currently selected input", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnRemoveInput->setText(QCoreApplication::translate("omni::ui::Input", "Remove", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class Input: public Ui_Input {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_INPUT_H
