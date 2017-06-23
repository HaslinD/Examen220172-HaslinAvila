#include "Repartidor.h"

using namespace std;

Repartidor :: Repartidor () {

}

Repartidor :: Repartidor (string dificultad, double dinero, Baraja* baraja, string nombre, int edad, int id) : Persona(nombre, edad, id){
	this -> dificultad = dificultad;
	this -> dinero = dinero;
	this -> baraja = baraja;
}

string Repartidor :: getDificultad(){
	return dificultad;
}

void Repartidor :: setDificultad(string dificultad) {
	this -> dificultad = dificultad;
}

double Repartidor :: getDinero() {
	return dinero;
}

void Repartidor :: setDinero(double dinero) {
	this -> dinero = dinero;
}
