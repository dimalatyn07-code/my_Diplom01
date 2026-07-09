#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>
#include <QPropertyAnimation>
#include <QEasingCurve>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Инициализация LoginHandler
    loginHandler = new LoginHandler(
        ui->lineEdit_login,
        ui->lineEdit_password,
        ui->stackedWidget,
        ui->page_mainWindow,
        this
        );

    // Инициализация Sidebar
    sidebar = new Sidebar(
        nullptr,  // menuButton (если есть кнопка меню, укажите её)
        {ui->pushButton, ui->pushButton_2, ui->pushButton_3,
         ui->pushButton_4, ui->pushButton_5},
        ui->indicator,
        this
        );

    // Устанавливаем первую кнопку активной
    sidebar->setActiveButton(ui->pushButton);

    // Перемещаем индикатор к первой кнопке после инициализации
    QTimer::singleShot(0, this, [this]() {
        sidebar->moveIndicator(ui->pushButton);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

// ВХОД
void MainWindow::on_pushButton_vhod_clicked()
{
    loginHandler->tryLogin();
}

// НАВИГАЦИЯ
void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget_2->setCurrentWidget(ui->page);
    animatePage(ui->page);
    sidebar->moveIndicator(ui->pushButton);
    sidebar->setActiveButton(ui->pushButton);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget_2->setCurrentWidget(ui->page_2);
    animatePage(ui->page_2);
    sidebar->moveIndicator(ui->pushButton_2);
    sidebar->setActiveButton(ui->pushButton_2);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget_2->setCurrentWidget(ui->page_3);
    animatePage(ui->page_3);
    sidebar->moveIndicator(ui->pushButton_3);
    sidebar->setActiveButton(ui->pushButton_3);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget_2->setCurrentWidget(ui->page_4);
    animatePage(ui->page_4);
    sidebar->moveIndicator(ui->pushButton_4);
    sidebar->setActiveButton(ui->pushButton_4);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget_2->setCurrentWidget(ui->page_5);
    animatePage(ui->page_5);
    sidebar->moveIndicator(ui->pushButton_5);
    sidebar->setActiveButton(ui->pushButton_5);
}

// АНИМАЦИЯ СТРАНИЦ
void MainWindow::animatePage(QWidget *page)
{
    page->setWindowOpacity(0.0);

    auto *anim = new QPropertyAnimation(page, "windowOpacity");
    anim->setDuration(180);
    anim->setStartValue(0.0);
    anim->setEndValue(1.0);
    anim->start(QAbstractAnimation::DeleteWhenStopped);
}
