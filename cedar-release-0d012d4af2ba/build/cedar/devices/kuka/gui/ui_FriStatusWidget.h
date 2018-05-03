/********************************************************************************
** Form generated from reading UI file 'FriStatusWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRISTATUSWIDGET_H
#define UI_FRISTATUSWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriStatusWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *mpLabelQuality;
    QLabel *mpLabelSampleTime;
    QLabel *mpLabelStateData;
    QLabel *mpLabelQualData;
    QLabel *mpLabelSampleTimeData;
    QLabel *mpLabelState;
    QHBoxLayout *horizontalLayout;
    QLabel *mpLabelPower;
    QLabel *mpLabelPowerData;

    void setupUi(QWidget *FriStatusWidget)
    {
        if (FriStatusWidget->objectName().isEmpty())
            FriStatusWidget->setObjectName(QString::fromUtf8("FriStatusWidget"));
        FriStatusWidget->resize(331, 154);
        FriStatusWidget->setFocusPolicy(Qt::StrongFocus);
        gridLayout = new QGridLayout(FriStatusWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mpLabelQuality = new QLabel(FriStatusWidget);
        mpLabelQuality->setObjectName(QString::fromUtf8("mpLabelQuality"));

        gridLayout->addWidget(mpLabelQuality, 3, 0, 1, 1);

        mpLabelSampleTime = new QLabel(FriStatusWidget);
        mpLabelSampleTime->setObjectName(QString::fromUtf8("mpLabelSampleTime"));
        mpLabelSampleTime->setEnabled(true);

        gridLayout->addWidget(mpLabelSampleTime, 4, 0, 1, 1);

        mpLabelStateData = new QLabel(FriStatusWidget);
        mpLabelStateData->setObjectName(QString::fromUtf8("mpLabelStateData"));

        gridLayout->addWidget(mpLabelStateData, 1, 1, 1, 1);

        mpLabelQualData = new QLabel(FriStatusWidget);
        mpLabelQualData->setObjectName(QString::fromUtf8("mpLabelQualData"));

        gridLayout->addWidget(mpLabelQualData, 3, 1, 1, 1);

        mpLabelSampleTimeData = new QLabel(FriStatusWidget);
        mpLabelSampleTimeData->setObjectName(QString::fromUtf8("mpLabelSampleTimeData"));

        gridLayout->addWidget(mpLabelSampleTimeData, 4, 1, 1, 1);

        mpLabelState = new QLabel(FriStatusWidget);
        mpLabelState->setObjectName(QString::fromUtf8("mpLabelState"));

        gridLayout->addWidget(mpLabelState, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mpLabelPower = new QLabel(FriStatusWidget);
        mpLabelPower->setObjectName(QString::fromUtf8("mpLabelPower"));

        horizontalLayout->addWidget(mpLabelPower);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        mpLabelPowerData = new QLabel(FriStatusWidget);
        mpLabelPowerData->setObjectName(QString::fromUtf8("mpLabelPowerData"));

        gridLayout->addWidget(mpLabelPowerData, 5, 1, 1, 1);


        retranslateUi(FriStatusWidget);

        QMetaObject::connectSlotsByName(FriStatusWidget);
    } // setupUi

    void retranslateUi(QWidget *FriStatusWidget)
    {
        FriStatusWidget->setWindowTitle(QApplication::translate("FriStatusWidget", "FRI Status information", 0, QApplication::UnicodeUTF8));
        mpLabelQuality->setText(QApplication::translate("FriStatusWidget", "FRI_QUALITY", 0, QApplication::UnicodeUTF8));
        mpLabelSampleTime->setText(QApplication::translate("FriStatusWidget", "Sample time", 0, QApplication::UnicodeUTF8));
        mpLabelStateData->setText(QApplication::translate("FriStatusWidget", "OFF (0)", 0, QApplication::UnicodeUTF8));
        mpLabelQualData->setText(QApplication::translate("FriStatusWidget", "BAD (0)", 0, QApplication::UnicodeUTF8));
        mpLabelSampleTimeData->setText(QApplication::translate("FriStatusWidget", "0.02s", 0, QApplication::UnicodeUTF8));
        mpLabelState->setText(QApplication::translate("FriStatusWidget", "FRI_STATE", 0, QApplication::UnicodeUTF8));
        mpLabelPower->setText(QApplication::translate("FriStatusWidget", "Power", 0, QApplication::UnicodeUTF8));
        mpLabelPowerData->setText(QApplication::translate("FriStatusWidget", "off", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FriStatusWidget: public Ui_FriStatusWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRISTATUSWIDGET_H
