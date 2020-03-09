/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *ButtonDivide;
    QPushButton *Button9;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button7;
    QPushButton *Button1;
    QPushButton *Buttonminus;
    QPushButton *Button6;
    QPushButton *Button3;
    QPushButton *ButtonMplus;
    QPushButton *Button2;
    QPushButton *ButtonEqual;
    QPushButton *Buttonplus;
    QPushButton *Buuton8;
    QPushButton *ButtonM;
    QPushButton *Button0;
    QPushButton *ButtonAC;
    QLineEdit *Display;
    QPushButton *ButtonPM;
    QPushButton *Buttonmulti;
    QPushButton *ButtonMminus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(676, 458);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ButtonDivide = new QPushButton(centralwidget);
        ButtonDivide->setObjectName(QString::fromUtf8("ButtonDivide"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ButtonDivide->sizePolicy().hasHeightForWidth());
        ButtonDivide->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        ButtonDivide->setFont(font);
        ButtonDivide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonDivide, 2, 3, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setFont(font);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setFont(font);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button4, 5, 0, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setFont(font);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button5, 5, 1, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setFont(font);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setFont(font);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button1, 7, 0, 1, 1);

        Buttonminus = new QPushButton(centralwidget);
        Buttonminus->setObjectName(QString::fromUtf8("Buttonminus"));
        sizePolicy.setHeightForWidth(Buttonminus->sizePolicy().hasHeightForWidth());
        Buttonminus->setSizePolicy(sizePolicy);
        Buttonminus->setFont(font);
        Buttonminus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Buttonminus, 9, 3, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setFont(font);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button6, 5, 2, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setFont(font);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button3, 7, 2, 1, 1);

        ButtonMplus = new QPushButton(centralwidget);
        ButtonMplus->setObjectName(QString::fromUtf8("ButtonMplus"));
        sizePolicy.setHeightForWidth(ButtonMplus->sizePolicy().hasHeightForWidth());
        ButtonMplus->setSizePolicy(sizePolicy);
        ButtonMplus->setFont(font);
        ButtonMplus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonMplus, 2, 4, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setFont(font);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button2, 7, 1, 1, 1);

        ButtonEqual = new QPushButton(centralwidget);
        ButtonEqual->setObjectName(QString::fromUtf8("ButtonEqual"));
        sizePolicy.setHeightForWidth(ButtonEqual->sizePolicy().hasHeightForWidth());
        ButtonEqual->setSizePolicy(sizePolicy);
        ButtonEqual->setFont(font);
        ButtonEqual->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonEqual, 9, 4, 1, 1);

        Buttonplus = new QPushButton(centralwidget);
        Buttonplus->setObjectName(QString::fromUtf8("Buttonplus"));
        sizePolicy.setHeightForWidth(Buttonplus->sizePolicy().hasHeightForWidth());
        Buttonplus->setSizePolicy(sizePolicy);
        Buttonplus->setFont(font);
        Buttonplus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Buttonplus, 7, 3, 1, 1);

        Buuton8 = new QPushButton(centralwidget);
        Buuton8->setObjectName(QString::fromUtf8("Buuton8"));
        sizePolicy.setHeightForWidth(Buuton8->sizePolicy().hasHeightForWidth());
        Buuton8->setSizePolicy(sizePolicy);
        Buuton8->setFont(font);
        Buuton8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Buuton8, 2, 1, 1, 1);

        ButtonM = new QPushButton(centralwidget);
        ButtonM->setObjectName(QString::fromUtf8("ButtonM"));
        sizePolicy.setHeightForWidth(ButtonM->sizePolicy().hasHeightForWidth());
        ButtonM->setSizePolicy(sizePolicy);
        ButtonM->setFont(font);
        ButtonM->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonM, 7, 4, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setFont(font);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Button0, 9, 1, 1, 1);

        ButtonAC = new QPushButton(centralwidget);
        ButtonAC->setObjectName(QString::fromUtf8("ButtonAC"));
        sizePolicy.setHeightForWidth(ButtonAC->sizePolicy().hasHeightForWidth());
        ButtonAC->setSizePolicy(sizePolicy);
        ButtonAC->setFont(font);
        ButtonAC->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonAC, 9, 0, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        Display->setFont(font1);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:gray;\n"
"	border:1px solid gray;\n"
"	color:#ffffff\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 1, 0, 1, 5);

        ButtonPM = new QPushButton(centralwidget);
        ButtonPM->setObjectName(QString::fromUtf8("ButtonPM"));
        sizePolicy.setHeightForWidth(ButtonPM->sizePolicy().hasHeightForWidth());
        ButtonPM->setSizePolicy(sizePolicy);
        ButtonPM->setFont(font);
        ButtonPM->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#c0c0c0;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonPM, 9, 2, 1, 1);

        Buttonmulti = new QPushButton(centralwidget);
        Buttonmulti->setObjectName(QString::fromUtf8("Buttonmulti"));
        sizePolicy.setHeightForWidth(Buttonmulti->sizePolicy().hasHeightForWidth());
        Buttonmulti->setSizePolicy(sizePolicy);
        Buttonmulti->setFont(font);
        Buttonmulti->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(Buttonmulti, 5, 3, 1, 1);

        ButtonMminus = new QPushButton(centralwidget);
        ButtonMminus->setObjectName(QString::fromUtf8("ButtonMminus"));
        sizePolicy.setHeightForWidth(ButtonMminus->sizePolicy().hasHeightForWidth());
        ButtonMminus->setSizePolicy(sizePolicy);
        ButtonMminus->setFont(font);
        ButtonMminus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF8C00;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background-color:#A9A9A9;\n"
"	border:1px solid gray;\n"
"	padding:5px;\n"
"}\n"
""));

        gridLayout->addWidget(ButtonMminus, 5, 4, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 676, 26));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        ButtonDivide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Buttonminus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        ButtonMplus->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        ButtonEqual->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Buttonplus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Buuton8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        ButtonM->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        ButtonAC->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        ButtonPM->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Buttonmulti->setText(QCoreApplication::translate("Calculator", "x", nullptr));
        ButtonMminus->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
