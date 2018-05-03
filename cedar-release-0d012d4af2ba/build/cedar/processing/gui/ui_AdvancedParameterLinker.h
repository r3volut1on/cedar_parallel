/********************************************************************************
** Form generated from reading UI file 'AdvancedParameterLinker.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEDPARAMETERLINKER_H
#define UI_ADVANCEDPARAMETERLINKER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "cedar/auxiliaries/gui/Configurable.h"

QT_BEGIN_NAMESPACE

class Ui_AdvancedParameterLinker
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTreeWidget *mpLinkTree;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *mpLinkTypeSelector;
    QPushButton *mpAddButton;
    QPushButton *mpRemoveButton;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *mpSourceElementName;
    QLabel *label_2;
    QLineEdit *mpSourceParameterName;
    QLabel *label_3;
    QLineEdit *mpTargetElementName;
    QLabel *label_4;
    QLineEdit *mpTargetParameterName;
    cedar::aux::gui::Configurable *mpLinkParameters;

    void setupUi(QWidget *AdvancedParameterLinker)
    {
        if (AdvancedParameterLinker->objectName().isEmpty())
            AdvancedParameterLinker->setObjectName(QString::fromUtf8("AdvancedParameterLinker"));
        AdvancedParameterLinker->resize(713, 601);
        horizontalLayout = new QHBoxLayout(AdvancedParameterLinker);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mpLinkTree = new QTreeWidget(AdvancedParameterLinker);
        mpLinkTree->setObjectName(QString::fromUtf8("mpLinkTree"));

        verticalLayout->addWidget(mpLinkTree);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mpLinkTypeSelector = new QComboBox(AdvancedParameterLinker);
        mpLinkTypeSelector->setObjectName(QString::fromUtf8("mpLinkTypeSelector"));

        horizontalLayout_2->addWidget(mpLinkTypeSelector);

        mpAddButton = new QPushButton(AdvancedParameterLinker);
        mpAddButton->setObjectName(QString::fromUtf8("mpAddButton"));

        horizontalLayout_2->addWidget(mpAddButton);

        mpRemoveButton = new QPushButton(AdvancedParameterLinker);
        mpRemoveButton->setObjectName(QString::fromUtf8("mpRemoveButton"));

        horizontalLayout_2->addWidget(mpRemoveButton);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(AdvancedParameterLinker);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mpSourceElementName = new QLineEdit(AdvancedParameterLinker);
        mpSourceElementName->setObjectName(QString::fromUtf8("mpSourceElementName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mpSourceElementName);

        label_2 = new QLabel(AdvancedParameterLinker);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        mpSourceParameterName = new QLineEdit(AdvancedParameterLinker);
        mpSourceParameterName->setObjectName(QString::fromUtf8("mpSourceParameterName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mpSourceParameterName);

        label_3 = new QLabel(AdvancedParameterLinker);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        mpTargetElementName = new QLineEdit(AdvancedParameterLinker);
        mpTargetElementName->setObjectName(QString::fromUtf8("mpTargetElementName"));

        formLayout->setWidget(2, QFormLayout::FieldRole, mpTargetElementName);

        label_4 = new QLabel(AdvancedParameterLinker);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        mpTargetParameterName = new QLineEdit(AdvancedParameterLinker);
        mpTargetParameterName->setObjectName(QString::fromUtf8("mpTargetParameterName"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mpTargetParameterName);

        mpLinkParameters = new cedar::aux::gui::Configurable(AdvancedParameterLinker);
        mpLinkParameters->setObjectName(QString::fromUtf8("mpLinkParameters"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(mpLinkParameters->sizePolicy().hasHeightForWidth());
        mpLinkParameters->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::SpanningRole, mpLinkParameters);


        horizontalLayout->addLayout(formLayout);


        retranslateUi(AdvancedParameterLinker);

        QMetaObject::connectSlotsByName(AdvancedParameterLinker);
    } // setupUi

    void retranslateUi(QWidget *AdvancedParameterLinker)
    {
        AdvancedParameterLinker->setWindowTitle(QApplication::translate("AdvancedParameterLinker", "Form", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = mpLinkTree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("AdvancedParameterLinker", "target", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("AdvancedParameterLinker", "source", 0, QApplication::UnicodeUTF8));
        mpAddButton->setText(QApplication::translate("AdvancedParameterLinker", "+", 0, QApplication::UnicodeUTF8));
        mpRemoveButton->setText(QApplication::translate("AdvancedParameterLinker", "-", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AdvancedParameterLinker", "source element", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AdvancedParameterLinker", "source parameter", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AdvancedParameterLinker", "target element", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AdvancedParameterLinker", "target parameter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AdvancedParameterLinker: public Ui_AdvancedParameterLinker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEDPARAMETERLINKER_H
