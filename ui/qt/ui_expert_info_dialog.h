/********************************************************************************
** Form generated from reading UI file 'expert_info_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPERT_INFO_DIALOG_H
#define UI_EXPERT_INFO_DIALOG_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "elided_label.h"

QT_BEGIN_NAMESPACE

class Ui_ExpertInfoDialog
{
public:
    QAction *actionShowError;
    QAction *actionShowWarning;
    QAction *actionShowNote;
    QAction *actionShowChat;
    QAction *actionShowComment;
    QVBoxLayout *verticalLayout;
    QTreeWidget *expertInfoTreeWidget;
    ElidedLabel *hintLabel;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *limitCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *groupBySummaryCheckBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *searchLineEdit;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *severitiesPushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExpertInfoDialog)
    {
        if (ExpertInfoDialog->objectName().isEmpty())
            ExpertInfoDialog->setObjectName(QStringLiteral("ExpertInfoDialog"));
        ExpertInfoDialog->resize(620, 540);
        actionShowError = new QAction(ExpertInfoDialog);
        actionShowError->setObjectName(QStringLiteral("actionShowError"));
        actionShowError->setCheckable(true);
        actionShowWarning = new QAction(ExpertInfoDialog);
        actionShowWarning->setObjectName(QStringLiteral("actionShowWarning"));
        actionShowWarning->setCheckable(true);
        actionShowNote = new QAction(ExpertInfoDialog);
        actionShowNote->setObjectName(QStringLiteral("actionShowNote"));
        actionShowNote->setCheckable(true);
        actionShowChat = new QAction(ExpertInfoDialog);
        actionShowChat->setObjectName(QStringLiteral("actionShowChat"));
        actionShowChat->setCheckable(true);
        actionShowComment = new QAction(ExpertInfoDialog);
        actionShowComment->setObjectName(QStringLiteral("actionShowComment"));
        actionShowComment->setCheckable(true);
        verticalLayout = new QVBoxLayout(ExpertInfoDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        expertInfoTreeWidget = new QTreeWidget(ExpertInfoDialog);
        expertInfoTreeWidget->setObjectName(QStringLiteral("expertInfoTreeWidget"));
        expertInfoTreeWidget->setUniformRowHeights(true);
        expertInfoTreeWidget->setSortingEnabled(true);

        verticalLayout->addWidget(expertInfoTreeWidget);

        hintLabel = new ElidedLabel(ExpertInfoDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));

        verticalLayout->addWidget(hintLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        limitCheckBox = new QCheckBox(ExpertInfoDialog);
        limitCheckBox->setObjectName(QStringLiteral("limitCheckBox"));

        horizontalLayout_2->addWidget(limitCheckBox);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        groupBySummaryCheckBox = new QCheckBox(ExpertInfoDialog);
        groupBySummaryCheckBox->setObjectName(QStringLiteral("groupBySummaryCheckBox"));
        groupBySummaryCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(groupBySummaryCheckBox);

        horizontalSpacer = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(ExpertInfoDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        searchLineEdit = new QLineEdit(ExpertInfoDialog);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));

        horizontalLayout_2->addWidget(searchLineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        severitiesPushButton = new QPushButton(ExpertInfoDialog);
        severitiesPushButton->setObjectName(QStringLiteral("severitiesPushButton"));

        horizontalLayout_2->addWidget(severitiesPushButton);

        horizontalLayout_2->setStretch(5, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(ExpertInfoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExpertInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExpertInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExpertInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExpertInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ExpertInfoDialog)
    {
        ExpertInfoDialog->setWindowTitle(QApplication::translate("ExpertInfoDialog", "Dialog", 0));
        actionShowError->setText(QApplication::translate("ExpertInfoDialog", "Error", 0));
#ifndef QT_NO_TOOLTIP
        actionShowError->setToolTip(QApplication::translate("ExpertInfoDialog", "Show error packets.", 0));
#endif // QT_NO_TOOLTIP
        actionShowWarning->setText(QApplication::translate("ExpertInfoDialog", "Warning", 0));
#ifndef QT_NO_TOOLTIP
        actionShowWarning->setToolTip(QApplication::translate("ExpertInfoDialog", "Show warning packets.", 0));
#endif // QT_NO_TOOLTIP
        actionShowNote->setText(QApplication::translate("ExpertInfoDialog", "Note", 0));
#ifndef QT_NO_TOOLTIP
        actionShowNote->setToolTip(QApplication::translate("ExpertInfoDialog", "Show note packets.", 0));
#endif // QT_NO_TOOLTIP
        actionShowChat->setText(QApplication::translate("ExpertInfoDialog", "Chat", 0));
#ifndef QT_NO_TOOLTIP
        actionShowChat->setToolTip(QApplication::translate("ExpertInfoDialog", "Show chat packets.", 0));
#endif // QT_NO_TOOLTIP
        actionShowComment->setText(QApplication::translate("ExpertInfoDialog", "Comment", 0));
#ifndef QT_NO_TOOLTIP
        actionShowComment->setToolTip(QApplication::translate("ExpertInfoDialog", "Show comment packets.", 0));
#endif // QT_NO_TOOLTIP
        QTreeWidgetItem *___qtreewidgetitem = expertInfoTreeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ExpertInfoDialog", "Count", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("ExpertInfoDialog", "Protocol", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("ExpertInfoDialog", "Group", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("ExpertInfoDialog", "Summary", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("ExpertInfoDialog", "Severity", 0));
        hintLabel->setText(QApplication::translate("ExpertInfoDialog", "<small><i>A hint.</i></small>", 0));
        limitCheckBox->setText(QApplication::translate("ExpertInfoDialog", "Limit to Display Filter", 0));
        groupBySummaryCheckBox->setText(QApplication::translate("ExpertInfoDialog", "Group by summary", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("ExpertInfoDialog", "Search expert summaries.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("ExpertInfoDialog", "Search:", 0));
#ifndef QT_NO_TOOLTIP
        searchLineEdit->setToolTip(QApplication::translate("ExpertInfoDialog", "Search expert summaries.", 0));
#endif // QT_NO_TOOLTIP
        severitiesPushButton->setText(QApplication::translate("ExpertInfoDialog", "Show\342\200\246", 0));
    } // retranslateUi

};

namespace Ui {
    class ExpertInfoDialog: public Ui_ExpertInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERT_INFO_DIALOG_H
