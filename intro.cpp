#include "intro.h"
#include <QApplication>
#include <QScreen>
#include <QUrl>

Intro::Intro(QWidget *parent) : QWidget(parent) {
    setupUI();
    centerOnScreen();
    applyStyles();

    // Загружаем видео из ресурсов
    player->setSource(QUrl("qrc:/introRec/intro_source_file/intro.mp4"));
    player->play();
}

Intro::~Intro() {
    delete player;
}

void Intro::setupUI() {
    // Фиксированный размер 1300x700
    setFixedSize(1300, 700);
    setWindowFlags(Qt::FramelessWindowHint); // Убираем рамку окна

    // Основной layout
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    // Виджет для видео
    videoWidget = new QVideoWidget(this);
    layout->addWidget(videoWidget);

    // Настройка плеера
    player = new QMediaPlayer(this);
    player->setVideoOutput(videoWidget);

    // Сигнал окончания видео
    connect(player, &QMediaPlayer::mediaStatusChanged, this, [this](QMediaPlayer::MediaStatus status) {
        if (status == QMediaPlayer::EndOfMedia) {
            onVideoFinished();
        }
    });

    // Также обрабатываем ошибку (если видео не загрузилось)
    connect(player, &QMediaPlayer::errorOccurred, this, [this](QMediaPlayer::Error error) {
        qWarning() << "Video error:" << error;
        onVideoFinished(); // Пропускаем интро при ошибке
    });
}

void Intro::onVideoFinished() {
    emit introFinished();
    close();
}

void Intro::centerOnScreen() {
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (screenGeometry.width() - width()) / 2;
    int y = (screenGeometry.height() - height()) / 2;
    move(x, y);
}

void Intro::applyStyles() {
    setStyleSheet("background-color: #000000;");
}
