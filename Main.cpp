#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include "Persona.h"
#include "Administrador.h"
#include "Mesa.h"

using namespace std;

int menu();
int menu2();
int menu3();
int menu4();

int main() {
	vector<Administrador*> admin;
	vector<Jugador*> jugad;
	vector<Repartidor*> repart;
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
					                
					               	break;}

						       	case 2:{
						                
						           	break;}

						        case 3:{

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

string RandomPlaca(){
	int random;
	stringstream random2;
	string simbolos = "♠♥♦♣";
	for(int i = 0; i < 52; i++){
		random = rand() % 13 + 1;
		if(random == 1){
			random2 << "A";
		} else if(random == 11){
            random2 << "J";
        } else if(random == 12){
        	random2 << "Q";
   		} else if(random == 13){
        	random2 << "K";
   		}   
	}
}