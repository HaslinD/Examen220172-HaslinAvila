#include <string>
#include <vector>
#include "Persona.h"
#include "Baraja.h"

using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H

class Repartidor : public Persona{
	private:
		string dificultad;
		double dinero;
		Baraja* baraja;

	public:
		Repartidor();
		Repartidor(string, double, Baraja*, string, int, int);

		string getDificultad();
		void setDificultad(string);

		double getDinero();
		void setDinero(double);

};
#endif