


#include <iostream>
#include "Procesos.h"
#include <ostream>
#include <string>
#include "procesos.cpp"

using namespace std;
int main() {
	Movie Movies[5];
	Room room;
	Schedule schedule;
	Venta_Reserva reserve;
	Venta_Reserva Venta;
	Mantenimiento mantenimiento;
	Mantenimiento cinemovie[4];
	int FILAS = 5, COLUMNAS = 10;
	int option = 0;
	int seleccion2 = 0;

	
		cout << "Bienvenido a nova cinema" << endl << "Elija una opcion" << endl;
		cout << "1. Archivo" << "           " << "2.Mantenimiento " << endl << "3.Reserva " << "           " << "4. Venta";
		cin >> option;

		if (option == 1) {

			cout << "Usted ha elegido la opcion Archivo" << endl << "1. Acerca del cine " << endl << "2. Salir " << endl;
			cout << "Digite su opcion: ";
			cin >> seleccion2;

			if (seleccion2 == 1) {
				cout << "Esta es la aplicacion para informar,Comprar y reservar tikets para funciones de cine." << endl;
				cout << "Nombre: " << "Nova Cinema. " << endl << "By. Octavio." << endl;
				cout << "Peliculas: 1. " << Movies[1].getName() << endl << "2. " << Movies[2].getName();
			}
			if (seleccion2 == 2) {
				return option = 5;
			}
		}
		if (option == 2) {
			cout << "Mantenimiento";
			cout << "Usted ha elegido la opcion Mantenimiento" << endl << "1. Peliculas  " << endl << "2. Salas  " << endl << "3. Horario " << endl;
			cin >> seleccion2;
			if (seleccion2 == 1) {
				cout << "1. Agregar Peliculas" << endl << "Que pelicula desea editar" << endl;
				cout << Movies[1].getName();
				mantenimiento.getGenerate_Movies();
			}
			if (seleccion2 == 2) {
				cout << "2. Editar Salas" << endl;
				room.getMostrarSala();
				
			}
			if (seleccion2 == 3) {
				cout << "3. Editar Horarios" << endl;
				cout << schedule.getDate() << schedule.getStartTime() << schedule.getFinishTime();

			}
		}

		if (option == 3) {
			cout << "Reserva" << endl;


		} if (option == 4) {
			cout << "Venta";
			cout << "Usted ha elegido la upcion venta" << endl << "1. Peliculas  " << endl;

		}



}

