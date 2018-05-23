#include <cstdlib>
//Incluimos las funciones básicas de Allegro
//#include <allegro5/allegro.h>
#include <iostream>
//#include "../allegro5/allegro.h"
#include <allegro5/allegro.h>
using namespace std;
void input() {
}
void update() {
}
void draw() {
}
void result() {
}
int main(int argc, char** argv) {
	bool gameOver = false;
	//  Crea un puntero a un ALLEGRO_DISPLAY
	ALLEGRO_DISPLAY* ventana;

	//  Inicia allegro5, esto es necesario para realizar cualquier
	//  función de allegro
	al_init();

	//  al_create_display(640,480) crea un puntero a un ALLEGRO_DISPLAY
	//  y crea un ALLEGRO_DISPLAY de las dimensiones especificadas, en
	//  este caso 640 de ancho por 480 de alto
	ventana = al_create_display(640, 480);

	
	while (!gameOver) {

		//  La siguiente función limpia el buffer, con un color determinado, 
		//  recibe como parámetro un ALLEGRO_COLOR. 
		//  La función al_map_rgb(0,0,0) recibe como tres enteres sin signo,
		//  cada uno determina la cantidad del color rojo, verde y azul
		//  respectivamente; esta función devuelve un ALLEGRO_COLOR con lo
		//  que encaja perfecto con el parámetro que recibe la función
		//  al_clear_to_color(...)
		al_clear_to_color(al_map_rgb(0, 0, 0));


		//  Intercambia los buffers, ahora la ventana mostrará tendrá fondo
		//  de color negro. Si minimiza la ventana y la vuelve restaurar, se
		//  dará cuenta que ahora la pantalla muestra lo que estuve detrás.
		//  Esto es porque el buffer ahora tiene lo que estaba detrás de la
		//  ventana. Luego veremos como redibujar la ventana cuando se realice
		//  un evento.
		al_flip_display();

		//  Función que recibe como parámetro un número del tipo double, y que
		//  refiere a la cantidad de segundos que esperará para pasar a la
		//  siguiente instrucción. En este caso luego de pasados dos segundos
		//  pasará a return 0 con lo que se cerrará la ventana.
		//al_rest(2);(instrucion comentada)
	}
	//  No olvidarnos de eliminar el contenido bajo el puntero de ventana,
	//  esto eliminará a la ventana de la memoria.
	al_destroy_display(ventana);
	return 0;
}
