/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupup;
    QVBoxLayout *verticalLayout;
    QRadioButton *script1;
    QTextEdit *text1;
    QRadioButton *script2;
    QTextEdit *text2;
    QRadioButton *script3;
    QTextEdit *text3;
    QRadioButton *script4;
    QTextEdit *text4;
    QRadioButton *script5;
    QTextEdit *text5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *execute;
    QPushButton *quit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(934, 563);
        groupup = new QGroupBox(Widget);
        groupup->setObjectName(QStringLiteral("groupup"));
        groupup->setGeometry(QRect(10, 0, 911, 491));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupup->setFont(font);
        verticalLayout = new QVBoxLayout(groupup);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        script1 = new QRadioButton(groupup);
        script1->setObjectName(QStringLiteral("script1"));

        verticalLayout->addWidget(script1);

        text1 = new QTextEdit(groupup);
        text1->setObjectName(QStringLiteral("text1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(text1->sizePolicy().hasHeightForWidth());
        text1->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(text1);

        script2 = new QRadioButton(groupup);
        script2->setObjectName(QStringLiteral("script2"));

        verticalLayout->addWidget(script2);

        text2 = new QTextEdit(groupup);
        text2->setObjectName(QStringLiteral("text2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(text2->sizePolicy().hasHeightForWidth());
        text2->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(text2);

        script3 = new QRadioButton(groupup);
        script3->setObjectName(QStringLiteral("script3"));

        verticalLayout->addWidget(script3);

        text3 = new QTextEdit(groupup);
        text3->setObjectName(QStringLiteral("text3"));
        sizePolicy1.setHeightForWidth(text3->sizePolicy().hasHeightForWidth());
        text3->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(text3);

        script4 = new QRadioButton(groupup);
        script4->setObjectName(QStringLiteral("script4"));

        verticalLayout->addWidget(script4);

        text4 = new QTextEdit(groupup);
        text4->setObjectName(QStringLiteral("text4"));

        verticalLayout->addWidget(text4);

        script5 = new QRadioButton(groupup);
        script5->setObjectName(QStringLiteral("script5"));

        verticalLayout->addWidget(script5);

        text5 = new QTextEdit(groupup);
        text5->setObjectName(QStringLiteral("text5"));

        verticalLayout->addWidget(text5);

        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(370, 510, 195, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        execute = new QPushButton(layoutWidget);
        execute->setObjectName(QStringLiteral("execute"));

        horizontalLayout->addWidget(execute);

        quit = new QPushButton(layoutWidget);
        quit->setObjectName(QStringLiteral("quit"));

        horizontalLayout->addWidget(quit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupup->setTitle(QApplication::translate("Widget", "common sql scripts", Q_NULLPTR));
        script1->setText(QApplication::translate("Widget", "test1", Q_NULLPTR));
        script2->setText(QApplication::translate("Widget", "test2", Q_NULLPTR));
        script3->setText(QApplication::translate("Widget", "test3", Q_NULLPTR));
        script4->setText(QApplication::translate("Widget", "test4", Q_NULLPTR));
        script5->setText(QApplication::translate("Widget", "test5", Q_NULLPTR));
        execute->setText(QApplication::translate("Widget", "Execute", Q_NULLPTR));
        quit->setText(QApplication::translate("Widget", "Quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
