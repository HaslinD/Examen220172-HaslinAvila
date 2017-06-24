#include "Baraja.h"

using namespace std;

Baraja :: Baraja () {

}
		
Baraja :: Baraja (vector<Cartas*> cards) {
	cartas = cards;
}

vector<Cartas*> Baraja :: getBaraja() {
	return cartas;
}

void Baraja :: setBaraja(vector<Cartas*> cards) {
	cartas = cards;
}