/********************************************************************************
** Form generated from reading UI file 'omni_ui_ColorCorrection.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_COLORCORRECTION_H
#define UI_OMNI_UI_COLORCORRECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "proj/ChannelCorrectionParameters.h"
#include "proj/ColorCorrectionGraph.h"

namespace omni {
namespace ui {

class Ui_ColorCorrection
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *chkIsUsed;
    QWidget *boxChannelButtons;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAll;
    QPushButton *btnRed;
    QPushButton *btnGreen;
    QPushButton *btnBlue;
    omni::ui::proj::ColorCorrectionGraph *graph;
    omni::ui::proj::ChannelCorrectionParameters *params;

    void setupUi(QWidget *omni__ui__ColorCorrection)
    {
        if (omni__ui__ColorCorrection->objectName().isEmpty())
            omni__ui__ColorCorrection->setObjectName(QString::fromUtf8("omni__ui__ColorCorrection"));
        omni__ui__ColorCorrection->resize(400, 300);
        verticalLayout = new QVBoxLayout(omni__ui__ColorCorrection);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chkIsUsed = new QCheckBox(omni__ui__ColorCorrection);
        chkIsUsed->setObjectName(QString::fromUtf8("chkIsUsed"));
        chkIsUsed->setChecked(true);

        verticalLayout->addWidget(chkIsUsed);

        boxChannelButtons = new QWidget(omni__ui__ColorCorrection);
        boxChannelButtons->setObjectName(QString::fromUtf8("boxChannelButtons"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(boxChannelButtons->sizePolicy().hasHeightForWidth());
        boxChannelButtons->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(boxChannelButtons);
        horizontalLayout->setSpacing(8);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        btnAll = new QPushButton(boxChannelButtons);
        btnAll->setObjectName(QString::fromUtf8("btnAll"));
        btnAll->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2.5px solid #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"   background-color: #FFFFFF;\n"
"   color: #212121;\n"
"}"));
        btnAll->setCheckable(true);
        btnAll->setChecked(false);

        horizontalLayout->addWidget(btnAll);

        btnRed = new QPushButton(boxChannelButtons);
        btnRed->setObjectName(QString::fromUtf8("btnRed"));
        btnRed->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{	border: 2.5px solid #FF0000;}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {    background-color: #FF0000;\n"
"   color: #212121;\n"
"}"));
        btnRed->setCheckable(true);

        horizontalLayout->addWidget(btnRed);

        btnGreen = new QPushButton(boxChannelButtons);
        btnGreen->setObjectName(QString::fromUtf8("btnGreen"));
        btnGreen->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{	border: 2.5px solid #00FF00;}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {    background-color: #00FF00;\n"
"   color: #212121;\n"
"}"));
        btnGreen->setCheckable(true);

        horizontalLayout->addWidget(btnGreen);

        btnBlue = new QPushButton(boxChannelButtons);
        btnBlue->setObjectName(QString::fromUtf8("btnBlue"));
        btnBlue->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{	border: 2.5px solid #0000FF;}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {    background-color: #0000FF;\n"
"   color: #212121;\n"
"}"));
        btnBlue->setCheckable(true);

        horizontalLayout->addWidget(btnBlue);


        verticalLayout->addWidget(boxChannelButtons);

        graph = new omni::ui::proj::ColorCorrectionGraph(omni__ui__ColorCorrection);
        graph->setObjectName(QString::fromUtf8("graph"));

        verticalLayout->addWidget(graph);

        params = new omni::ui::proj::ChannelCorrectionParameters(omni__ui__ColorCorrection);
        params->setObjectName(QString::fromUtf8("params"));
        sizePolicy.setHeightForWidth(params->sizePolicy().hasHeightForWidth());
        params->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(params);


        retranslateUi(omni__ui__ColorCorrection);

        QMetaObject::connectSlotsByName(omni__ui__ColorCorrection);
    } // setupUi

    void retranslateUi(QWidget *omni__ui__ColorCorrection)
    {
        omni__ui__ColorCorrection->setWindowTitle(QCoreApplication::translate("omni::ui::ColorCorrection", "Form", nullptr));
        chkIsUsed->setText(QCoreApplication::translate("omni::ui::ColorCorrection", "Color Correction is used", nullptr));
        btnAll->setText(QCoreApplication::translate("omni::ui::ColorCorrection", "ALL", nullptr));
        btnRed->setText(QCoreApplication::translate("omni::ui::ColorCorrection", "RED", nullptr));
        btnGreen->setText(QCoreApplication::translate("omni::ui::ColorCorrection", "GREEN", nullptr));
        btnBlue->setText(QCoreApplication::translate("omni::ui::ColorCorrection", "BLUE", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class ColorCorrection: public Ui_ColorCorrection {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_COLORCORRECTION_H
