#include <string>
#include "Persona.h"

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador : public Persona{
	private:
		string experiencia;
		string rango;
		double gana;

	public:
		Administrador();
		Administrador(string, string, double, string, string, int);

		string getExperiencia();
		void setExperiencia(string);

		string getRango();
		void setRango(string);

		double getGana();
		void setGana(double);
};
#endif