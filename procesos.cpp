#include "Procesos.h"
#include <iostream>
#include <vector>
using namespace std; 
class Movie {
private:
	string name; string country;
	int time=0, year=0, review=0;
	bool data = false;
public:
	Movie() {}
	Movie(string name, int time, int year, string country, int review) {
		this->name = name;
		this->time = time;
		this->year = year;
		this->country = country;
		this->review = review;
	}
	void setName(string name) {this-> name = name;}
	void setTime(int time) {this->time = time;}
	void setYear(int year) {this->year = year;}
	void setCountry(string country) { this->country = country; }
	void setReview(int review) {this-> review = review;}
	void setData(bool data) { this->data = data; }

	string getName() {return this->name;}
	int getTime() {return this->time;}
	int getYear() {return this-> year;}
	string getCountry() { return this->country; }
	int getReview() {return this->review;}
};

class Schedule {
private:
	Movie movies;
	Room room;
	int startTime = 0, finishTime = 0;
	string date;

public:

	Schedule() {}
	Schedule(int startTime, int finishTime, string date, Movie movies,Room room) {
		this->startTime = startTime;
		this->finishTime = finishTime;
		this->date = date;
		this->movies = movies;
		this->room = room;
	}
	void setstartTime(int startTime) {this->startTime = startTime;}
	void setfinishTime(int finishTime) {this->finishTime = finishTime;}
	void setDate(string date) {this->date = date;}
	void setMovies(Movie movies) { this->movies = movies; }
	void setRoom(Room room) { this->room = room; }

	int getstartTime() {return this->startTime;}
	int getfinishTime() {return this->finishTime;}
	string getDate() {return this->date;}

	Movie Movies() {return this->movies;}
	Room Room() { return this->room; }	
};
class Butaca {
private:
	int id;
	char state; // 'L' = Libre, 'R' = Reservada, 'C' = Comprada
public:
	
	Butaca() : id(0), state('L') {}

	Butaca(int id, char state = 'L') : id(id), state(state) {}

	void setId(int id) { this->id = id; }
	void setState(char state) { this->state = state; }

	int getId() { return id; }
	char getState() { return state; }

};

	
class Room {
private:
	int number;
	int manysits;
	double price;
	Butaca asientos[10][10];//matriz 
	int FILAS = 5;
	int COLUMNAS = 10;
	vector<vector<Butaca>> sala;

public:
	Room() {}
	Room(int number, int manysits, double price) {
		this->number = number;
		this->manysits = manysits;
		this->price = price;
	}

	void setNumber(int number) { this->number = number; }
	void setPrice(double price) { this->price = price; }
	void setManysits(int manysits) { this->manysits = manysits; }
	int getNumber(int number) { return this->number; }
	double getPrice(double price) { return this->price; }

