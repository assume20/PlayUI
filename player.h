#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <QVideoWidget>


class QMediaPlayer;
class QMediaPlaylist;

class Player:public QVideoWidget
{
public:
    Player(QWidget *parent = NULL);
    void play(int i);
    void pause(int i);
    void stop(int i);
    ~Player();
    void mouseDoubleClickEvent(QMouseEvent *);

private:
    QMediaPlayer *m_MediaPlayer;
    QMediaPlaylist *m_MediaplayList;
    bool isFullScreen;

};



#endif
