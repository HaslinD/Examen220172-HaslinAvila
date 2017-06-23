#include <string>

using namespace std;

#ifndef CARTAS_H
#define CARTAS_H

class Cartas {
	private:
		string valor;
		string simbolos;
		string color;

	public:
		Cartas();
		Cartas(string, string, string);

		string getValor();
		void setValor(string);

		string getSimbolos();
		void setSimbolos(string);

		string getColor();
		void setColor(string);
		
};
#endif