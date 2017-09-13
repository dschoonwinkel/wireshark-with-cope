/********************************************************************************
** Form generated from reading UI file 'export_object_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORT_OBJECT_DIALOG_H
#define UI_EXPORT_OBJECT_DIALOG_H

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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportObjectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *objectTree;
    QFrame *progressFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *progressLabel;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportObjectDialog)
    {
        if (ExportObjectDialog->objectName().isEmpty())
            ExportObjectDialog->setObjectName(QStringLiteral("ExportObjectDialog"));
        ExportObjectDialog->resize(750, 520);
        ExportObjectDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(ExportObjectDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        objectTree = new QTreeWidget(ExportObjectDialog);
        objectTree->setObjectName(QStringLiteral("objectTree"));
        objectTree->setRootIsDecorated(false);
        objectTree->setUniformRowHeights(true);
        objectTree->setItemsExpandable(false);
        objectTree->setExpandsOnDoubleClick(false);

        verticalLayout->addWidget(objectTree);

        progressFrame = new QFrame(ExportObjectDialog);
        progressFrame->setObjectName(QStringLiteral("progressFrame"));
        progressFrame->setEnabled(true);
        progressFrame->setFrameShape(QFrame::NoFrame);
        progressFrame->setFrameShadow(QFrame::Plain);
        progressFrame->setLineWidth(0);
        horizontalLayout = new QHBoxLayout(progressFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        progressLabel = new QLabel(progressFrame);
        progressLabel->setObjectName(QStringLiteral("progressLabel"));

        horizontalLayout->addWidget(progressLabel);

        progressBar = new QProgressBar(progressFrame);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setStyleSheet(QStringLiteral("QProgressBar { width: 10em; }"));
        progressBar->setMaximum(0);
        progressBar->setValue(-1);
        progressBar->setTextVisible(false);

        horizontalLayout->addWidget(progressBar);

        horizontalSpacer = new QSpacerItem(387, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalLayout->setStretch(2, 1);

        verticalLayout->addWidget(progressFrame);

        buttonBox = new QDialogButtonBox(ExportObjectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help|QDialogButtonBox::Save|QDialogButtonBox::SaveAll);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExportObjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportObjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportObjectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportObjectDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportObjectDialog)
    {
        ExportObjectDialog->setWindowTitle(QApplication::translate("ExportObjectDialog", "Dialog", 0));
        QTreeWidgetItem *___qtreewidgetitem = objectTree->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ExportObjectDialog", "Filename", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("ExportObjectDialog", "Size", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("ExportObjectDialog", "Content Type", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("ExportObjectDialog", "Hostname", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("ExportObjectDialog", "Packet", 0));
        progressLabel->setText(QApplication::translate("ExportObjectDialog", "Searching for objects", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportObjectDialog: public Ui_ExportObjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORT_OBJECT_DIALOG_H
