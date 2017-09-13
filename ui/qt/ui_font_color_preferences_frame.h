/********************************************************************************
** Form generated from reading UI file 'font_color_preferences_frame.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONT_COLOR_PREFERENCES_FRAME_H
#define UI_FONT_COLOR_PREFERENCES_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FontColorPreferencesFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *fontPushButton;
    QSpacerItem *horizontalSpacer;
    QLineEdit *fontSampleLineEdit;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QPushButton *ignoredBGPushButton;
    QLineEdit *ignoredSampleLineEdit;
    QPushButton *clientBGPushButton;
    QLineEdit *markedSampleLineEdit;
    QPushButton *clientFGPushButton;
    QLineEdit *clientSampleLineEdit;
    QPushButton *serverFGPushButton;
    QLineEdit *serverSampleLineEdit;
    QPushButton *markedFGPushButton;
    QPushButton *ignoredFGPushButton;
    QPushButton *serverBGPushButton;
    QPushButton *markedBGPushButton;
    QLineEdit *validFilterSampleLineEdit;
    QLineEdit *invalidFilterSampleLineEdit;
    QLineEdit *deprecatedFilterSampleLineEdit;
    QPushButton *validFilterBGPushButton;
    QPushButton *invalidFilterBGPushButton;
    QPushButton *deprecatedFilterBGPushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *FontColorPreferencesFrame)
    {
        if (FontColorPreferencesFrame->objectName().isEmpty())
            FontColorPreferencesFrame->setObjectName(QStringLiteral("FontColorPreferencesFrame"));
        FontColorPreferencesFrame->resize(540, 390);
        FontColorPreferencesFrame->setMinimumSize(QSize(540, 390));
        FontColorPreferencesFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(FontColorPreferencesFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(FontColorPreferencesFrame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        fontPushButton = new QPushButton(FontColorPreferencesFrame);
        fontPushButton->setObjectName(QStringLiteral("fontPushButton"));

        horizontalLayout->addWidget(fontPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        fontSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        fontSampleLineEdit->setObjectName(QStringLiteral("fontSampleLineEdit"));
        fontSampleLineEdit->setReadOnly(true);

        verticalLayout->addWidget(fontSampleLineEdit);

        label_3 = new QLabel(FontColorPreferencesFrame);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ignoredBGPushButton = new QPushButton(FontColorPreferencesFrame);
        ignoredBGPushButton->setObjectName(QStringLiteral("ignoredBGPushButton"));
        ignoredBGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        ignoredBGPushButton->setFlat(true);

        gridLayout->addWidget(ignoredBGPushButton, 1, 1, 1, 1);

        ignoredSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        ignoredSampleLineEdit->setObjectName(QStringLiteral("ignoredSampleLineEdit"));
        ignoredSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(ignoredSampleLineEdit, 1, 2, 1, 1);

        clientBGPushButton = new QPushButton(FontColorPreferencesFrame);
        clientBGPushButton->setObjectName(QStringLiteral("clientBGPushButton"));
        clientBGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        clientBGPushButton->setFlat(true);

        gridLayout->addWidget(clientBGPushButton, 2, 1, 1, 1);

        markedSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        markedSampleLineEdit->setObjectName(QStringLiteral("markedSampleLineEdit"));
        markedSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(markedSampleLineEdit, 0, 2, 1, 1);

        clientFGPushButton = new QPushButton(FontColorPreferencesFrame);
        clientFGPushButton->setObjectName(QStringLiteral("clientFGPushButton"));
        clientFGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        clientFGPushButton->setFlat(true);

        gridLayout->addWidget(clientFGPushButton, 2, 0, 1, 1);

        clientSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        clientSampleLineEdit->setObjectName(QStringLiteral("clientSampleLineEdit"));
        clientSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(clientSampleLineEdit, 2, 2, 1, 1);

        serverFGPushButton = new QPushButton(FontColorPreferencesFrame);
        serverFGPushButton->setObjectName(QStringLiteral("serverFGPushButton"));
        serverFGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        serverFGPushButton->setFlat(true);

        gridLayout->addWidget(serverFGPushButton, 3, 0, 1, 1);

        serverSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        serverSampleLineEdit->setObjectName(QStringLiteral("serverSampleLineEdit"));
        serverSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(serverSampleLineEdit, 3, 2, 1, 1);

        markedFGPushButton = new QPushButton(FontColorPreferencesFrame);
        markedFGPushButton->setObjectName(QStringLiteral("markedFGPushButton"));
        markedFGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        markedFGPushButton->setFlat(true);

        gridLayout->addWidget(markedFGPushButton, 0, 0, 1, 1);

        ignoredFGPushButton = new QPushButton(FontColorPreferencesFrame);
        ignoredFGPushButton->setObjectName(QStringLiteral("ignoredFGPushButton"));
        ignoredFGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        ignoredFGPushButton->setFlat(true);

        gridLayout->addWidget(ignoredFGPushButton, 1, 0, 1, 1);

        serverBGPushButton = new QPushButton(FontColorPreferencesFrame);
        serverBGPushButton->setObjectName(QStringLiteral("serverBGPushButton"));
        serverBGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        serverBGPushButton->setFlat(true);

        gridLayout->addWidget(serverBGPushButton, 3, 1, 1, 1);

        markedBGPushButton = new QPushButton(FontColorPreferencesFrame);
        markedBGPushButton->setObjectName(QStringLiteral("markedBGPushButton"));
        markedBGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        markedBGPushButton->setFlat(true);

        gridLayout->addWidget(markedBGPushButton, 0, 1, 1, 1);

        validFilterSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        validFilterSampleLineEdit->setObjectName(QStringLiteral("validFilterSampleLineEdit"));
        validFilterSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(validFilterSampleLineEdit, 4, 2, 1, 1);

        invalidFilterSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        invalidFilterSampleLineEdit->setObjectName(QStringLiteral("invalidFilterSampleLineEdit"));
        invalidFilterSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(invalidFilterSampleLineEdit, 5, 2, 1, 1);

        deprecatedFilterSampleLineEdit = new QLineEdit(FontColorPreferencesFrame);
        deprecatedFilterSampleLineEdit->setObjectName(QStringLiteral("deprecatedFilterSampleLineEdit"));
        deprecatedFilterSampleLineEdit->setReadOnly(true);

        gridLayout->addWidget(deprecatedFilterSampleLineEdit, 6, 2, 1, 1);

        validFilterBGPushButton = new QPushButton(FontColorPreferencesFrame);
        validFilterBGPushButton->setObjectName(QStringLiteral("validFilterBGPushButton"));
        validFilterBGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        validFilterBGPushButton->setFlat(true);

        gridLayout->addWidget(validFilterBGPushButton, 4, 1, 1, 1);

        invalidFilterBGPushButton = new QPushButton(FontColorPreferencesFrame);
        invalidFilterBGPushButton->setObjectName(QStringLiteral("invalidFilterBGPushButton"));
        invalidFilterBGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        invalidFilterBGPushButton->setFlat(true);

        gridLayout->addWidget(invalidFilterBGPushButton, 5, 1, 1, 1);

        deprecatedFilterBGPushButton = new QPushButton(FontColorPreferencesFrame);
        deprecatedFilterBGPushButton->setObjectName(QStringLiteral("deprecatedFilterBGPushButton"));
        deprecatedFilterBGPushButton->setStyleSheet(QStringLiteral("QPushButton { border: 1px solid palette(Dark); }"));
        deprecatedFilterBGPushButton->setFlat(true);

        gridLayout->addWidget(deprecatedFilterBGPushButton, 6, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(178, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(FontColorPreferencesFrame);

        QMetaObject::connectSlotsByName(FontColorPreferencesFrame);
    } // setupUi

    void retranslateUi(QFrame *FontColorPreferencesFrame)
    {
        FontColorPreferencesFrame->setWindowTitle(QApplication::translate("FontColorPreferencesFrame", "Frame", 0));
        label->setText(QApplication::translate("FontColorPreferencesFrame", "Main window font:", 0));
        fontPushButton->setText(QApplication::translate("FontColorPreferencesFrame", "Select Font", 0));
        fontSampleLineEdit->setText(QString());
        label_3->setText(QApplication::translate("FontColorPreferencesFrame", "Colors:", 0));
        ignoredSampleLineEdit->setText(QApplication::translate("FontColorPreferencesFrame", "Sample ignored packet text", 0));
        markedSampleLineEdit->setText(QApplication::translate("FontColorPreferencesFrame", "Sample marked packet text", 0));
        clientSampleLineEdit->setText(QApplication::translate("FontColorPreferencesFrame", "Sample \"Follow Stream\" client text", 0));
        serverSampleLineEdit->setText(QApplication::translate("FontColorPreferencesFrame", "Sample \"Follow Stream\" server text", 0));
        validFilterSampleLineEdit->setText(QApplication::translate("FontColorPreferencesFrame", "Sample valid filter", 0));
        invalidFilterSampleLineEdit->setText(QApplication::translate("FontColorPreferencesFrame", "Sample invalid filter", 0));
        deprecatedFilterSampleLineEdit->setText(QApplication::translate("FontColorPreferencesFrame", "Sample deprecated filter", 0));
    } // retranslateUi

};

namespace Ui {
    class FontColorPreferencesFrame: public Ui_FontColorPreferencesFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONT_COLOR_PREFERENCES_FRAME_H