	void SalaCine(int filas = 5, int columnas = 6) {
		FILAS = filas;
		COLUMNAS = columnas;
		sala.resize(filas, vector<Butaca>(columnas));

		int id = 1;
		for (int i = 0; i < FILAS; ++i) {
			for (int j = 0; j < COLUMNAS; ++j) {
				sala[i][j] = Butaca(id++, 'L');
			}
		}
	}
	void mostrarSala() {
		cout << "Sala de cine: \n";
		for (int i = 0; i < FILAS; ++i) {
			for (int j = 0; j < COLUMNAS; ++j) {
				cout << sala[i][j].getState() << " ";
			}
			cout << endl;
		}
	}
	void reservarButaca(int fila, int columna) {
		if (fila >= 0 && fila < FILAS && columna >= 0 && columna < COLUMNAS) {
			if (sala[fila][columna].getState() == 'L') {
				sala[fila][columna] = 'R';  // 'R' para butaca reservada
				cout << "Butaca reservada correctamente.\n";
			}
			else {
				cout << "Error: La butaca ya está reservada o comprada.\n";
			}
		}
		else {
			cout << "Error: Fila o columna fuera de rango.\n";
		}
	}
	void comprarButaca(int fila, int columna) {
		if (fila >= 0 && fila < FILAS && columna >= 0 && columna < COLUMNAS) {
			if (sala[fila][columna].getState() == 'L' || sala[fila][columna].getState() == 'R') {
				sala[fila][columna] = 'C';  // 'C' para butaca comprada
				cout << "Butaca comprada correctamente.\n";
			}
			else {
				cout << "Error: La butaca ya está comprada.\n";
			}
		}
		else {
			cout << "Error: Fila o columna fuera de rango.\n";
		}
	}
};


	class Reserve {
	private:
		Movie movie[5];
		double Totalprice;
		int  number_reserve, sits;
		string  seleccion;
		Schedule schedule[6];
		

	public:
		Reserve() {

		}
		Reserve(int number_reserve, double Totalprice) {
			this->number_reserve = number_reserve;
			this->Totalprice = Totalprice;
		}
		void setNumber_reserve(int number_reserve) { this->number_reserve = number_reserve; }
		void setTotalprice(double Totalprice) { this->Totalprice = Totalprice; }
		int Number_reserve() { return number_reserve; }
		double Booking_price() { return Totalprice = 4000; }
		 
		Movie movie() { return this-> movie; }
		Schedule schedule() { return this-> schedule[6]; }
		Butaca butaca() { return this-> butaca[100]; }

		

		

	};
	class Venta {
	private:

		Reserve reserve;
		int id_customer;
		string Customer_name;


	public:
		Venta() {

		}
		Venta(int Id_customer, string Customer_name) {
			this->id_customer = Id_customer;
			this->Customer_name=Customer_name;
		}
		void setId_Customer(int id_customer) { this->id_customer = id_customer; }
		void SetCustomer_Name(string Customer_name) { this->Customer_name = Customer_name; }

		int getId_Customer(int id_customer) { return id_customer; }
		string getCustomer_name(string Customer_name) { return Customer_name; }


	};
	class Mantenimiento {
	private:
		Movie cinemovie[10];
		Schedule schedule[10];
		Room room[10];
		Reserve reserve[50];
		Butaca butaca[50];
	public:
		Mantenimiento() {

		}
		void generate_Movies() {

			Movie movie1("Deadpool", 2024, 2, "USA", 10);
			cinemovie[0] = movie1;

			Movie movie2("Aquaman 2", 2022, 1, "USA", 7);
			cinemovie[1] = movie2;

			Movie movie3("Barby ", 2021, 3, "CANADA", 9);
			cinemovie[2] = movie3;

			Movie movie4("Moppets ", 2024, 2, "JAPON", 3);
			cinemovie[3] = movie4;
		}
		Movie getMoviebypos(int pos) { return cinemovie[pos]; }

		void generate_Schedule() {

			Schedule schedule1(1, 3, "Lunes", cinemovie[0], room[0]);
			schedule[0] = schedule1;
			Schedule schedule2(3, 5, "Martes", cinemovie[1], room[1]);
			schedule[1] = schedule2;
			Schedule schedule3(1, 3, "Miercoles", cinemovie[2], room[0]);
			schedule[2] = schedule3;
		}
		void generate_butaca() {
			for (int i = 0; i >= ) {
				for (int j = 0; j >= 50) {

				}
			}
		}
		void generate_Room() {

			Room room1(1, 25, 4000);
			room[0] = room1;
			Room room2(1, 25, 4000);
			room[1] = room2;

		}
		void generate_Reserve() {
			int seleccion;

			cout << "Seleccione la pelicula a consultar" << endl;
			cout << "1. " << cinemovie[0].getName() << "2. " << cinemovie[1].getName() << "3. " << cinemovie[2].getName() << "4. " << cinemovie[3].getName();
			cin >> seleccion;
			seleccion = -1;
			cout << cinemovie[seleccion].getName();
			cout << "esta pelicula tiene los sieguientes horarios";
			




		}

	};
	class Menu {
	private:

	public:

	};
	
