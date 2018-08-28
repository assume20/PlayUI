/********************************************************************************
** Form generated from reading UI file 'labDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABDLG_H
#define UI_LABDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_labDlg
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_modify;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_add;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_delete;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *labDlg)
    {
        if (labDlg->objectName().isEmpty())
            labDlg->setObjectName(QStringLiteral("labDlg"));
        labDlg->resize(468, 305);
        labDlg->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(labDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(labDlg);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setMaximumSize(QSize(16777215, 16777215));
        treeWidget->setAutoFillBackground(false);
        treeWidget->setDragEnabled(false);
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidget->setTextElideMode(Qt::ElideLeft);
        treeWidget->setAllColumnsShowFocus(false);
        treeWidget->setWordWrap(false);
        treeWidget->setExpandsOnDoubleClick(true);
        treeWidget->header()->setVisible(true);
        treeWidget->header()->setCascadingSectionResizes(false);
        treeWidget->header()->setDefaultSectionSize(190);
        treeWidget->header()->setHighlightSections(false);
        treeWidget->header()->setMinimumSectionSize(30);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(false));
        treeWidget->header()->setStretchLastSection(true);

        verticalLayout->addWidget(treeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        btn_ok = new QPushButton(labDlg);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_modify = new QPushButton(labDlg);
        btn_modify->setObjectName(QStringLiteral("btn_modify"));

        horizontalLayout->addWidget(btn_modify);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_add = new QPushButton(labDlg);
        btn_add->setObjectName(QStringLiteral("btn_add"));

        horizontalLayout->addWidget(btn_add);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_delete = new QPushButton(labDlg);
        btn_delete->setObjectName(QStringLiteral("btn_delete"));

        horizontalLayout->addWidget(btn_delete);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(labDlg);

        QMetaObject::connectSlotsByName(labDlg);
    } // setupUi

    void retranslateUi(QDialog *labDlg)
    {
        labDlg->setWindowTitle(QApplication::translate("labDlg", "\346\240\207\347\255\276\345\210\227\350\241\250", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("labDlg", "\345\247\223\345\220\215", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("labDlg", "\346\240\207\347\255\276\345\217\267", Q_NULLPTR));
        btn_ok->setText(QApplication::translate("labDlg", "\347\241\256\345\256\232", Q_NULLPTR));
        btn_modify->setText(QApplication::translate("labDlg", "\344\277\256\346\224\271", Q_NULLPTR));
        btn_add->setText(QApplication::translate("labDlg", "\345\242\236\345\212\240", Q_NULLPTR));
        btn_delete->setText(QApplication::translate("labDlg", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class labDlg: public Ui_labDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABDLG_H
