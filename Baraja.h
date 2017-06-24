#include <string>
#include <vector>
#include "Cartas.h"

using namespace std;

#ifndef BARAJA_H
#define BARAJA_H

class Baraja {
	private:
		vector<Cartas*> cards;
		
	public:
		Baraja();
		Baraja(vector<Cartas*>);

		
};
#endif