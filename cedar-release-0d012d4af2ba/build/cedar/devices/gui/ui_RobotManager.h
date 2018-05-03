/********************************************************************************
** Form generated from reading UI file 'RobotManager.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTMANAGER_H
#define UI_ROBOTMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "cedar/auxiliaries/gui/PropertyPane.h"

QT_BEGIN_NAMESPACE

class Ui_RobotManager
{
public:
    QGridLayout *gridLayout;
    QTabWidget *mpModeTab;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QListWidget *mpSimpleRobotIconList;
    QScrollArea *mpSimpleModeScrollArea;
    QWidget *mpSimpleRobotList;
    QHBoxLayout *mpSimpleRobotListLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QPushButton *mpSimpleModeAddButton;
    QSpacerItem *horizontalSpacer;
    QWidget *mpAdvancedTab;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *mpRobotSelector;
    QPushButton *mpAddRobotButton;
    QPushButton *mpLoadButton;
    QPushButton *mpRenameButton;
    QPushButton *mpSaveButton;
    QPushButton *mpRemoveButton;
    QTreeWidget *mpRobotTree;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    cedar::aux::gui::PropertyPane *mpPropertyPane;

    void setupUi(QWidget *RobotManager)
    {
        if (RobotManager->objectName().isEmpty())
            RobotManager->setObjectName(QString::fromUtf8("RobotManager"));
        RobotManager->resize(766, 533);
        gridLayout = new QGridLayout(RobotManager);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mpModeTab = new QTabWidget(RobotManager);
        mpModeTab->setObjectName(QString::fromUtf8("mpModeTab"));
        mpModeTab->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mpSimpleRobotIconList = new QListWidget(groupBox_2);
        mpSimpleRobotIconList->setObjectName(QString::fromUtf8("mpSimpleRobotIconList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mpSimpleRobotIconList->sizePolicy().hasHeightForWidth());
        mpSimpleRobotIconList->setSizePolicy(sizePolicy);
        mpSimpleRobotIconList->setMaximumSize(QSize(16777215, 100));
        mpSimpleRobotIconList->setAcceptDrops(true);
        mpSimpleRobotIconList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        mpSimpleRobotIconList->setDragEnabled(true);
        mpSimpleRobotIconList->setDragDropMode(QAbstractItemView::DragDrop);
        mpSimpleRobotIconList->setMovement(QListView::Snap);
        mpSimpleRobotIconList->setFlow(QListView::LeftToRight);
        mpSimpleRobotIconList->setResizeMode(QListView::Adjust);
        mpSimpleRobotIconList->setGridSize(QSize(64, 64));
        mpSimpleRobotIconList->setViewMode(QListView::IconMode);
        mpSimpleRobotIconList->setUniformItemSizes(true);

        verticalLayout_3->addWidget(mpSimpleRobotIconList);


        verticalLayout_2->addWidget(groupBox_2);

        mpSimpleModeScrollArea = new QScrollArea(tab);
        mpSimpleModeScrollArea->setObjectName(QString::fromUtf8("mpSimpleModeScrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mpSimpleModeScrollArea->sizePolicy().hasHeightForWidth());
        mpSimpleModeScrollArea->setSizePolicy(sizePolicy1);
        mpSimpleModeScrollArea->setMinimumSize(QSize(250, 0));
        mpSimpleModeScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        mpSimpleModeScrollArea->setWidgetResizable(true);
        mpSimpleRobotList = new QWidget();
        mpSimpleRobotList->setObjectName(QString::fromUtf8("mpSimpleRobotList"));
        mpSimpleRobotList->setGeometry(QRect(0, 0, 709, 363));
        mpSimpleRobotListLayout = new QHBoxLayout(mpSimpleRobotList);
        mpSimpleRobotListLayout->setObjectName(QString::fromUtf8("mpSimpleRobotListLayout"));
        frame = new QFrame(mpSimpleRobotList);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setMinimumSize(QSize(200, 0));
        frame->setMaximumSize(QSize(200, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mpSimpleModeAddButton = new QPushButton(frame);
        mpSimpleModeAddButton->setObjectName(QString::fromUtf8("mpSimpleModeAddButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mpSimpleModeAddButton->sizePolicy().hasHeightForWidth());
        mpSimpleModeAddButton->setSizePolicy(sizePolicy3);
        mpSimpleModeAddButton->setFlat(true);

        verticalLayout_4->addWidget(mpSimpleModeAddButton);


        mpSimpleRobotListLayout->addWidget(frame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mpSimpleRobotListLayout->addItem(horizontalSpacer);

        mpSimpleModeScrollArea->setWidget(mpSimpleRobotList);

        verticalLayout_2->addWidget(mpSimpleModeScrollArea);

        verticalLayout_2->setStretch(1, 1);
        mpModeTab->addTab(tab, QString());
        mpAdvancedTab = new QWidget();
        mpAdvancedTab->setObjectName(QString::fromUtf8("mpAdvancedTab"));
        gridLayout_2 = new QGridLayout(mpAdvancedTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mpRobotSelector = new QComboBox(mpAdvancedTab);
        mpRobotSelector->setObjectName(QString::fromUtf8("mpRobotSelector"));

        horizontalLayout->addWidget(mpRobotSelector);

        mpAddRobotButton = new QPushButton(mpAdvancedTab);
        mpAddRobotButton->setObjectName(QString::fromUtf8("mpAddRobotButton"));

        horizontalLayout->addWidget(mpAddRobotButton);

        mpLoadButton = new QPushButton(mpAdvancedTab);
        mpLoadButton->setObjectName(QString::fromUtf8("mpLoadButton"));
        mpLoadButton->setEnabled(false);

        horizontalLayout->addWidget(mpLoadButton);

        mpRenameButton = new QPushButton(mpAdvancedTab);
        mpRenameButton->setObjectName(QString::fromUtf8("mpRenameButton"));
        mpRenameButton->setEnabled(false);

        horizontalLayout->addWidget(mpRenameButton);

        mpSaveButton = new QPushButton(mpAdvancedTab);
        mpSaveButton->setObjectName(QString::fromUtf8("mpSaveButton"));
        mpSaveButton->setEnabled(false);

        horizontalLayout->addWidget(mpSaveButton);

        mpRemoveButton = new QPushButton(mpAdvancedTab);
        mpRemoveButton->setObjectName(QString::fromUtf8("mpRemoveButton"));
        mpRemoveButton->setEnabled(false);

        horizontalLayout->addWidget(mpRemoveButton);

        horizontalLayout->setStretch(0, 1);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 2);

        mpRobotTree = new QTreeWidget(mpAdvancedTab);
        mpRobotTree->setObjectName(QString::fromUtf8("mpRobotTree"));

        gridLayout_2->addWidget(mpRobotTree, 1, 0, 1, 1);

        groupBox = new QGroupBox(mpAdvancedTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mpPropertyPane = new cedar::aux::gui::PropertyPane(groupBox);
        mpPropertyPane->setObjectName(QString::fromUtf8("mpPropertyPane"));

        verticalLayout->addWidget(mpPropertyPane);


        gridLayout_2->addWidget(groupBox, 1, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        mpModeTab->addTab(mpAdvancedTab, QString());

        gridLayout->addWidget(mpModeTab, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 2);

        retranslateUi(RobotManager);

        mpModeTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RobotManager);
    } // setupUi

    void retranslateUi(QWidget *RobotManager)
    {
        RobotManager->setWindowTitle(QApplication::translate("RobotManager", "Robot Manager", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("RobotManager", "Robots", 0, QApplication::UnicodeUTF8));
        mpSimpleModeAddButton->setText(QApplication::translate("RobotManager", "+", 0, QApplication::UnicodeUTF8));
        mpModeTab->setTabText(mpModeTab->indexOf(tab), QApplication::translate("RobotManager", "simple mode", 0, QApplication::UnicodeUTF8));
        mpAddRobotButton->setText(QApplication::translate("RobotManager", "add robot", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpLoadButton->setToolTip(QApplication::translate("RobotManager", "Loads a specific configuration for the currently selected robot.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpLoadButton->setText(QApplication::translate("RobotManager", "load", 0, QApplication::UnicodeUTF8));
        mpRenameButton->setText(QApplication::translate("RobotManager", "rename", 0, QApplication::UnicodeUTF8));
        mpSaveButton->setText(QApplication::translate("RobotManager", "save ...", 0, QApplication::UnicodeUTF8));
        mpRemoveButton->setText(QApplication::translate("RobotManager", "remove", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mpRobotTree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("RobotManager", "Info", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("RobotManager", "Part", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RobotManager", "Item Configuration", 0, QApplication::UnicodeUTF8));
        mpModeTab->setTabText(mpModeTab->indexOf(mpAdvancedTab), QApplication::translate("RobotManager", "advanced", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RobotManager: public Ui_RobotManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTMANAGER_H
