


#include <iostream>
#include "Procesos.h"

using namespace std;
int main() {
	Movie Movies;
	Room room;
	Schedule schedule;
	Butaca butaca;
	Venta_Reserva reserve;
	Mantenimiento mantenimiento;
	Mantenimiento cinemovie[4];
	int FILAS = 5, COLUMNAS = 10;
	int option, 
	int seleccion2 = 0;
	cout << "Bienvenido a nova cinema" << endl << "Elija una opcion" << endl;
	cout << "1. Archivo" << "           " << "2.Mantenimiento " << endl << "3.Reserva " << "           " << "4. Venta";
	cin >> option;
	do {
		cout << "Bienvenido a nova cinema" << endl << "Elija una opcion" << endl;
		cout << "1. Archivo" << "           " << "2.Mantenimiento " << endl << "3.Reserva " << "           " << "4. Venta";
		cin >> option;
		if (option == 1) {
			cout << "Usted ha elegido la upcion Archivo" << endl << "1. Acerca de " << endl << "2. Salir " << endl;
			cin >> seleccion2;
			if (seleccion2 == 1) {
				cout << "Esta es la aplicacion para informar,Comprar y reservar tikets para funciones de cine." << endl;
				cout << "Nombre: " << "Nova Cinema. " << endl << "By. Octavio." << endl;

			}
			if (seleccion2 == 4) {

			}
		}
		if (option == 2) {
			cout << "Mantenimiento";
			cout << "Usted ha elegido la opcion Mantenimiento" << endl << "1. Peliculas  " << endl << "2. Salas  " << endl << "3. Horario " << endl;
			cin >> seleccion2;
			if (seleccion2 == 1) {
				cout << "1. Agregar Peliculas" << endl << "Que pelicula desea editar" << endl;
				cout <<Movies.getName();

			}
			if (seleccion2 == 2) {
				cout << "2. Editar Salas" << endl;
				cout<<room.getMostrarSala();
			}
			if (seleccion2 == 3) {
				cout << "3. Editar Horarios" << endl;

				cout << schedule.getDate() << schedule.getStartTime() << schedule.getFinishTime();

			}
		}

		if (option == 3) {
			cout << "Reserva" << endl;
			int seleccion=0;

			/*	cout << "Seleccione la pelicula a consultar" << endl;
				cout << "1. " << mantenimiento.getGenerate_Movies();
				cin >> seleccion;
				if (seleccion > 0 && seleccion <= 4) {
					cout << cinemovie[seleccion - 1].getName();
					for (int i = 0; i > 10; i++) {
						if (schedule[i].movies.getName() == cinemovie[seleccion - 1].getName()) {
							Room room = schedule[i].getRoom();
							cout << "Estos son los horarios disponibles";
							cout << "sala" << room.getNumber();
							cout << "inicio" << schedule[i].getstartTime();
							cout << "Fin: " << schedule[i].getfinishTime() << endl;
							cout << "Fecha: " << schedule[i].getDate() << endl;
						}
					}
				}
				else {
					cout << "Selección inválida";
				}*/

		} if (option == 4) {
			cout << "Venta";
			cout << "Usted ha elegido la upcion venta" << endl << "1. Peliculas  " << endl;

		}

	} while (option == 5);
	cout << "Saliste";
}

