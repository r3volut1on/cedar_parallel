/********************************************************************************
** Form generated from reading UI file 'Ide.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDE_H
#define UI_IDE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <cedar/processing/gui/View.h>
#include "cedar/auxiliaries/gui/Configurable.h"
#include "cedar/auxiliaries/gui/Log.h"
#include "cedar/processing/gui/ElementList.h"
#include "cedar/processing/gui/RecorderWidget.h"

QT_BEGIN_NAMESPACE

class Ui_Ide
{
public:
    QAction *mpActionNew;
    QAction *mpActionSave;
    QAction *mpActionSaveAs;
    QAction *mpActionLoad;
    QAction *mpActionExit;
    QAction *mpActionManagePlugins;
    QAction *mpActionStartPauseSimulation;
    QAction *mpActionLoadPlugin;
    QAction *mpActionShowHideGrid;
    QAction *mpRecentFiles;
    QAction *mpActionSettings;
    QAction *mpActionAbout;
    QAction *mpActionExportSVG;
    QAction *mpActionShowRobotManager;
    QAction *mpActionDuplicate;
    QAction *mpActionSelectAll;
    QAction *mpActionToggleTriggerVisibility;
    QAction *mpActionTriggerSmartHide;
    QAction *mpThreadsSingleStep;
    QAction *mpActionToggleSmartConnections;
    QAction *mpActionClosePlots;
    QAction *mpActionRecord;
    QAction *mpActionSnapshot;
    QAction *mpActionToggleVisibilityOfPlots;
    QAction *mpActionNewPlotGroup;
    QAction *mpActionRenamePlotGroup;
    QAction *mpActionDisplayPlotGroup;
    QAction *mpActionDeletePlotGroup;
    QAction *mpActionPerformanceOverview;
    QAction *mpActionExperiments;
    QAction *mpActionCopy;
    QAction *mpActionPasteConfiguration;
    QAction *mpActionParameterLinker;
    QAction *mpActionSaveSerializableData;
    QAction *mpActionLoadSerializableData;
    QAction *mpActionFind;
    QAction *actionNone;
    QAction *mpActionResetSimulation;
    QAction *mpActionEditPlotGroup;
    QAction *mpActionToggleTriggerColor;
    QAction *mpActionDummy;
    QAction *mpActionShowRecentNotifications;
    QAction *mpActionLockUIPositions;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    cedar::proc::gui::View *mpProcessingDrawer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSimulation;
    QMenu *mpMenuWindows;
    QMenu *mpMenuArchitecturePlots;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *mpToolsMenu;
    QMenu *mpMenuArchitectureScripts;
    QStatusBar *mpStatusBar;
    QDockWidget *mpItemsWidget;
    QWidget *dockWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    cedar::proc::gui::ElementList *mpCategoryList;
    QDockWidget *mpLogWidget;
    QWidget *dockWidgetContents_3;
    QHBoxLayout *horizontalLayout_2;
    cedar::aux::gui::Log *mpLog;
    QDockWidget *mpPropertiesWidget;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    cedar::aux::gui::Configurable *mpPropertyTable;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea;
    cedar::proc::gui::RecorderWidget *mpRecorderWidget;
    QToolBar *mpToolBar;

    void setupUi(QMainWindow *Ide)
    {
        if (Ide->objectName().isEmpty())
            Ide->setObjectName(QString::fromUtf8("Ide"));
        Ide->resize(983, 762);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/processing_ide_app_icon_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ide->setWindowIcon(icon);
        mpActionNew = new QAction(Ide);
        mpActionNew->setObjectName(QString::fromUtf8("mpActionNew"));
        mpActionSave = new QAction(Ide);
        mpActionSave->setObjectName(QString::fromUtf8("mpActionSave"));
        mpActionSave->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/toolbaricons/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSave->setIcon(icon1);
        mpActionSaveAs = new QAction(Ide);
        mpActionSaveAs->setObjectName(QString::fromUtf8("mpActionSaveAs"));
        mpActionLoad = new QAction(Ide);
        mpActionLoad->setObjectName(QString::fromUtf8("mpActionLoad"));
        mpActionExit = new QAction(Ide);
        mpActionExit->setObjectName(QString::fromUtf8("mpActionExit"));
        mpActionManagePlugins = new QAction(Ide);
        mpActionManagePlugins->setObjectName(QString::fromUtf8("mpActionManagePlugins"));
        mpActionStartPauseSimulation = new QAction(Ide);
        mpActionStartPauseSimulation->setObjectName(QString::fromUtf8("mpActionStartPauseSimulation"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/start.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionStartPauseSimulation->setIcon(icon2);
        mpActionLoadPlugin = new QAction(Ide);
        mpActionLoadPlugin->setObjectName(QString::fromUtf8("mpActionLoadPlugin"));
        mpActionShowHideGrid = new QAction(Ide);
        mpActionShowHideGrid->setObjectName(QString::fromUtf8("mpActionShowHideGrid"));
        mpActionShowHideGrid->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/toolbaricons/grid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionShowHideGrid->setIcon(icon3);
        mpRecentFiles = new QAction(Ide);
        mpRecentFiles->setObjectName(QString::fromUtf8("mpRecentFiles"));
        mpActionSettings = new QAction(Ide);
        mpActionSettings->setObjectName(QString::fromUtf8("mpActionSettings"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/menus/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSettings->setIcon(icon4);
        mpActionAbout = new QAction(Ide);
        mpActionAbout->setObjectName(QString::fromUtf8("mpActionAbout"));
        mpActionExportSVG = new QAction(Ide);
        mpActionExportSVG->setObjectName(QString::fromUtf8("mpActionExportSVG"));
        mpActionShowRobotManager = new QAction(Ide);
        mpActionShowRobotManager->setObjectName(QString::fromUtf8("mpActionShowRobotManager"));
        mpActionDuplicate = new QAction(Ide);
        mpActionDuplicate->setObjectName(QString::fromUtf8("mpActionDuplicate"));
        mpActionSelectAll = new QAction(Ide);
        mpActionSelectAll->setObjectName(QString::fromUtf8("mpActionSelectAll"));
        mpActionToggleTriggerVisibility = new QAction(Ide);
        mpActionToggleTriggerVisibility->setObjectName(QString::fromUtf8("mpActionToggleTriggerVisibility"));
        mpActionToggleTriggerVisibility->setCheckable(true);
        mpActionToggleTriggerVisibility->setChecked(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/toolbaricons/hide_triggers.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/toolbaricons/show_triggers.svg"), QSize(), QIcon::Normal, QIcon::On);
        mpActionToggleTriggerVisibility->setIcon(icon5);
        mpActionTriggerSmartHide = new QAction(Ide);
        mpActionTriggerSmartHide->setObjectName(QString::fromUtf8("mpActionTriggerSmartHide"));
        mpActionTriggerSmartHide->setEnabled(false);
        mpThreadsSingleStep = new QAction(Ide);
        mpThreadsSingleStep->setObjectName(QString::fromUtf8("mpThreadsSingleStep"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/singleStep.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpThreadsSingleStep->setIcon(icon6);
        mpActionToggleSmartConnections = new QAction(Ide);
        mpActionToggleSmartConnections->setObjectName(QString::fromUtf8("mpActionToggleSmartConnections"));
        mpActionToggleSmartConnections->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/toolbaricons/standard_connections.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QString::fromUtf8(":/toolbaricons/smart_connections.svg"), QSize(), QIcon::Normal, QIcon::On);
        mpActionToggleSmartConnections->setIcon(icon7);
        mpActionClosePlots = new QAction(Ide);
        mpActionClosePlots->setObjectName(QString::fromUtf8("mpActionClosePlots"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/toolbaricons/close_all_plots.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionClosePlots->setIcon(icon8);
        mpActionRecord = new QAction(Ide);
        mpActionRecord->setObjectName(QString::fromUtf8("mpActionRecord"));
        mpActionRecord->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/record.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/recordStop.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon9.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/record.svg"), QSize(), QIcon::Active, QIcon::Off);
        icon9.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/recordStop.svg"), QSize(), QIcon::Active, QIcon::On);
        icon9.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/recordStop.svg"), QSize(), QIcon::Selected, QIcon::On);
        mpActionRecord->setIcon(icon9);
#ifndef QT_NO_TOOLTIP
        mpActionRecord->setToolTip(QString::fromUtf8("Record all registered slots."));
#endif // QT_NO_TOOLTIP
        mpActionSnapshot = new QAction(Ide);
        mpActionSnapshot->setObjectName(QString::fromUtf8("mpActionSnapshot"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/toolbaricons/snapshot.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionSnapshot->setIcon(icon10);
        mpActionToggleVisibilityOfPlots = new QAction(Ide);
        mpActionToggleVisibilityOfPlots->setObjectName(QString::fromUtf8("mpActionToggleVisibilityOfPlots"));
        mpActionToggleVisibilityOfPlots->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/toolbaricons/toggle_visibility_of_plots.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionToggleVisibilityOfPlots->setIcon(icon11);
        mpActionNewPlotGroup = new QAction(Ide);
        mpActionNewPlotGroup->setObjectName(QString::fromUtf8("mpActionNewPlotGroup"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/toolbaricons/new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionNewPlotGroup->setIcon(icon12);
        mpActionRenamePlotGroup = new QAction(Ide);
        mpActionRenamePlotGroup->setObjectName(QString::fromUtf8("mpActionRenamePlotGroup"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/toolbaricons/edit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionRenamePlotGroup->setIcon(icon13);
        mpActionDisplayPlotGroup = new QAction(Ide);
        mpActionDisplayPlotGroup->setObjectName(QString::fromUtf8("mpActionDisplayPlotGroup"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/toolbaricons/display.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionDisplayPlotGroup->setIcon(icon14);
        mpActionDeletePlotGroup = new QAction(Ide);
        mpActionDeletePlotGroup->setObjectName(QString::fromUtf8("mpActionDeletePlotGroup"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/toolbaricons/trash.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionDeletePlotGroup->setIcon(icon15);
        mpActionPerformanceOverview = new QAction(Ide);
        mpActionPerformanceOverview->setObjectName(QString::fromUtf8("mpActionPerformanceOverview"));
        mpActionExperiments = new QAction(Ide);
        mpActionExperiments->setObjectName(QString::fromUtf8("mpActionExperiments"));
        mpActionCopy = new QAction(Ide);
        mpActionCopy->setObjectName(QString::fromUtf8("mpActionCopy"));
        mpActionPasteConfiguration = new QAction(Ide);
        mpActionPasteConfiguration->setObjectName(QString::fromUtf8("mpActionPasteConfiguration"));
        mpActionParameterLinker = new QAction(Ide);
        mpActionParameterLinker->setObjectName(QString::fromUtf8("mpActionParameterLinker"));
        mpActionSaveSerializableData = new QAction(Ide);
        mpActionSaveSerializableData->setObjectName(QString::fromUtf8("mpActionSaveSerializableData"));
        mpActionLoadSerializableData = new QAction(Ide);
        mpActionLoadSerializableData->setObjectName(QString::fromUtf8("mpActionLoadSerializableData"));
        mpActionFind = new QAction(Ide);
        mpActionFind->setObjectName(QString::fromUtf8("mpActionFind"));
        actionNone = new QAction(Ide);
        actionNone->setObjectName(QString::fromUtf8("actionNone"));
        actionNone->setEnabled(false);
        mpActionResetSimulation = new QAction(Ide);
        mpActionResetSimulation->setObjectName(QString::fromUtf8("mpActionResetSimulation"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/reset.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionResetSimulation->setIcon(icon16);
        mpActionEditPlotGroup = new QAction(Ide);
        mpActionEditPlotGroup->setObjectName(QString::fromUtf8("mpActionEditPlotGroup"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/toolbaricons/store_plotgroup.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionEditPlotGroup->setIcon(icon17);
        mpActionToggleTriggerColor = new QAction(Ide);
        mpActionToggleTriggerColor->setObjectName(QString::fromUtf8("mpActionToggleTriggerColor"));
        mpActionToggleTriggerColor->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/toolbaricons/show_trigger_colors.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mpActionToggleTriggerColor->setIcon(icon18);
        mpActionDummy = new QAction(Ide);
        mpActionDummy->setObjectName(QString::fromUtf8("mpActionDummy"));
        mpActionShowRecentNotifications = new QAction(Ide);
        mpActionShowRecentNotifications->setObjectName(QString::fromUtf8("mpActionShowRecentNotifications"));
        mpActionLockUIPositions = new QAction(Ide);
        mpActionLockUIPositions->setObjectName(QString::fromUtf8("mpActionLockUIPositions"));
        mpActionLockUIPositions->setCheckable(true);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/lock_unlocked.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon19.addFile(QString::fromUtf8(":/cedar/auxiliaries/gui/lock_locked.svg"), QSize(), QIcon::Normal, QIcon::On);
        mpActionLockUIPositions->setIcon(icon19);
        centralwidget = new QWidget(Ide);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mpProcessingDrawer = new cedar::proc::gui::View(tab);
        mpProcessingDrawer->setObjectName(QString::fromUtf8("mpProcessingDrawer"));

        gridLayout_2->addWidget(mpProcessingDrawer, 0, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        Ide->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ide);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 983, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSimulation = new QMenu(menubar);
        menuSimulation->setObjectName(QString::fromUtf8("menuSimulation"));
        mpMenuWindows = new QMenu(menubar);
        mpMenuWindows->setObjectName(QString::fromUtf8("mpMenuWindows"));
        mpMenuArchitecturePlots = new QMenu(mpMenuWindows);
        mpMenuArchitecturePlots->setObjectName(QString::fromUtf8("mpMenuArchitecturePlots"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        mpToolsMenu = new QMenu(menubar);
        mpToolsMenu->setObjectName(QString::fromUtf8("mpToolsMenu"));
        mpMenuArchitectureScripts = new QMenu(menubar);
        mpMenuArchitectureScripts->setObjectName(QString::fromUtf8("mpMenuArchitectureScripts"));
        Ide->setMenuBar(menubar);
        mpStatusBar = new QStatusBar(Ide);
        mpStatusBar->setObjectName(QString::fromUtf8("mpStatusBar"));
        Ide->setStatusBar(mpStatusBar);
        mpItemsWidget = new QDockWidget(Ide);
        mpItemsWidget->setObjectName(QString::fromUtf8("mpItemsWidget"));
        mpItemsWidget->setFeatures(QDockWidget::DockWidgetFeatureMask);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents_2);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mpCategoryList = new cedar::proc::gui::ElementList(dockWidgetContents_2);
        mpCategoryList->setObjectName(QString::fromUtf8("mpCategoryList"));

        horizontalLayout->addWidget(mpCategoryList);

        mpItemsWidget->setWidget(dockWidgetContents_2);
        Ide->addDockWidget(static_cast<Qt::DockWidgetArea>(4), mpItemsWidget);
        mpLogWidget = new QDockWidget(Ide);
        mpLogWidget->setObjectName(QString::fromUtf8("mpLogWidget"));
        mpLogWidget->setFeatures(QDockWidget::DockWidgetFeatureMask);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents_3);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mpLog = new cedar::aux::gui::Log(dockWidgetContents_3);
        mpLog->setObjectName(QString::fromUtf8("mpLog"));

        horizontalLayout_2->addWidget(mpLog);

        mpLogWidget->setWidget(dockWidgetContents_3);
        Ide->addDockWidget(static_cast<Qt::DockWidgetArea>(8), mpLogWidget);
        mpPropertiesWidget = new QDockWidget(Ide);
        mpPropertiesWidget->setObjectName(QString::fromUtf8("mpPropertiesWidget"));
        mpPropertiesWidget->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget_2 = new QTabWidget(dockWidgetContents_5);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        mpPropertyTable = new cedar::aux::gui::Configurable(tab_2);
        mpPropertyTable->setObjectName(QString::fromUtf8("mpPropertyTable"));

        verticalLayout_6->addWidget(mpPropertyTable);

        tabWidget_2->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_3 = new QVBoxLayout(tab_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea = new QScrollArea(tab_3);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        mpRecorderWidget = new cedar::proc::gui::RecorderWidget();
        mpRecorderWidget->setObjectName(QString::fromUtf8("mpRecorderWidget"));
        mpRecorderWidget->setGeometry(QRect(0, 0, 98, 28));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(249, 249, 249, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        mpRecorderWidget->setPalette(palette);
        mpRecorderWidget->setAutoFillBackground(true);
        scrollArea->setWidget(mpRecorderWidget);

        verticalLayout_3->addWidget(scrollArea);

        tabWidget_2->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget_2);

        mpPropertiesWidget->setWidget(dockWidgetContents_5);
        Ide->addDockWidget(static_cast<Qt::DockWidgetArea>(2), mpPropertiesWidget);
        mpToolBar = new QToolBar(Ide);
        mpToolBar->setObjectName(QString::fromUtf8("mpToolBar"));
        Ide->addToolBar(Qt::TopToolBarArea, mpToolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSimulation->menuAction());
        menubar->addAction(mpToolsMenu->menuAction());
        menubar->addAction(mpMenuWindows->menuAction());
        menubar->addAction(mpMenuArchitectureScripts->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(mpActionNew);
        menuFile->addSeparator();
        menuFile->addAction(mpActionSave);
        menuFile->addAction(mpActionSaveAs);
        menuFile->addAction(mpActionLoad);
        menuFile->addAction(mpRecentFiles);
        menuFile->addSeparator();
        menuFile->addAction(mpActionSaveSerializableData);
        menuFile->addAction(mpActionLoadSerializableData);
        menuFile->addSeparator();
        menuFile->addAction(mpActionExportSVG);
        menuFile->addSeparator();
        menuFile->addAction(mpActionExit);
        menuSimulation->addAction(mpActionStartPauseSimulation);
        menuSimulation->addAction(mpActionResetSimulation);
        menuSimulation->addAction(mpThreadsSingleStep);
        menuSimulation->addSeparator();
        menuSimulation->addAction(mpActionRecord);
        menuSimulation->addAction(mpActionSnapshot);
        mpMenuWindows->addSeparator();
        mpMenuWindows->addAction(mpMenuArchitecturePlots->menuAction());
        mpMenuWindows->addSeparator();
        mpMenuWindows->addAction(mpActionLockUIPositions);
        mpMenuWindows->addSeparator();
        mpMenuArchitecturePlots->addAction(actionNone);
        menuHelp->addAction(mpActionShowRecentNotifications);
        menuHelp->addSeparator();
        menuHelp->addAction(mpActionAbout);
        menuEdit->addAction(mpActionCopy);
        menuEdit->addAction(mpActionPasteConfiguration);
        menuEdit->addAction(mpActionDuplicate);
        menuEdit->addAction(mpActionSelectAll);
        menuEdit->addSeparator();
        menuEdit->addAction(mpActionFind);
        menuView->addAction(mpActionShowHideGrid);
        menuView->addAction(mpActionToggleSmartConnections);
        menuView->addAction(mpActionToggleTriggerColor);
        menuView->addSeparator();
        menuView->addAction(mpActionClosePlots);
        menuView->addAction(mpActionToggleVisibilityOfPlots);
        mpToolsMenu->addAction(mpActionPerformanceOverview);
        mpToolsMenu->addAction(mpActionExperiments);
        mpToolsMenu->addAction(mpActionParameterLinker);
        mpToolsMenu->addSeparator();
        mpToolsMenu->addAction(mpActionManagePlugins);
        mpToolsMenu->addAction(mpActionSettings);
        mpToolBar->addAction(mpActionSave);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionStartPauseSimulation);
        mpToolBar->addAction(mpActionResetSimulation);
        mpToolBar->addAction(mpThreadsSingleStep);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionRecord);
        mpToolBar->addAction(mpActionSnapshot);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionDummy);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionToggleTriggerVisibility);
        mpToolBar->addAction(mpActionToggleTriggerColor);
        mpToolBar->addAction(mpActionClosePlots);
        mpToolBar->addAction(mpActionToggleVisibilityOfPlots);
        mpToolBar->addSeparator();
        mpToolBar->addAction(mpActionDisplayPlotGroup);
        mpToolBar->addAction(mpActionNewPlotGroup);
        mpToolBar->addAction(mpActionRenamePlotGroup);
        mpToolBar->addAction(mpActionEditPlotGroup);
        mpToolBar->addAction(mpActionDeletePlotGroup);
        mpToolBar->addSeparator();

        retranslateUi(Ide);
        QObject::connect(mpActionExit, SIGNAL(triggered()), Ide, SLOT(close()));

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Ide);
    } // setupUi

    void retranslateUi(QMainWindow *Ide)
    {
        Ide->setWindowTitle(QApplication::translate("Ide", "cedar", 0, QApplication::UnicodeUTF8));
        mpActionNew->setText(QApplication::translate("Ide", "New", 0, QApplication::UnicodeUTF8));
        mpActionSave->setText(QApplication::translate("Ide", "Save", 0, QApplication::UnicodeUTF8));
        mpActionSave->setShortcut(QApplication::translate("Ide", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        mpActionSaveAs->setText(QApplication::translate("Ide", "Save as ...", 0, QApplication::UnicodeUTF8));
        mpActionSaveAs->setShortcut(QApplication::translate("Ide", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        mpActionLoad->setText(QApplication::translate("Ide", "Open file ...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionLoad->setToolTip(QApplication::translate("Ide", "Load an architecture file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionLoad->setShortcut(QApplication::translate("Ide", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        mpActionExit->setText(QApplication::translate("Ide", "Exit", 0, QApplication::UnicodeUTF8));
        mpActionManagePlugins->setText(QApplication::translate("Ide", "Manage plugins ...", 0, QApplication::UnicodeUTF8));
        mpActionStartPauseSimulation->setText(QApplication::translate("Ide", "start/pause simulation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionStartPauseSimulation->setToolTip(QApplication::translate("Ide", "Starts and pauses the simulation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionStartPauseSimulation->setShortcut(QApplication::translate("Ide", "Space", 0, QApplication::UnicodeUTF8));
        mpActionLoadPlugin->setText(QApplication::translate("Ide", "Load plugin ...", 0, QApplication::UnicodeUTF8));
        mpActionShowHideGrid->setText(QApplication::translate("Ide", "Toggle grid", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionShowHideGrid->setToolTip(QApplication::translate("Ide", "Toggles the grid in the architecture pane. Elements will align to this grid.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpRecentFiles->setText(QApplication::translate("Ide", "Recent files", 0, QApplication::UnicodeUTF8));
        mpActionSettings->setText(QApplication::translate("Ide", "Settings...", 0, QApplication::UnicodeUTF8));
        mpActionAbout->setText(QApplication::translate("Ide", "About...", 0, QApplication::UnicodeUTF8));
        mpActionExportSVG->setText(QApplication::translate("Ide", "Export SVG ...", 0, QApplication::UnicodeUTF8));
        mpActionShowRobotManager->setText(QApplication::translate("Ide", "Robot manager ...", 0, QApplication::UnicodeUTF8));
        mpActionShowRobotManager->setShortcut(QApplication::translate("Ide", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        mpActionDuplicate->setText(QApplication::translate("Ide", "Duplicate", 0, QApplication::UnicodeUTF8));
        mpActionDuplicate->setShortcut(QApplication::translate("Ide", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        mpActionSelectAll->setText(QApplication::translate("Ide", "Select All", 0, QApplication::UnicodeUTF8));
        mpActionSelectAll->setShortcut(QApplication::translate("Ide", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        mpActionToggleTriggerVisibility->setText(QApplication::translate("Ide", "toggle visibility", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionToggleTriggerVisibility->setToolTip(QApplication::translate("Ide", "Toggle visibility of triggers.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionToggleTriggerVisibility->setShortcut(QApplication::translate("Ide", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        mpActionTriggerSmartHide->setText(QApplication::translate("Ide", "Smart hide", 0, QApplication::UnicodeUTF8));
        mpThreadsSingleStep->setText(QApplication::translate("Ide", "Single-step each trigger", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpThreadsSingleStep->setToolTip(QApplication::translate("Ide", "execute a single step with each trigger", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpThreadsSingleStep->setShortcut(QApplication::translate("Ide", "Ctrl++", 0, QApplication::UnicodeUTF8));
        mpActionToggleSmartConnections->setText(QApplication::translate("Ide", "Toggle smart connections", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionToggleSmartConnections->setToolTip(QApplication::translate("Ide", "toggle smart connections", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionClosePlots->setText(QApplication::translate("Ide", "closes all plots", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionClosePlots->setToolTip(QApplication::translate("Ide", "closes all plots", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionRecord->setText(QApplication::translate("Ide", "record", 0, QApplication::UnicodeUTF8));
        mpActionSnapshot->setText(QApplication::translate("Ide", "Snapshot", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionSnapshot->setToolTip(QApplication::translate("Ide", "Takes a snapshot from the registered steps", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionToggleVisibilityOfPlots->setText(QApplication::translate("Ide", "toggle visibility of plots", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionToggleVisibilityOfPlots->setToolTip(QApplication::translate("Ide", "hides/shows all open plots", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionNewPlotGroup->setText(QApplication::translate("Ide", "New Plot Group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionNewPlotGroup->setToolTip(QApplication::translate("Ide", "add a plot group", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionRenamePlotGroup->setText(QApplication::translate("Ide", "Rename Current Plot Group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionRenamePlotGroup->setToolTip(QApplication::translate("Ide", "rename selected plot group", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionDisplayPlotGroup->setText(QApplication::translate("Ide", "Display Plot Group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionDisplayPlotGroup->setToolTip(QApplication::translate("Ide", "display selected plot group", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionDeletePlotGroup->setText(QApplication::translate("Ide", "Delete Plot Group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionDeletePlotGroup->setToolTip(QApplication::translate("Ide", "delete selected plot group", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionPerformanceOverview->setText(QApplication::translate("Ide", "Performance overview ...", 0, QApplication::UnicodeUTF8));
        mpActionExperiments->setText(QApplication::translate("Ide", "Experiments...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionExperiments->setToolTip(QApplication::translate("Ide", "Framwork for starting experiments", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionCopy->setText(QApplication::translate("Ide", "Copy step", 0, QApplication::UnicodeUTF8));
        mpActionCopy->setShortcut(QApplication::translate("Ide", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        mpActionPasteConfiguration->setText(QApplication::translate("Ide", "Paste step configuration", 0, QApplication::UnicodeUTF8));
        mpActionPasteConfiguration->setShortcut(QApplication::translate("Ide", "Ctrl+Shift+V", 0, QApplication::UnicodeUTF8));
        mpActionParameterLinker->setText(QApplication::translate("Ide", "Parameter linking ...", 0, QApplication::UnicodeUTF8));
        mpActionSaveSerializableData->setText(QApplication::translate("Ide", "Save serializable data ...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionSaveSerializableData->setToolTip(QApplication::translate("Ide", "<html><head/><body><p>Select a location to save all data in slots that are marked as serializable.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionLoadSerializableData->setText(QApplication::translate("Ide", "Load serializable data ...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionLoadSerializableData->setToolTip(QApplication::translate("Ide", "<html><head/><body><p>Select a file from which to load data in slots that are marked as serializable.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionFind->setText(QApplication::translate("Ide", "Find", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionFind->setToolTip(QApplication::translate("Ide", "find an element", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionFind->setShortcut(QApplication::translate("Ide", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionNone->setText(QApplication::translate("Ide", "none", 0, QApplication::UnicodeUTF8));
        mpActionResetSimulation->setText(QApplication::translate("Ide", "reset simulation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionResetSimulation->setToolTip(QApplication::translate("Ide", "Resets the simulation, i.e., calls reset on the architecture and rewinds the global timer.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionEditPlotGroup->setText(QApplication::translate("Ide", "Store Open Plots in Current Plot Group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionEditPlotGroup->setToolTip(QApplication::translate("Ide", "store open plots in selected plot group", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionToggleTriggerColor->setText(QApplication::translate("Ide", "Color elements by trigger", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionToggleTriggerColor->setToolTip(QApplication::translate("Ide", "Toggle visibility of trigger colors.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionToggleTriggerColor->setShortcut(QApplication::translate("Ide", "Ctrl+Shift+T", 0, QApplication::UnicodeUTF8));
        mpActionDummy->setText(QApplication::translate("Ide", "dummy action", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionDummy->setToolTip(QApplication::translate("Ide", "You should not see this. This is what tells the IDE where to (automatically) put buttons for, e.g., the boost control.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpActionShowRecentNotifications->setText(QApplication::translate("Ide", "Show recent notifications...", 0, QApplication::UnicodeUTF8));
        mpActionLockUIPositions->setText(QApplication::translate("Ide", "Lock UI positions", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpActionLockUIPositions->setToolTip(QApplication::translate("Ide", "Locks/unlocks the position of UI elements such as the log, the elements tab and so on.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Ide", "architecture", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("Ide", "File", 0, QApplication::UnicodeUTF8));
        menuSimulation->setTitle(QApplication::translate("Ide", "Simulation", 0, QApplication::UnicodeUTF8));
        mpMenuWindows->setTitle(QApplication::translate("Ide", "Windows", 0, QApplication::UnicodeUTF8));
        mpMenuArchitecturePlots->setTitle(QApplication::translate("Ide", "architecture widgets", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("Ide", "Help", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("Ide", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("Ide", "View", 0, QApplication::UnicodeUTF8));
        mpToolsMenu->setTitle(QApplication::translate("Ide", "Tools", 0, QApplication::UnicodeUTF8));
        mpMenuArchitectureScripts->setTitle(QApplication::translate("Ide", "Scripts", 0, QApplication::UnicodeUTF8));
        mpItemsWidget->setWindowTitle(QApplication::translate("Ide", "Elements", 0, QApplication::UnicodeUTF8));
        mpLogWidget->setWindowTitle(QApplication::translate("Ide", "Log", 0, QApplication::UnicodeUTF8));
        mpPropertiesWidget->setWindowTitle(QApplication::translate("Ide", "Settings", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("Ide", "Properties", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("Ide", "Recorder", 0, QApplication::UnicodeUTF8));
        mpToolBar->setWindowTitle(QApplication::translate("Ide", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ide: public Ui_Ide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDE_H
