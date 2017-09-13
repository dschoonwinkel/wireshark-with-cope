/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab_wireshark;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_logo;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_wireshark;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QWidget *tab_authors;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *pte_Authors;
    QWidget *tab_folders;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_folders;
    QWidget *tab_plugins;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *te_plugins;
    QWidget *tab_shortcuts;
    QVBoxLayout *verticalLayout_shortcuts;
    QTextEdit *te_shortcuts;
    QWidget *tab_license;
    QVBoxLayout *verticalLayout_5;
    QPlainTextEdit *pte_License;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(740, 600);
        verticalLayout_6 = new QVBoxLayout(AboutDialog);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(371, 231));
        tabWidget->setDocumentMode(false);
        tab_wireshark = new QWidget();
        tab_wireshark->setObjectName(QStringLiteral("tab_wireshark"));
        tab_wireshark->setEnabled(true);
        verticalLayout_7 = new QVBoxLayout(tab_wireshark);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_logo = new QLabel(tab_wireshark);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/about/wssplash.png")));
        label_logo->setScaledContents(false);
        label_logo->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label_logo);

        label_title = new QLabel(tab_wireshark);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_title);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_wireshark = new QLabel(tab_wireshark);
        label_wireshark->setObjectName(QStringLiteral("label_wireshark"));
        label_wireshark->setScaledContents(true);

        horizontalLayout_2->addWidget(label_wireshark);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_7->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 357, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        tabWidget->addTab(tab_wireshark, QString());
        tab_authors = new QWidget();
        tab_authors->setObjectName(QStringLiteral("tab_authors"));
        verticalLayout_2 = new QVBoxLayout(tab_authors);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pte_Authors = new QPlainTextEdit(tab_authors);
        pte_Authors->setObjectName(QStringLiteral("pte_Authors"));
        pte_Authors->setReadOnly(true);

        verticalLayout_2->addWidget(pte_Authors);

        tabWidget->addTab(tab_authors, QString());
        tab_folders = new QWidget();
        tab_folders->setObjectName(QStringLiteral("tab_folders"));
        verticalLayout_3 = new QVBoxLayout(tab_folders);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_folders = new QLabel(tab_folders);
        label_folders->setObjectName(QStringLiteral("label_folders"));
        label_folders->setTextFormat(Qt::RichText);
        label_folders->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_folders->setOpenExternalLinks(true);
        label_folders->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_3->addWidget(label_folders);

        tabWidget->addTab(tab_folders, QString());
        tab_plugins = new QWidget();
        tab_plugins->setObjectName(QStringLiteral("tab_plugins"));
        verticalLayout_4 = new QVBoxLayout(tab_plugins);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        te_plugins = new QTextEdit(tab_plugins);
        te_plugins->setObjectName(QStringLiteral("te_plugins"));
        te_plugins->setTabChangesFocus(true);
        te_plugins->setReadOnly(true);

        verticalLayout_4->addWidget(te_plugins);

        tabWidget->addTab(tab_plugins, QString());
        tab_shortcuts = new QWidget();
        tab_shortcuts->setObjectName(QStringLiteral("tab_shortcuts"));
        verticalLayout_shortcuts = new QVBoxLayout(tab_shortcuts);
        verticalLayout_shortcuts->setObjectName(QStringLiteral("verticalLayout_shortcuts"));
        te_shortcuts = new QTextEdit(tab_shortcuts);
        te_shortcuts->setObjectName(QStringLiteral("te_shortcuts"));
        te_shortcuts->setTabChangesFocus(true);
        te_shortcuts->setReadOnly(true);

        verticalLayout_shortcuts->addWidget(te_shortcuts);

        tabWidget->addTab(tab_shortcuts, QString());
        tab_license = new QWidget();
        tab_license->setObjectName(QStringLiteral("tab_license"));
        verticalLayout_5 = new QVBoxLayout(tab_license);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pte_License = new QPlainTextEdit(tab_license);
        pte_License->setObjectName(QStringLiteral("pte_License"));
        pte_License->setReadOnly(true);

        verticalLayout_5->addWidget(pte_License);

        tabWidget->addTab(tab_license, QString());

        verticalLayout_6->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_6->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About Wireshark", 0));
        label_logo->setText(QString());
        label_title->setText(QApplication::translate("AboutDialog", "<span size=\\\"x-large\\\" weight=\\\"bold\\\">Network Protocol Analyzer</span>", 0));
        label_wireshark->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_wireshark), QApplication::translate("AboutDialog", "Wireshark", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_authors), QApplication::translate("AboutDialog", "Authors", 0));
        label_folders->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_folders), QApplication::translate("AboutDialog", "Folders", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_plugins), QApplication::translate("AboutDialog", "Plugins", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_shortcuts), QApplication::translate("AboutDialog", "Keyboard Shortcuts", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_license), QApplication::translate("AboutDialog", "License", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
