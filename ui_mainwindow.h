/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Greeting;
    QGroupBox *groupBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *passtext;
    QLabel *login;
    QLineEdit *logintext;
    QLabel *pass;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *Register;
    QPushButton *ToComeIn;
    QMenuBar *menubar;
    QMenu *menuDailySports;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Greeting = new QLabel(centralwidget);
        Greeting->setObjectName(QString::fromUtf8("Greeting"));
        Greeting->setGeometry(QRect(310, 70, 131, 51));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 160, 311, 161));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 40, 201, 52));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        passtext = new QLineEdit(widget);
        passtext->setObjectName(QString::fromUtf8("passtext"));

        gridLayout->addWidget(passtext, 1, 1, 1, 1);

        login = new QLabel(widget);
        login->setObjectName(QString::fromUtf8("login"));

        gridLayout->addWidget(login, 0, 0, 1, 1);

        logintext = new QLineEdit(widget);
        logintext->setObjectName(QString::fromUtf8("logintext"));

        gridLayout->addWidget(logintext, 0, 1, 1, 1);

        pass = new QLabel(widget);
        pass->setObjectName(QString::fromUtf8("pass"));

        gridLayout->addWidget(pass, 1, 0, 1, 1);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(50, 110, 231, 31));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Register = new QPushButton(widget1);
        Register->setObjectName(QString::fromUtf8("Register"));

        horizontalLayout->addWidget(Register);

        ToComeIn = new QPushButton(widget1);
        ToComeIn->setObjectName(QString::fromUtf8("ToComeIn"));

        horizontalLayout->addWidget(ToComeIn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuDailySports = new QMenu(menubar);
        menuDailySports->setObjectName(QString::fromUtf8("menuDailySports"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuDailySports->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Greeting->setText(QApplication::translate("MainWindow", " \320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214!", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        login->setText(QApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        pass->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        Register->setText(QApplication::translate("MainWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        ToComeIn->setText(QApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        menuDailySports->setTitle(QApplication::translate("MainWindow", "DailySports", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
