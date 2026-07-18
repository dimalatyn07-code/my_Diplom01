/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_login;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *lineEdit_login;
    QLabel *label_3;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_vhod;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_mainWindow;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QFrame *indicator;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QLabel *label_NameApplication;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_Arrived;
    QLabel *label_TitleArrived;
    QLabel *label_NumberArrived;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_Late;
    QLabel *label_TitleLate;
    QLabel *label_NumberLate;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox_Missing;
    QLabel *label_TitleMissing;
    QLabel *label_NumberMissing;
    QWidget *page_2;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QWidget *page_3;
    QLabel *label_6;
    QWidget *page_4;
    QLabel *label_7;
    QWidget *page_5;
    QLabel *label_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1300, 700);
        MainWindow->setMinimumSize(QSize(1300, 700));
        MainWindow->setMaximumSize(QSize(1300, 900));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #07110f;\n"
"}\n"
"\n"
"QWidget {\n"
"    color: #ecfff8;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QFrame#indicator {\n"
"    background-color: #00c896;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QWidget#centralwidget,\n"
"QWidget#centralWidget {\n"
"    background-color: #07110f;\n"
"}\n"
"\n"
"QStackedWidget {\n"
"    background-color: #07110f;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    background-color: #0d1815;\n"
"    border: 1px solid #18352d;\n"
"    border-radius: 22px;\n"
"    padding: 28px;\n"
"}\n"
"\n"
"QGroupBox:hover {\n"
"    border: 1px solid #00d39f;\n"
"}\n"
"\n"
"QGroupBox QWidget {\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #d5f5ec;\n"
"    font-size: 15px;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"QLabel#labelTitle {\n"
"    color: #ffffff;\n"
"    font-size: 34px;\n"
"    font-weight: 700;\n"
"    letter-spacing: 1px;\n"
"    padding-bottom: 10px;\n"
""
                        "}\n"
"\n"
"QLabel#label_NameApplication {\n"
"    font-size: 35px;\n"
"    font-weight: 700;\n"
"}\n"
"\n"
"QGroupBox#groupBox_Arrived QLabel#label_TitleArrived {\n"
"	font: 600 20pt \"Ubuntu Sans\";\n"
"	font-weight: 500;\n"
"}\n"
"\n"
"QGroupBox#groupBox_Arrived QLabel#label_NumberArrived {\n"
"	font: 600 35pt \"Ubuntu Sans\";\n"
"	font-weight: 650;\n"
"}\n"
"\n"
"QGroupBox#groupBox_Late QLabel#label_TitleLate {\n"
"	font: 600 20pt \"Ubuntu Sans\";\n"
"	font-weight: 500;\n"
"}\n"
"\n"
"QGroupBox#groupBox_Late QLabel#label_NumberLate {\n"
"	font: 600 35pt \"Ubuntu Sans\";\n"
"	font-weight: 650;\n"
"}\n"
"\n"
"QGroupBox#groupBox_Missing QLabel#label_TitleMissing {\n"
"	font: 600 20pt \"Ubuntu Sans\";\n"
"	font-weight: 500;\n"
"}\n"
"\n"
"QGroupBox#groupBox_Missing QLabel#label_NumberMissing {\n"
"	font: 600 35pt \"Ubuntu Sans\";\n"
"	font-weight: 650;\n"
"}\n"
"\n"
"/* === \320\241\320\242\320\220\320\242\320\230\320\241\320\242\320\230\320\232\320\220: groupBox_Arrived (\320\267\320\265\320\273\321\221\320\275"
                        "\321\213\320\271) === */\n"
"QGroupBox#groupBox_Arrived {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"        stop:0 #2d5a4a, stop:1 #1a3d32);\n"
"    border: 2px solid #4a7c6a;\n"
"    border-radius: 4px;\n"
"    padding: 15px 20px;\n"
"}\n"
"\n"
"QGroupBox#groupBox_Arrived:hover {\n"
"    border: 2px solid #5a9c8a;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"        stop:0 #3d6a5a, stop:1 #2a4d42);\n"
"}\n"
"\n"
"QGroupBox#groupBox_Arrived QLabel {\n"
"    color: #ffffff;\n"
"    font-size: 18px;\n"
"    font-weight: 700;\n"
"    padding-left: 15px;\n"
"    padding-top: 8px;\n"
"}\n"
"\n"
"/* === \320\241\320\242\320\220\320\242\320\230\320\241\320\242\320\230\320\232\320\220: groupBox_Late (\320\276\321\200\320\260\320\275\320\266\320\265\320\262\321\213\320\271) === */\n"
"QGroupBox#groupBox_Late {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"        stop:0 #8b6a3d, stop:1 #5a4a2d);\n"
"    border: 2px solid #a67c4a;\n"
"    border-radius: 4px;\n"
""
                        "    padding: 15px 20px;\n"
