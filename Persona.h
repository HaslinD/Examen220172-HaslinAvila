#include <string>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H

class Persona {
	private:
		string nombre;
		int edad;
		string id;

	public:
		Persona();
		Persona(string, int, string);

		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		string getID();
		void setID(string);
};
#endif