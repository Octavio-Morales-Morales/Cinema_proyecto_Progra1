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
void Movie::setData(bool data) { this->data = data; }

string Movie::getName() { return this->name; }
int Movie::getTime() { return this->time; }
int Movie::getYear() { return this->year; }
string Movie::getCountry() { return this->country; }
int Movie::getReview() { return this->review; }


Butaca::Butaca() {}
Butaca::Butaca(int id, char state) {
	this->id = id;
	this->state = state;
}
Butaca::~Butaca(){}
void Butaca::setId(int id) { this->id = id; }
void Butaca::setState(char state) { this->state = state; }

int Butaca::getId() { return id; }
char Butaca::getState() { return state; }
void generatesalas() {}


Room::Room() {
	generateSalaCine();
	mostrarSala();
	reservarButaca();
	comprarButaca();
	getGenerateSalaCine();
	getMostrarSala();
	getReservarButaca();
	getComprarButaca();
}
Room::Room(int number, int manysits, double price) {
	this->number = number;
	this->manysits = manysits;
	this->price = price;
}
Room::~Room() {
	for (int k = 0; k < filas; k++) {
		delete[] sala[k];
		delete[] reserva[k];
	}
	delete[] sala;
	delete[] reserva;
}
void Room::setNumber(int number) { this->number = number; }
void Room::setPrice(double price) { this->price = price; }
void Room::setManysits(int manysits) { this->manysits = manysits; }
int Room::getManysits() { return this->manysits; }
int Room::getNumber() { return this->number; }
double Room::getPrice() { return this->price; }

void Room::generateSalaCine() {

	sala = new int* [filas];
	for (int k = 0; k < filas; k++) {
		sala[k] = new int[columnas];
	}
	reserva = new int* [Filas];
	for (int k = 0; k < Filas; k++) {
		reserva[k] = new int[Columnas];
	}

	int id = 4;
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			sala[i][j] = id;
			reserva[i][j] = 0;
		}


	}
}
void Room::mostrarSala() {
	cout << "Sala de cine: \n";
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			cout << sala[i][j] <<"||" << reserva[i][j] << " ";
		}
		cout << endl;
	}
}




void Room::reservarButaca() {
	int auxf, auxc;
	cout << "ingrese la posicion del asiento como #<10,#<5";
	cin >> auxf >> auxc;
	if (auxf >= 0 && auxf < 10 && auxc >= 0 && auxc < 10) {
		if (reserva[auxf][auxc] == 0) {
			reserva[auxf][auxc] = 1;// '1' para butaca reservada
			sala[auxf][auxc] = reserva[auxf][auxc];
			cout << "Butaca reservada correctamente.\n";
		}
		else {
			cout << "Error: La butaca ya está reservada o comprada.\n";
		}
	}
	else {
		cout << "Error: Fila o columna fuera de rango.\n";
	}
	cout << "Sala de cine: \n";
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			cout << sala[i][j] << "||" << reserva[i][j] << " ";
		}
		cout << endl;
	}
}
void Room::comprarButaca() {
	int auxf, auxc;
	cout << "ingrese la posicion del asiento como #<10,#<5";
	cin >> auxf >> auxc;
	if (auxf >= 0 && auxf < 10 && auxc >= 0 && auxc < 10) {
		if (reserva[auxf][auxc] == 0 || sala[auxf][auxc] == 1) {
			reserva[auxf][auxc] = 2;  // '2' para butaca comprada
			sala[auxf][auxc] = reserva[auxf][auxc];
			cout << "Butaca comprada correctamente.\n";
		}
		else {
			cout << "Error: La butaca ya está comprada.\n";
		}
	}
	else {
		cout << "Error: Fila o columna fuera de rango.\n";
	}
	cout << "Sala de cine: \n";
	for (int i = 0; i < filas; ++i) {
		for (int j = 0; j < columnas; ++j) {
			cout << sala[i][j] << "||" << reserva[i][j] << " ";
		}
		cout << endl;
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
Venta_Reserva::Venta_Reserva(int Id_customer, string Customer_name, int number_reserve, double Totalprice) {
	this->id_customer = Id_customer;
	this->Customer_name = Customer_name;
	this->number_reserve = number_reserve;
	this->Totalprice = Totalprice;
}
Venta_Reserva::~Venta_Reserva(){}
void Venta_Reserva::setId_Customer(int id_customer) { this->id_customer = id_customer; }
void Venta_Reserva::SetCustomer_Name(string Customer_name) { this->Customer_name = Customer_name; }
void Venta_Reserva::setNumber_reserve(int number_reserve) { this->number_reserve = number_reserve; }
void Venta_Reserva::setTotalprice(double Totalprice) { this->Totalprice = Totalprice; }
void Venta_Reserva::generateReserva() {

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
	generate_Reserve();
	generate_venta();
	getGenerate_venta();
	getGenerate_Reserva();
	getGenerate_Schedule();
	getGenerate_Room();

}
void Mantenimiento::generate_Movies() {

	Movie movie1("Deadpool", 2024, 2, "USA", 10);
	cinemovie[0] = movie1;

	Movie movie2("Aquaman 2", 2022, 1, "USA", 7);
	cinemovie[1] = movie2;

	Movie movie3("Barby ", 2021, 3, "CANADA", 9);
	cinemovie[2] = movie3;

	Movie movie4("Moppets ", 2024, 2, "JAPON", 3);
	cinemovie[3] = movie4;
}
Movie Mantenimiento::getGenerate_Movies() { return this->cinemovie[4]; }

void Mantenimiento::generate_Room() {

	Room room1(1, 25, 4000);
	room[0] = room1;
	Room room2(2, 25, 4000);
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