"}\n"
"\n"
"QGroupBox#groupBox_Late:hover {\n"
"    border: 2px solid #c69c5a;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"        stop:0 #9b7a4d, stop:1 #6a5a3d);\n"
"}\n"
"\n"
"QGroupBox#groupBox_Late QLabel {\n"
"    color: #ffffff;\n"
"    font-size: 18px;\n"
"    font-weight: 700;\n"
"    padding-left: 15px;\n"
"    padding-top: 8px;\n"
"}\n"
"\n"
"/* === \320\241\320\242\320\220\320\242\320\230\320\241\320\242\320\230\320\232\320\220: groupBox_Missing (\320\272\321\200\320\260\321\201\320\275\321\213\320\271) === */\n"
"QGroupBox#groupBox_Missing {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"        stop:0 #6a3d3d, stop:1 #4a2d2d);\n"
"    border: 2px solid #7c4a4a;\n"
"    border-radius: 4px;\n"
"    padding: 15px 20px;\n"
"}\n"
"\n"
"QGroupBox#groupBox_Missing:hover {\n"
"    border: 2px solid #9c5a5a;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"        stop:0 #7a4d4d, stop:1 #5a3d3d);\n"
"}\n"
"\n"
"QGroupBox#gro"
                        "upBox_Missing QLabel {\n"
"    color: #ffffff;\n"
"    font-size: 18px;\n"
"    font-weight: 700;\n"
"    padding-left: 15px;\n"
"    padding-top: 8px;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    background-color: #101d1a;\n"
"    border: 1px solid #21453b;\n"
"    border-radius: 12px;\n"
"    padding: 11px 14px;\n"
"    color: #f2fffb;\n"
"    font-size: 15px;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    background-color: #132420;\n"
"    border: 1px solid #00b98b;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    background-color: #152925;\n"
"    border: 2px solid #00d39f;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #6e8f84;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #10201b;\n"
"    color: #ecfff8;\n"
"    border: 1px solid #00c896;\n"
"    border-radius: 12px;\n"
"    padding: 10px 28px;\n"
"    font-size: 15px;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #00c896;\n"
"    color: #04110d;\n"
"    border: 1px solid #00e0a8;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
""
                        "    background-color: #009f77;\n"
