#include <string>
#include <stdlib.h>

using namespace std;

#ifndef CARTAS_H
#define CARTAS_H

class Cartas {
	private:
		string valor;
		string simbolos;
		string color;
		Cartas* cartas;

	public:
		Cartas();
		Cartas(string, string, string);

		string getValor();
		void setValor(string);

		string getSimbolos();
		void setSimbolos(string);

		string getColor();
		void setColor(string);

		//Cartas* getBaraja();

		Cartas* CrearPalos();
};
#endif