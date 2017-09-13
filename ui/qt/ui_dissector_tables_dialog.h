/********************************************************************************
** Form generated from reading UI file 'dissector_tables_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISSECTOR_TABLES_DIALOG_H
#define UI_DISSECTOR_TABLES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DissectorTablesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *tableTreeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DissectorTablesDialog)
    {
        if (DissectorTablesDialog->objectName().isEmpty())
            DissectorTablesDialog->setObjectName(QStringLiteral("DissectorTablesDialog"));
        DissectorTablesDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(DissectorTablesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableTreeWidget = new QTreeWidget(DissectorTablesDialog);
        tableTreeWidget->setObjectName(QStringLiteral("tableTreeWidget"));
        tableTreeWidget->setUniformRowHeights(true);

        verticalLayout->addWidget(tableTreeWidget);

        buttonBox = new QDialogButtonBox(DissectorTablesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DissectorTablesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DissectorTablesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DissectorTablesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DissectorTablesDialog);
    } // setupUi

    void retranslateUi(QDialog *DissectorTablesDialog)
    {
        DissectorTablesDialog->setWindowTitle(QApplication::translate("DissectorTablesDialog", "Dialog", 0));
        QTreeWidgetItem *___qtreewidgetitem = tableTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("DissectorTablesDialog", "Short Name", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("DissectorTablesDialog", "Table Name", 0));
    } // retranslateUi

};

namespace Ui {
    class DissectorTablesDialog: public Ui_DissectorTablesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISSECTOR_TABLES_DIALOG_H
