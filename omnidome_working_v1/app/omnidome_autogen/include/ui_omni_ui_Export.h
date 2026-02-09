/********************************************************************************
** Form generated from reading UI file 'omni_ui_Export.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_EXPORT_H
#define UI_OMNI_UI_EXPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "OutputPreview.h"

namespace omni {
namespace ui {

class Ui_Export
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *framePath;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *editExportFilename;
    QPushButton *btnClear;
    QPushButton *btnExport;
    QGroupBox *grpSettings;
    QGridLayout *gridLayout;
    QLabel *lbOutputType;
    QFrame *frameOutputType;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *rbOmniCalibration;
    QRadioButton *rbPlainImage;
    QLabel *lbSeparateOutput;
    QFrame *frameSeparation;
    QVBoxLayout *verticalLayout_10;
    QRadioButton *rbSepNone;
    QRadioButton *rbSepScreens;
    QRadioButton *rbSepProj;
    QLabel *lbOptions;
    QFrame *frameOptions;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkExcludeNonSelectedScreens;
    omni::ui::OutputPreview *outputPreview;

    void setupUi(QWidget *omni__ui__Export)
    {
        if (omni__ui__Export->objectName().isEmpty())
            omni__ui__Export->setObjectName(QString::fromUtf8("omni__ui__Export"));
        omni__ui__Export->resize(674, 303);
        verticalLayout = new QVBoxLayout(omni__ui__Export);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        framePath = new QFrame(omni__ui__Export);
        framePath->setObjectName(QString::fromUtf8("framePath"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(framePath->sizePolicy().hasHeightForWidth());
        framePath->setSizePolicy(sizePolicy);
        framePath->setMaximumSize(QSize(16777215, 32));
        framePath->setFrameShape(QFrame::StyledPanel);
        framePath->setFrameShadow(QFrame::Sunken);
        horizontalLayout_10 = new QHBoxLayout(framePath);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(4, 4, 4, 4);
        editExportFilename = new QLineEdit(framePath);
        editExportFilename->setObjectName(QString::fromUtf8("editExportFilename"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editExportFilename->sizePolicy().hasHeightForWidth());
        editExportFilename->setSizePolicy(sizePolicy1);
        editExportFilename->setReadOnly(true);

        horizontalLayout_10->addWidget(editExportFilename);

        btnClear = new QPushButton(framePath);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy2);

        horizontalLayout_10->addWidget(btnClear);

        btnExport = new QPushButton(framePath);
        btnExport->setObjectName(QString::fromUtf8("btnExport"));
        sizePolicy2.setHeightForWidth(btnExport->sizePolicy().hasHeightForWidth());
        btnExport->setSizePolicy(sizePolicy2);
        btnExport->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_10->addWidget(btnExport);


        verticalLayout->addWidget(framePath);

        grpSettings = new QGroupBox(omni__ui__Export);
        grpSettings->setObjectName(QString::fromUtf8("grpSettings"));
        sizePolicy.setHeightForWidth(grpSettings->sizePolicy().hasHeightForWidth());
        grpSettings->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(grpSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(-1);
        gridLayout->setVerticalSpacing(8);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        lbOutputType = new QLabel(grpSettings);
        lbOutputType->setObjectName(QString::fromUtf8("lbOutputType"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lbOutputType->sizePolicy().hasHeightForWidth());
        lbOutputType->setSizePolicy(sizePolicy3);
        lbOutputType->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(lbOutputType, 0, 0, 1, 1);

        frameOutputType = new QFrame(grpSettings);
        frameOutputType->setObjectName(QString::fromUtf8("frameOutputType"));
        frameOutputType->setFrameShape(QFrame::NoFrame);
        frameOutputType->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(frameOutputType);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(4, 4, 4, 4);
        rbOmniCalibration = new QRadioButton(frameOutputType);
        rbOmniCalibration->setObjectName(QString::fromUtf8("rbOmniCalibration"));
        rbOmniCalibration->setChecked(true);

        verticalLayout_3->addWidget(rbOmniCalibration);

        rbPlainImage = new QRadioButton(frameOutputType);
        rbPlainImage->setObjectName(QString::fromUtf8("rbPlainImage"));

        verticalLayout_3->addWidget(rbPlainImage);


        gridLayout->addWidget(frameOutputType, 0, 1, 1, 1);

        lbSeparateOutput = new QLabel(grpSettings);
        lbSeparateOutput->setObjectName(QString::fromUtf8("lbSeparateOutput"));
        sizePolicy3.setHeightForWidth(lbSeparateOutput->sizePolicy().hasHeightForWidth());
        lbSeparateOutput->setSizePolicy(sizePolicy3);
        lbSeparateOutput->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(lbSeparateOutput, 1, 0, 1, 1);

        frameSeparation = new QFrame(grpSettings);
        frameSeparation->setObjectName(QString::fromUtf8("frameSeparation"));
        verticalLayout_10 = new QVBoxLayout(frameSeparation);
        verticalLayout_10->setSpacing(4);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(4, 4, 4, 4);
        rbSepNone = new QRadioButton(frameSeparation);
        rbSepNone->setObjectName(QString::fromUtf8("rbSepNone"));
        rbSepNone->setChecked(true);

        verticalLayout_10->addWidget(rbSepNone);

        rbSepScreens = new QRadioButton(frameSeparation);
        rbSepScreens->setObjectName(QString::fromUtf8("rbSepScreens"));
        rbSepScreens->setChecked(false);

        verticalLayout_10->addWidget(rbSepScreens);

        rbSepProj = new QRadioButton(frameSeparation);
        rbSepProj->setObjectName(QString::fromUtf8("rbSepProj"));

        verticalLayout_10->addWidget(rbSepProj);


        gridLayout->addWidget(frameSeparation, 1, 1, 1, 1);

        lbOptions = new QLabel(grpSettings);
        lbOptions->setObjectName(QString::fromUtf8("lbOptions"));
        sizePolicy3.setHeightForWidth(lbOptions->sizePolicy().hasHeightForWidth());
        lbOptions->setSizePolicy(sizePolicy3);
        lbOptions->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(lbOptions, 0, 2, 1, 1);

        frameOptions = new QFrame(grpSettings);
        frameOptions->setObjectName(QString::fromUtf8("frameOptions"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frameOptions->sizePolicy().hasHeightForWidth());
        frameOptions->setSizePolicy(sizePolicy4);
        frameOptions->setFrameShape(QFrame::NoFrame);
        frameOptions->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameOptions);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, 4, 4, 4);
        chkExcludeNonSelectedScreens = new QCheckBox(frameOptions);
        chkExcludeNonSelectedScreens->setObjectName(QString::fromUtf8("chkExcludeNonSelectedScreens"));
        chkExcludeNonSelectedScreens->setChecked(true);

        verticalLayout_2->addWidget(chkExcludeNonSelectedScreens);


        gridLayout->addWidget(frameOptions, 0, 3, 1, 1);


        verticalLayout->addWidget(grpSettings);

        outputPreview = new omni::ui::OutputPreview(omni__ui__Export);
        outputPreview->setObjectName(QString::fromUtf8("outputPreview"));

        verticalLayout->addWidget(outputPreview);


        retranslateUi(omni__ui__Export);
        QObject::connect(rbSepNone, SIGNAL(clicked()), omni__ui__Export, SLOT(renderPreview()));
        QObject::connect(rbSepProj, SIGNAL(clicked()), omni__ui__Export, SLOT(renderPreview()));
        QObject::connect(rbSepScreens, SIGNAL(clicked()), omni__ui__Export, SLOT(renderPreview()));
        QObject::connect(chkExcludeNonSelectedScreens, SIGNAL(clicked()), omni__ui__Export, SLOT(renderPreview()));

        QMetaObject::connectSlotsByName(omni__ui__Export);
    } // setupUi

    void retranslateUi(QWidget *omni__ui__Export)
    {
        omni__ui__Export->setWindowTitle(QCoreApplication::translate("omni::ui::Export", "Form", nullptr));
        btnClear->setText(QCoreApplication::translate("omni::ui::Export", "Clear", nullptr));
        btnExport->setText(QCoreApplication::translate("omni::ui::Export", "EXPORT", nullptr));
        grpSettings->setTitle(QCoreApplication::translate("omni::ui::Export", "Settings", nullptr));
        lbOutputType->setText(QCoreApplication::translate("omni::ui::Export", "Output Type", nullptr));
        rbOmniCalibration->setText(QCoreApplication::translate("omni::ui::Export", "Omni Calibration (omnic)", nullptr));
        rbPlainImage->setText(QCoreApplication::translate("omni::ui::Export", "Plain Image (PNG output)", nullptr));
        lbSeparateOutput->setText(QCoreApplication::translate("omni::ui::Export", "Separate Output", nullptr));
        rbSepNone->setText(QCoreApplication::translate("omni::ui::Export", "No Separation (merge all together)", nullptr));
        rbSepScreens->setText(QCoreApplication::translate("omni::ui::Export", "Separate Screens", nullptr));
        rbSepProj->setText(QCoreApplication::translate("omni::ui::Export", "Separate Projectors", nullptr));
        lbOptions->setText(QCoreApplication::translate("omni::ui::Export", "Options", nullptr));
        chkExcludeNonSelectedScreens->setText(QCoreApplication::translate("omni::ui::Export", "Exclude non-selected screens", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class Export: public Ui_Export {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_EXPORT_H
