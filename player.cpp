#include "player.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>

Player::Player(QWidget *parent):
    QVideoWidget(parent)
{
    isFullScreen = false;
    m_MediaPlayer = new QMediaPlayer();

    //给VideoWidget画上黑色的背景（默认是灰白色的）
    QPalette *palette = new QPalette();
    palette->setBrush(QPalette::Background, Qt::black);
    this->setPalette(*palette);
    this->setAutoFillBackground(true);
    delete palette;

    //视频可按比例拉伸
    this->setAspectRatioMode(Qt::KeepAspectRatio);
    m_MediaPlayer->setVideoOutput(this);

    //通过mediaPlaylist来按列表播放
    m_MediaplayList = new QMediaPlaylist();
    m_MediaPlayer->setPlaylist(m_MediaplayList);
    m_MediaplayList->addMedia(QMediaContent(QUrl::fromLocalFile("C:\\Users\\rj05\\Desktop\\视频融合.avi")));
    m_MediaplayList->addMedia(QMediaContent(QUrl::fromLocalFile("C:\\Users\\rj05\\Desktop\\野生视频.wmv")));
}

void Player::mouseDoubleClickEvent(QMouseEvent *)
{
    isFullScreen = !isFullScreen;
    this->setFullScreen(isFullScreen);
}

void Player::play(int i)
{
    m_MediaplayList->setCurrentIndex(i);
    m_MediaPlayer->play();
}

void Player::pause(int i)
{
    m_MediaPlayer->pause();
}

void Player::stop(int i)
{
    m_MediaPlayer->stop();
}

Player::~Player()
{

}
