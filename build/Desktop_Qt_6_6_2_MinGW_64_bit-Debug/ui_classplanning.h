/********************************************************************************
** Form generated from reading UI file 'classplanning.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSPLANNING_H
#define UI_CLASSPLANNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClassPlanning
{
public:
    QWidget *centralwidget;
    QPushButton *recordButton;
    QPushButton *finalSubmitButton;
    QLabel *label;
    QWidget *widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *saturday;
    QCheckBox *sunday;
    QCheckBox *monday;
    QCheckBox *tuesday;
    QCheckBox *wednesday;
    QCheckBox *thursday;
    QCheckBox *friday;
    QWidget *widget_2;
    QComboBox *teachers;
    QComboBox *lessons;
    QComboBox *classes;
    QComboBox *numberOfClass;
    QLabel *backgroundColor;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ClassPlanning)
    {
        if (ClassPlanning->objectName().isEmpty())
            ClassPlanning->setObjectName("ClassPlanning");
        ClassPlanning->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClassPlanning->sizePolicy().hasHeightForWidth());
        ClassPlanning->setSizePolicy(sizePolicy);
        ClassPlanning->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color : rgb(166,167,255);\n"
"}"));
        centralwidget = new QWidget(ClassPlanning);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        centralwidget->setMouseTracking(false);
        centralwidget->setTabletTracking(false);
        centralwidget->setAcceptDrops(true);
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        recordButton = new QPushButton(centralwidget);
        recordButton->setObjectName("recordButton");
        recordButton->setGeometry(QRect(360, 360, 81, 31));
        recordButton->setCursor(QCursor(Qt::PointingHandCursor));
        recordButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(255, 41, 45);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        finalSubmitButton = new QPushButton(centralwidget);
        finalSubmitButton->setObjectName("finalSubmitButton");
        finalSubmitButton->setGeometry(QRect(340, 440, 121, 51));
        finalSubmitButton->setCursor(QCursor(Qt::PointingHandCursor));
        finalSubmitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color : rgb(240, 240, 240);\n"
"	border-radius : 10px;\n"
"	border : 1px solid rgb(0, 0, 0);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 40, 291, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Lucida Sans Unicode")});
        font.setPointSize(26);
        label->setFont(font);
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgb(46, 255, 112);\n"
"	border-radius: 10px;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 230, 781, 91));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(255, 251, 201);\n"
"	border-radius: 10px;\n"
"}\n"
""));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 781, 71));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 20, 0);
        saturday = new QCheckBox(horizontalLayoutWidget);
        saturday->setObjectName("saturday");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Lucida Sans Unicode")});
        font1.setPointSize(14);
        saturday->setFont(font1);
        saturday->setCursor(QCursor(Qt::PointingHandCursor));
        saturday->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(saturday);

        sunday = new QCheckBox(horizontalLayoutWidget);
        sunday->setObjectName("sunday");
        sunday->setFont(font1);
        sunday->setCursor(QCursor(Qt::PointingHandCursor));
        sunday->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(sunday);

        monday = new QCheckBox(horizontalLayoutWidget);
        monday->setObjectName("monday");
        monday->setFont(font1);
        monday->setCursor(QCursor(Qt::PointingHandCursor));
        monday->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(monday);

        tuesday = new QCheckBox(horizontalLayoutWidget);
        tuesday->setObjectName("tuesday");
        tuesday->setFont(font1);
        tuesday->setCursor(QCursor(Qt::PointingHandCursor));
        tuesday->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(tuesday);

        wednesday = new QCheckBox(horizontalLayoutWidget);
        wednesday->setObjectName("wednesday");
        wednesday->setFont(font1);
        wednesday->setCursor(QCursor(Qt::PointingHandCursor));
        wednesday->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(wednesday);

        thursday = new QCheckBox(horizontalLayoutWidget);
        thursday->setObjectName("thursday");
        thursday->setFont(font1);
        thursday->setCursor(QCursor(Qt::PointingHandCursor));
        thursday->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(thursday);

        friday = new QCheckBox(horizontalLayoutWidget);
        friday->setObjectName("friday");
        friday->setFont(font1);
        friday->setCursor(QCursor(Qt::PointingHandCursor));
        friday->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-radius: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(friday);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 120, 781, 91));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        teachers = new QComboBox(widget_2);
        teachers->addItem(QString());
        teachers->addItem(QString());
        teachers->addItem(QString());
        teachers->addItem(QString());
        teachers->addItem(QString());
        teachers->addItem(QString());
        teachers->addItem(QString());
        teachers->setObjectName("teachers");
        teachers->setGeometry(QRect(10, 30, 191, 31));
        teachers->setCursor(QCursor(Qt::PointingHandCursor));
        teachers->setStyleSheet(QString::fromUtf8(""));
        teachers->setInsertPolicy(QComboBox::InsertAlphabetically);
        lessons = new QComboBox(widget_2);
        lessons->setObjectName("lessons");
        lessons->setGeometry(QRect(210, 30, 211, 31));
        lessons->setCursor(QCursor(Qt::PointingHandCursor));
        lessons->setStyleSheet(QString::fromUtf8(""));
        lessons->setInsertPolicy(QComboBox::InsertAlphabetically);
        classes = new QComboBox(widget_2);
        classes->setObjectName("classes");
        classes->setGeometry(QRect(430, 30, 181, 31));
        classes->setCursor(QCursor(Qt::PointingHandCursor));
        classes->setStyleSheet(QString::fromUtf8(""));
        classes->setInsertPolicy(QComboBox::InsertAlphabetically);
        numberOfClass = new QComboBox(widget_2);
        numberOfClass->setObjectName("numberOfClass");
        numberOfClass->setGeometry(QRect(630, 30, 141, 31));
        numberOfClass->setCursor(QCursor(Qt::PointingHandCursor));
        numberOfClass->setStyleSheet(QString::fromUtf8(""));
        backgroundColor = new QLabel(centralwidget);
        backgroundColor->setObjectName("backgroundColor");
        backgroundColor->setGeometry(QRect(0, 0, 801, 571));
        backgroundColor->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color : rgb(166,167,255);\n"
"}"));
        ClassPlanning->setCentralWidget(centralwidget);
        backgroundColor->raise();
        recordButton->raise();
        finalSubmitButton->raise();
        label->raise();
        widget->raise();
        widget_2->raise();
        menubar = new QMenuBar(ClassPlanning);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        ClassPlanning->setMenuBar(menubar);
        statusbar = new QStatusBar(ClassPlanning);
        statusbar->setObjectName("statusbar");
        ClassPlanning->setStatusBar(statusbar);

        retranslateUi(ClassPlanning);

        QMetaObject::connectSlotsByName(ClassPlanning);
    } // setupUi

    void retranslateUi(QMainWindow *ClassPlanning)
    {
        ClassPlanning->setWindowTitle(QCoreApplication::translate("ClassPlanning", "ClassPlanning", nullptr));
#if QT_CONFIG(tooltip)
        ClassPlanning->setToolTip(QCoreApplication::translate("ClassPlanning", "<html><head/><body><p><img src=\":/Images/Images/Background.jpg\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        recordButton->setText(QCoreApplication::translate("ClassPlanning", "Record", nullptr));
        finalSubmitButton->setText(QCoreApplication::translate("ClassPlanning", "Final Submit", nullptr));
        label->setText(QCoreApplication::translate("ClassPlanning", "Class Planning", nullptr));
        saturday->setText(QCoreApplication::translate("ClassPlanning", "Saturday", nullptr));
        sunday->setText(QCoreApplication::translate("ClassPlanning", "Sunday", nullptr));
        monday->setText(QCoreApplication::translate("ClassPlanning", "Monday", nullptr));
        tuesday->setText(QCoreApplication::translate("ClassPlanning", "Tuesday", nullptr));
        wednesday->setText(QCoreApplication::translate("ClassPlanning", "Wednesday", nullptr));
        thursday->setText(QCoreApplication::translate("ClassPlanning", "Thursday", nullptr));
        friday->setText(QCoreApplication::translate("ClassPlanning", "Friday", nullptr));
        teachers->setItemText(0, QCoreApplication::translate("ClassPlanning", "Shabnam Shadroo", nullptr));
        teachers->setItemText(1, QCoreApplication::translate("ClassPlanning", "Safa Jami", nullptr));
        teachers->setItemText(2, QCoreApplication::translate("ClassPlanning", "Reza Allahyari", nullptr));
        teachers->setItemText(3, QCoreApplication::translate("ClassPlanning", "Fatemeh Mostali", nullptr));
        teachers->setItemText(4, QCoreApplication::translate("ClassPlanning", "Nasrin Ghadamgahi", nullptr));
        teachers->setItemText(5, QCoreApplication::translate("ClassPlanning", "Neda Mohammadi", nullptr));
        teachers->setItemText(6, QCoreApplication::translate("ClassPlanning", "Hasan Shakeri", nullptr));

        teachers->setPlaceholderText(QString());
        lessons->setPlaceholderText(QCoreApplication::translate("ClassPlanning", "Select Teacher...", nullptr));
        classes->setPlaceholderText(QCoreApplication::translate("ClassPlanning", "Select Teacher...", nullptr));
        numberOfClass->setPlaceholderText(QCoreApplication::translate("ClassPlanning", "Select Teacher...", nullptr));
        backgroundColor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClassPlanning: public Ui_ClassPlanning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSPLANNING_H
