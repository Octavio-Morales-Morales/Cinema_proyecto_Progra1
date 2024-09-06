// Cinema.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "procesos.h"
#include "procesos.cpp"
using namespace std;
int main() {
	Movie Movies;
	Schedule schedule;
	Butaca butaca;
	Reserve reserve;
	Venta venta;
	Mantenimiento mantenimiento;
	int FILAS = 5,COLUMNAS=10;
	
	vector<vector<char>> sala(FILAS, vector<char>(COLUMNAS, 'L'));
			int option, fila, columna;
	
	mantenimiento.generate_Movies();
	mantenimiento.generate_Reserve();

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
				cout << "Nombre: " << "Octavio Morales Morales " << endl<< "1. Salir";
				
			}
			if (option2 == 2) {
				return option == 5;
			}

			break;


		case 2:
			cout << "Mantenimiento";
			cout << "Usted ha elegido la upcion Mantenimiento" << endl << "1. Peliculas  " << endl << "2. Salas  " << endl << "3. Horario " << endl;
			cin >> option2;
			if (option2 == 1) {
				cout << "1. Agregar Peliculas" << endl << "Que pelicula desea editar"<< endl;
				cin >> ;

				}


			}
			if (option2 == 2) {
				cout << "2. Editar Salas" << endl;


			}
			if (option2 == 3) {
				cout << "3. Editar Horarios" << endl;


			}


			break;

		case 3:
			

			do {
				cout << "\n----- Menú -----\n";
				cout << "1. Mostrar sala\n";
				cout << "2. Reservar butaca\n";
				cout << "3. Comprar butaca\n";
				cout << "4. Salir\n";
				cout << "Elige una opción: ";
				cin >> option;

				if (option == 1) {
					mostrarSala(sala);
				}
				if (option == 2) {
					cout << "Introduce la fila y columna para reservar (0 a " << FILAS - 1 << " y 0 a " << COLUMNAS - 1 << "): ";
					cin >> fila >> columna;
					reservarButaca(sala, fila, columna);
				}
				if (option == 3) {
					cout << "Introduce la fila y columna para comprar (0 a " << FILAS - 1 << " y 0 a " << COLUMNAS - 1 << "): ";
					cin >> fila >> columna;
					comprarButaca(sala, fila, columna);
				}
				if (option == 4) {
					cout << "Saliendo...\n";
				}

			} while (option != 4);

			return 0;
	}

			break;

		case 4:
			cout << "Venta";
			cout << "Usted ha elegido la upcion venta" << endl << "1. Peliculas  " << endl;


			break;

		default:

			break;
		}while (option == 5);
	} 
