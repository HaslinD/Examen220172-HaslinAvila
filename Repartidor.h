#include <string>
#include <vector>
#include "Persona.h"
#include "Baraja.h"

using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H

class Repartidor {
	private:
		string dificultad;
		double dinero;
		Baraja* baraja;

	public:
		Repartidor();
		Repartidor(string, string, double);

		string getExperiencia();
		void setExperiencia(string);

		string getRango();
		void setRango(string);

		double getGana();
		void setGana(double);
};
#endif