/********************************************************************************
** Form generated from reading UI file 'coloring_rules_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORING_RULES_DIALOG_H
#define UI_COLORING_RULES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ColoringRulesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *coloringRulesTreeWidget;
    QLabel *hintLabel;
    QHBoxLayout *horizontalLayout;
    QToolButton *newToolButton;
    QToolButton *deleteToolButton;
    QToolButton *copyToolButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *fGPushButton;
    QPushButton *bGPushButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColoringRulesDialog)
    {
        if (ColoringRulesDialog->objectName().isEmpty())
            ColoringRulesDialog->setObjectName(QStringLiteral("ColoringRulesDialog"));
        ColoringRulesDialog->resize(650, 480);
        verticalLayout = new QVBoxLayout(ColoringRulesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        coloringRulesTreeWidget = new QTreeWidget(ColoringRulesDialog);
        coloringRulesTreeWidget->setObjectName(QStringLiteral("coloringRulesTreeWidget"));
        coloringRulesTreeWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        coloringRulesTreeWidget->setTextElideMode(Qt::ElideMiddle);
        coloringRulesTreeWidget->setRootIsDecorated(false);
        coloringRulesTreeWidget->setUniformRowHeights(true);
        coloringRulesTreeWidget->setItemsExpandable(false);
        coloringRulesTreeWidget->setExpandsOnDoubleClick(false);

        verticalLayout->addWidget(coloringRulesTreeWidget);

        hintLabel = new QLabel(ColoringRulesDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newToolButton = new QToolButton(ColoringRulesDialog);
        newToolButton->setObjectName(QStringLiteral("newToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        newToolButton->setIcon(icon);

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new QToolButton(ColoringRulesDialog);
        deleteToolButton->setObjectName(QStringLiteral("deleteToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/stock/minus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteToolButton->setIcon(icon1);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new QToolButton(ColoringRulesDialog);
        copyToolButton->setObjectName(QStringLiteral("copyToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/stock/copy-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyToolButton->setIcon(icon2);

        horizontalLayout->addWidget(copyToolButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        fGPushButton = new QPushButton(ColoringRulesDialog);
        fGPushButton->setObjectName(QStringLiteral("fGPushButton"));
        fGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        fGPushButton->setAutoDefault(false);
        fGPushButton->setFlat(true);

        horizontalLayout->addWidget(fGPushButton);

        bGPushButton = new QPushButton(ColoringRulesDialog);
        bGPushButton->setObjectName(QStringLiteral("bGPushButton"));
        bGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        bGPushButton->setAutoDefault(false);
        bGPushButton->setFlat(true);

        horizontalLayout->addWidget(bGPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(6, 1);

        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ColoringRulesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ColoringRulesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColoringRulesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColoringRulesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ColoringRulesDialog);
    } // setupUi

    void retranslateUi(QDialog *ColoringRulesDialog)
    {
        ColoringRulesDialog->setWindowTitle(QApplication::translate("ColoringRulesDialog", "Dialog", 0));
        QTreeWidgetItem *___qtreewidgetitem = coloringRulesTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("ColoringRulesDialog", "Filter", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("ColoringRulesDialog", "Name", 0));
        hintLabel->setText(QApplication::translate("ColoringRulesDialog", "<small><i>A hint.</i></small>", 0));
#ifndef QT_NO_TOOLTIP
        newToolButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Add a new coloring rule.", 0));
#endif // QT_NO_TOOLTIP
        newToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        deleteToolButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Delete this coloring rule.", 0));
#endif // QT_NO_TOOLTIP
        deleteToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        copyToolButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Duplicate this coloring rule.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        fGPushButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Set the foreground color for this rule.", 0));
#endif // QT_NO_TOOLTIP
        fGPushButton->setText(QApplication::translate("ColoringRulesDialog", "Foreground", 0));
#ifndef QT_NO_TOOLTIP
        bGPushButton->setToolTip(QApplication::translate("ColoringRulesDialog", "Set the background color for this rule.", 0));
#endif // QT_NO_TOOLTIP
        bGPushButton->setText(QApplication::translate("ColoringRulesDialog", "Background", 0));
    } // retranslateUi

};

namespace Ui {
    class ColoringRulesDialog: public Ui_ColoringRulesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORING_RULES_DIALOG_H
