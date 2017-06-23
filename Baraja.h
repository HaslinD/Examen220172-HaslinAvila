#include <string>
#include "Cartas.h"

using namespace std;

#ifndef BARAJA_H
#define BARAJA_H

class Baraja {
	private:
		Cartas* cartas;
		
	public:
		Baraja();
		Baraja(Cartas*);

		
};
#endif