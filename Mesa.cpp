#include "Mesa.h"

using namespace std;

Mesa :: Mesa () {

}

Mesa :: Mesa (int nmesa, Repartidor repart, Jugador jugad) {
	this -> nmesa = nmesa;
	this -> repart = repart;
	this -> jugad = jugad;
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
	return jugad
}

void Mesa :: setJugad(Jugador jugad) {
	this -> jugad = jugad;
}