#include <string>
#include <vector>
#include "Cartas.h"

using namespace std;

#ifndef BARAJA_H
#define BARAJA_H

class Baraja {
	private:
		vector<Cartas*> cartas;
		
	public:
		Baraja();
		Baraja(vector<Cartas*>);

		vector<Cartas*> getBaraja();
		void setBaraja(vector<Cartas*>);		
		
};
#endif