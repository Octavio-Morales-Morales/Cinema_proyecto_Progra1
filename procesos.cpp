#include "Procesos.h"
#include <iostream>
#include <vector>
using namespace std;

Movie::Movie() {}
Movie::Movie(string name, int time, int year, string country, int review) {
	this->name = name;
	this->time = time;
	this->year = year;
	this->country = country;
	this->review = review;
}
Movie::~Movie(){}
void Movie::setName(string name) { this->name = name; }
void Movie::setTime(int time) { this->time = time; }
void Movie::setYear(int year) { this->year = year; }
void Movie::setCountry(string country) { this->country = country; }
void Movie::setReview(int review) { this->review = review; }

string Movie::getName() { return this->name; }
int Movie::getTime() { return this->time; }
int Movie::getYear() { return this->year; }
string Movie::getCountry() { return this->country; }
int Movie::getReview() { return this->review; }



Room::Room() {
	void generateSalaCine();
	void mostrarSala();
	void reservarButaca();
	void comprarButaca();
	int** getGenerateSalaCine();
	int** getMostrarSala();
	int** getReservarButaca();
	int** getComprarButaca();
}
Room::Room( int number, int manysits, double price) {
	this->number = number;
	this->manysits = manysits;
	this->price = price;
}
Room::~Room() {
	for (int k = 0; k < filas; k++) {
		delete[] sala[k];
		
	}
	delete[] sala;
	
}
void Room::setId(int id) { this->id = id; }
void Room::setState(char state) { this->state = state; }
void Room::setNumber(int number) { this->number = number; }
void Room::setPrice(double price) { this->price = price; }
void Room::setManysits(int manysits) { this->manysits = manysits; }
void Room::setAuxf(int auxf) { this->auxf = auxf; }
void Room::setAuxc(int auxc) { this->auxc = auxc; }
int Room::getId() { return this-> id; }
char Room::getState() { return this->state; }
int Room::getManysits() { return this->manysits; }
int Room::getNumber() { return this->number; }
double Room::getPrice() { return this->price; }

void Room::generateSalaCine(int** sala,int filas,int columnas) {

	sala = new int* [filas];
	for (int i = 0; i < filas; i++) {
		sala[i] = new int[columnas];
	}
	
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			sala[i][j] = id=0;

		}


	}
}

void Room::mostrarSala(int** sala ,int filas, int columnas) {
	cout << "Sala de cine:\n";
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			cout << sala[i][j] <<"||";
		}
		cout << endl;
	}
}

void Room::reservarButaca(int** sala, int filas, int columnas, int auxf, int auxc)
{
	for (int i = 0; i <= filas; i++) {
		for (int j = 0; j <= columnas; j++) {
			if (auxf >= 0 && sala[i][auxc] == auxf && auxc >= 0 && sala[auxf][j] == auxc) {
				sala[auxf][auxc] = 2;
				cout << "Butaca reservada correctamente.\n";
				break;
			}
			else {
				cout << "Error: La butaca ya está reservada.\n";
			}
		}
	}
}


void Room::comprarButaca(int** sala, int filas, int columnas, int auxf, int auxc) {
	
	for (int i = 0; i <= filas; i++) {
		for (int j = 0; j <= columnas; j++) {
			if (auxf >= 0 && sala[i][auxc] == auxf && auxc >= 0 && sala[auxf][j] == auxc) {

				cout << "Butaca comprada correctamente.\n";
			}
			else {
				cout << "Error: La butaca ya está comprada.\n";
			}
		}
	}
}
int** Room::getGenerateSalaCine() {
	return this->sala;
}
int** Room::getMostrarSala() {
	return this->sala;
}
int** Room::getReservarButaca() {

	return this->sala;
	
}
int** Room::getComprarButaca() {
	return this->sala;
}


Schedule::Schedule() {}
Schedule::Schedule(int startTime, int finishTime, string date, Movie movie, Room room) {
	this->startTime = startTime;
	this->finishTime = finishTime;
	this->date = date;
	this->movie = movie;
	this->room = room;
}
Schedule::~Schedule(){}

void Schedule::setStartTime(int startTime) { this->startTime = startTime; }
void Schedule::setFinishTime(int finishTime) { this->finishTime = finishTime; }
void Schedule::setDate(string date) { this->date = date; }
void Schedule::setMovie(Movie movies) { this->movie = movie; }
void Schedule::setRoom(Room room) { this->room = room; }

int Schedule::getStartTime() { return this->startTime; }
int Schedule::getFinishTime() { return this->finishTime; }
string Schedule::getDate() { return this->date; }
Movie Schedule::getMovie() { return this->movie; }
Room Schedule::getRoom() { return this->room; }




