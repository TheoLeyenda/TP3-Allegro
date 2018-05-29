#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
class Jugador
{
private:
	ALLEGRO_BITMAP  *bitmapJugador;
	float x;
	float y;
public:
	Jugador();
	~Jugador();
	void loadImage();
	bool CheckLoadImage(ALLEGRO_DISPLAY *_display);
	void draw(ALLEGRO_BITMAP *_bitmapJugador, int flags);
	ALLEGRO_BITMAP* getBitmap();
	void movement();
};
#endif
