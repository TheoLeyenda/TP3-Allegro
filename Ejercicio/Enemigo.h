#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
#include "allegro5/allegro_primitives.h"
using namespace std;
class Enemigo
{
private:
	ALLEGRO_BITMAP  *bitmapJugador;
	float x;
	float y;
	float h;
	float w;
public:
	Enemigo();
	Enemigo(float _x, float _y, float _w, float _h);
	~Enemigo();
	void loadImage();
	bool CheckLoadImage(ALLEGRO_DISPLAY *_display);
	void draw(ALLEGRO_BITMAP *_bitmapJugador, int flags);
	void setImage(int imagen);
	ALLEGRO_BITMAP* getBitmap();
	void setX(float _x);
	void setY(float _y);
	float getX();
	float getY();
	void setH(float _h);
	void setW(float _w);
	float getH();
	float getW();


};
#endif