"    color: #ffffff;\n"
"    border: 1px solid #00c896;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #111816;\n"
"    color: #5d746d;\n"
"    border: 1px solid #23312d;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-1, -1, 1301, 701));
        page_login = new QWidget();
        page_login->setObjectName("page_login");
        groupBox = new QGroupBox(page_login);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(150, 110, 971, 471));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 90, 881, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 600 30pt \"Ubuntu Sans\";"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(label_2);

        lineEdit_login = new QLineEdit(layoutWidget);
        lineEdit_login->setObjectName("lineEdit_login");
        lineEdit_login->setMinimumSize(QSize(800, 40));
        lineEdit_login->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(lineEdit_login);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(label_3);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setMinimumSize(QSize(800, 40));
        lineEdit_password->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(lineEdit_password);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_vhod = new QPushButton(layoutWidget);
        pushButton_vhod->setObjectName("pushButton_vhod");
        pushButton_vhod->setMinimumSize(QSize(150, 20));
        pushButton_vhod->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(pushButton_vhod);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");

        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(page_login);
        page_mainWindow = new QWidget();
        page_mainWindow->setObjectName("page_mainWindow");
        frame = new QFrame(page_mainWindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-1, -1, 251, 691));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(12, 21, 19);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 110, 221, 302));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("/* ===== \320\232\320\235\320\236\320\237\320\232\320\230 \320\234\320\225\320\235\320\256 ===== */\n"
"\n"
"QPushButton {\n"
"    background-color: transparent;\n"
"\n"
"    border: 1px solid transparent;\n"
"    border-radius: 14px;\n"
"\n"
"    color: #ffffff;\n"
"\n"
"    font-size: 15px;\n"
"    font-weight: 600;\n"
"\n"
"    text-align: left;\n"
"\n"
"    padding-left: 18px;\n"
"    padding-right: 18px;\n"
"\n"
"    min-height: 30px;\n"
"    max-height: 30px;\n"
"}\n"
"\n"
"/* ===== \320\235\320\220\320\222\320\225\320\224\320\225\320\235\320\230\320\225 ===== */\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 200, 150, 0.08);\n"
"\n"
"    border: 1px solid #00c896;\n"
"\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"/* ===== \320\235\320\220\320\226\320\220\320\242\320\230\320\225 ===== */\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(0, 200, 150, 0.18);\n"
"\n"
"    border: 1px solid #00e0a8;\n"
"}\n"
"\n"
"/* ===== \320\220\320\232\320\242\320\230\320\222\320\235\320\220\320\257"
                        " \320\232\320\235\320\236\320\237\320\232\320\220 ===== */\n"
"\n"
"QPushButton:checked {\n"
"    background-color: rgba(0, 200, 150, 0.12);\n"
"\n"
"    border: 1px solid #00c896;\n"
"\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"/* ===== \320\230\320\232\320\236\320\235\320\232\320\220 ===== */\n"
"\n"
"QPushButton::icon {\n"
"    padding-left: 6px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon_source_file/homePage.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("/* ===== \320\232\320\235\320\236\320\237\320\232\320\230 \320\234\320\225\320\235\320\256 ===== */\n"
"\n"
"QPushButton {\n"
"    background-color: transparent;\n"
"\n"
"    border: 1px solid transparent;\n"
"    border-radius: 14px;\n"
"\n"
"    color: #ffffff;\n"
"\n"
"    font-size: 15px;\n"
"    font-weight: 600;\n"
"\n"
"    text-align: left;\n"
"\n"
"    padding-left: 18px;\n"
"    padding-right: 18px;\n"
"\n"
"    min-height: 30px;\n"
"    max-height: 30px;\n"
"}\n"
"\n"
"/* ===== \320\235\320\220\320\222\320\225\320\224\320\225\320\235\320\230\320\225 ===== */\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 200, 150, 0.08);\n"
"\n"
"    border: 1px solid #00c896;\n"
"\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"/* ===== \320\235\320\220\320\226\320\220\320\242\320\230\320\225 ===== */\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(0, 200, 150, 0.18);\n"
"\n"
"    border: 1px solid #00e0a8;\n"
"}\n"
"\n"
"/* ===== \320\220\320\232\320\242\320\230\320\222\320\235\320\220\320\257"
                        " \320\232\320\235\320\236\320\237\320\232\320\220 ===== */\n"
"\n"
"QPushButton:checked {\n"
"    background-color: rgba(0, 200, 150, 0.12);\n"
"\n"
"    border: 1px solid #00c896;\n"
"\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"/* ===== \320\230\320\232\320\236\320\235\320\232\320\220 ===== */\n"
"\n"
"QPushButton::icon {\n"
"    padding-left: 6px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icon_source_file/biometricsPage.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon1);

        verticalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("/* ===== \320\232\320\235\320\236\320\237\320\232\320\230 \320\234\320\225\320\235\320\256 ===== */\n"
"\n"
"QPushButton {\n"
"    background-color: transparent;\n"
"\n"
"    border: 1px solid transparent;\n"
"    border-radius: 14px;\n"
"\n"
"    color: #ffffff;\n"
"\n"
"    font-size: 15px;\n"
"    font-weight: 600;\n"
"\n"
"    text-align: left;\n"
"\n"
"    padding-left: 18px;\n"
"    padding-right: 18px;\n"
"\n"
"    min-height: 30px;\n"
"    max-height: 30px;\n"
"}\n"
"\n"
"/* ===== \320\235\320\220\320\222\320\225\320\224\320\225\320\235\320\230\320\225 ===== */\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 200, 150, 0.08);\n"
"\n"
"    border: 1px solid #00c896;\n"
"\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"/* ===== \320\235\320\220\320\226\320\220\320\242\320\230\320\225 ===== */\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(0, 200, 150, 0.18);\n"
"\n"
"    border: 1px solid #00e0a8;\n"
"}\n"
"\n"
"/* ===== \320\220\320\232\320\242\320\230\320\222\320\235\320\220\320\257"
                        " \320\232\320\235\320\236\320\237\320\232\320\220 ===== */\n"
"\n"
"QPushButton:checked {\n"
"    background-color: rgba(0, 200, 150, 0.12);\n"
"\n"
"    border: 1px solid #00c896;\n"
"\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"/* ===== \320\230\320\232\320\236\320\235\320\232\320\220 ===== */\n"
"\n"
"QPushButton::icon {\n"
"    padding-left: 6px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icon_source_file/employeesPage.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_3->setIcon(icon2);

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("/* ===== \320\232\320\235\320\236\320\237\320\232\320\230 \320\234\320\225\320\235\320\256 ===== */\n"
"\n"
"QPushButton {\n"
"    background-color: transparent;\n"
"\n"
"    border: 1px solid transparent;\n"
"    border-radius: 14px;\n"
"\n"
"    color: #ffffff;\n"
"\n"
"    font-size: 15px;\n"
"    font-weight: 600;\n"
"\n"
"    text-align: left;\n"
"\n"
"    padding-left: 18px;\n"
"    padding-right: 18px;\n"
"\n"
"    min-height: 30px;\n"
"    max-height: 30px;\n"
"}\n"
"\n"
"/* ===== \320\235\320\220\320\222\320\225\320\224\320\225\320\235\320\230\320\225 ===== */\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 200, 150, 0.08);\n"
"\n"
"    border: 1px solid #00c896;\n"
"\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"/* ===== \320\235\320\220\320\226\320\220\320\242\320\230\320\225 ===== */\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(0, 200, 150, 0.18);\n"
"\n"
"    border: 1px solid #00e0a8;\n"
"}\n"
"\n"
"/* ===== \320\220\320\232\320\242\320\230\320\222\320\235\320\220\320\257"
                        " \320\232\320\235\320\236\320\237\320\232\320\220 ===== */\n"
"\n"
"QPushButton:checked {\n"
"    background-color: rgba(0, 200, 150, 0.12);\n"
"\n"
"    border: 1px solid #00c896;\n"
"\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"/* ===== \320\230\320\232\320\236\320\235\320\232\320\220 ===== */\n"
"\n"
"QPushButton::icon {\n"
"    padding-left: 6px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/icon_source_file/statistics.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_4->setIcon(icon3);

        verticalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("/* ===== \320\232\320\235\320\236\320\237\320\232\320\230 \320\234\320\225\320\235\320\256 ===== */\n"
"\n"
"QPushButton {\n"
"    background-color: transparent;\n"
"\n"
"    border: 1px solid transparent;\n"
"    border-radius: 14px;\n"
"\n"
"    color: #ffffff;\n"
"\n"
"    font-size: 15px;\n"
"    font-weight: 600;\n"
"\n"
"    text-align: left;\n"
"\n"
"    padding-left: 18px;\n"
"    padding-right: 18px;\n"
"\n"
"    min-height: 30px;\n"
"    max-height: 30px;\n"
"}\n"
"\n"
"/* ===== \320\235\320\220\320\222\320\225\320\224\320\225\320\235\320\230\320\225 ===== */\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgba(0, 200, 150, 0.08);\n"
"\n"
"    border: 1px solid #00c896;\n"
"\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"/* ===== \320\235\320\220\320\226\320\220\320\242\320\230\320\225 ===== */\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(0, 200, 150, 0.18);\n"
"\n"
"    border: 1px solid #00e0a8;\n"
"}\n"
"\n"
"/* ===== \320\220\320\232\320\242\320\230\320\222\320\235\320\220\320\257"
                        " \320\232\320\235\320\236\320\237\320\232\320\220 ===== */\n"
"\n"
"QPushButton:checked {\n"
"    background-color: rgba(0, 200, 150, 0.12);\n"
"\n"
"    border: 1px solid #00c896;\n"
"\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"/* ===== \320\230\320\232\320\236\320\235\320\232\320\220 ===== */\n"
"\n"
"QPushButton::icon {\n"
"    padding-left: 6px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icon_source_file/settingsPage.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_5->setIcon(icon4);

        verticalLayout_3->addWidget(pushButton_5);

        indicator = new QFrame(frame);
        indicator->setObjectName("indicator");
        indicator->setGeometry(QRect(25, 126, 4, 26));
        indicator->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 165, 3);"));
        indicator->setFrameShape(QFrame::Shape::StyledPanel);
        indicator->setFrameShadow(QFrame::Shadow::Raised);
        stackedWidget_2 = new QStackedWidget(page_mainWindow);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(249, -1, 1051, 691));
        page = new QWidget();
        page->setObjectName("page");
        label_NameApplication = new QLabel(page);
        label_NameApplication->setObjectName("label_NameApplication");
        label_NameApplication->setGeometry(QRect(10, 10, 251, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(true);
        label_NameApplication->setFont(font);
        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 90, 971, 81));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_Arrived = new QGroupBox(horizontalLayoutWidget);
        groupBox_Arrived->setObjectName("groupBox_Arrived");
        groupBox_Arrived->setMinimumSize(QSize(300, 0));
        groupBox_Arrived->setStyleSheet(QString::fromUtf8(""));
        label_TitleArrived = new QLabel(groupBox_Arrived);
        label_TitleArrived->setObjectName("label_TitleArrived");
        label_TitleArrived->setGeometry(QRect(0, 0, 151, 41));
        label_TitleArrived->setStyleSheet(QString::fromUtf8("QLebel#label_TitleArrived{\n"
"	font-size: 40;\n"
"	font-weight: 500;\n"
"}"));
        label_NumberArrived = new QLabel(groupBox_Arrived);
        label_NumberArrived->setObjectName("label_NumberArrived");
        label_NumberArrived->setGeometry(QRect(160, 0, 141, 71));

        horizontalLayout_3->addWidget(groupBox_Arrived);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        groupBox_Late = new QGroupBox(horizontalLayoutWidget);
        groupBox_Late->setObjectName("groupBox_Late");
        groupBox_Late->setMinimumSize(QSize(300, 0));
        groupBox_Late->setStyleSheet(QString::fromUtf8("QGroupBox#groupBoxOrange {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"        stop:0 #8b6a3d, stop:1 #5a4a2d);\n"
"    border: 2px solid #a67c4a;\n"
"    border-radius: 12px;\n"
"    padding: 15px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: 600;\n"
"    color: #fff8ec;\n"
"}\n"
"\n"
"QGroupBox#groupBoxOrange:hover {\n"
"    border: 2px solid #c69c5a;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"        stop:0 #9b7a4d, stop:1 #6a5a3d);\n"
"}\n"
"\n"
"QGroupBox#groupBoxOrange QLabel {\n"
"    color: #ffffff;\n"
"    font-size: 18px;\n"
"    font-weight: 700;\n"
"}"));
        label_TitleLate = new QLabel(groupBox_Late);
        label_TitleLate->setObjectName("label_TitleLate");
        label_TitleLate->setGeometry(QRect(0, 0, 181, 41));
        label_NumberLate = new QLabel(groupBox_Late);
        label_NumberLate->setObjectName("label_NumberLate");
        label_NumberLate->setGeometry(QRect(160, 0, 141, 71));

        horizontalLayout_3->addWidget(groupBox_Late);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        groupBox_Missing = new QGroupBox(horizontalLayoutWidget);
        groupBox_Missing->setObjectName("groupBox_Missing");
        groupBox_Missing->setMinimumSize(QSize(300, 0));
        groupBox_Missing->setStyleSheet(QString::fromUtf8("QGroupBox#groupBoxRed {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"        stop:0 #6a3d3d, stop:1 #4a2d2d);\n"
"    border: 2px solid #7c4a4a;\n"
"    border-radius: 12px;\n"
"    padding: 15px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: 600;\n"
"    color: #ffecec;\n"
"}\n"
"\n"
"QGroupBox#groupBoxRed:hover {\n"
"    border: 2px solid #9c5a5a;\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"        stop:0 #7a4d4d, stop:1 #5a3d3d);\n"
"}\n"
"\n"
"QGroupBox#groupBoxRed QLabel {\n"
"    color: #ffffff;\n"
"    font-size: 18px;\n"
"    font-weight: 700;\n"
"}"));
        label_TitleMissing = new QLabel(groupBox_Missing);
        label_TitleMissing->setObjectName("label_TitleMissing");
        label_TitleMissing->setGeometry(QRect(0, 0, 191, 41));
        label_NumberMissing = new QLabel(groupBox_Missing);
        label_NumberMissing->setObjectName("label_NumberMissing");
        label_NumberMissing->setGeometry(QRect(160, 0, 141, 71));

        horizontalLayout_3->addWidget(groupBox_Missing);

        stackedWidget_2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 250, 251, 81));
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 40, 101, 41));
        stackedWidget_2->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 90, 131, 41));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_7 = new QLabel(page_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 60, 101, 41));
        stackedWidget_2->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_8 = new QLabel(page_5);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 40, 111, 41));
        stackedWidget_2->addWidget(page_5);
        stackedWidget->addWidget(page_mainWindow);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "FaceAcceost AI", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        pushButton_vhod->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\221\320\270\320\276\320\274\320\265\321\202\321\200\320\270\321\217", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        label_NameApplication->setText(QCoreApplication::translate("MainWindow", "FaceAccess AI", nullptr));
        groupBox_Arrived->setTitle(QString());
        label_TitleArrived->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\321\210\320\273\320\276", nullptr));
        label_NumberArrived->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        groupBox_Late->setTitle(QString());
        label_TitleLate->setText(QCoreApplication::translate("MainWindow", "\320\236\320\277\320\276\320\267\320\264\320\260\320\273\320\276", nullptr));
        label_NumberLate->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        groupBox_Missing->setTitle(QString());
        label_TitleMissing->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\320\265\321\202", nullptr));
        label_NumberMissing->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\221\320\270\320\276\320\274\320\265\321\202\321\200\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
