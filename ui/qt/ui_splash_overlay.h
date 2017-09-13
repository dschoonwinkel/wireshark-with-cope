/********************************************************************************
** Form generated from reading UI file 'splash_overlay.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASH_OVERLAY_H
#define UI_SPLASH_OVERLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SplashOverlay
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *actionLabel;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *SplashOverlay)
    {
        if (SplashOverlay->objectName().isEmpty())
            SplashOverlay->setObjectName(QStringLiteral("SplashOverlay"));
        SplashOverlay->setEnabled(true);
        SplashOverlay->resize(400, 300);
        horizontalLayout = new QHBoxLayout(SplashOverlay);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(116, 50, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        actionLabel = new QLabel(SplashOverlay);
        actionLabel->setObjectName(QStringLiteral("actionLabel"));

        verticalLayout->addWidget(actionLabel);

        progressBar = new QProgressBar(SplashOverlay);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);

        verticalLayout->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(116, 50, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(SplashOverlay);

        QMetaObject::connectSlotsByName(SplashOverlay);
    } // setupUi

    void retranslateUi(QWidget *SplashOverlay)
    {
        SplashOverlay->setWindowTitle(QApplication::translate("SplashOverlay", "Form", 0));
        actionLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SplashOverlay: public Ui_SplashOverlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_OVERLAY_H
