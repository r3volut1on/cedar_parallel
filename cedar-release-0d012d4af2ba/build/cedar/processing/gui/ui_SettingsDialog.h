/********************************************************************************
** Form generated from reading UI file 'SettingsDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include "cedar/auxiliaries/gui/SettingsWidget.h"
#include "cedar/processing/gui/UiSettings.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *mpTab;
    cedar::aux::gui::SettingsWidget *tab;
    cedar::proc::gui::UiSettings *mpUiSettingsTab;
    QDialogButtonBox *mpDialogButtons;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(451, 491);
        SettingsDialog->setSizeGripEnabled(true);
        SettingsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mpTab = new QTabWidget(SettingsDialog);
        mpTab->setObjectName(QString::fromUtf8("mpTab"));
        tab = new cedar::aux::gui::SettingsWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        mpTab->addTab(tab, QString());
        mpUiSettingsTab = new cedar::proc::gui::UiSettings();
        mpUiSettingsTab->setObjectName(QString::fromUtf8("mpUiSettingsTab"));
        mpTab->addTab(mpUiSettingsTab, QString());

        verticalLayout->addWidget(mpTab);

        mpDialogButtons = new QDialogButtonBox(SettingsDialog);
        mpDialogButtons->setObjectName(QString::fromUtf8("mpDialogButtons"));
        mpDialogButtons->setOrientation(Qt::Horizontal);
        mpDialogButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(mpDialogButtons);


        retranslateUi(SettingsDialog);
        QObject::connect(mpDialogButtons, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(mpDialogButtons, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        mpTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Settings", 0, QApplication::UnicodeUTF8));
        mpTab->setTabText(mpTab->indexOf(tab), QApplication::translate("SettingsDialog", "auxiliaries", 0, QApplication::UnicodeUTF8));
        mpTab->setTabText(mpTab->indexOf(mpUiSettingsTab), QApplication::translate("SettingsDialog", "user interface", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
