#include "Jugador.h"



Jugador::Jugador()
{
	bitmapJugador = NULL;
	x = 400-16;
	y = 300 - 32;
}


Jugador::~Jugador()
{
	al_destroy_bitmap(bitmapJugador);
}

void Jugador::loadImage()
{
	bitmapJugador = al_load_bitmap("../Sprite/JugadoOP1.png");
}
bool Jugador::CheckLoadImage(ALLEGRO_DISPLAY *_display)
{
	if (!bitmapJugador) {
		return false;// si da falso que en el programa principal retorne 0
	}
	else
	{
		return true;
	}
}
void Jugador::draw(ALLEGRO_BITMAP *_bitmapJugador, int flags)
{

	al_draw_bitmap(bitmapJugador, x, y, flags);
}
ALLEGRO_BITMAP* Jugador::getBitmap()
{
	return bitmapJugador;
}
void Jugador::movement()
{

}
