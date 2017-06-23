#include "Cartas.h"

using namespace std;

Cartas :: Cartas () {

}

Cartas :: Cartas (int valor, string simbolos, string color){
	this -> valor = valor;
	this -> simbolos = simbolos;
	this -> color = color;
}

int Cartas :: getValor(){
	return valor;
}

void Cartas :: setValor(int valor) {
	this -> valor = valor;
}

string Cartas :: getSimbolos() {
	return simbolos;
}

void Cartas :: setSimbolos(string simbolos) {
	this -> simbolos = simbolos;

}

string Cartas :: getColor() {
	return color;
}

void Cartas :: setColor(string color) {
	this -> color = color;
}

/*Cartas* Cartas :: getBaraja() {
	return cartas;
}*/
