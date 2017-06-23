#include "Jugador.h"

using namespace std;

Jugador :: Jugador () {

}

Jugador :: Jugador (string apodo, double montodinero, string nombre, int edad, int id) : Persona(nombre, edad, id){
	this -> apodo = apodo;
	this -> montodinero = montodinero;
}

string Jugador :: getApodo(){
	return apodo;
}

void Jugador :: setApodo(string apodo) {
	this -> apodo = apodo;
}

double Jugador :: getMonto() {
	return montodinero;
}

void Jugador :: setMonto(double montodinero) {
	this -> montodinero = montodinero;
}