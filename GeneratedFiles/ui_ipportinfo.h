/********************************************************************************
** Form generated from reading UI file 'ipportinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IPPORTINFO_H
#define UI_IPPORTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IPporttabel
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QTableWidget *tab;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *lab_ip;
    QLineEdit *led_ip;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lab_port;
    QLineEdit *led_port;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lab_name;
    QLineEdit *led_name;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *btn_add;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_delete;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout;
    QPushButton *btn_modify;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_apply;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QDialog *IPporttabel)
    {
        if (IPporttabel->objectName().isEmpty())
            IPporttabel->setObjectName(QStringLiteral("IPporttabel"));
        IPporttabel->resize(764, 267);
        verticalLayout_2 = new QVBoxLayout(IPporttabel);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tab = new QTableWidget(IPporttabel);
        if (tab->columnCount() < 3)
            tab->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tab->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setMinimumSize(QSize(527, 216));
        tab->setLayoutDirection(Qt::LeftToRight);
        tab->setAlternatingRowColors(false);
        tab->setSelectionMode(QAbstractItemView::SingleSelection);
        tab->setSelectionBehavior(QAbstractItemView::SelectRows);
        tab->setTextElideMode(Qt::ElideNone);
        tab->setShowGrid(true);
        tab->setGridStyle(Qt::SolidLine);
        tab->horizontalHeader()->setStretchLastSection(true);
        tab->verticalHeader()->setVisible(false);
        tab->verticalHeader()->setCascadingSectionResizes(true);
        tab->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tab->verticalHeader()->setStretchLastSection(false);

        gridLayout_3->addWidget(tab, 0, 0, 1, 1);

        frame = new QFrame(IPporttabel);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMaximumSize(QSize(211, 16777215));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(30);
        horizontalSpacer = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        lab_ip = new QLabel(frame);
        lab_ip->setObjectName(QStringLiteral("lab_ip"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_ip->sizePolicy().hasHeightForWidth());
        lab_ip->setSizePolicy(sizePolicy1);
        lab_ip->setMinimumSize(QSize(40, 0));
        lab_ip->setLayoutDirection(Qt::RightToLeft);
        lab_ip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lab_ip, 0, 1, 1, 1);

        led_ip = new QLineEdit(frame);
        led_ip->setObjectName(QStringLiteral("led_ip"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(led_ip->sizePolicy().hasHeightForWidth());
        led_ip->setSizePolicy(sizePolicy2);
        led_ip->setMinimumSize(QSize(133, 20));
        led_ip->setMaximumSize(QSize(133, 20));

        gridLayout_2->addWidget(led_ip, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        lab_port = new QLabel(frame);
        lab_port->setObjectName(QStringLiteral("lab_port"));
        sizePolicy1.setHeightForWidth(lab_port->sizePolicy().hasHeightForWidth());
        lab_port->setSizePolicy(sizePolicy1);
        lab_port->setMinimumSize(QSize(40, 0));

        gridLayout_2->addWidget(lab_port, 1, 1, 1, 1);

        led_port = new QLineEdit(frame);
        led_port->setObjectName(QStringLiteral("led_port"));
        sizePolicy2.setHeightForWidth(led_port->sizePolicy().hasHeightForWidth());
        led_port->setSizePolicy(sizePolicy2);
        led_port->setMinimumSize(QSize(133, 20));
        led_port->setMaximumSize(QSize(133, 20));

        gridLayout_2->addWidget(led_port, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        lab_name = new QLabel(frame);
        lab_name->setObjectName(QStringLiteral("lab_name"));
        sizePolicy1.setHeightForWidth(lab_name->sizePolicy().hasHeightForWidth());
        lab_name->setSizePolicy(sizePolicy1);
        lab_name->setMinimumSize(QSize(40, 0));

        gridLayout_2->addWidget(lab_name, 2, 1, 1, 1);

        led_name = new QLineEdit(frame);
        led_name->setObjectName(QStringLiteral("led_name"));
        sizePolicy2.setHeightForWidth(led_name->sizePolicy().hasHeightForWidth());
        led_name->setSizePolicy(sizePolicy2);
        led_name->setMinimumSize(QSize(133, 20));
        led_name->setMaximumSize(QSize(133, 20));

        gridLayout_2->addWidget(led_name, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_13 = new QSpacerItem(13, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        horizontalSpacer_12 = new QSpacerItem(13, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        horizontalSpacer_4 = new QSpacerItem(13, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalSpacer_20 = new QSpacerItem(20, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_20);

        btn_add = new QPushButton(frame);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        sizePolicy2.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy2);
        btn_add->setMaximumSize(QSize(61, 23));

        horizontalLayout->addWidget(btn_add);

        horizontalSpacer_5 = new QSpacerItem(13, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        btn_delete = new QPushButton(frame);
        btn_delete->setObjectName(QStringLiteral("btn_delete"));
        btn_delete->setMaximumSize(QSize(61, 23));

        horizontalLayout->addWidget(btn_delete);

        horizontalSpacer_6 = new QSpacerItem(13, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_modify = new QPushButton(frame);
        btn_modify->setObjectName(QStringLiteral("btn_modify"));
        sizePolicy2.setHeightForWidth(btn_modify->sizePolicy().hasHeightForWidth());
        btn_modify->setSizePolicy(sizePolicy2);
        btn_modify->setMaximumSize(QSize(61, 23));

        gridLayout->addWidget(btn_modify, 0, 2, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(20, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 0, 1, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(20, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 0, 3, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(20, 14, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_19, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_3->addWidget(frame, 0, 1, 2, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        btn_apply = new QPushButton(IPporttabel);
        btn_apply->setObjectName(QStringLiteral("btn_apply"));

        horizontalLayout_8->addWidget(btn_apply);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        btn_cancel = new QPushButton(IPporttabel);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout_8->addWidget(btn_cancel);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);


        gridLayout_3->addLayout(horizontalLayout_8, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);


        retranslateUi(IPporttabel);

        QMetaObject::connectSlotsByName(IPporttabel);
    } // setupUi

    void retranslateUi(QDialog *IPporttabel)
    {
        IPporttabel->setWindowTitle(QApplication::translate("IPporttabel", "Dialog", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("IPporttabel", "IP", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tab->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("IPporttabel", "\347\253\257\345\217\243\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tab->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("IPporttabel", "\347\233\221\346\216\247\345\220\215", Q_NULLPTR));
        lab_ip->setText(QApplication::translate("IPporttabel", "IP\357\274\232", Q_NULLPTR));
        lab_port->setText(QApplication::translate("IPporttabel", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        lab_name->setText(QApplication::translate("IPporttabel", "\347\233\221\346\216\247\345\220\215\357\274\232", Q_NULLPTR));
        btn_add->setText(QApplication::translate("IPporttabel", "\345\242\236\345\212\240", Q_NULLPTR));
        btn_delete->setText(QApplication::translate("IPporttabel", "\345\210\240\351\231\244", Q_NULLPTR));
        btn_modify->setText(QApplication::translate("IPporttabel", "\344\277\256\346\224\271", Q_NULLPTR));
        btn_apply->setText(QApplication::translate("IPporttabel", "\345\272\224\347\224\250", Q_NULLPTR));
        btn_cancel->setText(QApplication::translate("IPporttabel", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class IPporttabel: public Ui_IPporttabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IPPORTINFO_H
