/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *Heading;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *Name;
    QLineEdit *NameText;
    QLabel *Surname;
    QLineEdit *SurnameText;
    QLabel *Pass;
    QLineEdit *PassText;
    QHBoxLayout *horizontalLayout;
    QPushButton *Cancel;
    QPushButton *Save;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(641, 522);
        Heading = new QLabel(Register);
        Heading->setObjectName(QString::fromUtf8("Heading"));
        Heading->setGeometry(QRect(250, 60, 81, 31));
        groupBox = new QGroupBox(Register);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(170, 130, 251, 161));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 30, 201, 118));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Name = new QLabel(widget);
        Name->setObjectName(QString::fromUtf8("Name"));

        gridLayout->addWidget(Name, 0, 0, 1, 1);

        NameText = new QLineEdit(widget);
        NameText->setObjectName(QString::fromUtf8("NameText"));

        gridLayout->addWidget(NameText, 0, 1, 1, 1);

        Surname = new QLabel(widget);
        Surname->setObjectName(QString::fromUtf8("Surname"));

        gridLayout->addWidget(Surname, 1, 0, 1, 1);

        SurnameText = new QLineEdit(widget);
        SurnameText->setObjectName(QString::fromUtf8("SurnameText"));

        gridLayout->addWidget(SurnameText, 1, 1, 1, 1);

        Pass = new QLabel(widget);
        Pass->setObjectName(QString::fromUtf8("Pass"));

        gridLayout->addWidget(Pass, 2, 0, 1, 1);

        PassText = new QLineEdit(widget);
        PassText->setObjectName(QString::fromUtf8("PassText"));

        gridLayout->addWidget(PassText, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Cancel = new QPushButton(widget);
        Cancel->setObjectName(QString::fromUtf8("Cancel"));

        horizontalLayout->addWidget(Cancel);

        Save = new QPushButton(widget);
        Save->setObjectName(QString::fromUtf8("Save"));

        horizontalLayout->addWidget(Save);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", nullptr));
        Heading->setText(QApplication::translate("Register", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        groupBox->setTitle(QApplication::translate("Register", "GroupBox", nullptr));
        Name->setText(QApplication::translate("Register", "\320\230\320\274\321\217", nullptr));
        Surname->setText(QApplication::translate("Register", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        Pass->setText(QApplication::translate("Register", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        Cancel->setText(QApplication::translate("Register", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        Save->setText(QApplication::translate("Register", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
