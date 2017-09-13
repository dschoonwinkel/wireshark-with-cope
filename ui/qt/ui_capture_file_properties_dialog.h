/********************************************************************************
** Form generated from reading UI file 'capture_file_properties_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURE_FILE_PROPERTIES_DIALOG_H
#define UI_CAPTURE_FILE_PROPERTIES_DIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CaptureFilePropertiesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *detailsLabel;
    QTextEdit *detailsTextEdit;
    QLabel *commentsLabel;
    QTextEdit *commentsTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CaptureFilePropertiesDialog)
    {
        if (CaptureFilePropertiesDialog->objectName().isEmpty())
            CaptureFilePropertiesDialog->setObjectName(QStringLiteral("CaptureFilePropertiesDialog"));
        CaptureFilePropertiesDialog->resize(799, 585);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CaptureFilePropertiesDialog->sizePolicy().hasHeightForWidth());
        CaptureFilePropertiesDialog->setSizePolicy(sizePolicy);
        CaptureFilePropertiesDialog->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout = new QVBoxLayout(CaptureFilePropertiesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        detailsLabel = new QLabel(CaptureFilePropertiesDialog);
        detailsLabel->setObjectName(QStringLiteral("detailsLabel"));

        verticalLayout->addWidget(detailsLabel);

        detailsTextEdit = new QTextEdit(CaptureFilePropertiesDialog);
        detailsTextEdit->setObjectName(QStringLiteral("detailsTextEdit"));
        detailsTextEdit->setReadOnly(true);

        verticalLayout->addWidget(detailsTextEdit);

        commentsLabel = new QLabel(CaptureFilePropertiesDialog);
        commentsLabel->setObjectName(QStringLiteral("commentsLabel"));

        verticalLayout->addWidget(commentsLabel);

        commentsTextEdit = new QTextEdit(CaptureFilePropertiesDialog);
        commentsTextEdit->setObjectName(QStringLiteral("commentsTextEdit"));
        commentsTextEdit->setSizeIncrement(QSize(0, 10));

        verticalLayout->addWidget(commentsTextEdit);

        buttonBox = new QDialogButtonBox(CaptureFilePropertiesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(3, 1);

        retranslateUi(CaptureFilePropertiesDialog);

        QMetaObject::connectSlotsByName(CaptureFilePropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *CaptureFilePropertiesDialog)
    {
        detailsLabel->setText(QApplication::translate("CaptureFilePropertiesDialog", "Details", 0));
        commentsLabel->setText(QApplication::translate("CaptureFilePropertiesDialog", "Capture file comments", 0));
        Q_UNUSED(CaptureFilePropertiesDialog);
    } // retranslateUi

};

namespace Ui {
    class CaptureFilePropertiesDialog: public Ui_CaptureFilePropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURE_FILE_PROPERTIES_DIALOG_H
