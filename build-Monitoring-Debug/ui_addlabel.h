/********************************************************************************
** Form generated from reading UI file 'addlabel.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDLABEL_H
#define UI_ADDLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addlabel
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QLineEdit *led_labid;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_2;
    QLineEdit *led_name;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_3;
    QToolButton *tBtn_color;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *addlabel)
    {
        if (addlabel->objectName().isEmpty())
            addlabel->setObjectName(QStringLiteral("addlabel"));
        addlabel->resize(249, 129);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addlabel->sizePolicy().hasHeightForWidth());
        addlabel->setSizePolicy(sizePolicy);
        addlabel->setMaximumSize(QSize(249, 163));
        addlabel->setAcceptDrops(false);
        verticalLayout = new QVBoxLayout(addlabel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        label = new QLabel(addlabel);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label);

        led_labid = new QLineEdit(addlabel);
        led_labid->setObjectName(QStringLiteral("led_labid"));
        sizePolicy1.setHeightForWidth(led_labid->sizePolicy().hasHeightForWidth());
        led_labid->setSizePolicy(sizePolicy1);
        led_labid->setMinimumSize(QSize(167, 0));
        led_labid->setMaximumSize(QSize(167, 16777215));

        horizontalLayout_2->addWidget(led_labid);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        label_2 = new QLabel(addlabel);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_2);

        led_name = new QLineEdit(addlabel);
        led_name->setObjectName(QStringLiteral("led_name"));
        sizePolicy1.setHeightForWidth(led_name->sizePolicy().hasHeightForWidth());
        led_name->setSizePolicy(sizePolicy1);
        led_name->setMinimumSize(QSize(167, 0));
        led_name->setMaximumSize(QSize(167, 16777215));

        horizontalLayout_4->addWidget(led_name);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        label_3 = new QLabel(addlabel);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        tBtn_color = new QToolButton(addlabel);
        tBtn_color->setObjectName(QStringLiteral("tBtn_color"));
        tBtn_color->setEnabled(true);
        tBtn_color->setMinimumSize(QSize(51, 19));
        tBtn_color->setMaximumSize(QSize(51, 19));
        tBtn_color->setCheckable(false);

        horizontalLayout_3->addWidget(tBtn_color);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_ok = new QPushButton(addlabel);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_cancel = new QPushButton(addlabel);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(addlabel);

        QMetaObject::connectSlotsByName(addlabel);
    } // setupUi

    void retranslateUi(QDialog *addlabel)
    {
        addlabel->setWindowTitle(QApplication::translate("addlabel", "\346\267\273\345\212\240\346\240\207\347\255\276", Q_NULLPTR));
        label->setText(QApplication::translate("addlabel", "\346\240\207\347\255\276\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("addlabel", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("addlabel", "\351\242\234\350\211\262\357\274\232", Q_NULLPTR));
        tBtn_color->setText(QString());
        btn_ok->setText(QApplication::translate("addlabel", "\347\241\256\345\256\232", Q_NULLPTR));
        btn_cancel->setText(QApplication::translate("addlabel", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addlabel: public Ui_addlabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDLABEL_H
