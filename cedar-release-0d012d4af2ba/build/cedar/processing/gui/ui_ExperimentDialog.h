/********************************************************************************
** Form generated from reading UI file 'ExperimentDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPERIMENTDIALOG_H
#define UI_EXPERIMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExperimentDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *mStatusText;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QSpinBox *repetitionSpinBox;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QLabel *mActualRepetition;
    QLineEdit *nameEdit;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLabel *mTimeLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *mActionSequences;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mAddActionSequence;
    QPushButton *runButton;
    QPushButton *stopButton;
    QPushButton *saveAsButton;
    QFrame *line;
    QLabel *label_3;
    QCheckBox *mpRepeat;
    QPushButton *mpNewButton;
    QPushButton *loadButton;
    QPushButton *saveButton;

    void setupUi(QWidget *ExperimentDialog)
    {
        if (ExperimentDialog->objectName().isEmpty())
            ExperimentDialog->setObjectName(QString::fromUtf8("ExperimentDialog"));
        ExperimentDialog->resize(649, 472);
        gridLayout = new QGridLayout(ExperimentDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mStatusText = new QLabel(ExperimentDialog);
        mStatusText->setObjectName(QString::fromUtf8("mStatusText"));

        gridLayout->addWidget(mStatusText, 1, 9, 1, 1);

        label_2 = new QLabel(ExperimentDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_4 = new QLabel(ExperimentDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        label = new QLabel(ExperimentDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        repetitionSpinBox = new QSpinBox(ExperimentDialog);
        repetitionSpinBox->setObjectName(QString::fromUtf8("repetitionSpinBox"));
        repetitionSpinBox->setMinimum(1);
        repetitionSpinBox->setMaximum(1000);
        repetitionSpinBox->setValue(1);

        gridLayout->addWidget(repetitionSpinBox, 1, 4, 1, 2);

        label_6 = new QLabel(ExperimentDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 1, 8, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 10, 1, 1);

        mActualRepetition = new QLabel(ExperimentDialog);
        mActualRepetition->setObjectName(QString::fromUtf8("mActualRepetition"));

        gridLayout->addWidget(mActualRepetition, 1, 2, 1, 1);

        nameEdit = new QLineEdit(ExperimentDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 2, 1, 11);

        label_5 = new QLabel(ExperimentDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 11, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 7, 1, 1);

        mTimeLabel = new QLabel(ExperimentDialog);
        mTimeLabel->setObjectName(QString::fromUtf8("mTimeLabel"));

        gridLayout->addWidget(mTimeLabel, 1, 12, 1, 1);

        scrollArea = new QScrollArea(ExperimentDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 538, 320));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        mActionSequences = new QVBoxLayout();
        mActionSequences->setObjectName(QString::fromUtf8("mActionSequences"));

        gridLayout_2->addLayout(mActionSequences, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        mAddActionSequence = new QPushButton(scrollAreaWidgetContents);
        mAddActionSequence->setObjectName(QString::fromUtf8("mAddActionSequence"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mAddActionSequence->sizePolicy().hasHeightForWidth());
        mAddActionSequence->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(mAddActionSequence, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 9, 1, 4, 12);

        runButton = new QPushButton(ExperimentDialog);
        runButton->setObjectName(QString::fromUtf8("runButton"));
        runButton->setCheckable(false);
        runButton->setChecked(false);

        gridLayout->addWidget(runButton, 11, 13, 1, 1);

        stopButton = new QPushButton(ExperimentDialog);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(false);

        gridLayout->addWidget(stopButton, 12, 13, 1, 1);

        saveAsButton = new QPushButton(ExperimentDialog);
        saveAsButton->setObjectName(QString::fromUtf8("saveAsButton"));

        gridLayout->addWidget(saveAsButton, 5, 13, 1, 1);

        line = new QFrame(ExperimentDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 1, 1, 12);

        label_3 = new QLabel(ExperimentDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        mpRepeat = new QCheckBox(ExperimentDialog);
        mpRepeat->setObjectName(QString::fromUtf8("mpRepeat"));

        gridLayout->addWidget(mpRepeat, 1, 6, 1, 1);

        mpNewButton = new QPushButton(ExperimentDialog);
        mpNewButton->setObjectName(QString::fromUtf8("mpNewButton"));

        gridLayout->addWidget(mpNewButton, 0, 13, 1, 1);

        loadButton = new QPushButton(ExperimentDialog);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));

        gridLayout->addWidget(loadButton, 1, 13, 1, 1);

        saveButton = new QPushButton(ExperimentDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        gridLayout->addWidget(saveButton, 3, 13, 1, 1);


        retranslateUi(ExperimentDialog);

        QMetaObject::connectSlotsByName(ExperimentDialog);
    } // setupUi

    void retranslateUi(QWidget *ExperimentDialog)
    {
        ExperimentDialog->setWindowTitle(QApplication::translate("ExperimentDialog", "Experiment", 0, QApplication::UnicodeUTF8));
        mStatusText->setText(QApplication::translate("ExperimentDialog", "Stopped", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ExperimentDialog", "Trial", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ExperimentDialog", "/", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ExperimentDialog", "Name", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ExperimentDialog", "Status: ", 0, QApplication::UnicodeUTF8));
        mActualRepetition->setText(QApplication::translate("ExperimentDialog", "0", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ExperimentDialog", "Time:", 0, QApplication::UnicodeUTF8));
        mTimeLabel->setText(QApplication::translate("ExperimentDialog", "0", 0, QApplication::UnicodeUTF8));
        mAddActionSequence->setText(QApplication::translate("ExperimentDialog", "+", 0, QApplication::UnicodeUTF8));
        runButton->setText(QApplication::translate("ExperimentDialog", "start", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("ExperimentDialog", "stop", 0, QApplication::UnicodeUTF8));
        saveAsButton->setText(QApplication::translate("ExperimentDialog", "save as...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ExperimentDialog", "Action Sequences", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mpRepeat->setToolTip(QApplication::translate("ExperimentDialog", "<html><head/><body><p>If this box is checked, the experiment will be repeated until it is stopped by the user.</p><p>Trials will be reset after each experiment.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mpRepeat->setText(QApplication::translate("ExperimentDialog", "repeat experiment", 0, QApplication::UnicodeUTF8));
        mpNewButton->setText(QApplication::translate("ExperimentDialog", "new", 0, QApplication::UnicodeUTF8));
        loadButton->setText(QApplication::translate("ExperimentDialog", "load", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("ExperimentDialog", "save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExperimentDialog: public Ui_ExperimentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERIMENTDIALOG_H
