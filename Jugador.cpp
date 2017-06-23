#include "Jugador.h"

using namespace std;

Jugador :: Jugador () {

}

Jugador :: Jugador (string lugarproced, string apodo, double montodinero, string nombre, int edad, string id) : Persona(nombre, edad, id){
	this -> lugarproced = lugarproced;
	this -> apodo = apodo;
	this -> montodinero = montodinero;
}

string Jugador :: getLugar() {
	return lugarproced;
}

void Jugador :: setLugar() {
	this -> lugarproced = lugarproced;
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