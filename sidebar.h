#ifndef SIDEBAR_H
#define SIDEBAR_H

#include <QObject>
#include <QPushButton>
#include <QWidget>
#include <QList>
#include <QEvent>

class Sidebar : public QObject
{
    Q_OBJECT

public:
    explicit Sidebar(QPushButton *menuButton,
                     QList<QPushButton*> navButtons,
                     QWidget *indicator,
                     QObject *parent = nullptr);

    // Установка активной кнопки
    void setActiveButton(QPushButton *button);

    // Перемещение индикатора
    void moveIndicator(QWidget *button);

    // Инициализация hover-эффектов
    void setupHoverEffects();

signals:
    // Сигнал при нажатии на кнопку навигации
    void buttonClicked(QPushButton *button);

private:
    QPushButton *menuButton;
    QList<QPushButton*> navButtons;
    QWidget *indicator;

    // Event filter для hover эффектов
    bool eventFilter(QObject *watched, QEvent *event) override;
};

#endif // SIDEBAR_H
