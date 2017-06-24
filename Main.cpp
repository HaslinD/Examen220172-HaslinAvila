#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include "Persona.h"
#include "Administrador.h"
#include "Mesa.h"
#include "Cartas.h"

using namespace std;

int menu();
int menu2();
int menu3();
int menu4();

int main() {
	vector<Administrador*> admin;
	vector<Jugador*> jugad;
	vector<Repartidor*> repart;
	vector<Mesa*> mesa;
	vector<Cartas*> cards;
	bool salir = false;
	while (!salir){
        switch(menu()){
           	case 1:{
           		string nombre, id;
           		int edad;
                bool salir2 = false;
				while (!salir2){
			        switch(menu2()){
			           	case 1:{
			                string experiencia, rango;
			                int opt;
			                double gana;
			                cout << "Ingrese Nombre: ";
			                cin >> nombre;
			                cout << "Ingrese su Edad: ";
			                cin >> edad;
			                cout << "Ingrese Su ID (Maximo 4 Numeros): ";
			                cin >> id;
			                cout << "Ingrese la Experiencia Laboral: ";
			                cin >> experiencia;
			                cout << "Ingrese el Rango de Administrador Propuesto: " << endl;
			                cout << "[1] Gerente Tiempo Completo" << endl 
			                	 << "[2] Gerente Medio-Tiempo" << endl 
			                	 << "[3] Gerente General" << endl;
			               	cout << "Selccione una opcion: ";
			               	cin >> opt;
			                if (opt == 1) {
			                	rango = "Gerente Tiempo Completo";
			                } else if (opt == 2) {
			                	rango = "Gerente Medio-Tiempo";
			                } else if (opt == 3) {
			                	rango = "Gerente General";
			                }
			                cout << "Ingrese el Sueldo propuesto a ganar: ";
			                cin >> gana;
			                admin.push_back(new Administrador(experiencia, rango, gana, nombre, edad, id));
			               	break;}

				       	case 2:{
				            string dificultad;
				            double dinero;
				            Baraja* baraja;
				            int opt;
				            cout << "Ingrese el Nombre: ";
				            cin >> nombre;
				            cout << "Ingrese la Edad: ";
				            cin >> edad;
				            cout << "Ingrese Su ID (Maximo 4 Numeros): ";
				            cin >> id;
				            cout << "Ingrese el La Dificultad: " << endl;
			                cout << "[1] Dificil" << endl 
			                	 << "[2] Intermedio" << endl 
			                	 << "[3] Facil" << endl;
			               	cout << "Selccione una opcion: ";
			               	cin >> opt;
			                if (opt == 1) {
			                	dificultad = "Dificil";
			                } else if (opt == 2) {
			                	dificultad = "Intermedio";
			                } else if (opt == 3) {
			                	dificultad = "Facil";
			                }
			                cout << "Agrege la Baraja....";
			                for (int i = 2; i <= 11; ++i) {
			                	if (i == 11) {
			                		cards.push_back(new Cartas(11, "A♠", "Black"));
			                	} else if (i == 10) {
			                		cards.push_back(new Cartas(10, "J♠", "Black"));
			                		cards.push_back(new Cartas(10, "Q♠", "Black"));
			                		cards.push_back(new Cartas(10, "K♠", "Black"));
			                		cards.push_back(new Cartas(10, "♠", "Black"));
			                	} else {
			                		cards.push_back(new Cartas(i, "♠", "Black"));
			                	}
			                }
			                for (int i = 1; i <= 11; ++i) {
			                	if (i == 11) {
			                		cards.push_back(new Cartas(11, "A♥", "Red"));
			                	} else if (i == 10) {
			                		cards.push_back(new Cartas(10, "J♥", "Red"));
			                		cards.push_back(new Cartas(10, "Q♥", "Red"));
			                		cards.push_back(new Cartas(10, "K♥", "Red"));
			                		cards.push_back(new Cartas(10, "♥", "Red"));
			                	} else {
			                		cards.push_back(new Cartas(i, "♥", "Red"));
			                	}
			                }
			                for (int i = 1; i <= 11; ++i) {
			                	if (i == 11) {
			                		cards.push_back(new Cartas(11, "A♦", "Red"));
			                	} else if (i == 10) {
			                		cards.push_back(new Cartas(10, "J♦", "Red"));
			                		cards.push_back(new Cartas(10, "Q♦", "Red"));
			                		cards.push_back(new Cartas(10, "K♦", "Red"));
			                		cards.push_back(new Cartas(10, "♦", "Red"));
			                	} else {
			                		cards.push_back(new Cartas(i, "♦", "Red"));
			                	}
			                }
			                for (int i = 1; i <= 11; ++i) {
			                	if (i == 11) {
			                		cards.push_back(new Cartas(11, "A♣", "Black"));
			                	} else if (i == 10) {
			                		cards.push_back(new Cartas(10, "J♣", "Black"));
			                		cards.push_back(new Cartas(10, "Q♣", "Black"));
			                		cards.push_back(new Cartas(10, "K♣", "Black"));
			                		cards.push_back(new Cartas(10, "♣", "Black"));
			                	} else {
			                		cards.push_back(new Cartas(i, "♣", "Black"));
			                	}
			                }
			                baraja = new Baraja(cards);
			                

			                repart.push_back(new Repartidor(dificultad, dinero, baraja, nombre, edad, id));
				           	break;}

				        case 3:{
				        	string lugarproced, apodo;
				        	double montodinero;
				        	cout << "Ingrese el Nombre: ";
				            cin >> nombre;
				            cout << "Ingrese la Edad: ";
				            cin >> edad;
				            cout << "Ingrese Su ID (Maximo 4 Numeros): ";
				            cin >> id;
				            cout << "Ingrese el lugar de procedencia: ";
				            cin >> lugarproced;
				            cout << "Ingrese el apodo de jugador: ";
				            cin >> apodo;
				            cout << "Ingrese el monto de dinero que anda el jugador: ";
				            cin >> montodinero;

				            jugad.push_back(new Jugador(lugarproced, apodo, montodinero, nombre, edad, id));
				        	break;}

				       	case 4:
				           	salir2 = true;
				           	break;
				    }
				}
               	break;}

	       	case 2:{
	            string nombre1, id1;
	            cout << "Ingrese su Nombre: ";
	            cin >> nombre1;
	            cout << "Ingrese su ID: ";
	            cin >> id1;
				for (int i = 0; i < admin.size(); i++) {
					if((nombre1 == admin.at(i) -> getNombre()) && (id1 == admin.at(i) -> getID())){
						bool salir3 = false;
						while (!salir3){
					        switch(menu3()){
					           	case 1:{
					           		if (jugad.size() == 0 || repart.size() == 0) {
					           			cout << "No HAY UN JUGADOR O REPARTIDOR PARA CREAR LA Mesa" << endl;
					           		} else {
						           		int nmesa, opt3;
						           		string tipo;
						                cout << "Ingrese numero de Mesa: ";
						                cin >> nmesa;
						                cout << "Ingrese el La Dificultad: " << endl;
						                cout << "[1] V.I.P" << endl 
						                	 << "[2] CLASICA" << endl 
						                	 << "[3] VIAJERO" << endl;
						               	cout << "Selccione una opcion: ";
						               	cin >> opt3;
						                if (opt3 == 1) {
						                	tipo = "V.I.P";
						                } else if (opt3 == 2) {
						                	tipo = "CLASICA";
						                } else if (opt3 == 3) {
						                	tipo = "VIAJERO";
						                }
						                int num =  0;
								       	cout << "Ingrese la posicion del Jugador a agregar a la Mesa: " << endl;
										cout << "--------------------------------------------------------" << endl;
										for(int i = 0; i < jugad.size(); i++){
											cout << i << " --> " << jugad.at(i)->getNombre() << endl;
										}
										cout << "Ingrese Numero: ";
										cin >> num;
										cout << "--------------------------------------------------------" << endl;
										int num2 =  0;
								       	cout << "Ingrese la posicion del Repartidor a agregar a la Mesa: " << endl;
										for(int i = 0; i < repart.size(); i++){
											cout << i << " --> " << repart.at(i)->getNombre() << endl;
										}
										cout << "Ingrese numero: ";
										cin >> num2;
										cout << "--------------------------------------------------------" << endl;
										mesa.push_back(new Mesa(nmesa, tipo, repart.at(num2), jugad.at(num)));
									}
					               	break;}

						       	case 2:{
						       		if (mesa.size() == 0) {
						       			cout << "No HAY MESAS QUE EDITAR" << endl;
						       		} else {
							            int nmesa1, opt3;
						           		string tipo1;
						                cout << "Ingrese numero de Mesa: ";
						                cin >> nmesa1;
						                cout << "Ingrese el La Dificultad: " << endl;
						                cout << "[1] V.I.P" << endl 
						                	 << "[2] CLASICA" << endl 
						                	 << "[3] VIAJERO" << endl;
						               	cout << "Selccione una opcion: ";
						               	cin >> opt3;
						                if (opt3 == 1) {
						                	tipo1 = "V.I.P";
						                } else if (opt3 == 2) {
						                	tipo1 = "CLASICA";
						                } else if (opt3 == 3) {
						                	tipo1 = "VIAJERO";
						                }
						                int num =  0;
								       	cout << "Ingrese la posicion del Jugador a agregar a la Mesa: " << endl;
										cout << "--------------------------------------------------------" << endl;
										for(int i = 0; i < jugad.size(); i++){
											cout << i << " --> " << jugad.at(i)->getNombre() << endl;
										}
										cout << "Ingrese Numero: ";
										cin >> num;
										cout << "--------------------------------------------------------" << endl;
										int num2 =  0;
								       	cout << "Ingrese la posicion del Repartidor a agregar a la Mesa: " << endl;
										cout << "--------------------------------------------------------" << endl;
										for(int i = 0; i < repart.size(); i++){
											cout << i << " --> " << repart.at(i)->getNombre() << endl;
										}
										cout << "Ingrese numero: ";
										cin >> num2;
										cout << "--------------------------------------------------------" << endl;
										int num3 = 0;
										cout << "Ingrese El numero de la mesa a Modificar: ";
										cin >> num3;
										mesa.at(num3) -> setNmesa(nmesa1);
										mesa.at(num3) -> setTipo(tipo1);
										mesa.at(num3) -> setJugad(jugad.at(num));
										mesa.at(num3) -> setRepart(repart.at(num2));
									}
						           	break;}

						        case 3:{
						        	int numbers =  0;
							       	cout << "Ingrese la posicion que quiere eliminar: " << endl;
									for(int i = 0; i < mesa.size(); i++){
										cout << i << " --> " << mesa.at(i) -> getNmesa() << endl;
									}
									cin >> numbers;
									mesa.erase(mesa.begin() + numbers);
									cout << "Obra ha eliminada" << endl;
						        	break;}

						       	case 4:
						           	salir3 = true;
						           	break;
						    }
						}
					} else {
						for (int i = 0; i < jugad.size(); ++i) {
							if((nombre1 == jugad.at(i) -> getNombre()) && (id1 == jugad.at(i) -> getID())){
								bool salir4 = false;
								while (!salir4){
							        switch(menu4()){
							           	case 1:{
							                
							               	break;}

								       	case 2:{
								                
								           	break;}

								       	case 3:
								           	salir4 = true;
								           	break;
								    }
								}
							}
						}
					}
				}
	           	break;}

	       	case 3:
	           	salir = true;
	           	break;
	    }
	}
	return 0;
}

