/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *w4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *left_Btn;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *right_Btn;
    QSpacerItem *verticalSpacer_2;
    QWidget *w3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *info_text;
    QWidget *w1;
    QVBoxLayout *verticalLayout;
    QLabel *l1;
    QLabel *l2;
    QLabel *l3;
    QWidget *w5;
    QGridLayout *gridLayout_3;
    QPushButton *startBtn;
    QWidget *w2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *name;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *input;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *setBtn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 350);
        MainWindow->setMinimumSize(QSize(0, 350));
        MainWindow->setMaximumSize(QSize(600, 400));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(600, 400));
        centralwidget->setStyleSheet(QString::fromUtf8("color:rgb(184, 220, 232);\n"
"background-color: rgb(27, 38, 45);\n"
"\n"
""));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        w4 = new QWidget(centralwidget);
        w4->setObjectName(QString::fromUtf8("w4"));
        horizontalLayout_2 = new QHBoxLayout(w4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        left_Btn = new QPushButton(w4);
        left_Btn->setObjectName(QString::fromUtf8("left_Btn"));
        left_Btn->setMinimumSize(QSize(0, 30));
        left_Btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(50, 129, 184);\n"
"	color:white;\n"
"	font-weight:550;\n"
"    border-radius: 2px;\n"
"    padding: 5px 7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#bee6fd;\n"
"}"));

        horizontalLayout_2->addWidget(left_Btn);

        horizontalSpacer_5 = new QSpacerItem(331, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        right_Btn = new QPushButton(w4);
        right_Btn->setObjectName(QString::fromUtf8("right_Btn"));
        right_Btn->setEnabled(true);
        right_Btn->setMinimumSize(QSize(0, 30));
        right_Btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(50, 129, 184);\n"
"	color:white;\n"
"	font-weight:550;\n"
"	border-radius: 2px;\n"
"    padding: 5px 7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#bee6fd;\n"
"}"));

        horizontalLayout_2->addWidget(right_Btn);


        gridLayout->addWidget(w4, 8, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 7, 0, 1, 1);

        w3 = new QWidget(centralwidget);
        w3->setObjectName(QString::fromUtf8("w3"));
        w3->setMinimumSize(QSize(0, 70));
        w3->setMaximumSize(QSize(16777215, 100));
        gridLayout_2 = new QGridLayout(w3);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(w3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 50));
        label->setMaximumSize(QSize(79, 16777215));
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        info_text = new QLabel(w3);
        info_text->setObjectName(QString::fromUtf8("info_text"));
        info_text->setMinimumSize(QSize(0, 10));
        info_text->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(info_text, 1, 0, 1, 1);


        gridLayout->addWidget(w3, 4, 0, 1, 1);

        w1 = new QWidget(centralwidget);
        w1->setObjectName(QString::fromUtf8("w1"));
        verticalLayout = new QVBoxLayout(w1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        l1 = new QLabel(w1);
        l1->setObjectName(QString::fromUtf8("l1"));
        l1->setMinimumSize(QSize(0, 55));
        l1->setMaximumSize(QSize(16777215, 55));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        l1->setFont(font);
        l1->setStyleSheet(QString::fromUtf8("font-weight:551;"));
        l1->setAlignment(Qt::AlignCenter);
        l1->setOpenExternalLinks(false);

        verticalLayout->addWidget(l1);

        l2 = new QLabel(w1);
        l2->setObjectName(QString::fromUtf8("l2"));
        l2->setMinimumSize(QSize(0, 25));
        l2->setMaximumSize(QSize(16777215, 100));
        QFont font1;
        font1.setPointSize(14);
        l2->setFont(font1);
        l2->setAlignment(Qt::AlignCenter);
        l2->setOpenExternalLinks(false);

        verticalLayout->addWidget(l2);

        l3 = new QLabel(w1);
        l3->setObjectName(QString::fromUtf8("l3"));
        l3->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setPointSize(9);
        l3->setFont(font2);
        l3->setAlignment(Qt::AlignCenter);
        l3->setOpenExternalLinks(true);

        verticalLayout->addWidget(l3);


        gridLayout->addWidget(w1, 0, 0, 1, 1);

        w5 = new QWidget(centralwidget);
        w5->setObjectName(QString::fromUtf8("w5"));
        w5->setMinimumSize(QSize(0, 56));
        gridLayout_3 = new QGridLayout(w5);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        startBtn = new QPushButton(w5);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        startBtn->setMinimumSize(QSize(350, 54));
        startBtn->setMaximumSize(QSize(350, 16777215));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        startBtn->setFont(font3);
        startBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(50, 129, 184);\n"
"	color:white;\n"
"	font-weight:550;\n"
"	border-radius: 2px;\n"
"    padding: 5px 7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#bee6fd;\n"
"}"));

        gridLayout_3->addWidget(startBtn, 0, 0, 1, 1);


        gridLayout->addWidget(w5, 6, 0, 1, 1);

        w2 = new QWidget(centralwidget);
        w2->setObjectName(QString::fromUtf8("w2"));
        horizontalLayout = new QHBoxLayout(w2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        name = new QLabel(w2);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout->addWidget(name);

        horizontalSpacer_2 = new QSpacerItem(9, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        input = new QLineEdit(w2);
        input->setObjectName(QString::fromUtf8("input"));
        input->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"color:black;"));

        horizontalLayout->addWidget(input);

        horizontalSpacer_3 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        setBtn = new QPushButton(w2);
        setBtn->setObjectName(QString::fromUtf8("setBtn"));
        setBtn->setMinimumSize(QSize(52, 0));
        setBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(50, 129, 184);\n"
"	color:white;\n"
"	font-weight:550;\n"
"    border-radius: 2px;\n"
"    padding: 5px 7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:#bee6fd;\n"
"}"));

        horizontalLayout->addWidget(setBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout->addWidget(w2, 2, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_4, 5, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        left_Btn->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        right_Btn->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\346\255\245", nullptr));
        label->setText(QString());
        info_text->setText(QCoreApplication::translate("MainWindow", "\346\255\243\345\234\250\344\270\213\350\275\275 FeelIt \344\270\273\351\242\230", nullptr));
        l1->setText(QCoreApplication::translate("MainWindow", "\345\227\250\357\274\201\344\275\240\345\245\275\345\221\200\357\274\201", nullptr));
        l2->setText(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250 Hugo \345\215\232\345\256\242\344\270\200\351\224\256\351\205\215\347\275\256\345\267\245\345\205\267", nullptr));
        l3->setText(QCoreApplication::translate("MainWindow", "<html>    <style>\n"
"        a {\n"
"            color:#3281b8;\n"
"        }\n"
"    </style><head/><body><p>By L_B__ From <a href=\"www.acking-you.xyz\">www.acking-you.xyz</a><br/><br/>\344\270\215\347\237\245\351\201\223\345\246\202\344\275\225\344\275\277\347\224\250\357\274\237<a href=\"www.bilibili.com\">\347\202\271\345\207\273\346\237\245\347\234\213\350\247\206\351\242\221\346\225\231\347\250\213</a></p></body></html>", nullptr));
        startBtn->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        name->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\350\267\257\345\276\204\357\274\232", nullptr));
        input->setText(QString());
        setBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
