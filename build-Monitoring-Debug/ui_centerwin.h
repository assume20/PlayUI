/********************************************************************************
** Form generated from reading UI file 'centerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTERWIN_H
#define UI_CENTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Centerwin
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *lay_1;
    QWidget *videowin1_1;
    QWidget *videowin1_2;
    QWidget *videowin1_3;
    QWidget *videowin1_4;
    QHBoxLayout *lay_2;
    QWidget *videowin2_1;
    QWidget *videowin2_2;
    QWidget *videowin2_3;
    QWidget *videowin2_4;
    QHBoxLayout *lay_3;
    QWidget *videowin3_1;
    QWidget *videowin3_2;
    QWidget *videowin3_3;
    QWidget *videowin3_4;
    QHBoxLayout *lay_4;
    QWidget *videowin4_1;
    QWidget *videowin4_2;
    QWidget *videowin4_3;
    QWidget *videowin4_4;

    void setupUi(QWidget *Centerwin)
    {
        if (Centerwin->objectName().isEmpty())
            Centerwin->setObjectName(QStringLiteral("Centerwin"));
        Centerwin->resize(1123, 749);
        verticalLayout_4 = new QVBoxLayout(Centerwin);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lay_1 = new QHBoxLayout();
        lay_1->setSpacing(0);
        lay_1->setObjectName(QStringLiteral("lay_1"));
        videowin1_1 = new QWidget(Centerwin);
        videowin1_1->setObjectName(QStringLiteral("videowin1_1"));
        videowin1_1->setStyleSheet(QStringLiteral(""));

        lay_1->addWidget(videowin1_1);

        videowin1_2 = new QWidget(Centerwin);
        videowin1_2->setObjectName(QStringLiteral("videowin1_2"));
        videowin1_2->setStyleSheet(QStringLiteral(""));

        lay_1->addWidget(videowin1_2);

        videowin1_3 = new QWidget(Centerwin);
        videowin1_3->setObjectName(QStringLiteral("videowin1_3"));
        videowin1_3->setStyleSheet(QStringLiteral(""));

        lay_1->addWidget(videowin1_3);

        videowin1_4 = new QWidget(Centerwin);
        videowin1_4->setObjectName(QStringLiteral("videowin1_4"));
        videowin1_4->setStyleSheet(QStringLiteral(""));

        lay_1->addWidget(videowin1_4);


        verticalLayout_4->addLayout(lay_1);

        lay_2 = new QHBoxLayout();
        lay_2->setSpacing(0);
        lay_2->setObjectName(QStringLiteral("lay_2"));
        videowin2_1 = new QWidget(Centerwin);
        videowin2_1->setObjectName(QStringLiteral("videowin2_1"));

        lay_2->addWidget(videowin2_1);

        videowin2_2 = new QWidget(Centerwin);
        videowin2_2->setObjectName(QStringLiteral("videowin2_2"));
        videowin2_2->setStyleSheet(QStringLiteral(""));

        lay_2->addWidget(videowin2_2);

        videowin2_3 = new QWidget(Centerwin);
        videowin2_3->setObjectName(QStringLiteral("videowin2_3"));

        lay_2->addWidget(videowin2_3);

        videowin2_4 = new QWidget(Centerwin);
        videowin2_4->setObjectName(QStringLiteral("videowin2_4"));
        videowin2_4->setStyleSheet(QStringLiteral(""));

        lay_2->addWidget(videowin2_4);


        verticalLayout_4->addLayout(lay_2);

        lay_3 = new QHBoxLayout();
        lay_3->setSpacing(0);
        lay_3->setObjectName(QStringLiteral("lay_3"));
        videowin3_1 = new QWidget(Centerwin);
        videowin3_1->setObjectName(QStringLiteral("videowin3_1"));

        lay_3->addWidget(videowin3_1);

        videowin3_2 = new QWidget(Centerwin);
        videowin3_2->setObjectName(QStringLiteral("videowin3_2"));

        lay_3->addWidget(videowin3_2);

        videowin3_3 = new QWidget(Centerwin);
        videowin3_3->setObjectName(QStringLiteral("videowin3_3"));
        videowin3_3->setStyleSheet(QStringLiteral(""));

        lay_3->addWidget(videowin3_3);

        videowin3_4 = new QWidget(Centerwin);
        videowin3_4->setObjectName(QStringLiteral("videowin3_4"));
        videowin3_4->setStyleSheet(QStringLiteral(""));

        lay_3->addWidget(videowin3_4);


        verticalLayout_4->addLayout(lay_3);

        lay_4 = new QHBoxLayout();
        lay_4->setSpacing(0);
        lay_4->setObjectName(QStringLiteral("lay_4"));
        videowin4_1 = new QWidget(Centerwin);
        videowin4_1->setObjectName(QStringLiteral("videowin4_1"));
        videowin4_1->setStyleSheet(QStringLiteral(""));

        lay_4->addWidget(videowin4_1);

        videowin4_2 = new QWidget(Centerwin);
        videowin4_2->setObjectName(QStringLiteral("videowin4_2"));

        lay_4->addWidget(videowin4_2);

        videowin4_3 = new QWidget(Centerwin);
        videowin4_3->setObjectName(QStringLiteral("videowin4_3"));

        lay_4->addWidget(videowin4_3);

        videowin4_4 = new QWidget(Centerwin);
        videowin4_4->setObjectName(QStringLiteral("videowin4_4"));
        videowin4_4->setStyleSheet(QStringLiteral(""));

        lay_4->addWidget(videowin4_4);


        verticalLayout_4->addLayout(lay_4);


        retranslateUi(Centerwin);

        QMetaObject::connectSlotsByName(Centerwin);
    } // setupUi

    void retranslateUi(QWidget *Centerwin)
    {
        Centerwin->setWindowTitle(QApplication::translate("Centerwin", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Centerwin: public Ui_Centerwin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTERWIN_H
