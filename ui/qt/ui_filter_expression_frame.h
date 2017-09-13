/********************************************************************************
** Form generated from reading UI file 'filter_expression_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTER_EXPRESSION_FRAME_H
#define UI_FILTER_EXPRESSION_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include "accordion_frame.h"
#include "display_filter_edit.h"
#include "syntax_line_edit.h"

QT_BEGIN_NAMESPACE

class Ui_FilterExpressionFrame
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *filterExpressionPreferencesToolButton;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelLabel;
    SyntaxLineEdit *labelLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *filterLabel;
    DisplayFilterEdit *displayFilterLineEdit;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(AccordionFrame *FilterExpressionFrame)
    {
        if (FilterExpressionFrame->objectName().isEmpty())
            FilterExpressionFrame->setObjectName(QStringLiteral("FilterExpressionFrame"));
        FilterExpressionFrame->resize(745, 34);
        FilterExpressionFrame->setFrameShape(QFrame::NoFrame);
        FilterExpressionFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(FilterExpressionFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        filterExpressionPreferencesToolButton = new QToolButton(FilterExpressionFrame);
        filterExpressionPreferencesToolButton->setObjectName(QStringLiteral("filterExpressionPreferencesToolButton"));

        horizontalLayout->addWidget(filterExpressionPreferencesToolButton);

        horizontalSpacer_3 = new QSpacerItem(88, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        labelLabel = new QLabel(FilterExpressionFrame);
        labelLabel->setObjectName(QStringLiteral("labelLabel"));

        horizontalLayout->addWidget(labelLabel);

        labelLineEdit = new SyntaxLineEdit(FilterExpressionFrame);
        labelLineEdit->setObjectName(QStringLiteral("labelLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLineEdit->sizePolicy().hasHeightForWidth());
        labelLineEdit->setSizePolicy(sizePolicy);
        labelLineEdit->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(labelLineEdit);

        horizontalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        filterLabel = new QLabel(FilterExpressionFrame);
        filterLabel->setObjectName(QStringLiteral("filterLabel"));

        horizontalLayout->addWidget(filterLabel);

        displayFilterLineEdit = new DisplayFilterEdit(FilterExpressionFrame);
        displayFilterLineEdit->setObjectName(QStringLiteral("displayFilterLineEdit"));
        sizePolicy.setHeightForWidth(displayFilterLineEdit->sizePolicy().hasHeightForWidth());
        displayFilterLineEdit->setSizePolicy(sizePolicy);
        displayFilterLineEdit->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(displayFilterLineEdit);

        horizontalSpacer = new QSpacerItem(20, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(FilterExpressionFrame);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setMaximumSize(QSize(16777215, 27));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(6, 1);

        retranslateUi(FilterExpressionFrame);

        QMetaObject::connectSlotsByName(FilterExpressionFrame);
    } // setupUi

    void retranslateUi(AccordionFrame *FilterExpressionFrame)
    {
        FilterExpressionFrame->setWindowTitle(QApplication::translate("FilterExpressionFrame", "Frame", 0));
        filterExpressionPreferencesToolButton->setText(QApplication::translate("FilterExpressionFrame", "Filter Expression Preferences\342\200\246", 0));
        labelLabel->setText(QApplication::translate("FilterExpressionFrame", "Label:", 0));
        filterLabel->setText(QApplication::translate("FilterExpressionFrame", "Filter:", 0));
    } // retranslateUi

};

namespace Ui {
    class FilterExpressionFrame: public Ui_FilterExpressionFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTER_EXPRESSION_FRAME_H
