#include "VlcPlayer.h"


static void *lock(void *op, void **plane)
{
	TCallbackParam *p = (TCallbackParam *)op;
	p->mutex.lock();

	*plane = p->pixels;
	return NULL;
}

static void unlock(void *op, void *pic, void *const *plane)
{
	TCallbackParam *p = (TCallbackParam *)op;
	uchar *data = (uchar *)*plane;
	QImage image(data, WIDTH, HEIGHT, QImage::Format_RGBA8888);
	p->video->setPixmap(QPixmap::fromImage(image).scaled(p->video->size(), Qt::KeepAspectRatio));
	p->mutex.unlock();
}


VlcPlayer::VlcPlayer(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	param = new TCallbackParam;
	param->pixels = new uchar[WIDTH * HEIGHT * 4];
	param->video = ui.video;
	memset(param->pixels, 0, WIDTH * HEIGHT * 4);


	inst = libvlc_new(0, NULL);
	m = libvlc_media_new_path(inst, "D:\\test.mp4");
	mp = libvlc_media_player_new_from_media(m);
	libvlc_media_release(m);
	
	libvlc_video_set_callbacks(mp, lock, unlock, NULL, param);
	libvlc_video_set_format(mp, "RGBA", WIDTH, HEIGHT, 1280*4);
	libvlc_media_player_play(mp);

}

VlcPlayer::~VlcPlayer()
{
	libvlc_media_player_release(mp);
	libvlc_release(inst);
	delete param;
}