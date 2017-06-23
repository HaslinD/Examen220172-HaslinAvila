#include <string>
#include <stdlib.h>

using namespace std;

#ifndef CARTAS_H
#define CARTAS_H

class Cartas {
	private:
		int valor;
		string simbolos;
		string color;
		Cartas* cartas;

	public:
		Cartas();
		Cartas(int, string, string);

		int getValor();
		void setValor(int);

		string getSimbolos();
		void setSimbolos(string);

		string getColor();
		void setColor(string);

		//Cartas* getBaraja();

		//Cartas* CrearPalos();
};
#endif