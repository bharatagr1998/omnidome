/********************************************************************************
** Form generated from reading UI file 'omni_ui_ExceptionList.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_EXCEPTIONLIST_H
#define UI_OMNI_UI_EXCEPTIONLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

namespace omni {
namespace ui {

class Ui_ExceptionList
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *exceptionList;
    QPushButton *btnOk;

    void setupUi(QDialog *omni__ui__ExceptionList)
    {
        if (omni__ui__ExceptionList->objectName().isEmpty())
            omni__ui__ExceptionList->setObjectName(QString::fromUtf8("omni__ui__ExceptionList"));
        omni__ui__ExceptionList->resize(400, 300);
        verticalLayout = new QVBoxLayout(omni__ui__ExceptionList);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        exceptionList = new QTreeView(omni__ui__ExceptionList);
        exceptionList->setObjectName(QString::fromUtf8("exceptionList"));

        verticalLayout->addWidget(exceptionList);

        btnOk = new QPushButton(omni__ui__ExceptionList);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        verticalLayout->addWidget(btnOk);


        retranslateUi(omni__ui__ExceptionList);
        QObject::connect(btnOk, SIGNAL(clicked()), omni__ui__ExceptionList, SLOT(accept()));

        QMetaObject::connectSlotsByName(omni__ui__ExceptionList);
    } // setupUi

    void retranslateUi(QDialog *omni__ui__ExceptionList)
    {
        omni__ui__ExceptionList->setWindowTitle(QCoreApplication::translate("omni::ui::ExceptionList", "Dialog", nullptr));
        btnOk->setText(QCoreApplication::translate("omni::ui::ExceptionList", "OK", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class ExceptionList: public Ui_ExceptionList {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_EXCEPTIONLIST_H
