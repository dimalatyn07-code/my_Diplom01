#include "sidebar.h"
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QEvent>
#include <QSize>

Sidebar::Sidebar(QPushButton *menuButton,
                 QList<QPushButton*> navButtons,
                 QWidget *indicator,
                 QObject *parent)
    : QObject(parent)
    , menuButton(menuButton)
    , navButtons(navButtons)
    , indicator(indicator)
{
    // Инициализация кнопок
    for (auto btn : navButtons) {
        btn->setCheckable(true);
        btn->installEventFilter(this);
    }

    // Первая кнопка активна по умолчанию
    if (!navButtons.isEmpty()) {
        navButtons.first()->setChecked(true);
    }
}

void Sidebar::setActiveButton(QPushButton *button)
{
    // Снимаем выделение со всех кнопок
    for (auto btn : navButtons) {
        btn->setChecked(false);
    }

    // Выделяем нужную кнопку
    button->setChecked(true);
}

void Sidebar::moveIndicator(QWidget *button)
{
    // Получаем позицию кнопки относительно frame (где находится индикатор)
    // Используем mapTo для правильного преобразования координат
    QPoint buttonPos = button->mapTo(indicator->parentWidget(), QPoint(0, 0));

    // Вычисляем центр кнопки по вертикали
    int y = buttonPos.y() + (button->height() - indicator->height()) / 2;

    // Создаем анимацию
    auto *anim = new QPropertyAnimation(indicator, "pos");
    anim->setDuration(200);
    anim->setStartValue(indicator->pos());
    anim->setEndValue(QPoint(indicator->x(), y));
    anim->setEasingCurve(QEasingCurve::OutCubic);

    anim->start(QAbstractAnimation::DeleteWhenStopped);
}

void Sidebar::setupHoverEffects()
{
    // Hover эффекты уже настроены через eventFilter
    // Этот метод можно использовать для дополнительных настроек
}

bool Sidebar::eventFilter(QObject *watched, QEvent *event)
{
    QPushButton *btn = qobject_cast<QPushButton*>(watched);

    if (btn && navButtons.contains(btn)) {
        if (event->type() == QEvent::Enter) {
            // Увеличиваем иконку при наведении
            btn->setIconSize(QSize(22, 22));
        }

        if (event->type() == QEvent::Leave) {
            // Возвращаем обычный размер иконки
            btn->setIconSize(QSize(18, 18));
        }
    }

    return QObject::eventFilter(watched, event);
}
