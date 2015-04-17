/********************************************************************************
** Form generated from reading UI file 'webpv.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBPV_H
#define UI_WEBPV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebPVClass
{
public:
    QLineEdit *lineEdit_net;
    QLabel *label;
    QPushButton *pushButton_start;
    QTextEdit *textEdit_info;
    QPushButton *pushButton_stop;

    void setupUi(QWidget *WebPVClass)
    {
        if (WebPVClass->objectName().isEmpty())
            WebPVClass->setObjectName(QStringLiteral("WebPVClass"));
        WebPVClass->resize(600, 570);
        lineEdit_net = new QLineEdit(WebPVClass);
        lineEdit_net->setObjectName(QStringLiteral("lineEdit_net"));
        lineEdit_net->setGeometry(QRect(40, 10, 551, 31));
        label = new QLabel(WebPVClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 54, 12));
        pushButton_start = new QPushButton(WebPVClass);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));
        pushButton_start->setGeometry(QRect(10, 50, 271, 31));
        textEdit_info = new QTextEdit(WebPVClass);
        textEdit_info->setObjectName(QStringLiteral("textEdit_info"));
        textEdit_info->setGeometry(QRect(10, 90, 581, 471));
        pushButton_stop = new QPushButton(WebPVClass);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        pushButton_stop->setGeometry(QRect(330, 50, 261, 31));

        retranslateUi(WebPVClass);

        QMetaObject::connectSlotsByName(WebPVClass);
    } // setupUi

    void retranslateUi(QWidget *WebPVClass)
    {
        WebPVClass->setWindowTitle(QApplication::translate("WebPVClass", "WebPV", 0));
        label->setText(QApplication::translate("WebPVClass", "URL\357\274\232", 0));
        pushButton_start->setText(QApplication::translate("WebPVClass", "Start", 0));
        pushButton_stop->setText(QApplication::translate("WebPVClass", "End", 0));
    } // retranslateUi

};

namespace Ui {
    class WebPVClass: public Ui_WebPVClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBPV_H
