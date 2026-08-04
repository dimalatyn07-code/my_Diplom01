#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QScreen>
#include <QGuiApplication>
#include "login.h"
#include "sidebar.h"
#include "addpersonform.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_vhod_clicked();

    // Навигация по страницам
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    
    // Обработка кнопки добавления пользователя
    void on_pushButton_NewPerson_clicked();

private:
    Ui::MainWindow *ui;

    // Модули
    LoginHandler *loginHandler;
    Sidebar *sidebar;
    AddPersonForm *addPersonForm;

    // Анимация страниц
    void animatePage(QWidget *page);
};

#endif // MAINWINDOW_H
