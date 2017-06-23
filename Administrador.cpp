#include "Administrador.h"

using namespace std;

Administrador :: Administrador () {

}

Administrador :: Administrador (string experiencia, string rango, double gana, string nombre, int edad, int id) : Persona(nombre, edad, id){
	this -> experiencia = experiencia;
	this -> rango = rango;
	this -> gana = gana;
}

string Administrador :: getExperiencia(){
	return experiencia;
}

void Administrador :: setExperiencia(string experiencia) {
	this -> experiencia = experiencia;
}

string Administrador :: getRango() {
	return rango;
}

void Administrador :: setRango(string rango) {
	this -> rango = rango;
}

double Administrador :: getGana() {
	return gana;
}

void Administrador :: setGana(double gana) {
	this -> gana = gana;
}