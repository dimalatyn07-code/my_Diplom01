#include "login.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QCryptographicHash>
#include <QFileInfo> // Добавлено для проверки существования файла

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
}

void LoginHandler::tryLogin()
{
    QString login = loginEdit->text().trimmed();
    QString password = passwordEdit->text();

    if (login.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(nullptr, "Ошибка входа", "Пожалуйста, заполните все поля!");
        return;
    }

    // 1. ЖЁСТКО задаем абсолютный путь к твоей базе данных
    QString dbPath = "/home/dmitri/MyDiplom/database-journal.db";

    // 2. Проверяем, видит ли программа этот файл (смотрим в консоль Qt Creator)
    qDebug() << "=== ОТЛАДКА БД ===";
    qDebug() << "Путь к БД:" << dbPath;
    qDebug() << "Файл существует?" << QFileInfo(dbPath).exists();

    // 3. Используем именованное соединение, чтобы избежать предупреждений при повторных вызовах
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "login_db_connection");
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        QMessageBox::critical(nullptr, "Ошибка БД", "Не удалось подключиться:\n" + db.lastError().text());
        return;
    }

    QSqlQuery query(db); // Передаем db явно в запрос
    query.prepare("SELECT password_hash, role_id FROM admin_users WHERE username = :username");
    query.bindValue(":username", login);

    if (!query.exec()) {
        // Если таблица не найдена, мы увидим это здесь!
        QMessageBox::critical(nullptr, "Ошибка запроса", "SQL Ошибка:\n" + query.lastError().text());
        db.close();
        return;
    }

    if (query.next()) {
        QString storedData = query.value(0).toString();
        int roleId = query.value(1).toInt();

        QStringList parts = storedData.split(':');
        if (parts.size() == 2) {
            QString salt = parts[0];
            QString storedHash = parts[1];

            QString inputHash = QString(QCryptographicHash::hash((salt + password).toUtf8(), QCryptographicHash::Sha256).toHex());

            if (inputHash == storedHash) {
                qDebug() << "✅ Вход успешен! Роль ID:" << roleId;
                stackedWidget->setCurrentWidget(mainPage);
                emit loginSuccessful();
                passwordEdit->clear();
            } else {
                QMessageBox::warning(nullptr, "Ошибка входа", "Неверный логин или пароль!");
                passwordEdit->clear();
            }
        } else {
            QMessageBox::warning(nullptr, "Ошибка", "Неверный формат данных в БД!");
        }
    } else {
        QMessageBox::warning(nullptr, "Ошибка входа", "Неверный логин или пароль!");
    }

    // Закрываем и удаляем соединение, чтобы при следующем входе не было конфликтов
    QString connectionName = db.connectionName();
    db.close();
    QSqlDatabase::removeDatabase(connectionName);
}
