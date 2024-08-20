
#include <iostream>

using namespace std; 
class Movie {
private:
	string name;
	int time=0, year=0, review=0;
public:
	Movie() {

	}
	Movie(string name, int time, int year, int review) {
		this->name = name;
		this->time = time;
		this->year = year;
		this->review = review;
		
	}
	
	void setName(string name) {
		this-> name = name;
	}
	void setTime(int time) {
		this->time = time;
	}
	void setYear(int year) {
		this->year = year;
	}
	void setReview(int review) {
		this-> review = review;
	}

	string getName() {
		return this->name; // conseguir un atributo
	}
	int getTime() {
		return this->time;
	}
	int getYear() {
		return this-> year;
	}
	int getReview() {
		return this->review;
	}
	void MostrarInfo() {
		cout << " Pelicula: " << name << "Año: " << year << "Review: " << review << "Duracion: " << time<< endl;
	}
};

class Schedule {
private:
	int startTime = 0, finishTime = 0;
	string date;

public:

	Schedule() {

	}
	Schedule(int startTime, int finishTime, string date) {
		this->startTime = startTime;
		this->finishTime = finishTime;
		this->date = date;

	}
	void setstartTime(int startTime) {
		this->startTime = startTime;

	}
	void setfinishTime(int finishTime) {
		this->finishTime = finishTime;

	}
	void setDate(string date) {
		this->date = date;

	}
	int getstartTime() {
		return this->startTime;
	}
	int getfinishTime() {
		return this->finishTime;
	}
	string getDate() {
		return this->date;
	}
};
class Butaca {
private:
	int id = 0, cantidadButacas = 5;
	string state;

public:
	Butaca() {

	}
	Butaca(int id, string state) {
		this->id = id;
		this->state = state;
	}
	void setIdentificacion(int id) {
		this->id = id;
	}
	void setState(string state) {
		this->state = state;
	}
	int getIdentificacion(int id) {
		return this->id = rand() % 100;
	}
	string getState(string state) {
		

	};
};
	class Room {
	private:
		int number, manysits;
		double price;
		Butaca asientos[10][10];//matriz 
	public:
		Room() {

		}
		Room  (int number, int manysits, double price ) {
			this->number = number;
			this->manysits = manysits;
		}
		void setNumber(int number) {
			this->number = number;
		}
		void setManysits(int manysits) {
			this->manysits = manysits;
		}
		void serPrice(double price) {
			this->price = price;
		}
		int getFreeSits(int number, int manysits) {
			
		}



	};
	class Reserve {
	private:
		string pelicula;
		Schedule schedule[3];
		Butaca reserva[100];//atributos 
		double Totalprice;
		int  number_reserve;

	public:
		Reserve() {

		}
	};
	class venta {
	private:
		Reserve reserve;
		int id_client;
	public:

	};
	class Cinema {
	private:
		Movie Movie[10];
		Schedule schedule[10];
		Room room[10];
		Reserve reserve[50];
		Butaca butaca[50];
	public:

	};

	