Venta_Reserva::Venta_Reserva() {

}
Venta_Reserva::Venta_Reserva(int Id_customer, string Customer_name, int number_reserve) {
	this->id_customer = Id_customer;
	this->Customer_name = Customer_name;
	this->number_reserve = number_reserve;
}
Venta_Reserva::~Venta_Reserva(){}
void Venta_Reserva::setId_Customer(int id_customer) { this->id_customer = id_customer; }

void Venta_Reserva::SetCustomer_Name(string Customer_name) { this->Customer_name = Customer_name; }

void Venta_Reserva::setNumber_reserve(int number_reserve) { this->number_reserve = number_reserve; }

void Venta_Reserva::setTotalprice(double Totalprice) { this->Totalprice = Totalprice; }

void Venta_Reserva::generateReserva(Room room, int id_customer, string Customer_name, int number_reserve) {
	int reserva;
				cout << "Ingrese su cedula" << endl;
				cin >> id_customer;
				cout << "Ingrese su nombre"<<endl;
				cin >>Customer_name ;
				cout << "ingrese su numero de reseva"<<endl;
				cin >> reserva;
				if (number_reserve == reserva) {
					cout << room.getMostrarSala() << endl;
					cout << room.reservarButaca();
				}
				else {
					cout << "Selección inválida";

				}
}
void Venta_Reserva::generateVenta() {

}

int Venta_Reserva::getId_Customer() { return id_customer; }
string Venta_Reserva::getCustomer_name() { return Customer_name; }
int Venta_Reserva::getNumber_reserve() { return number_reserve; }
double Venta_Reserva::getBooking_price() { return Totalprice; }

Movie Venta_Reserva::getMovie() { return this->movie; }
Schedule Venta_Reserva::getSchedule() { return this->schedule; }
Room Venta_Reserva::getRoom() { return this->room; }


Mantenimiento::Mantenimiento() {
	generate_Movies();

	getGenerate_Movies();
	generate_Schedule();
	generate_Room();
	getGenerate_venta();
	getGenerate_Reserva();
	getGenerate_Schedule();
	getGenerate_Room();

}
Mantenimiento::~Mantenimiento(){

}
void Mantenimiento::generate_Movies(Movie cinemovie[4]) {


	Movie movie1("Deadpool", 2024, 2, "USA", 10);
	cinemovie[0] = movie1;

	Movie movie2("Aquaman 2", 2022, 1, "USA", 7);
	cinemovie[1] = movie2;

	Movie movie3("Barby ", 2021, 3, "CANADA", 9);
	cinemovie[2] = movie3;

	Movie movie4("Moppets ", 2024, 2, "JAPON", 3);
	cinemovie[3] = movie4;
}
void Mantenimiento::setEdit_Movie(Movie cinemovie[4], string name) {
	
		if (cinemovie[i].getName() == cinemovie[i - 1].getName()) {
			cout << "Nuevo nombre" << endl;
			cin >> cinemovie[i].setName();
			cout << "N" << endl;
			cin >> name;

			Movie movie(string name, int time, int year, string country, int review);
		}
	}
}
Movie Mantenimiento::getEdit_Movie() { return this->cinemovie[4]; }
Movie Mantenimiento::getGenerate_Movies() { return this->cinemovie[4]; }

void Mantenimiento::generate_Room() {

	Room room1(2, 25, 4000);
	room[0] = room1;
	Room room2(4, 25, 4000);
	room[1] = room2;

}
void Mantenimiento::generate_Schedule() {

	Schedule schedule1(1, 3, "Lunes", cinemovie[0], room[0]);
	schedule[0] = schedule1;
	Schedule schedule2(3, 5, "lunes", cinemovie[2], room[0]);
	schedule[1] = schedule2;
	Schedule schedule3(1, 3, "lunes", cinemovie[1], room[1]);
	schedule[2] = schedule3;
	Schedule schedule4(1, 3, "lunes", cinemovie[3], room[1]);
	schedule[3] = schedule4;
}

void Mantenimiento::generate_Reserve() {

}
void Mantenimiento::generate_venta() {



}
Schedule Mantenimiento::getGenerate_venta() {
	return this->schedule[4];
}
Venta_Reserva Mantenimiento::getGenerate_Reserva() {
	return this->reserve[50];
}
Schedule Mantenimiento::getGenerate_Schedule() {
	return this->schedule[4];
}
Room Mantenimiento::getGenerate_Room() {
	return this->room[2];
}