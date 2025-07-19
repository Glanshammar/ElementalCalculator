/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionStandard;
    QAction *actionScientific;
    QAction *actionDate_Calculation;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *mainLayout;
    QVBoxLayout *responseLayout;
    QLabel *responseLabel;
    QFrame *line;
    QHBoxLayout *buttonLayout1;
    QToolButton *buttonAddition;
    QToolButton *buttonSubtraction;
    QToolButton *buttonDivision;
    QToolButton *buttonMultiplication;
    QToolButton *buttonEquals;
    QHBoxLayout *buttonLayout2;
    QToolButton *button1;
    QToolButton *button2;
    QToolButton *button3;
    QHBoxLayout *buttonLayout3;
    QToolButton *button4;
    QToolButton *button5;
    QToolButton *button6;
    QMenuBar *menubar;
    QMenu *menuProgram;
    QMenu *menuModes;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(350, 500);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionStandard = new QAction(MainWindow);
        actionStandard->setObjectName("actionStandard");
        actionStandard->setCheckable(true);
        actionStandard->setChecked(true);
        actionScientific = new QAction(MainWindow);
        actionScientific->setObjectName("actionScientific");
        actionScientific->setCheckable(true);
        actionDate_Calculation = new QAction(MainWindow);
        actionDate_Calculation->setObjectName("actionDate_Calculation");
        actionDate_Calculation->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        mainLayout = new QVBoxLayout();
        mainLayout->setObjectName("mainLayout");
        responseLayout = new QVBoxLayout();
        responseLayout->setObjectName("responseLayout");
        responseLabel = new QLabel(centralwidget);
        responseLabel->setObjectName("responseLabel");
        responseLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        responseLayout->addWidget(responseLabel);


        mainLayout->addLayout(responseLayout);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        mainLayout->addWidget(line);

        buttonLayout1 = new QHBoxLayout();
        buttonLayout1->setObjectName("buttonLayout1");
        buttonAddition = new QToolButton(centralwidget);
        buttonAddition->setObjectName("buttonAddition");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonAddition->sizePolicy().hasHeightForWidth());
        buttonAddition->setSizePolicy(sizePolicy2);
        buttonAddition->setMinimumSize(QSize(64, 64));

        buttonLayout1->addWidget(buttonAddition);

        buttonSubtraction = new QToolButton(centralwidget);
        buttonSubtraction->setObjectName("buttonSubtraction");
        sizePolicy2.setHeightForWidth(buttonSubtraction->sizePolicy().hasHeightForWidth());
        buttonSubtraction->setSizePolicy(sizePolicy2);
        buttonSubtraction->setMinimumSize(QSize(64, 64));

        buttonLayout1->addWidget(buttonSubtraction);

        buttonDivision = new QToolButton(centralwidget);
        buttonDivision->setObjectName("buttonDivision");
        buttonDivision->setMinimumSize(QSize(64, 64));

        buttonLayout1->addWidget(buttonDivision);

        buttonMultiplication = new QToolButton(centralwidget);
        buttonMultiplication->setObjectName("buttonMultiplication");
        buttonMultiplication->setMinimumSize(QSize(64, 64));

        buttonLayout1->addWidget(buttonMultiplication);

        buttonEquals = new QToolButton(centralwidget);
        buttonEquals->setObjectName("buttonEquals");
        buttonEquals->setMinimumSize(QSize(64, 64));

        buttonLayout1->addWidget(buttonEquals);


        mainLayout->addLayout(buttonLayout1);

        buttonLayout2 = new QHBoxLayout();
        buttonLayout2->setObjectName("buttonLayout2");
        button1 = new QToolButton(centralwidget);
        button1->setObjectName("button1");
        button1->setMinimumSize(QSize(64, 64));

        buttonLayout2->addWidget(button1);

        button2 = new QToolButton(centralwidget);
        button2->setObjectName("button2");
        button2->setMinimumSize(QSize(64, 64));

        buttonLayout2->addWidget(button2);

        button3 = new QToolButton(centralwidget);
        button3->setObjectName("button3");
        button3->setMinimumSize(QSize(64, 64));

        buttonLayout2->addWidget(button3);


        mainLayout->addLayout(buttonLayout2);

        buttonLayout3 = new QHBoxLayout();
        buttonLayout3->setObjectName("buttonLayout3");
        button4 = new QToolButton(centralwidget);
        button4->setObjectName("button4");
        button4->setMinimumSize(QSize(64, 64));

        buttonLayout3->addWidget(button4);

        button5 = new QToolButton(centralwidget);
        button5->setObjectName("button5");
        button5->setMinimumSize(QSize(64, 64));

        buttonLayout3->addWidget(button5);

        button6 = new QToolButton(centralwidget);
        button6->setObjectName("button6");
        button6->setMinimumSize(QSize(64, 64));

        buttonLayout3->addWidget(button6);


        mainLayout->addLayout(buttonLayout3);


        gridLayout->addLayout(mainLayout, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 350, 21));
        menuProgram = new QMenu(menubar);
        menuProgram->setObjectName("menuProgram");
        menuModes = new QMenu(menubar);
        menuModes->setObjectName("menuModes");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuProgram->menuAction());
        menubar->addAction(menuModes->menuAction());
        menuProgram->addAction(actionExit);
        menuModes->addAction(actionStandard);
        menuModes->addAction(actionScientific);
        menuModes->addAction(actionDate_Calculation);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Elemental Calculator", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MainWindow", "Exit the program.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStandard->setText(QCoreApplication::translate("MainWindow", "Standard", nullptr));
        actionScientific->setText(QCoreApplication::translate("MainWindow", "Scientific", nullptr));
        actionDate_Calculation->setText(QCoreApplication::translate("MainWindow", "Date Calculation", nullptr));
        responseLabel->setText(QCoreApplication::translate("MainWindow", "Response Label", nullptr));
        buttonAddition->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        buttonSubtraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        buttonDivision->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        buttonMultiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        buttonEquals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        menuProgram->setTitle(QCoreApplication::translate("MainWindow", "Program", nullptr));
        menuModes->setTitle(QCoreApplication::translate("MainWindow", "Modes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
