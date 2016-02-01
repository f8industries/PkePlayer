#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QAbstractListModel>

class Playlist : public QAbstractListModel
{
    Q_OBJECT
public:
    explicit Playlist(QObject *parent = 0);

signals:

public slots:

};

#endif // PLAYLIST_H
