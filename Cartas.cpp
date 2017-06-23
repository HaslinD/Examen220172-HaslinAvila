#include "Cartas.h"

using namespace std;

Cartas :: Cartas () {

}

Cartas :: Cartas (string valor, string simbolos, string color){
	this -> valor = valor;
	this -> simbolos = simbolos;
	this -> color = color;
}

string Cartas :: getValor(){
	return valor;
}

void Cartas :: setValor(string valor) {
	this -> valor = valor;
}

string Cartas :: getSimbolos() {
	return simbolos;
}

void Cartas :: setSimbolos(string simbolos) {
	this -> simbolos = simbolos;

}

double Cartas :: getColor() {
	return color;
}

void Cartas :: setColor(string color) {
	this -> color = color;
}