int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----MENU------" << endl
             << "1.- Agregar Personas" << endl
             << "2.- Log In" << endl
             << "3.- Salir" << endl; 

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 4)
            valido = true;
        else {
            cout << "La opcion seleccionada es Nula, intente de nuevo ......." << endl;
        }
        cout << "----------------------" << endl;
                
    }while(!valido);
    return opcion;
}

int menu2(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----MENU------" << endl
             << "1.- Agregar Administrador" << endl
             << "2.- Agregar Jugador" << endl
             << "3.- Agregar Repartidor" << endl
             << "4.- Salir" << endl; 

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 5)
            valido = true;
        else {
            cout << "La opcion seleccionada es Nula, intente de nuevo ......." << endl;
        }
        cout << "----------------------" << endl;
                
    }while(!valido);
    return opcion;
}

int menu3(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----MENU------" << endl
             << "1.- Agregar Administrador" << endl
             << "2.- Agregar Jugador" << endl
             << "3.- Agregar Repartidor" << endl
             << "4.- Salir" << endl; 

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 5)
            valido = true;
        else {
            cout << "La opcion seleccionada es Nula, intente de nuevo ......." << endl;
        }
        cout << "----------------------" << endl;
                
    }while(!valido);
    return opcion;
}

int menu4(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----MENU------" << endl
             << "1.- Agregar Administrador" << endl
             << "2.- Agregar Jugador" << endl
             << "3.- Agregar Repartidor" << endl
             << "4.- Salir" << endl; 

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 5)
            valido = true;
        else {
            cout << "La opcion seleccionada es Nula, intente de nuevo ......." << endl;
        }
        cout << "----------------------" << endl;
                
    }while(!valido);
    return opcion;
}

