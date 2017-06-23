#include <string>
#include "Persona.h"

using namespace std;

#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador : public Persona{
	private:
		string apodo;
		double montodinero;

	public:
		Jugador();
		Jugador(string, double, string, int, int);

		string getApodo();
		void setApodo(string);

		double getMonto();
		void setMonto(double);

};
#endif