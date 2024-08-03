/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_38;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_13;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_15;
    QLineEdit *lineEdit_10;
    QVBoxLayout *verticalLayout;
    QPushButton *ResetButton;
    QComboBox *comboBox;
    QPushButton *Start;
    QWidget *tab_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QTextEdit *textEdit;
    QPushButton *ClearOutput;
    QVBoxLayout *verticalLayout_10;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Push;
    QPushButton *Back;
    QWidget *tab_3;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_10;
    QTextEdit *textEdit_3;
    QPushButton *ClearOutput_2;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_41;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *Update;
    QPushButton *Back_2;
    QWidget *tab_5;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_31;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_22;
    QLineEdit *lineEdit_7;
    QVBoxLayout *verticalLayout_32;
    QVBoxLayout *verticalLayout_33;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_23;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_25;
    QPushButton *Clone;
    QPushButton *Back_3;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_19;
    QVBoxLayout *verticalLayout_27;
    QVBoxLayout *verticalLayout_28;
    QLabel *label_20;
    QTextEdit *textEdit_5;
    QPushButton *ClearOutput_3;
    QWidget *tab_4;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_34;
    QVBoxLayout *verticalLayout_25;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_24;
    QLineEdit *lineEdit_11;
    QLabel *label_18;
    QTextEdit *textEdit_7;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *GetStatus;
    QPushButton *ClearStatus;
    QPushButton *Back_4;
    QVBoxLayout *verticalLayout_36;
    QVBoxLayout *verticalLayout_35;
    QWidget *tab_6;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_27;
    QVBoxLayout *verticalLayout_26;
    QVBoxLayout *verticalLayout_24;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_25;
    QLineEdit *lineEdit_12;
    QLabel *label_19;
    QTextEdit *textEdit_8;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *GetLog;
    QPushButton *ClearLog;
    QPushButton *Back_5;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_31;
    QWidget *layoutWidget_11;
    QVBoxLayout *verticalLayout_40;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_32;
    QWidget *layoutWidget_13;
    QHBoxLayout *horizontalLayout_26;
    QWidget *layoutWidget_14;
    QHBoxLayout *horizontalLayout_30;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1013, 707);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 0, 991, 681));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(30, 40, 931, 621));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        tabWidget->setFont(font);
        tabWidget->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 350, 400, 225));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 70, 709, 272));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(20);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(label_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(13);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label);

        verticalLayout_38 = new QVBoxLayout();
        verticalLayout_38->setObjectName("verticalLayout_38");
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName("label_13");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(12);
        font3.setBold(true);
        label_13->setFont(font3);

        horizontalLayout_28->addWidget(label_13);

        lineEdit_9 = new QLineEdit(layoutWidget);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setEnabled(true);
        lineEdit_9->setFont(font);

        horizontalLayout_28->addWidget(lineEdit_9);


        verticalLayout_38->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName("label_15");
        label_15->setFont(font3);

        horizontalLayout_29->addWidget(label_15);

        lineEdit_10 = new QLineEdit(layoutWidget);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setEnabled(true);
        lineEdit_10->setFont(font);

        horizontalLayout_29->addWidget(lineEdit_10);


        verticalLayout_38->addLayout(horizontalLayout_29);


        verticalLayout_2->addLayout(verticalLayout_38);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        ResetButton = new QPushButton(layoutWidget);
        ResetButton->setObjectName("ResetButton");
        ResetButton->setFont(font3);

        verticalLayout->addWidget(ResetButton);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setFont(font3);
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(comboBox);

        Start = new QPushButton(layoutWidget);
        Start->setObjectName("Start");
        Start->setFont(font3);
        Start->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(Start);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());
        layoutWidget->raise();
        label_2->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 270, 901, 281));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 0);"));

        verticalLayout_7->addWidget(label_8);

        textEdit = new QTextEdit(layoutWidget_2);
        textEdit->setObjectName("textEdit");

        verticalLayout_7->addWidget(textEdit);


        verticalLayout_9->addLayout(verticalLayout_7);

        ClearOutput = new QPushButton(layoutWidget_2);
        ClearOutput->setObjectName("ClearOutput");
        ClearOutput->setFont(font3);
        ClearOutput->setCursor(QCursor(Qt::PointingHandCursor));
        ClearOutput->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 0);"));

        verticalLayout_9->addWidget(ClearOutput);


        horizontalLayout_6->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");

        horizontalLayout_6->addLayout(verticalLayout_10);

        layoutWidget_3 = new QWidget(tab_2);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 20, 901, 240));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName("label_7");
        label_7->setFont(font3);

        horizontalLayout_5->addWidget(label_7);

        lineEdit_4 = new QLineEdit(layoutWidget_3);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEnabled(true);
        lineEdit_4->setFont(font);

        horizontalLayout_5->addWidget(lineEdit_4);


        verticalLayout_6->addLayout(horizontalLayout_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");
        label_4->setFont(font3);

        horizontalLayout->addWidget(label_4);

        lineEdit = new QLineEdit(layoutWidget_3);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName("label_5");
        label_5->setFont(font3);

        horizontalLayout_2->addWidget(label_5);

        lineEdit_2 = new QLineEdit(layoutWidget_3);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");

        horizontalLayout_3->addLayout(horizontalLayout_17);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        Push = new QPushButton(layoutWidget_3);
        Push->setObjectName("Push");
        Push->setFont(font3);
        Push->setCursor(QCursor(Qt::PointingHandCursor));
        Push->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 0);"));

        horizontalLayout_4->addWidget(Push);

        Back = new QPushButton(layoutWidget_3);
        Back->setObjectName("Back");
        Back->setFont(font3);
        Back->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(Back);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        layoutWidget_4 = new QWidget(tab_3);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(20, 270, 901, 281));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName("label_10");
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 0);"));

        verticalLayout_12->addWidget(label_10);

        textEdit_3 = new QTextEdit(layoutWidget_4);
        textEdit_3->setObjectName("textEdit_3");

        verticalLayout_12->addWidget(textEdit_3);


        verticalLayout_11->addLayout(verticalLayout_12);

        ClearOutput_2 = new QPushButton(layoutWidget_4);
        ClearOutput_2->setObjectName("ClearOutput_2");
        ClearOutput_2->setFont(font3);
        ClearOutput_2->setCursor(QCursor(Qt::PointingHandCursor));
        ClearOutput_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 0);"));

        verticalLayout_11->addWidget(ClearOutput_2);


        horizontalLayout_7->addLayout(verticalLayout_11);

        layoutWidget_5 = new QWidget(tab_3);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(20, 20, 901, 241));
        verticalLayout_41 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_41->setObjectName("verticalLayout_41");
        verticalLayout_41->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName("horizontalLayout_33");
        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName("label_6");
        label_6->setFont(font3);

        horizontalLayout_33->addWidget(label_6);

        lineEdit_3 = new QLineEdit(layoutWidget_5);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEnabled(true);
        lineEdit_3->setFont(font);

        horizontalLayout_33->addWidget(lineEdit_3);


        verticalLayout_41->addLayout(horizontalLayout_33);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");

        verticalLayout_15->addLayout(horizontalLayout_8);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");

        verticalLayout_17->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_14 = new QLabel(layoutWidget_5);
        label_14->setObjectName("label_14");
        label_14->setFont(font3);

        horizontalLayout_10->addWidget(label_14);

        lineEdit_6 = new QLineEdit(layoutWidget_5);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setFont(font);

        horizontalLayout_10->addWidget(lineEdit_6);


        verticalLayout_17->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");

        horizontalLayout_11->addLayout(horizontalLayout_18);


        verticalLayout_17->addLayout(horizontalLayout_11);


        verticalLayout_16->addLayout(verticalLayout_17);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        Update = new QPushButton(layoutWidget_5);
        Update->setObjectName("Update");
        Update->setFont(font3);
        Update->setCursor(QCursor(Qt::PointingHandCursor));
        Update->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 0);"));

        horizontalLayout_12->addWidget(Update);

        Back_2 = new QPushButton(layoutWidget_5);
        Back_2->setObjectName("Back_2");
        Back_2->setFont(font3);
        Back_2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_12->addWidget(Back_2);


        verticalLayout_16->addLayout(horizontalLayout_12);


        verticalLayout_15->addLayout(verticalLayout_16);


        verticalLayout_41->addLayout(verticalLayout_15);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        layoutWidget_6 = new QWidget(tab_5);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(20, 20, 901, 240));
        verticalLayout_31 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_31->setObjectName("verticalLayout_31");
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_22 = new QLabel(layoutWidget_6);
        label_22->setObjectName("label_22");
        label_22->setFont(font3);

        horizontalLayout_20->addWidget(label_22);

        lineEdit_7 = new QLineEdit(layoutWidget_6);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setEnabled(true);
        lineEdit_7->setFont(font);

        horizontalLayout_20->addWidget(lineEdit_7);


        verticalLayout_31->addLayout(horizontalLayout_20);

        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setObjectName("verticalLayout_32");
        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setObjectName("verticalLayout_33");
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_23 = new QLabel(layoutWidget_6);
        label_23->setObjectName("label_23");
        label_23->setFont(font3);

        horizontalLayout_21->addWidget(label_23);

        lineEdit_8 = new QLineEdit(layoutWidget_6);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setEnabled(true);
        lineEdit_8->setFont(font);

        horizontalLayout_21->addWidget(lineEdit_8);


        verticalLayout_33->addLayout(horizontalLayout_21);


        verticalLayout_32->addLayout(verticalLayout_33);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        Clone = new QPushButton(layoutWidget_6);
        Clone->setObjectName("Clone");
        Clone->setFont(font3);
        Clone->setCursor(QCursor(Qt::PointingHandCursor));
        Clone->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 0);"));

        horizontalLayout_25->addWidget(Clone);

        Back_3 = new QPushButton(layoutWidget_6);
        Back_3->setObjectName("Back_3");
        Back_3->setFont(font3);
        Back_3->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_25->addWidget(Back_3);


        verticalLayout_32->addLayout(horizontalLayout_25);


        verticalLayout_31->addLayout(verticalLayout_32);

        layoutWidget_7 = new QWidget(tab_5);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(20, 270, 901, 281));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName("verticalLayout_27");
        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName("verticalLayout_28");
        label_20 = new QLabel(layoutWidget_7);
        label_20->setObjectName("label_20");
        label_20->setFont(font3);
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 0);"));

        verticalLayout_28->addWidget(label_20);

        textEdit_5 = new QTextEdit(layoutWidget_7);
        textEdit_5->setObjectName("textEdit_5");

        verticalLayout_28->addWidget(textEdit_5);


        verticalLayout_27->addLayout(verticalLayout_28);

        ClearOutput_3 = new QPushButton(layoutWidget_7);
        ClearOutput_3->setObjectName("ClearOutput_3");
        ClearOutput_3->setFont(font3);
        ClearOutput_3->setCursor(QCursor(Qt::PointingHandCursor));
        ClearOutput_3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 0);"));

        verticalLayout_27->addWidget(ClearOutput_3);


        horizontalLayout_19->addLayout(verticalLayout_27);

        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        layoutWidget_8 = new QWidget(tab_4);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(11, 10, 911, 561));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setObjectName("verticalLayout_34");
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName("verticalLayout_22");
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_24 = new QLabel(layoutWidget_8);
        label_24->setObjectName("label_24");
        label_24->setFont(font3);

        horizontalLayout_22->addWidget(label_24);

        lineEdit_11 = new QLineEdit(layoutWidget_8);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setEnabled(true);
        lineEdit_11->setFont(font);

        horizontalLayout_22->addWidget(lineEdit_11);


        verticalLayout_22->addLayout(horizontalLayout_22);

        label_18 = new QLabel(layoutWidget_8);
        label_18->setObjectName("label_18");
        label_18->setFont(font3);
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));

        verticalLayout_22->addWidget(label_18);

        textEdit_7 = new QTextEdit(layoutWidget_8);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setFont(font);

        verticalLayout_22->addWidget(textEdit_7);


        verticalLayout_25->addLayout(verticalLayout_22);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        GetStatus = new QPushButton(layoutWidget_8);
        GetStatus->setObjectName("GetStatus");
        GetStatus->setFont(font3);
        GetStatus->setCursor(QCursor(Qt::PointingHandCursor));
        GetStatus->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));

        horizontalLayout_15->addWidget(GetStatus);

        ClearStatus = new QPushButton(layoutWidget_8);
        ClearStatus->setObjectName("ClearStatus");
        ClearStatus->setFont(font3);
        ClearStatus->setCursor(QCursor(Qt::PointingHandCursor));
        ClearStatus->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));

        horizontalLayout_15->addWidget(ClearStatus);


        verticalLayout_25->addLayout(horizontalLayout_15);


        verticalLayout_34->addLayout(verticalLayout_25);

        Back_4 = new QPushButton(layoutWidget_8);
        Back_4->setObjectName("Back_4");
        Back_4->setFont(font3);
        Back_4->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_34->addWidget(Back_4);


        horizontalLayout_16->addLayout(verticalLayout_34);

        verticalLayout_36 = new QVBoxLayout();
        verticalLayout_36->setObjectName("verticalLayout_36");
        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setObjectName("verticalLayout_35");

        verticalLayout_36->addLayout(verticalLayout_35);


        horizontalLayout_16->addLayout(verticalLayout_36);

        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        layoutWidget_9 = new QWidget(tab_6);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(10, 10, 911, 561));
        horizontalLayout_27 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName("verticalLayout_23");
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        label_25 = new QLabel(layoutWidget_9);
        label_25->setObjectName("label_25");
        label_25->setFont(font3);

        horizontalLayout_23->addWidget(label_25);

        lineEdit_12 = new QLineEdit(layoutWidget_9);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setEnabled(true);
        lineEdit_12->setFont(font);

        horizontalLayout_23->addWidget(lineEdit_12);


        verticalLayout_23->addLayout(horizontalLayout_23);

        label_19 = new QLabel(layoutWidget_9);
        label_19->setObjectName("label_19");
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));

        verticalLayout_23->addWidget(label_19);

        textEdit_8 = new QTextEdit(layoutWidget_9);
        textEdit_8->setObjectName("textEdit_8");

        verticalLayout_23->addWidget(textEdit_8);


        verticalLayout_24->addLayout(verticalLayout_23);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        GetLog = new QPushButton(layoutWidget_9);
        GetLog->setObjectName("GetLog");
        GetLog->setFont(font3);
        GetLog->setCursor(QCursor(Qt::PointingHandCursor));
        GetLog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));

        horizontalLayout_14->addWidget(GetLog);

        ClearLog = new QPushButton(layoutWidget_9);
        ClearLog->setObjectName("ClearLog");
        ClearLog->setFont(font3);
        ClearLog->setCursor(QCursor(Qt::PointingHandCursor));
        ClearLog->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));

        horizontalLayout_14->addWidget(ClearLog);


        verticalLayout_24->addLayout(horizontalLayout_14);


        verticalLayout_26->addLayout(verticalLayout_24);

        Back_5 = new QPushButton(layoutWidget_9);
        Back_5->setObjectName("Back_5");
        Back_5->setFont(font3);
        Back_5->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_26->addWidget(Back_5);


        horizontalLayout_27->addLayout(verticalLayout_26);

        tabWidget->addTab(tab_6, QString());
        layoutWidget_10 = new QWidget(centralwidget);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_31 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_31->setObjectName("horizontalLayout_31");
        horizontalLayout_31->setContentsMargins(0, 0, 0, 0);
        layoutWidget_11 = new QWidget(centralwidget);
        layoutWidget_11->setObjectName("layoutWidget_11");
        layoutWidget_11->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_40 = new QVBoxLayout(layoutWidget_11);
        verticalLayout_40->setObjectName("verticalLayout_40");
        verticalLayout_40->setContentsMargins(0, 0, 0, 0);
        layoutWidget_12 = new QWidget(centralwidget);
        layoutWidget_12->setObjectName("layoutWidget_12");
        layoutWidget_12->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_32 = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_32->setObjectName("horizontalLayout_32");
        horizontalLayout_32->setContentsMargins(0, 0, 0, 0);
        layoutWidget_13 = new QWidget(centralwidget);
        layoutWidget_13->setObjectName("layoutWidget_13");
        layoutWidget_13->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_26 = new QHBoxLayout(layoutWidget_13);
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        layoutWidget_14 = new QWidget(centralwidget);
        layoutWidget_14->setObjectName("layoutWidget_14");
        layoutWidget_14->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_30 = new QHBoxLayout(layoutWidget_14);
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        horizontalLayout_30->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Git GUI", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Welcome to GIT GUI</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Please enter your name and email then select your operation</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "User Name :-", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Email :-", nullptr));
        ResetButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "New Repo", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Update Repo", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Clone", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Status", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Log", nullptr));

        Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Output</p></body></html>", nullptr));
        ClearOutput->setText(QCoreApplication::translate("MainWindow", "Clear Output", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Path:- ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Repo URL:- ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Comment:-", nullptr));
        Push->setText(QCoreApplication::translate("MainWindow", "Push", nullptr));
        Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "New Repo", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Output</p></body></html>", nullptr));
        ClearOutput_2->setText(QCoreApplication::translate("MainWindow", "Clear Output", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Path:-", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Comment:-", nullptr));
        Update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        Back_2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Update Repo", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Path:- ", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Repo URL:- ", nullptr));
        Clone->setText(QCoreApplication::translate("MainWindow", "Clone", nullptr));
        Back_3->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Output</p></body></html>", nullptr));
        ClearOutput_3->setText(QCoreApplication::translate("MainWindow", "Clear Output", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Clone", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Path:- ", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">Status</span></p></body></html>", nullptr));
        GetStatus->setText(QCoreApplication::translate("MainWindow", "Get Status", nullptr));
        ClearStatus->setText(QCoreApplication::translate("MainWindow", "Clear Status", nullptr));
        Back_4->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Status", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Path:- ", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Log</p></body></html>", nullptr));
        textEdit_8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        GetLog->setText(QCoreApplication::translate("MainWindow", "Get Log", nullptr));
        ClearLog->setText(QCoreApplication::translate("MainWindow", "Clear Log", nullptr));
        Back_5->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
