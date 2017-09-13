/********************************************************************************
** Form generated from reading UI file 'filter_expressions_preferences_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTER_EXPRESSIONS_PREFERENCES_FRAME_H
#define UI_FILTER_EXPRESSIONS_PREFERENCES_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FilterExpressionsPreferencesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *expressionTreeWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *newToolButton;
    QToolButton *deleteToolButton;
    QToolButton *copyToolButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QFrame *FilterExpressionsPreferencesFrame)
    {
        if (FilterExpressionsPreferencesFrame->objectName().isEmpty())
            FilterExpressionsPreferencesFrame->setObjectName(QStringLiteral("FilterExpressionsPreferencesFrame"));
        FilterExpressionsPreferencesFrame->resize(513, 397);
        FilterExpressionsPreferencesFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(FilterExpressionsPreferencesFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        expressionTreeWidget = new QTreeWidget(FilterExpressionsPreferencesFrame);
        expressionTreeWidget->setObjectName(QStringLiteral("expressionTreeWidget"));

        verticalLayout->addWidget(expressionTreeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newToolButton = new QToolButton(FilterExpressionsPreferencesFrame);
        newToolButton->setObjectName(QStringLiteral("newToolButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/stock/plus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        newToolButton->setIcon(icon);

        horizontalLayout->addWidget(newToolButton);

        deleteToolButton = new QToolButton(FilterExpressionsPreferencesFrame);
        deleteToolButton->setObjectName(QStringLiteral("deleteToolButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/stock/minus-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteToolButton->setIcon(icon1);

        horizontalLayout->addWidget(deleteToolButton);

        copyToolButton = new QToolButton(FilterExpressionsPreferencesFrame);
        copyToolButton->setObjectName(QStringLiteral("copyToolButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/stock/copy-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        copyToolButton->setIcon(icon2);

        horizontalLayout->addWidget(copyToolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FilterExpressionsPreferencesFrame);

        QMetaObject::connectSlotsByName(FilterExpressionsPreferencesFrame);
    } // setupUi

    void retranslateUi(QFrame *FilterExpressionsPreferencesFrame)
    {
        FilterExpressionsPreferencesFrame->setWindowTitle(QApplication::translate("FilterExpressionsPreferencesFrame", "Frame", 0));
        QTreeWidgetItem *___qtreewidgetitem = expressionTreeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("FilterExpressionsPreferencesFrame", "Filter Expression", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("FilterExpressionsPreferencesFrame", "Button Label", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("FilterExpressionsPreferencesFrame", "Enabled", 0));
#ifndef QT_NO_TOOLTIP
        copyToolButton->setToolTip(QApplication::translate("FilterExpressionsPreferencesFrame", "Copy this filter.", 0));
#endif // QT_NO_TOOLTIP
        copyToolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FilterExpressionsPreferencesFrame: public Ui_FilterExpressionsPreferencesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTER_EXPRESSIONS_PREFERENCES_FRAME_H
