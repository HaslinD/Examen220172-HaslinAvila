#include "Mesa.h"

using namespace std;

Mesa :: Mesa () {

}

Mesa :: Mesa (int nmesa, Repartidor repart, Jugador juga) {
	this -> nmesa = nmesa;
	this -> repart = repart;
	this -> juga = juga;
}

int Mesa :: getNmesa(){
	return nmesa;
}

void Mesa :: setNmesa(int nmesa) {
	this -> nmesa = nmesa;
}

Repartidor Mesa :: getRepart() {
	return repart;
}

void Mesa :: setRepart(Repartidor repart) {
	this -> repart = repart;
}

Jugador Mesa :: getJugad()  {
	return juga;
}

void Mesa :: setJugad(Jugador juga) {
	this -> juga = juga;
}