#include <string>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H

class Persona {
	private:
		string nombre;
		int edad;
		int id;

	public:
		Persona();
		Persona(string, int, int);

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		int getID();
		void setID(int);
};
#endif