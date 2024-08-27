// Cinema.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "procesos.h"
using namespace std;
int main(){
	int option = 1, option2 = 0;

	do {
		cout << "Bienvenido a nova cinema" << endl << "Elija una opcion" << endl;
		cout << "1. Archivo" << "           " << "2.Mantenimiento " << endl << "3.Reserva " << "           " << "4. Venta";
		cin >> option;
		switch (option) {

		case 1:
			cout << "Usted ha elegido la upcion Archivo" << endl << "1. Usuario " << endl << "2. Salir " << endl;
			cin >> option2;
			if (option2 == 1) {
				cout << "ha elegido la opcion Usuario"<<endl;
				cout << "Nombre: " << "Octavio Morales Morales " << endl;

			}
			if (option2 == 2) {

			}

			break;


		case 2:
			cout << "Mantenimiento";
			cout << "Usted ha elegido la upcion Mantenimiento" << endl << "1. Peliculas  " << endl << "2. Salas  " << endl << "3. Horario " << endl;
			cin >> option2;
			if (option2 == 1) {
				
				}


			}
			if (option2 == 2) {


			}
			if (option2 == 3) {


			}


			break;

		case 3:
			cout << "Reserva";
			cout << "Usted ha elegido la upcion Reserva" << endl << "1. Peliculas  ";


			break;

		case 4:
			cout << "Venta";
			cout << "Usted ha elegido la upcion venta" << endl << "1. Peliculas  " << endl;


			break;

		default:

			break;
		}while (option == 5);
	} 
