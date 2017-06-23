#include <string>
#include "Persona.h"
#include "Repartidor.h"
#include "Jugador.h"

using namespace std;

#ifndef MESA_H
#define MESA_H

class Mesa {
	private:
		int nmesa;
		string tipo;
		Repartidor repart;
		Jugador juga;

	public:
		Mesa();
		Mesa(int, string, Repartidor, Jugador);

		string getTipo();
		void setTipo(string);

		int getNmesa();
		void setNmesa(int);

		Repartidor getRepart();
		void setRepart(Repartidor);

		Jugador getJugad();
		void setJugad(Jugador);
};
#endif