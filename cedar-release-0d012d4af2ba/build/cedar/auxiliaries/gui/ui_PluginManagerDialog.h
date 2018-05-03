/********************************************************************************
** Form generated from reading UI file 'PluginManagerDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINMANAGERDIALOG_H
#define UI_PLUGINMANAGERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginManagerDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QTableWidget *mpPluginList;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *mpAddPluginBtn;
    QPushButton *mpLoadSelectedPluginsBtn;
    QPushButton *mpSelectedPluginInfo;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mpDeleteButton;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QListWidget *mpSearchPathList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mpAddPathBtn;
    QPushButton *mpUpButton;
    QPushButton *mpDownBtn;
    QPushButton *mpHelpBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *mpRemoveSearchPathBtn;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PluginManagerDialog)
    {
        if (PluginManagerDialog->objectName().isEmpty())
            PluginManagerDialog->setObjectName(QString::fromUtf8("PluginManagerDialog"));
        PluginManagerDialog->resize(621, 425);
        gridLayout = new QGridLayout(PluginManagerDialog);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(PluginManagerDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        mpPluginList = new QTableWidget(tab);
        if (mpPluginList->columnCount() < 4)
            mpPluginList->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        mpPluginList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        mpPluginList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        mpPluginList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        mpPluginList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        mpPluginList->setObjectName(QString::fromUtf8("mpPluginList"));
        mpPluginList->setAlternatingRowColors(true);
        mpPluginList->setSelectionMode(QAbstractItemView::ExtendedSelection);
        mpPluginList->setSelectionBehavior(QAbstractItemView::SelectRows);
        mpPluginList->setColumnCount(4);
        mpPluginList->horizontalHeader()->setStretchLastSection(true);
        mpPluginList->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(mpPluginList, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mpAddPluginBtn = new QPushButton(tab);
        mpAddPluginBtn->setObjectName(QString::fromUtf8("mpAddPluginBtn"));

        horizontalLayout_2->addWidget(mpAddPluginBtn);

        mpLoadSelectedPluginsBtn = new QPushButton(tab);
        mpLoadSelectedPluginsBtn->setObjectName(QString::fromUtf8("mpLoadSelectedPluginsBtn"));

        horizontalLayout_2->addWidget(mpLoadSelectedPluginsBtn);

        mpSelectedPluginInfo = new QPushButton(tab);
        mpSelectedPluginInfo->setObjectName(QString::fromUtf8("mpSelectedPluginInfo"));

        horizontalLayout_2->addWidget(mpSelectedPluginInfo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        mpDeleteButton = new QPushButton(tab);
        mpDeleteButton->setObjectName(QString::fromUtf8("mpDeleteButton"));
        mpDeleteButton->setCheckable(false);

        horizontalLayout_2->addWidget(mpDeleteButton);

        horizontalLayout_2->setStretch(0, 1);

        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mpSearchPathList = new QListWidget(tab_2);
        mpSearchPathList->setObjectName(QString::fromUtf8("mpSearchPathList"));

        verticalLayout->addWidget(mpSearchPathList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        mpAddPathBtn = new QPushButton(tab_2);
        mpAddPathBtn->setObjectName(QString::fromUtf8("mpAddPathBtn"));

        horizontalLayout->addWidget(mpAddPathBtn);

        mpUpButton = new QPushButton(tab_2);
        mpUpButton->setObjectName(QString::fromUtf8("mpUpButton"));

        horizontalLayout->addWidget(mpUpButton);

        mpDownBtn = new QPushButton(tab_2);
        mpDownBtn->setObjectName(QString::fromUtf8("mpDownBtn"));

        horizontalLayout->addWidget(mpDownBtn);

        mpHelpBtn = new QPushButton(tab_2);
        mpHelpBtn->setObjectName(QString::fromUtf8("mpHelpBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mpHelpBtn->sizePolicy().hasHeightForWidth());
        mpHelpBtn->setSizePolicy(sizePolicy);
        mpHelpBtn->setMinimumSize(QSize(27, 27));
        mpHelpBtn->setMaximumSize(QSize(27, 27));

        horizontalLayout->addWidget(mpHelpBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        mpRemoveSearchPathBtn = new QPushButton(tab_2);
        mpRemoveSearchPathBtn->setObjectName(QString::fromUtf8("mpRemoveSearchPathBtn"));

        horizontalLayout->addWidget(mpRemoveSearchPathBtn);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PluginManagerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(PluginManagerDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), PluginManagerDialog, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PluginManagerDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginManagerDialog)
    {
        PluginManagerDialog->setWindowTitle(QApplication::translate("PluginManagerDialog", "Plugin Manager", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = mpPluginList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PluginManagerDialog", "startup", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = mpPluginList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PluginManagerDialog", "loaded", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = mpPluginList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PluginManagerDialog", "name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = mpPluginList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PluginManagerDialog", "path", 0, QApplication::UnicodeUTF8));
        mpAddPluginBtn->setText(QApplication::translate("PluginManagerDialog", "add...", 0, QApplication::UnicodeUTF8));
        mpLoadSelectedPluginsBtn->setText(QApplication::translate("PluginManagerDialog", "load", 0, QApplication::UnicodeUTF8));
        mpSelectedPluginInfo->setText(QApplication::translate("PluginManagerDialog", "info", 0, QApplication::UnicodeUTF8));
        mpDeleteButton->setText(QApplication::translate("PluginManagerDialog", "remove", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PluginManagerDialog", "plugins", 0, QApplication::UnicodeUTF8));
        mpAddPathBtn->setText(QApplication::translate("PluginManagerDialog", "add...", 0, QApplication::UnicodeUTF8));
        mpUpButton->setText(QApplication::translate("PluginManagerDialog", "up", 0, QApplication::UnicodeUTF8));
        mpDownBtn->setText(QApplication::translate("PluginManagerDialog", "down", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpHelpBtn->setToolTip(QApplication::translate("PluginManagerDialog", "<html><head/><body><p>Add paths for finding your plugins here. These paths will be searched according to a certain pattern, i.e., the name of the plugin as well as a 'build' path will automatically be appended.</p><p><br/>Example: suppose your plugin is in ~/workspace/Plugin/build/libPlugin.so. Here it is enough to specify the path ~/workspace; the manager will automatically append Plugin and build.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpHelpBtn->setText(QApplication::translate("PluginManagerDialog", "?", 0, QApplication::UnicodeUTF8));
        mpRemoveSearchPathBtn->setText(QApplication::translate("PluginManagerDialog", "remove", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PluginManagerDialog", "search directories", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PluginManagerDialog: public Ui_PluginManagerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINMANAGERDIALOG_H
