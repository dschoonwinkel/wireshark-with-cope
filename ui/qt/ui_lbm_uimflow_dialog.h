/********************************************************************************
** Form generated from reading UI file 'lbm_uimflow_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LBM_UIMFLOW_DIALOG_H
#define UI_LBM_UIMFLOW_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_LBMUIMFlowDialog
{
public:
    QAction *actionReset;
    QAction *actionMoveUp10;
    QAction *actionMoveLeft10;
    QAction *actionMoveRight10;
    QAction *actionMoveDown10;
    QAction *actionMoveUp1;
    QAction *actionMoveLeft1;
    QAction *actionMoveRight1;
    QAction *actionMoveDown1;
    QAction *actionGoToPacket;
    QAction *actionFlowAny;
    QAction *actionFlowTcp;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QScrollBar *verticalScrollBar;
    QScrollBar *horizontalScrollBar;
    QFrame *frame;
    QCustomPlot *sequencePlot;
    QLabel *hintLabel;
    QHBoxLayout *controlHorizontalLayout;
    QLabel *label;
    QComboBox *showComboBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *resetButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *LBMUIMFlowDialog)
    {
        if (LBMUIMFlowDialog->objectName().isEmpty())
            LBMUIMFlowDialog->setObjectName(QStringLiteral("LBMUIMFlowDialog"));
        LBMUIMFlowDialog->resize(679, 568);
        actionReset = new QAction(LBMUIMFlowDialog);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        actionMoveUp10 = new QAction(LBMUIMFlowDialog);
        actionMoveUp10->setObjectName(QStringLiteral("actionMoveUp10"));
        actionMoveLeft10 = new QAction(LBMUIMFlowDialog);
        actionMoveLeft10->setObjectName(QStringLiteral("actionMoveLeft10"));
        actionMoveRight10 = new QAction(LBMUIMFlowDialog);
        actionMoveRight10->setObjectName(QStringLiteral("actionMoveRight10"));
        actionMoveDown10 = new QAction(LBMUIMFlowDialog);
        actionMoveDown10->setObjectName(QStringLiteral("actionMoveDown10"));
        actionMoveUp1 = new QAction(LBMUIMFlowDialog);
        actionMoveUp1->setObjectName(QStringLiteral("actionMoveUp1"));
        actionMoveLeft1 = new QAction(LBMUIMFlowDialog);
        actionMoveLeft1->setObjectName(QStringLiteral("actionMoveLeft1"));
        actionMoveRight1 = new QAction(LBMUIMFlowDialog);
        actionMoveRight1->setObjectName(QStringLiteral("actionMoveRight1"));
        actionMoveDown1 = new QAction(LBMUIMFlowDialog);
        actionMoveDown1->setObjectName(QStringLiteral("actionMoveDown1"));
        actionGoToPacket = new QAction(LBMUIMFlowDialog);
        actionGoToPacket->setObjectName(QStringLiteral("actionGoToPacket"));
        actionFlowAny = new QAction(LBMUIMFlowDialog);
        actionFlowAny->setObjectName(QStringLiteral("actionFlowAny"));
        actionFlowTcp = new QAction(LBMUIMFlowDialog);
        actionFlowTcp->setObjectName(QStringLiteral("actionFlowTcp"));
        verticalLayout = new QVBoxLayout(LBMUIMFlowDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalScrollBar = new QScrollBar(LBMUIMFlowDialog);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalScrollBar, 0, 1, 1, 1);

        horizontalScrollBar = new QScrollBar(LBMUIMFlowDialog);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalScrollBar, 1, 0, 1, 1);

        frame = new QFrame(LBMUIMFlowDialog);
        frame->setObjectName(QStringLiteral("frame"));

        gridLayout->addWidget(frame, 1, 1, 1, 1);

        sequencePlot = new QCustomPlot(LBMUIMFlowDialog);
        sequencePlot->setObjectName(QStringLiteral("sequencePlot"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(sequencePlot->sizePolicy().hasHeightForWidth());
        sequencePlot->setSizePolicy(sizePolicy);

        gridLayout->addWidget(sequencePlot, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        hintLabel = new QLabel(LBMUIMFlowDialog);
        hintLabel->setObjectName(QStringLiteral("hintLabel"));
        hintLabel->setWordWrap(true);

        verticalLayout->addWidget(hintLabel);

        controlHorizontalLayout = new QHBoxLayout();
        controlHorizontalLayout->setObjectName(QStringLiteral("controlHorizontalLayout"));
        label = new QLabel(LBMUIMFlowDialog);
        label->setObjectName(QStringLiteral("label"));

        controlHorizontalLayout->addWidget(label);

        showComboBox = new QComboBox(LBMUIMFlowDialog);
        showComboBox->setObjectName(QStringLiteral("showComboBox"));

        controlHorizontalLayout->addWidget(showComboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        controlHorizontalLayout->addItem(horizontalSpacer_4);

        controlHorizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(controlHorizontalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        resetButton = new QPushButton(LBMUIMFlowDialog);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        horizontalLayout->addWidget(resetButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(LBMUIMFlowDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(LBMUIMFlowDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), LBMUIMFlowDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LBMUIMFlowDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LBMUIMFlowDialog);
    } // setupUi

    void retranslateUi(QDialog *LBMUIMFlowDialog)
    {
        LBMUIMFlowDialog->setWindowTitle(QApplication::translate("LBMUIMFlowDialog", "LBM UIM Flows", 0));
        actionReset->setText(QApplication::translate("LBMUIMFlowDialog", "Reset Diagram", 0));
#ifndef QT_NO_TOOLTIP
        actionReset->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Reset the diagram to its initial state.", 0));
#endif // QT_NO_TOOLTIP
        actionReset->setShortcut(QApplication::translate("LBMUIMFlowDialog", "0", 0));
        actionMoveUp10->setText(QApplication::translate("LBMUIMFlowDialog", "Move Up 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveUp10->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Move up 10 pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveUp10->setShortcut(QApplication::translate("LBMUIMFlowDialog", "Up", 0));
        actionMoveLeft10->setText(QApplication::translate("LBMUIMFlowDialog", "Move Left 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft10->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Move left 10 pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft10->setShortcut(QApplication::translate("LBMUIMFlowDialog", "Left", 0));
        actionMoveRight10->setText(QApplication::translate("LBMUIMFlowDialog", "Move Right 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight10->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Move right 10 pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight10->setShortcut(QApplication::translate("LBMUIMFlowDialog", "Right", 0));
        actionMoveDown10->setText(QApplication::translate("LBMUIMFlowDialog", "Move Down 10 Pixels", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveDown10->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Move down 10 pixels", 0));
#endif // QT_NO_TOOLTIP
        actionMoveDown10->setShortcut(QApplication::translate("LBMUIMFlowDialog", "Down", 0));
        actionMoveUp1->setText(QApplication::translate("LBMUIMFlowDialog", "Move Up 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveUp1->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Move up 1 pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveUp1->setShortcut(QApplication::translate("LBMUIMFlowDialog", "Shift+Up", 0));
        actionMoveLeft1->setText(QApplication::translate("LBMUIMFlowDialog", "Move Left 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveLeft1->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Move left 1 pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveLeft1->setShortcut(QApplication::translate("LBMUIMFlowDialog", "Shift+Left", 0));
        actionMoveRight1->setText(QApplication::translate("LBMUIMFlowDialog", "Move Right 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveRight1->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Move right 1 pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveRight1->setShortcut(QApplication::translate("LBMUIMFlowDialog", "Shift+Right", 0));
        actionMoveDown1->setText(QApplication::translate("LBMUIMFlowDialog", "Move Down 1 Pixel", 0));
#ifndef QT_NO_TOOLTIP
        actionMoveDown1->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Move down 1 pixel", 0));
#endif // QT_NO_TOOLTIP
        actionMoveDown1->setShortcut(QApplication::translate("LBMUIMFlowDialog", "Shift+Down", 0));
        actionGoToPacket->setText(QApplication::translate("LBMUIMFlowDialog", "Go To Packet Under Cursor", 0));
#ifndef QT_NO_TOOLTIP
        actionGoToPacket->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Go to packet currently under the cursor", 0));
#endif // QT_NO_TOOLTIP
        actionGoToPacket->setShortcut(QApplication::translate("LBMUIMFlowDialog", "G", 0));
        actionFlowAny->setText(QApplication::translate("LBMUIMFlowDialog", "All Flows", 0));
#ifndef QT_NO_TOOLTIP
        actionFlowAny->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Show flows for all packets", 0));
#endif // QT_NO_TOOLTIP
        actionFlowAny->setShortcut(QApplication::translate("LBMUIMFlowDialog", "1", 0));
        actionFlowTcp->setText(QApplication::translate("LBMUIMFlowDialog", "TCP Flows", 0));
#ifndef QT_NO_TOOLTIP
        actionFlowTcp->setToolTip(QApplication::translate("LBMUIMFlowDialog", "Show only TCP flow information", 0));
#endif // QT_NO_TOOLTIP
        actionFlowTcp->setShortcut(QApplication::translate("LBMUIMFlowDialog", "1", 0));
#ifndef QT_NO_TOOLTIP
        hintLabel->setToolTip(QApplication::translate("LBMUIMFlowDialog", "<html><head/><body>\n"
"\n"
"<h3>Valuable and amazing time-saving keyboard shortcuts</h3>\n"
"<table><tbody>\n"
"\n"
"<tr><th>0</th><td>Reset graph to its initial state</td></th>\n"
"\n"
"<tr><th>\342\206\222</th><td>Move right 10 pixels</td></th>\n"
"<tr><th>\342\206\220</th><td>Move left 10 pixels</td></th>\n"
"<tr><th>\342\206\221</th><td>Move up 10 pixels</td></th>\n"
"<tr><th>\342\206\223</th><td>Move down 10 pixels</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\222</th><td>Move right 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\220</th><td>Move left 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\221</th><td>Move up 1 pixel</td></th>\n"
"<tr><th><i>Shift+</i>\342\206\223</th><td>Move down 1 pixel</td></th>\n"
"\n"
"<tr><th>g</th><td>Go to packet under cursor</td></th>\n"
"\n"
"</tbody></table>\n"
"</body></html>", 0));
#endif // QT_NO_TOOLTIP
        hintLabel->setText(QApplication::translate("LBMUIMFlowDialog", "<small><i>A hint</i></small>", 0));
        label->setText(QApplication::translate("LBMUIMFlowDialog", "Show:", 0));
        showComboBox->clear();
        showComboBox->insertItems(0, QStringList()
         << QApplication::translate("LBMUIMFlowDialog", "All packets", 0)
         << QApplication::translate("LBMUIMFlowDialog", "Displayed packets", 0)
        );
        resetButton->setText(QApplication::translate("LBMUIMFlowDialog", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class LBMUIMFlowDialog: public Ui_LBMUIMFlowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LBM_UIMFLOW_DIALOG_H
