/********************************************************************************
** Form generated from reading UI file 'page_1.ui'
**
** Created: Fri May 29 02:47:40 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_1_H
#define UI_PAGE_1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include "mybutton.h"

QT_BEGIN_NAMESPACE

class Ui_Page_1
{
public:
    myButton *stopButton;
    myButton *startButton;

    void setupUi(QWidget *Page_1)
    {
        if (Page_1->objectName().isEmpty())
            Page_1->setObjectName(QString::fromUtf8("Page_1"));
        Page_1->resize(800, 450);
        Page_1->setFocusPolicy(Qt::TabFocus);
        Page_1->setStyleSheet(QString::fromUtf8(""));
        stopButton = new myButton(Page_1);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(350, 350, 99, 41));
        startButton = new myButton(Page_1);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(350, 300, 99, 41));
        QWidget::setTabOrder(startButton, stopButton);

        retranslateUi(Page_1);

        QMetaObject::connectSlotsByName(Page_1);
    } // setupUi

    void retranslateUi(QWidget *Page_1)
    {
        Page_1->setWindowTitle(QApplication::translate("Page_1", "Form", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QString());
        startButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Page_1: public Ui_Page_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_1_H
