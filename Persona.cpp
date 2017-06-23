#include "Persona.h"

using namespace std;

Persona :: Persona () {

}

Persona :: Persona (string nombre, int edad, string id) {
	this -> nombre = nombre;
	this -> edad = edad;
	this -> id = id;
}

string Persona :: getNombre(){
	return nombre;
}

void Persona :: setNombre(string nombre) {
	this -> nombre = nombre;
}

int Persona :: getEdad() {
	return edad;
}

void Persona :: setEdad(int edad) {
	this -> edad = edad;

}

string Persona :: getID() {
	return id;
}

void Persona :: setID(string id) {
	this -> id = id;
}