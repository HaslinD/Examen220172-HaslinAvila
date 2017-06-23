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
		Repartidor repart;
		Jugador juga;

	public:
		Mesa();
		Mesa(int, Repartidor, Jugador);

		int getNmesa();
		void setNmesa(int);

		Repartidor getRepart();
		void setRepart(Repartidor);

		Jugador getJugad();
		void setJugad(Jugador);
};
#endif