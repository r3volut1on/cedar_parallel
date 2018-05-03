/********************************************************************************
** Form generated from reading UI file 'UiSettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UISETTINGS_H
#define UI_UISETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>
#include "cedar/auxiliaries/gui/BoolParameter.h"
#include "cedar/auxiliaries/gui/DoubleParameter.h"
#include "cedar/auxiliaries/gui/EnumParameter.h"
#include "cedar/auxiliaries/gui/UIntParameter.h"

QT_BEGIN_NAMESPACE

class Ui_UiSettings
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    cedar::aux::gui::BoolParameter *mpUseGraphicsEffectsEdit;
    QLabel *label_3;
    cedar::aux::gui::EnumParameter *mpStepDisplayMode;
    QLabel *label_7;
    cedar::aux::gui::BoolParameter *mpHighlightConnections;
    QLabel *label_8;
    cedar::aux::gui::UIntParameter *mpMaximumNumberOfLogMessages;
    QLabel *label_9;
    cedar::aux::gui::BoolParameter *mpHighlightHoveredConnection;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    cedar::aux::gui::DoubleParameter *mpGrowthFactor;
    QLabel *label_5;
    cedar::aux::gui::DoubleParameter *mpSensitivity;
    QLabel *label_6;
    cedar::aux::gui::BoolParameter *mpSlotGrowthEnabled;

    void setupUi(QWidget *UiSettings)
    {
        if (UiSettings->objectName().isEmpty())
            UiSettings->setObjectName(QString::fromUtf8("UiSettings"));
        UiSettings->resize(656, 571);
        gridLayout = new QGridLayout(UiSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(UiSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mpUseGraphicsEffectsEdit = new cedar::aux::gui::BoolParameter(groupBox);
        mpUseGraphicsEffectsEdit->setObjectName(QString::fromUtf8("mpUseGraphicsEffectsEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mpUseGraphicsEffectsEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        mpStepDisplayMode = new cedar::aux::gui::EnumParameter(groupBox);
        mpStepDisplayMode->setObjectName(QString::fromUtf8("mpStepDisplayMode"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mpStepDisplayMode);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        mpHighlightConnections = new cedar::aux::gui::BoolParameter(groupBox);
        mpHighlightConnections->setObjectName(QString::fromUtf8("mpHighlightConnections"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mpHighlightConnections);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        mpMaximumNumberOfLogMessages = new cedar::aux::gui::UIntParameter(groupBox);
        mpMaximumNumberOfLogMessages->setObjectName(QString::fromUtf8("mpMaximumNumberOfLogMessages"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mpMaximumNumberOfLogMessages);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_9);

        mpHighlightHoveredConnection = new cedar::aux::gui::BoolParameter(groupBox);
        mpHighlightHoveredConnection->setObjectName(QString::fromUtf8("mpHighlightHoveredConnection"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mpHighlightHoveredConnection);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        label_2 = new QLabel(UiSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(UiSettings);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        mpGrowthFactor = new cedar::aux::gui::DoubleParameter(groupBox_2);
        mpGrowthFactor->setObjectName(QString::fromUtf8("mpGrowthFactor"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mpGrowthFactor);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        mpSensitivity = new cedar::aux::gui::DoubleParameter(groupBox_2);
        mpSensitivity->setObjectName(QString::fromUtf8("mpSensitivity"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, mpSensitivity);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        mpSlotGrowthEnabled = new cedar::aux::gui::BoolParameter(groupBox_2);
        mpSlotGrowthEnabled->setObjectName(QString::fromUtf8("mpSlotGrowthEnabled"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, mpSlotGrowthEnabled);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        gridLayout->setRowStretch(2, 1);

        retranslateUi(UiSettings);

        QMetaObject::connectSlotsByName(UiSettings);
    } // setupUi

    void retranslateUi(QWidget *UiSettings)
    {
        UiSettings->setWindowTitle(QApplication::translate("UiSettings", "UI Settings", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("UiSettings", "Display Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("UiSettings", "Note: these effects may lead to rendering errors. If you experience many such errors, disable these effects.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("UiSettings", "Use Graphics Effects*", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UiSettings", "Default step display mode", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("UiSettings", "Highlight connections of selected steps", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("UiSettings", "Maximum number of log messages", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("UiSettings", "Highlight connections when hovering over slots", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UiSettings", "* changes only take effect after a restart of the application", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("UiSettings", "Slot item growth", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UiSettings", "Growth factor", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("UiSettings", "Sensitivity", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("UiSettings", "Enabled", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UiSettings: public Ui_UiSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UISETTINGS_H
