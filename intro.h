#ifndef INTRO_H
#define INTRO_H

#include <QWidget>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>

class Intro : public QWidget {
    Q_OBJECT

public:
    explicit Intro(QWidget *parent = nullptr);
    ~Intro();

signals:
    void introFinished();

private slots:
    void onVideoFinished();

private:
    void setupUI();
    void centerOnScreen();
    void applyStyles();

    QMediaPlayer *player;
    QVideoWidget *videoWidget;
};

#endif // INTRO_H
