/********************************************************************************
** Form generated from reading UI file 'preferences_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_DIALOG_H
#define UI_PREFERENCES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include "capture_preferences_frame.h"
#include "column_preferences_frame.h"
#include "filter_expressions_preferences_frame.h"
#include "font_color_preferences_frame.h"
#include "layout_preferences_frame.h"
#include "main_window_preferences_frame.h"

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTreeWidget *prefsTree;
    QStackedWidget *stackedWidget;
    MainWindowPreferencesFrame *appearanceFrame;
    LayoutPreferencesFrame *layoutFrame;
    ColumnPreferencesFrame *columnFrame;
    FontColorPreferencesFrame *fontandcolorFrame;
    CapturePreferencesFrame *captureFrame;
    FilterExpressionsPreferencesFrame *filterExpressonsFrame;
    QFrame *advancedFrame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *advancedSearchLineEdit;
    QSpacerItem *horizontalSpacer;
    QTreeWidget *advancedTree;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QStringLiteral("PreferencesDialog"));
        PreferencesDialog->resize(680, 475);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(PreferencesDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        prefsTree = new QTreeWidget(splitter);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        prefsTree->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(prefsTree);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(prefsTree);
        new QTreeWidgetItem(prefsTree);
        new QTreeWidgetItem(prefsTree);
        prefsTree->setObjectName(QStringLiteral("prefsTree"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(prefsTree->sizePolicy().hasHeightForWidth());
        prefsTree->setSizePolicy(sizePolicy);
        prefsTree->setUniformRowHeights(true);
        prefsTree->setHeaderHidden(true);
        splitter->addWidget(prefsTree);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        appearanceFrame = new MainWindowPreferencesFrame();
        appearanceFrame->setObjectName(QStringLiteral("appearanceFrame"));
        stackedWidget->addWidget(appearanceFrame);
        layoutFrame = new LayoutPreferencesFrame();
        layoutFrame->setObjectName(QStringLiteral("layoutFrame"));
        stackedWidget->addWidget(layoutFrame);
        columnFrame = new ColumnPreferencesFrame();
        columnFrame->setObjectName(QStringLiteral("columnFrame"));
        stackedWidget->addWidget(columnFrame);
        fontandcolorFrame = new FontColorPreferencesFrame();
        fontandcolorFrame->setObjectName(QStringLiteral("fontandcolorFrame"));
        stackedWidget->addWidget(fontandcolorFrame);
        captureFrame = new CapturePreferencesFrame();
        captureFrame->setObjectName(QStringLiteral("captureFrame"));
        stackedWidget->addWidget(captureFrame);
        filterExpressonsFrame = new FilterExpressionsPreferencesFrame();
        filterExpressonsFrame->setObjectName(QStringLiteral("filterExpressonsFrame"));
        stackedWidget->addWidget(filterExpressonsFrame);
        advancedFrame = new QFrame();
        advancedFrame->setObjectName(QStringLiteral("advancedFrame"));
        verticalLayout_2 = new QVBoxLayout(advancedFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(advancedFrame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        advancedSearchLineEdit = new QLineEdit(advancedFrame);
        advancedSearchLineEdit->setObjectName(QStringLiteral("advancedSearchLineEdit"));

        horizontalLayout_2->addWidget(advancedSearchLineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        advancedTree = new QTreeWidget(advancedFrame);
        advancedTree->setObjectName(QStringLiteral("advancedTree"));
        advancedTree->setIndentation(0);
        advancedTree->setUniformRowHeights(true);

        verticalLayout_2->addWidget(advancedTree);

        stackedWidget->addWidget(advancedFrame);
        splitter->addWidget(stackedWidget);

        verticalLayout->addWidget(splitter);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {

        const bool __sortingEnabled = prefsTree->isSortingEnabled();
        prefsTree->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = prefsTree->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QApplication::translate("PreferencesDialog", "Appearance", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("PreferencesDialog", "Layout", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem->child(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("PreferencesDialog", "Columns", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem->child(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("PreferencesDialog", "Font and Colors", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = prefsTree->topLevelItem(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("PreferencesDialog", "Capture", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = prefsTree->topLevelItem(2);
        ___qtreewidgetitem5->setText(0, QApplication::translate("PreferencesDialog", "Filter Expressions", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = prefsTree->topLevelItem(3);
        ___qtreewidgetitem6->setText(0, QApplication::translate("PreferencesDialog", "Advanced", 0));
        prefsTree->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("PreferencesDialog", "Search:", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = advancedTree->headerItem();
        ___qtreewidgetitem7->setText(3, QApplication::translate("PreferencesDialog", "Value", 0));
        ___qtreewidgetitem7->setText(2, QApplication::translate("PreferencesDialog", "Type", 0));
        ___qtreewidgetitem7->setText(1, QApplication::translate("PreferencesDialog", "Status", 0));
        ___qtreewidgetitem7->setText(0, QApplication::translate("PreferencesDialog", "Name", 0));
        Q_UNUSED(PreferencesDialog);
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_DIALOG_H
