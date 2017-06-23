#include "Mesa.h"

using namespace std;

Mesa :: Mesa () {

}

Mesa :: Mesa (int nmesa, string tipo, Repartidor repart, Jugador juga) {
	this -> nmesa = nmesa;
	this -> tipo = tipo;
	this -> repart = repart;
	this -> juga = juga;
}

string Mesa :: getTipo(){
	return tipo;
}

void Mesa :: setTipo(string tipo) {
	this -> tipo = tipo;
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