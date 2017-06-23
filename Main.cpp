#include <iostream>
#include <vector>
#include "Persona.h"
#include "Administrador.h"
#include "Mesa.h"

using namespace std;

int menu();
int menu2();

int main() {
	vector<Persona*> persona;
	bool salir = false;
	while (!salir){
        switch(menu()){
           	case 1:{
           		string nombre;
           		int edad, id;
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
			                persona.push_back(new Administrador(experiencia, rango, gana, nombre, edad, id));
			               	break;}

				       	case 2:{
				                
				           	break;}

				        case 3:{

				        	break;}

				       	case 4:
				           	salir2 = true;
				           	break;
				    }
				}
               	break;}

	       	case 2:{
	                
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