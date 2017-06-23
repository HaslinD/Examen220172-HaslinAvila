#include <string>
#include "Persona.h"

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador : public Persona{
	private:
		string lugarproced;
		string apodo;
		double montodinero;

	public:
		Jugador();
		Jugador(string, string, double, string, int, string);

		string getLugar();
		void setLugar(string);

		string getApodo();
		void setApodo(string);

		double getMonto();
		void setMonto(double);

};
#endif