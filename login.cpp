#include "login.h"
#include "QMessageBox"
#include "QDebug"

LoginHandler::LoginHandler(QLineEdit *LoginEdit,
                           QLineEdit *passwordEdit,
                           QStackedWidget *stackedWidget,
                           QWidget *mainPage,
                           QObject *parent)
    : QObject(parent)
    , loginEdit(LoginEdit)
    , passwordEdit(passwordEdit)
    , stackedWidget(stackedWidget)
    , mainPage(mainPage)
{
    // Доп настройки
}

void LoginHandler::tryLogin()
{
    QString login = loginEdit->text().trimmed();
    QString password = passwordEdit->text();

    if (login.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(
            nullptr,
            "Ошибка входа",
            "Пожалуйста, заполните все поля!"
            );

        if (login.isEmpty()) {
            loginEdit->setFocus();
        } else {
            passwordEdit->setFocus();
        }

        return;
    }

    stackedWidget->setCurrentWidget(mainPage);
    emit loginSuccessful();
    passwordEdit->clear();
}

    // Пока просто переходим на главную страницу

bool LoginHandler::isValid() const
{
    return !loginEdit->text().trimmed().isEmpty() &&
           !passwordEdit->text().isEmpty();
}
