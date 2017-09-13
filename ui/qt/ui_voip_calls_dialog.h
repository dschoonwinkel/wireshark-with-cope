/********************************************************************************
** Form generated from reading UI file 'voip_calls_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOIP_CALLS_DIALOG_H
#define UI_VOIP_CALLS_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VoipCallsDialog
{
public:
    QAction *actionSelect_All;
    QAction *actionCopyAsCsv;
    QAction *actionCopyAsYaml;
    QVBoxLayout *verticalLayout;
    QTreeWidget *callTreeWidget;
    QLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VoipCallsDialog)
    {
        if (VoipCallsDialog->objectName().isEmpty())
            VoipCallsDialog->setObjectName(QStringLiteral("VoipCallsDialog"));
        VoipCallsDialog->resize(750, 430);
        actionSelect_All = new QAction(VoipCallsDialog);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        actionSelect_All->setShortcut(QStringLiteral("Ctrl+A"));
        actionCopyAsCsv = new QAction(VoipCallsDialog);
        actionCopyAsCsv->setObjectName(QStringLiteral("actionCopyAsCsv"));
        actionCopyAsYaml = new QAction(VoipCallsDialog);
        actionCopyAsYaml->setObjectName(QStringLiteral("actionCopyAsYaml"));
        verticalLayout = new QVBoxLayout(VoipCallsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        callTreeWidget = new QTreeWidget(VoipCallsDialog);
        callTreeWidget->setObjectName(QStringLiteral("callTreeWidget"));
        callTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        callTreeWidget->setTextElideMode(Qt::ElideMiddle);
        callTreeWidget->setRootIsDecorated(false);
        callTreeWidget->setUniformRowHeights(true);
        callTreeWidget->setItemsExpandable(false);

        verticalLayout->addWidget(callTreeWidget);

        hintLabel = new QLabel(VoipCallsDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));

        verticalLayout->addWidget(hintLabel);

        buttonBox = new QDialogButtonBox(VoipCallsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(VoipCallsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VoipCallsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VoipCallsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(VoipCallsDialog);
    } // setupUi

    void retranslateUi(QDialog *VoipCallsDialog)
    {
        VoipCallsDialog->setWindowTitle(QApplication::translate("VoipCallsDialog", "VoIP Calls", 0));
        actionSelect_All->setText(QApplication::translate("VoipCallsDialog", "Select &All", 0));
#ifndef QT_NO_TOOLTIP
        actionSelect_All->setToolTip(QApplication::translate("VoipCallsDialog", "Select all calls", 0));
#endif // QT_NO_TOOLTIP
        actionCopyAsCsv->setText(QApplication::translate("VoipCallsDialog", "Copy as CSV", 0));
#ifndef QT_NO_TOOLTIP
        actionCopyAsCsv->setToolTip(QApplication::translate("VoipCallsDialog", "Copy stream list as CSV.", 0));
#endif // QT_NO_TOOLTIP
        actionCopyAsYaml->setText(QApplication::translate("VoipCallsDialog", "Copy as YAML", 0));
#ifndef QT_NO_TOOLTIP
        actionCopyAsYaml->setToolTip(QApplication::translate("VoipCallsDialog", "Copy stream list as YAML.", 0));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = callTreeWidget->headerItem();
        ___qtreewidgetitem->setText(8, QApplication::translate("VoipCallsDialog", "Comments", 0));
        ___qtreewidgetitem->setText(7, QApplication::translate("VoipCallsDialog", "State", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("VoipCallsDialog", "Packets", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("VoipCallsDialog", "Protocol", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("VoipCallsDialog", "To", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("VoipCallsDialog", "From", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("VoipCallsDialog", "Initial Speaker", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("VoipCallsDialog", "Stop Time", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("VoipCallsDialog", "Start Time", 0));
        hintLabel->setText(QApplication::translate("VoipCallsDialog", "<small></small>", 0));
    } // retranslateUi

};

namespace Ui {
    class VoipCallsDialog: public Ui_VoipCallsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOIP_CALLS_DIALOG_H
