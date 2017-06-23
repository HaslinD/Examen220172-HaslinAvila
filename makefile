Main: Main.o Persona.o Administrador.o Repartidor.o Baraja.o Cartas.o Jugador.o Mesablackjack.o
	g++ Main.o Persona.o Administrador.o Repartidor.o Baraja.o Cartas.o Jugador.o Mesablackjack.o -o Main

Main.o: Persona.h Administrador.h Repartidor.h Jugador.h Baraja.h Mesablackjack.h Main.cpp
	g++ -c Main.cpp

Persona.o: Persona.h Persona.cpp
	g++ -c Persona.cpp

Administrador.o: Persona.h Administrador.h Administrador.cpp
	g++ -c Administrador.cpp

Repartidor.o: Persona.h Baraja.h Repartidor.h Repartidor.cpp
	g++ -c Repartidor.cpp

Jugador.o: Persona.h Jugador.h Jugador.cpp
	g++ -c Jugador.cpp

Baraja.o: Cartas.h Baraja.h Baraja.cpp
	g++ -c Baraja.cpp

Mesablackjack.o: Mesablackjack.h Mesablackjack.cpp
	g++ -c Mesablackjack.cpp

clean:
	rm -f *.o Main

