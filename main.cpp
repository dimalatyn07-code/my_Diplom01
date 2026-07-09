#include "intro.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Создаём интро
    Intro intro;

    // Создаём основное окно (пока скрыто)
    MainWindow w;

    // Когда интро закончится — показываем основное окно
    QObject::connect(&intro, &Intro::introFinished, &w, [&w]() {
        w.show();
        // Центрируем основное окно
        QScreen *screen = QGuiApplication::primaryScreen();
        QRect screenGeometry = screen->geometry();
        int x = (screenGeometry.width() - w.width()) / 2;
        int y = (screenGeometry.height() - w.height()) / 2;
        w.move(x, y);
    });

    // Показываем интро
    intro.show();

    return a.exec();
}
