/********************************************************************************
** Form generated from reading UI file 'remote_settings_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTE_SETTINGS_DIALOG_H
#define UI_REMOTE_SETTINGS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemoteSettingsDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *rpcapBox;
    QCheckBox *udpBox;
    QLabel *sampleLabel;
    QRadioButton *sampleNone;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *samplePkt;
    QSpinBox *spinPkt;
    QLabel *pktLabel;
    QHBoxLayout *horizontalLayout;
    QRadioButton *sampleTime;
    QSpinBox *spinTime;
    QLabel *timeLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RemoteSettingsDialog)
    {
        if (RemoteSettingsDialog->objectName().isEmpty())
            RemoteSettingsDialog->setObjectName(QStringLiteral("RemoteSettingsDialog"));
        RemoteSettingsDialog->resize(231, 229);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RemoteSettingsDialog->sizePolicy().hasHeightForWidth());
        RemoteSettingsDialog->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(RemoteSettingsDialog);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label = new QLabel(RemoteSettingsDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        rpcapBox = new QCheckBox(RemoteSettingsDialog);
        rpcapBox->setObjectName(QStringLiteral("rpcapBox"));

        verticalLayout->addWidget(rpcapBox);

        udpBox = new QCheckBox(RemoteSettingsDialog);
        udpBox->setObjectName(QStringLiteral("udpBox"));

        verticalLayout->addWidget(udpBox);

        sampleLabel = new QLabel(RemoteSettingsDialog);
        sampleLabel->setObjectName(QStringLiteral("sampleLabel"));

        verticalLayout->addWidget(sampleLabel);

        sampleNone = new QRadioButton(RemoteSettingsDialog);
        sampleNone->setObjectName(QStringLiteral("sampleNone"));
        sampleNone->setEnabled(true);

        verticalLayout->addWidget(sampleNone);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        samplePkt = new QRadioButton(RemoteSettingsDialog);
        samplePkt->setObjectName(QStringLiteral("samplePkt"));

        horizontalLayout_2->addWidget(samplePkt);

        spinPkt = new QSpinBox(RemoteSettingsDialog);
        spinPkt->setObjectName(QStringLiteral("spinPkt"));
        spinPkt->setMaximum(1000000);

        horizontalLayout_2->addWidget(spinPkt);

        pktLabel = new QLabel(RemoteSettingsDialog);
        pktLabel->setObjectName(QStringLiteral("pktLabel"));

        horizontalLayout_2->addWidget(pktLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sampleTime = new QRadioButton(RemoteSettingsDialog);
        sampleTime->setObjectName(QStringLiteral("sampleTime"));

        horizontalLayout->addWidget(sampleTime);

        spinTime = new QSpinBox(RemoteSettingsDialog);
        spinTime->setObjectName(QStringLiteral("spinTime"));
        spinTime->setMaximum(1000000);

        horizontalLayout->addWidget(spinTime);

        timeLabel = new QLabel(RemoteSettingsDialog);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        horizontalLayout->addWidget(timeLabel);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(RemoteSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(RemoteSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RemoteSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RemoteSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RemoteSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoteSettingsDialog)
    {
        RemoteSettingsDialog->setWindowTitle(QApplication::translate("RemoteSettingsDialog", "Remote Capture Settings", 0));
        label->setText(QApplication::translate("RemoteSettingsDialog", "Capture Options", 0));
        rpcapBox->setText(QApplication::translate("RemoteSettingsDialog", "Do not capture own RPCAP traffic", 0));
        udpBox->setText(QApplication::translate("RemoteSettingsDialog", "Use UDP for data transfer", 0));
        sampleLabel->setText(QApplication::translate("RemoteSettingsDialog", "Sampling Options", 0));
        sampleNone->setText(QApplication::translate("RemoteSettingsDialog", "None", 0));
        samplePkt->setText(QApplication::translate("RemoteSettingsDialog", "1 of", 0));
        pktLabel->setText(QApplication::translate("RemoteSettingsDialog", "packets", 0));
        sampleTime->setText(QApplication::translate("RemoteSettingsDialog", "1 every ", 0));
        timeLabel->setText(QApplication::translate("RemoteSettingsDialog", "milliseconds", 0));
    } // retranslateUi

};

namespace Ui {
    class RemoteSettingsDialog: public Ui_RemoteSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTE_SETTINGS_DIALOG_H
