/********************************************************************************
** Form generated from reading UI file 'main_welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WELCOME_H
#define UI_MAIN_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "accordion_frame.h"
#include "capture_filter_combo.h"
#include "interface_tree.h"

QT_BEGIN_NAMESPACE

class Ui_MainWelcome
{
public:
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QWidget *childContainer;
    QVBoxLayout *verticalLayout_2;
    QWidget *bannerLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mainWelcomeBanner;
    QSpacerItem *bannerSpacer;
    QLabel *flavorBanner;
    AccordionFrame *openFrame;
    QVBoxLayout *verticalLayout;
    QLabel *recentLabel;
    QListWidget *recentList;
    QLabel *captureLabel;
    QWidget *captureFilterLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    CaptureFilterCombo *captureFilterComboBox;
    InterfaceTree *interfaceTree;
    QLabel *helpLabel;
    QLabel *helpLinks;
    QLabel *fullReleaseLabel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *MainWelcome)
    {
        if (MainWelcome->objectName().isEmpty())
            MainWelcome->setObjectName(QStringLiteral("MainWelcome"));
        MainWelcome->resize(811, 663);
        horizontalLayout_2 = new QHBoxLayout(MainWelcome);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(44, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        childContainer = new QWidget(MainWelcome);
        childContainer->setObjectName(QStringLiteral("childContainer"));
        verticalLayout_2 = new QVBoxLayout(childContainer);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        bannerLayout = new QWidget(childContainer);
        bannerLayout->setObjectName(QStringLiteral("bannerLayout"));
        bannerLayout->setMinimumSize(QSize(650, 0));
        horizontalLayout_3 = new QHBoxLayout(bannerLayout);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        mainWelcomeBanner = new QLabel(bannerLayout);
        mainWelcomeBanner->setObjectName(QStringLiteral("mainWelcomeBanner"));

        horizontalLayout_3->addWidget(mainWelcomeBanner);

        bannerSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(bannerSpacer);

        flavorBanner = new QLabel(bannerLayout);
        flavorBanner->setObjectName(QStringLiteral("flavorBanner"));
        flavorBanner->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(flavorBanner);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addWidget(bannerLayout);

        openFrame = new AccordionFrame(childContainer);
        openFrame->setObjectName(QStringLiteral("openFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(openFrame->sizePolicy().hasHeightForWidth());
        openFrame->setSizePolicy(sizePolicy);
        openFrame->setFrameShape(QFrame::NoFrame);
        openFrame->setFrameShadow(QFrame::Plain);
        openFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(openFrame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        recentLabel = new QLabel(openFrame);
        recentLabel->setObjectName(QStringLiteral("recentLabel"));

        verticalLayout->addWidget(recentLabel);

        recentList = new QListWidget(openFrame);
        recentList->setObjectName(QStringLiteral("recentList"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(recentList->sizePolicy().hasHeightForWidth());
        recentList->setSizePolicy(sizePolicy1);
        recentList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(recentList);


        verticalLayout_2->addWidget(openFrame);

        captureLabel = new QLabel(childContainer);
        captureLabel->setObjectName(QStringLiteral("captureLabel"));

        verticalLayout_2->addWidget(captureLabel);

        captureFilterLayout = new QWidget(childContainer);
        captureFilterLayout->setObjectName(QStringLiteral("captureFilterLayout"));
        horizontalLayout = new QHBoxLayout(captureFilterLayout);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        label = new QLabel(captureFilterLayout);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        captureFilterComboBox = new CaptureFilterCombo(captureFilterLayout);
        captureFilterComboBox->setObjectName(QStringLiteral("captureFilterComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(captureFilterComboBox->sizePolicy().hasHeightForWidth());
        captureFilterComboBox->setSizePolicy(sizePolicy2);
        captureFilterComboBox->setEditable(true);

        horizontalLayout->addWidget(captureFilterComboBox);


        verticalLayout_2->addWidget(captureFilterLayout);

        interfaceTree = new InterfaceTree(childContainer);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QStringLiteral("2"));
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        interfaceTree->setHeaderItem(__qtreewidgetitem);
        interfaceTree->setObjectName(QStringLiteral("interfaceTree"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(interfaceTree->sizePolicy().hasHeightForWidth());
        interfaceTree->setSizePolicy(sizePolicy3);
        interfaceTree->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        interfaceTree->setUniformRowHeights(true);
        interfaceTree->header()->setVisible(false);

        verticalLayout_2->addWidget(interfaceTree);

        helpLabel = new QLabel(childContainer);
        helpLabel->setObjectName(QStringLiteral("helpLabel"));

        verticalLayout_2->addWidget(helpLabel);

        helpLinks = new QLabel(childContainer);
        helpLinks->setObjectName(QStringLiteral("helpLinks"));
        helpLinks->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        helpLinks->setOpenExternalLinks(true);
        helpLinks->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(helpLinks);

        fullReleaseLabel = new QLabel(childContainer);
        fullReleaseLabel->setObjectName(QStringLiteral("fullReleaseLabel"));

        verticalLayout_2->addWidget(fullReleaseLabel);


        horizontalLayout_2->addWidget(childContainer);

        horizontalSpacer_2 = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 10);
        horizontalLayout_2->setStretch(1, 80);
        horizontalLayout_2->setStretch(2, 10);

        retranslateUi(MainWelcome);

        QMetaObject::connectSlotsByName(MainWelcome);
    } // setupUi

    void retranslateUi(QWidget *MainWelcome)
    {
        MainWelcome->setWindowTitle(QApplication::translate("MainWelcome", "Form", 0));
        mainWelcomeBanner->setText(QApplication::translate("MainWelcome", "<html><head/><body><p><span style=\" font-size:large;\">Welcome to Wireshark</span></p></body></html>", 0));
        recentLabel->setText(QApplication::translate("MainWelcome", "<h2>Open</h2>", 0));
#ifndef QT_NO_ACCESSIBILITY
        recentList->setAccessibleName(QApplication::translate("MainWelcome", "Recent capture files", 0));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        recentList->setAccessibleDescription(QApplication::translate("MainWelcome", "Capture files that have been opened previously", 0));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        captureLabel->setToolTip(QApplication::translate("MainWelcome", "<html><head/><body><p>Capture live packets from your network.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        captureLabel->setText(QApplication::translate("MainWelcome", "<h2>Capture</h2>", 0));
        label->setText(QApplication::translate("MainWelcome", "\342\200\246using this filter:", 0));
#ifndef QT_NO_ACCESSIBILITY
        interfaceTree->setAccessibleName(QApplication::translate("MainWelcome", "Interface list", 0));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        interfaceTree->setAccessibleDescription(QApplication::translate("MainWelcome", "List of available capture interfaces", 0));
#endif // QT_NO_ACCESSIBILITY
        helpLabel->setText(QApplication::translate("MainWelcome", "<h2>Learn</h2>", 0));
        helpLinks->setText(QApplication::translate("MainWelcome", "<html><head>\n"
"<style>\n"
"a:link {\n"
"  color: inherit;\n"
"  text-decoration: none;\n"
"}\n"
"a:hover {\n"
"  color: inherit;\n"
"  text-decoration: underline;\n"
"}\n"
"</style>\n"
"</head>\n"
"<body>\n"
"\n"
"<table><tr>\n"
"<th><a href=\"https://www.wireshark.org/docs/wsug_html_chunked/\">User's Guide</a></th>\n"
"\n"
"<td style=\"padding-left: 8px; padding-right: 8px;\">\302\267</td>\n"
"\n"
"<th><a href=\"https://wiki.wireshark.org/\">Wiki</a></th>\n"
"\n"
"<td style=\"padding-left: 8px; padding-right: 8px;\">\302\267</td>\n"
"\n"
"<th><a href=\"https://ask.wireshark.org/\">Questions and Answers</a></th>\n"
"\n"
"<td style=\"padding-left: 8px; padding-right: 8px;\">\302\267</td>\n"
"\n"
"<th><a href=\"https://www.wireshark.org/lists/\">Mailing Lists</a></th>\n"
"\n"
"</tr></table>\n"
"</body></html>", 0));
        fullReleaseLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWelcome: public Ui_MainWelcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WELCOME_H
