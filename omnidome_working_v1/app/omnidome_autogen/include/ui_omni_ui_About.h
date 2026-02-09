/********************************************************************************
** Form generated from reading UI file 'omni_ui_About.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_ABOUT_H
#define UI_OMNI_UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include "AboutGL.h"
#include "PluginList.h"

namespace omni {
namespace ui {

class Ui_About
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    omni::ui::AboutGL *tabAbout;
    QVBoxLayout *verticalLayout_2;
    omni::ui::PluginList *tabPlugins;
    QLabel *lbVersion;
    QLabel *lbRevision;
    QPushButton *btnClose;

    void setupUi(QDialog *omni__ui__About)
    {
        if (omni__ui__About->objectName().isEmpty())
            omni__ui__About->setObjectName(QString::fromUtf8("omni__ui__About"));
        omni__ui__About->setWindowModality(Qt::ApplicationModal);
        omni__ui__About->resize(493, 352);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(omni__ui__About->sizePolicy().hasHeightForWidth());
        omni__ui__About->setSizePolicy(sizePolicy);
        omni__ui__About->setContextMenuPolicy(Qt::NoContextMenu);
        verticalLayout = new QVBoxLayout(omni__ui__About);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(omni__ui__About);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabAbout = new omni::ui::AboutGL();
        tabAbout->setObjectName(QString::fromUtf8("tabAbout"));
        verticalLayout_2 = new QVBoxLayout(tabAbout);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget->addTab(tabAbout, QString());
        tabPlugins = new omni::ui::PluginList();
        tabPlugins->setObjectName(QString::fromUtf8("tabPlugins"));
        tabWidget->addTab(tabPlugins, QString());

        verticalLayout->addWidget(tabWidget);

        lbVersion = new QLabel(omni__ui__About);
        lbVersion->setObjectName(QString::fromUtf8("lbVersion"));

        verticalLayout->addWidget(lbVersion);

        lbRevision = new QLabel(omni__ui__About);
        lbRevision->setObjectName(QString::fromUtf8("lbRevision"));

        verticalLayout->addWidget(lbRevision);

        btnClose = new QPushButton(omni__ui__About);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        verticalLayout->addWidget(btnClose);


        retranslateUi(omni__ui__About);
        QObject::connect(btnClose, SIGNAL(clicked()), omni__ui__About, SLOT(accept()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(omni__ui__About);
    } // setupUi

    void retranslateUi(QDialog *omni__ui__About)
    {
        omni__ui__About->setWindowTitle(QCoreApplication::translate("omni::ui::About", "About Omnidome", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QCoreApplication::translate("omni::ui::About", "About", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPlugins), QCoreApplication::translate("omni::ui::About", "Plugins", nullptr));
        lbVersion->setText(QCoreApplication::translate("omni::ui::About", "Version %1", nullptr));
        lbRevision->setText(QCoreApplication::translate("omni::ui::About", "From revision %1", nullptr));
        btnClose->setText(QCoreApplication::translate("omni::ui::About", "Close", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class About: public Ui_About {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_ABOUT_H
