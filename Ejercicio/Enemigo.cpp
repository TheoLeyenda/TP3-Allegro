#include "Enemigo.h"

/*
void Jugador::draw(ALLEGRO_BITMAP *_bitmapJugador, int flags)
{

	al_draw_bitmap(bitmapJugador, x, y, flags);
}
*/
Enemigo::Enemigo()
{
	bitmapJugador = NULL;
	x = 0;
	y = 0;
	w = 36;
	h = 38;
}
Enemigo::Enemigo(float _x, float _y, float _w, float _h)
{
	bitmapJugador = NULL;
	x = _x;
	y = _y;
	h = _h;
	w = _w;
}

Enemigo::~Enemigo()
{
	al_destroy_bitmap(bitmapJugador);
}
void Enemigo::loadImage()
{
	bitmapJugador = al_load_bitmap("../Sprite/Enemigo1.png");

}
void Enemigo::setImage(int imagen)
{
	switch (imagen)
	{
	case 1:
		bitmapJugador = al_load_bitmap("../Sprite/Enemigo1.png");
		break;
	case 2:
		bitmapJugador = al_load_bitmap("../Sprite/Enemigo1 - Derecha.png");
		break;
	case 3:
		bitmapJugador = al_load_bitmap("../Sprite/Enemigo1 - Izquierda.png");
		break;
	case 4:
		bitmapJugador = al_load_bitmap("../Sprite/Enemigo1 - Abajo.png");
		break;
	default:
		cout << "debe usarse un numero entre el 1 y el 4" << endl;
		break;
	}
}
bool Enemigo::CheckLoadImage(ALLEGRO_DISPLAY *_display)
{
	if (!bitmapJugador) {
		return false;// si da falso que en el programa principal retorne 0
	}
	else
	{
		return true;
	}
}
void Enemigo::draw(ALLEGRO_BITMAP *_bitmapJugador, int flags)
{

	al_draw_bitmap(bitmapJugador, x, y, flags);
}
ALLEGRO_BITMAP* Enemigo::getBitmap()
{
	return bitmapJugador;
}
void Enemigo::setX(float _x)
{
	x = _x;
}
void Enemigo::setY(float _y)
{
	y = _y;
}
float Enemigo::getX()
{
	return x;
}
float Enemigo::getY()
{
	return y;
}
void Enemigo::setH(float _h)
{
	h = _h;
}
void Enemigo::setW(float _w)
{
	w = _w;
}
float Enemigo::getW()
{
	return w;
}
float Enemigo::getH()
{
	return h;
}