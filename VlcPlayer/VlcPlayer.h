#pragma once

#include <QtWidgets/QWidget>
#include "ui_VlcPlayer.h"

#include <QMutex>
#include <QMutexLocker>
#include <QLabel>
#include <QPixMap>
#include <QImage>

#include "vlc/vlc.h"
#include "opencv2/opencv.hpp"

#define	WIDTH	1280
#define HEIGHT	720

typedef struct TCallbackParam
{
	QMutex mutex;
	QLabel *video;
	uchar *pixels;

}TCallbackParam;


class VlcPlayer : public QWidget
{
    Q_OBJECT

public:
    VlcPlayer(QWidget *parent = Q_NULLPTR);
	~VlcPlayer();

private:
    Ui::VlcPlayerClass ui;

	libvlc_instance_t *inst;
	libvlc_media_player_t *mp;
	libvlc_media_t *m;

	TCallbackParam *param;
};
