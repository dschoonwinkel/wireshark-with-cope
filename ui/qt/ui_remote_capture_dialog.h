/********************************************************************************
** Form generated from reading UI file 'remote_capture_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTE_CAPTURE_DIALOG_H
#define UI_REMOTE_CAPTURE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemoteCaptureDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label;
    QComboBox *hostCombo;
    QLabel *label_2;
    QLineEdit *portText;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *nullAuth;
    QRadioButton *pwAuth;
    QFormLayout *formLayout;
    QLabel *userLabel;
    QLineEdit *userText;
    QLabel *pwLabel;
    QLineEdit *pwText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RemoteCaptureDialog)
    {
        if (RemoteCaptureDialog->objectName().isEmpty())
            RemoteCaptureDialog->setObjectName(QStringLiteral("RemoteCaptureDialog"));
        RemoteCaptureDialog->resize(233, 256);
        verticalLayout_4 = new QVBoxLayout(RemoteCaptureDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(RemoteCaptureDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        hostCombo = new QComboBox(RemoteCaptureDialog);
        hostCombo->setObjectName(QStringLiteral("hostCombo"));
        hostCombo->setEditable(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, hostCombo);

        label_2 = new QLabel(RemoteCaptureDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        portText = new QLineEdit(RemoteCaptureDialog);
        portText->setObjectName(QStringLiteral("portText"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, portText);


        verticalLayout_3->addLayout(formLayout_2);

        frame = new QFrame(RemoteCaptureDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nullAuth = new QRadioButton(frame);
        nullAuth->setObjectName(QStringLiteral("nullAuth"));
        nullAuth->setChecked(true);

        verticalLayout->addWidget(nullAuth);

        pwAuth = new QRadioButton(frame);
        pwAuth->setObjectName(QStringLiteral("pwAuth"));

        verticalLayout->addWidget(pwAuth);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        userLabel = new QLabel(frame);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::LabelRole, userLabel);

        userText = new QLineEdit(frame);
        userText->setObjectName(QStringLiteral("userText"));
        userText->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, userText);

        pwLabel = new QLabel(frame);
        pwLabel->setObjectName(QStringLiteral("pwLabel"));
        pwLabel->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, pwLabel);

        pwText = new QLineEdit(frame);
        pwText->setObjectName(QStringLiteral("pwText"));
        pwText->setEnabled(false);
        pwText->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, pwText);


        verticalLayout->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(frame);


        verticalLayout_4->addLayout(verticalLayout_3);

        buttonBox = new QDialogButtonBox(RemoteCaptureDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(RemoteCaptureDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RemoteCaptureDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RemoteCaptureDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RemoteCaptureDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoteCaptureDialog)
    {
        RemoteCaptureDialog->setWindowTitle(QApplication::translate("RemoteCaptureDialog", "Remote Interface", 0));
        label->setText(QApplication::translate("RemoteCaptureDialog", "Host:", 0));
        label_2->setText(QApplication::translate("RemoteCaptureDialog", "Port:", 0));
        label_3->setText(QApplication::translate("RemoteCaptureDialog", "Authentication", 0));
        nullAuth->setText(QApplication::translate("RemoteCaptureDialog", "Null authentication", 0));
        pwAuth->setText(QApplication::translate("RemoteCaptureDialog", "Password authentication", 0));
        userLabel->setText(QApplication::translate("RemoteCaptureDialog", "Username:", 0));
        pwLabel->setText(QApplication::translate("RemoteCaptureDialog", "Password:", 0));
    } // retranslateUi

};

namespace Ui {
    class RemoteCaptureDialog: public Ui_RemoteCaptureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTE_CAPTURE_DIALOG_H
