#include "addpersonform.h"
#include "ui_addpersonform.h"
#include <QMessageBox>
#include <QDebug>
#include <QStackedWidget>

AddPersonForm::AddPersonForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddPersonForm)
{
    ui->setupUi(this);

    // Подключение кнопок
    connect(ui->pushButton_Save, &QPushButton::clicked, this, &AddPersonForm::onSaveClicked);
    connect(ui->pushButton_Cancel, &QPushButton::clicked, this, &AddPersonForm::onCancelClicked);
}

AddPersonForm::~AddPersonForm()
{
    delete ui;
}

void AddPersonForm::onSaveClicked()
{
    QString name = ui->lineEdit_Name->text().trimmed();
    QString login = ui->lineEdit_Login->text().trimmed();
    QString password = ui->lineEdit_Password->text();

    // Валидация
    if (name.isEmpty() || login.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля!");
        return;
    }

    // TODO: Здесь будет сохранение в БД (пока заглушка)
    QMessageBox::information(this, "Успех", "Пользователь добавлен: " + name);

    emit personAdded();

    // Очистка формы
    ui->lineEdit_Name->clear();
    ui->lineEdit_Login->clear();
    ui->lineEdit_Password->clear();
}

void AddPersonForm::onCancelClicked()
{
    // Возврат на страницу пользователей (page_3)
    QWidget *parentWidget = this->parentWidget();
    if (parentWidget) {
        QStackedWidget *stackedWidget = qobject_cast<QStackedWidget*>(parentWidget);
        if (stackedWidget) {
            // Находим страницу page_3 и переключаемся на неё
            for (int i = 0; i < stackedWidget->count(); ++i) {
                QWidget *page = stackedWidget->widget(i);
                if (page && page->objectName() == "page_3") {
                    stackedWidget->setCurrentWidget(page);
                    return;
                }
            }
        }
    }
}
