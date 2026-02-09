/********************************************************************************
** Form generated from reading UI file 'omni_ui_MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMNI_UI_MAINWINDOW_H
#define UI_OMNI_UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <proj/TuningList.h>
#include "Blend.h"
#include "Canvas.h"
#include "ColorCorrection.h"
#include "Input.h"
#include "Mapping.h"
#include "Scene.h"
#include "Warp.h"

namespace omni {
namespace ui {

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionEditAsNew;
    QAction *actionQuit;
    QAction *actionSaveAs;
    QAction *actionLast;
    QAction *actionDisableAllTunings;
    QAction *actionEnableAllTunings;
    QAction *actionEnableSelectedTuningOnly;
    QAction *actionAbout;
    QAction *actionRecentFiles;
    QAction *action10_fps;
    QAction *action25_fps;
    QAction *action5_fps;
    QAction *action60_fps;
    QAction *action30_fps;
    QAction *actionNo_limit;
    QAction *actionProjector_View_FPS;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *tabContainer;
    QVBoxLayout *verticalLayout_2;
    QWidget *pages;
    QWidget *grpProjectors;
    QVBoxLayout *verticalLayout;
    omni::ui::proj::TuningList *tuningList;
    QToolButton *btnAddTuning;
    QStatusBar *statusbar;
    QDockWidget *dockBlend;
    omni::ui::Blend *dockBlendWidget;
    QDockWidget *dockWarp;
    omni::ui::Warp *dockWarpWidget;
    QDockWidget *dockCanvas;
    omni::ui::Canvas *dockCanvasWidget;
    QDockWidget *dockInputs;
    omni::ui::Input *dockInputsWidget;
    QDockWidget *dockMapping;
    omni::ui::Mapping *dockMappingWidget;
    QDockWidget *dockScene;
    omni::ui::Scene *dockSceneWidget;
    QDockWidget *dockColorCorrection;
    omni::ui::ColorCorrection *dockColorCorrectionWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuHelp;

    void setupUi(QMainWindow *omni__ui__MainWindow)
    {
        if (omni__ui__MainWindow->objectName().isEmpty())
            omni__ui__MainWindow->setObjectName(QString::fromUtf8("omni__ui__MainWindow"));
        omni__ui__MainWindow->resize(695, 539);
        omni__ui__MainWindow->setFocusPolicy(Qt::TabFocus);
        omni__ui__MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        actionNew = new QAction(omni__ui__MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionNew->setShortcutContext(Qt::ApplicationShortcut);
        actionOpen = new QAction(omni__ui__MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setShortcutContext(Qt::ApplicationShortcut);
        actionSave = new QAction(omni__ui__MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setShortcutContext(Qt::ApplicationShortcut);
        actionEditAsNew = new QAction(omni__ui__MainWindow);
        actionEditAsNew->setObjectName(QString::fromUtf8("actionEditAsNew"));
        actionQuit = new QAction(omni__ui__MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSaveAs = new QAction(omni__ui__MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        actionLast = new QAction(omni__ui__MainWindow);
        actionLast->setObjectName(QString::fromUtf8("actionLast"));
        actionDisableAllTunings = new QAction(omni__ui__MainWindow);
        actionDisableAllTunings->setObjectName(QString::fromUtf8("actionDisableAllTunings"));
        actionEnableAllTunings = new QAction(omni__ui__MainWindow);
        actionEnableAllTunings->setObjectName(QString::fromUtf8("actionEnableAllTunings"));
        actionEnableSelectedTuningOnly = new QAction(omni__ui__MainWindow);
        actionEnableSelectedTuningOnly->setObjectName(QString::fromUtf8("actionEnableSelectedTuningOnly"));
        actionAbout = new QAction(omni__ui__MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionRecentFiles = new QAction(omni__ui__MainWindow);
        actionRecentFiles->setObjectName(QString::fromUtf8("actionRecentFiles"));
        action10_fps = new QAction(omni__ui__MainWindow);
        action10_fps->setObjectName(QString::fromUtf8("action10_fps"));
        action25_fps = new QAction(omni__ui__MainWindow);
        action25_fps->setObjectName(QString::fromUtf8("action25_fps"));
        action5_fps = new QAction(omni__ui__MainWindow);
        action5_fps->setObjectName(QString::fromUtf8("action5_fps"));
        action60_fps = new QAction(omni__ui__MainWindow);
        action60_fps->setObjectName(QString::fromUtf8("action60_fps"));
        action30_fps = new QAction(omni__ui__MainWindow);
        action30_fps->setObjectName(QString::fromUtf8("action30_fps"));
        actionNo_limit = new QAction(omni__ui__MainWindow);
        actionNo_limit->setObjectName(QString::fromUtf8("actionNo_limit"));
        actionProjector_View_FPS = new QAction(omni__ui__MainWindow);
        actionProjector_View_FPS->setObjectName(QString::fromUtf8("actionProjector_View_FPS"));
        centralwidget = new QWidget(omni__ui__MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        tabContainer = new QWidget(splitter);
        tabContainer->setObjectName(QString::fromUtf8("tabContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabContainer->sizePolicy().hasHeightForWidth());
        tabContainer->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(tabContainer);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pages = new QWidget(tabContainer);
        pages->setObjectName(QString::fromUtf8("pages"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(11);
        sizePolicy1.setHeightForWidth(pages->sizePolicy().hasHeightForWidth());
        pages->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(pages);

        splitter->addWidget(tabContainer);
        grpProjectors = new QWidget(splitter);
        grpProjectors->setObjectName(QString::fromUtf8("grpProjectors"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(grpProjectors->sizePolicy().hasHeightForWidth());
        grpProjectors->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(grpProjectors);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tuningList = new omni::ui::proj::TuningList(grpProjectors);
        tuningList->setObjectName(QString::fromUtf8("tuningList"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tuningList->sizePolicy().hasHeightForWidth());
        tuningList->setSizePolicy(sizePolicy3);
        tuningList->setMinimumSize(QSize(150, 0));

        verticalLayout->addWidget(tuningList);

        btnAddTuning = new QToolButton(grpProjectors);
        btnAddTuning->setObjectName(QString::fromUtf8("btnAddTuning"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnAddTuning->sizePolicy().hasHeightForWidth());
        btnAddTuning->setSizePolicy(sizePolicy4);
        btnAddTuning->setPopupMode(QToolButton::MenuButtonPopup);
        btnAddTuning->setAutoRaise(true);

        verticalLayout->addWidget(btnAddTuning);

        splitter->addWidget(grpProjectors);

        horizontalLayout->addWidget(splitter);

        omni__ui__MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(omni__ui__MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        omni__ui__MainWindow->setStatusBar(statusbar);
        dockBlend = new QDockWidget(omni__ui__MainWindow);
        dockBlend->setObjectName(QString::fromUtf8("dockBlend"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(dockBlend->sizePolicy().hasHeightForWidth());
        dockBlend->setSizePolicy(sizePolicy5);
        dockBlend->setFeatures(QDockWidget::DockWidgetMovable);
        dockBlend->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockBlendWidget = new omni::ui::Blend();
        dockBlendWidget->setObjectName(QString::fromUtf8("dockBlendWidget"));
        dockBlend->setWidget(dockBlendWidget);
        omni__ui__MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockBlend);
        dockWarp = new QDockWidget(omni__ui__MainWindow);
        dockWarp->setObjectName(QString::fromUtf8("dockWarp"));
        sizePolicy5.setHeightForWidth(dockWarp->sizePolicy().hasHeightForWidth());
        dockWarp->setSizePolicy(sizePolicy5);
        dockWarp->setFeatures(QDockWidget::DockWidgetMovable);
        dockWarp->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockWarpWidget = new omni::ui::Warp();
        dockWarpWidget->setObjectName(QString::fromUtf8("dockWarpWidget"));
        dockWarp->setWidget(dockWarpWidget);
        omni__ui__MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWarp);
        dockCanvas = new QDockWidget(omni__ui__MainWindow);
        dockCanvas->setObjectName(QString::fromUtf8("dockCanvas"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(2);
        sizePolicy6.setHeightForWidth(dockCanvas->sizePolicy().hasHeightForWidth());
        dockCanvas->setSizePolicy(sizePolicy6);
        dockCanvas->setMinimumSize(QSize(22, 200));
        dockCanvas->setFeatures(QDockWidget::DockWidgetMovable);
        dockCanvas->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockCanvasWidget = new omni::ui::Canvas();
        dockCanvasWidget->setObjectName(QString::fromUtf8("dockCanvasWidget"));
        dockCanvas->setWidget(dockCanvasWidget);
        omni__ui__MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockCanvas);
        dockInputs = new QDockWidget(omni__ui__MainWindow);
        dockInputs->setObjectName(QString::fromUtf8("dockInputs"));
        sizePolicy5.setHeightForWidth(dockInputs->sizePolicy().hasHeightForWidth());
        dockInputs->setSizePolicy(sizePolicy5);
        dockInputs->setFloating(false);
        dockInputs->setFeatures(QDockWidget::DockWidgetMovable);
        dockInputs->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockInputsWidget = new omni::ui::Input();
        dockInputsWidget->setObjectName(QString::fromUtf8("dockInputsWidget"));
        dockInputs->setWidget(dockInputsWidget);
        omni__ui__MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockInputs);
        dockMapping = new QDockWidget(omni__ui__MainWindow);
        dockMapping->setObjectName(QString::fromUtf8("dockMapping"));
        sizePolicy5.setHeightForWidth(dockMapping->sizePolicy().hasHeightForWidth());
        dockMapping->setSizePolicy(sizePolicy5);
        dockMapping->setFeatures(QDockWidget::DockWidgetMovable);
        dockMapping->setAllowedAreas(Qt::LeftDockWidgetArea);
        dockMappingWidget = new omni::ui::Mapping();
        dockMappingWidget->setObjectName(QString::fromUtf8("dockMappingWidget"));
        dockMapping->setWidget(dockMappingWidget);
        omni__ui__MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockMapping);
        dockScene = new QDockWidget(omni__ui__MainWindow);
        dockScene->setObjectName(QString::fromUtf8("dockScene"));
        sizePolicy5.setHeightForWidth(dockScene->sizePolicy().hasHeightForWidth());
        dockScene->setSizePolicy(sizePolicy5);
        dockScene->setFeatures(QDockWidget::DockWidgetMovable);
        dockScene->setWindowTitle(QString::fromUtf8("SCENE"));
        dockSceneWidget = new omni::ui::Scene();
        dockSceneWidget->setObjectName(QString::fromUtf8("dockSceneWidget"));
        dockScene->setWidget(dockSceneWidget);
        omni__ui__MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockScene);
        dockColorCorrection = new QDockWidget(omni__ui__MainWindow);
        dockColorCorrection->setObjectName(QString::fromUtf8("dockColorCorrection"));
        sizePolicy5.setHeightForWidth(dockColorCorrection->sizePolicy().hasHeightForWidth());
        dockColorCorrection->setSizePolicy(sizePolicy5);
        dockColorCorrection->setFeatures(QDockWidget::DockWidgetMovable);
        dockColorCorrectionWidget = new omni::ui::ColorCorrection();
        dockColorCorrectionWidget->setObjectName(QString::fromUtf8("dockColorCorrectionWidget"));
        dockColorCorrection->setWidget(dockColorCorrectionWidget);
        omni__ui__MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockColorCorrection);
        menuBar = new QMenuBar(omni__ui__MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 695, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuHelp->setTearOffEnabled(false);
        omni__ui__MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionEditAsNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionRecentFiles);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuView->addAction(actionDisableAllTunings);
        menuView->addAction(actionEnableAllTunings);
        menuView->addAction(actionEnableSelectedTuningOnly);
        menuView->addSeparator();
        menuHelp->addAction(actionAbout);

        retranslateUi(omni__ui__MainWindow);
        QObject::connect(actionNew, SIGNAL(triggered()), omni__ui__MainWindow, SLOT(newProjection()));
        QObject::connect(actionOpen, SIGNAL(triggered()), omni__ui__MainWindow, SLOT(openProjection()));
        QObject::connect(actionSave, SIGNAL(triggered()), omni__ui__MainWindow, SLOT(saveProjection()));
        QObject::connect(actionEditAsNew, SIGNAL(triggered()), omni__ui__MainWindow, SLOT(editAsNew()));
        QObject::connect(actionQuit, SIGNAL(triggered()), omni__ui__MainWindow, SLOT(close()));
        QObject::connect(actionSaveAs, SIGNAL(triggered()), omni__ui__MainWindow, SLOT(saveProjectionAs()));

        QMetaObject::connectSlotsByName(omni__ui__MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *omni__ui__MainWindow)
    {
        omni__ui__MainWindow->setWindowTitle(QCoreApplication::translate("omni::ui::MainWindow", "Omnidome", nullptr));
        actionNew->setText(QCoreApplication::translate("omni::ui::MainWindow", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("omni::ui::MainWindow", "New calibration", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("omni::ui::MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("omni::ui::MainWindow", "Open...", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("omni::ui::MainWindow", "Open a calibration from file", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("omni::ui::MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("omni::ui::MainWindow", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("omni::ui::MainWindow", "Save calibration", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("omni::ui::MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEditAsNew->setText(QCoreApplication::translate("omni::ui::MainWindow", "Edit As New", nullptr));
        actionQuit->setText(QCoreApplication::translate("omni::ui::MainWindow", "Exit", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("omni::ui::MainWindow", "Save As...", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveAs->setShortcut(QCoreApplication::translate("omni::ui::MainWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLast->setText(QCoreApplication::translate("omni::ui::MainWindow", "Last", nullptr));
        actionDisableAllTunings->setText(QCoreApplication::translate("omni::ui::MainWindow", "Turn all projectors off", nullptr));
        actionEnableAllTunings->setText(QCoreApplication::translate("omni::ui::MainWindow", "Turn all projectors on", nullptr));
        actionEnableSelectedTuningOnly->setText(QCoreApplication::translate("omni::ui::MainWindow", "Show selected projector only", nullptr));
        actionAbout->setText(QCoreApplication::translate("omni::ui::MainWindow", "About", nullptr));
        actionRecentFiles->setText(QCoreApplication::translate("omni::ui::MainWindow", "Recent files", nullptr));
        action10_fps->setText(QCoreApplication::translate("omni::ui::MainWindow", "10 fps", nullptr));
        action25_fps->setText(QCoreApplication::translate("omni::ui::MainWindow", "15 fps", nullptr));
        action5_fps->setText(QCoreApplication::translate("omni::ui::MainWindow", "5 fps", nullptr));
        action60_fps->setText(QCoreApplication::translate("omni::ui::MainWindow", "60 fps", nullptr));
        action30_fps->setText(QCoreApplication::translate("omni::ui::MainWindow", "30 fps", nullptr));
        actionNo_limit->setText(QCoreApplication::translate("omni::ui::MainWindow", "no limit", nullptr));
        actionProjector_View_FPS->setText(QCoreApplication::translate("omni::ui::MainWindow", "Projector View FPS", nullptr));
#if QT_CONFIG(tooltip)
        btnAddTuning->setToolTip(QCoreApplication::translate("omni::ui::MainWindow", "Add another projector", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddTuning->setText(QCoreApplication::translate("omni::ui::MainWindow", "Add", nullptr));
        dockBlend->setWindowTitle(QCoreApplication::translate("omni::ui::MainWindow", "BLEND", nullptr));
        dockWarp->setWindowTitle(QCoreApplication::translate("omni::ui::MainWindow", "WARP", nullptr));
        dockCanvas->setWindowTitle(QCoreApplication::translate("omni::ui::MainWindow", "CANVAS", nullptr));
        dockInputs->setWindowTitle(QCoreApplication::translate("omni::ui::MainWindow", "INPUT", nullptr));
        dockMapping->setWindowTitle(QCoreApplication::translate("omni::ui::MainWindow", "MAPPING", nullptr));
        dockColorCorrection->setWindowTitle(QCoreApplication::translate("omni::ui::MainWindow", "COLOR ADJUSTMENT", nullptr));
        menuFile->setTitle(QCoreApplication::translate("omni::ui::MainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("omni::ui::MainWindow", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("omni::ui::MainWindow", "Help", nullptr));
    } // retranslateUi

};

} // namespace ui
} // namespace omni

namespace omni {
namespace ui {
namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui
} // namespace ui
} // namespace omni

#endif // UI_OMNI_UI_MAINWINDOW_H
