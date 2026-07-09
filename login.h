#ifndef LOGIN_H
#define LOGIN_H

#include <QObject>
#include <QLineEdit>
#include <QStackedWidget>
#include <QWidget>

class LoginHandler : public QObject
{
    Q_OBJECT

public:
    explicit LoginHandler(QLineEdit *loginEdit,
                          QLineEdit *passwordEdit,
                          QStackedWidget *stackedWidget,
                          QWidget *mainPage,
                          QObject *parent = nullptr);

    // Попытка входа
    void tryLogin();

    // Проверка валидности (для блокировки кнопки)
    bool isValid() const;

signals:
    // Сигнал успешного входа
    void loginSuccessful();

    // Сигнал ошибки (пустые поля)
    void loginError(const QString &message);

private:
    QLineEdit *loginEdit;
    QLineEdit *passwordEdit;
    QStackedWidget *stackedWidget;
    QWidget *mainPage;
};

#endif // LOGIN_H
