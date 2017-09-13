/********************************************************************************
** Form generated from reading UI file 'uat_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UAT_DIALOG_H
#define UI_UAT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "elided_label.h"

QT_BEGIN_NAMESPACE

class Ui_UatDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *uatTreeWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *newToolButton;
    QToolButton *deleteToolButton;
    QToolButton *copyToolButton;
    QSpacerItem *horizontalSpacer;
    ElidedLabel *pathLabel;
    QLabel *hintLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UatDialog)
    {
        if (UatDialog->objectName().isEmpty())
            UatDialog->setObjectName(QStringLiteral("UatDialog"));
        UatDialog->resize(566, 403);
        verticalLayout = new QVBoxLayout(UatDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        uatTreeWidget = new QTreeWidget(UatDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        uatTreeWidget->setHeaderItem(__qtreewidgetitem);
        uatTreeWidget->setObjectName(QStringLiteral("uatTreeWidget"));

        verticalLayout->addWidget(uatTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newToolButton = new QToolButton(UatDialog);
        newToolButton->setObjectName(QStringLiteral("newToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        newToolButton->setIcon(icon);

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new QToolButton(UatDialog);
        deleteToolButton->setObjectName(QStringLiteral("deleteToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/stock/minus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteToolButton->setIcon(icon1);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new QToolButton(UatDialog);
        copyToolButton->setObjectName(QStringLiteral("copyToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/stock/copy-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyToolButton->setIcon(icon2);

        horizontalLayout->addWidget(copyToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pathLabel = new ElidedLabel(UatDialog);
        pathLabel->setObjectName(QStringLiteral("pathLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pathLabel->sizePolicy().hasHeightForWidth());
        pathLabel->setSizePolicy(sizePolicy);
        pathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pathLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(pathLabel);

        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        hintLabel = new QLabel(UatDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        buttonBox = new QDialogButtonBox(UatDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UatDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UatDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UatDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UatDialog);
    } // setupUi

    void retranslateUi(QDialog *UatDialog)
    {
#ifndef QT_NO_TOOLTIP
        newToolButton->setToolTip(QApplication::translate("UatDialog", "Create a new entry.", 0));
#endif // QT_NO_TOOLTIP
        newToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        deleteToolButton->setToolTip(QApplication::translate("UatDialog", "Remove this entry.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        copyToolButton->setToolTip(QApplication::translate("UatDialog", "Copy this entry.", 0));
#endif // QT_NO_TOOLTIP
        copyToolButton->setText(QString());
        pathLabel->setText(QString());
        hintLabel->setText(QString());
        Q_UNUSED(UatDialog);
    } // retranslateUi

};

namespace Ui {
    class UatDialog: public Ui_UatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UAT_DIALOG_H
