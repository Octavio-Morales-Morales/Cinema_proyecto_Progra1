
#pragma once
#include <iostream>
using namespace std;
class Movie {
private:
	string name; string country;
	int time = 0, year = 0, review = 0;
	bool data = false;
public:
	Movie();
	Movie(string name, int time, int year, string country, int review);
	void setName(string name);
	void setTime(int time);
	void setYear(int year);
	void setCountry(string country);
	void setReview(int review);
	void setData(bool data);

	string getName();
	int getTime();
	int getYear();
	string getCountry();
	int getReview();
};

class Schedule {
private:
	Movie movies;
	Room room;
	int startTime = 0, finishTime = 0;
	string date;

public:

	Schedule();
	Schedule(int startTime, int finishTime, string date, Movie movies, Room room);
    void setstartTime(int startTime);
	void setfinishTime(int finishTime);
	void setDate(string date);
	void setMovies(Movie movies);
	void setRoom(Room room);

	int getstartTime();
	int getfinishTime();
	string getDate();
	Movie Movies();
	Room Room();
};
class Butaca {
private:
	int id = 0;
	string state;

public:
	Butaca();
	Butaca(int id, string state);

	void setIdentificacion(int id) { this->id = id; }
	void setState(string state) { this->state = state; }

	int getId(int id) { return this->id; }
	string getState(string state);
};

class Room {
private:
	int number;
	int manysits;
	double price;
	int FILAS = 5;
	int COLUMNAS = 10;
	vector<vector<Butaca>> sala;

public:
	Room();
	Room(int number, int manysits, double price);
	void setNumber(int number);
	void setPrice(double price);
	void setManysits(int manysits);
	int getNumber(int number);
	double getPrice(double price);
	void SalaCine(int filas = 5, int columnas = 6);
	void mostrarSala();
	void reservarButaca(int fila, int columna);
	void comprarButaca(int fila, int columna);

};
class Reserve {
private:
	Movie movie[5];
	double Totalprice;
	int  number_reserve, sit;
	string  seleccion;
	Schedule schedule[6];
	Butaca butaca[100];//]]atributos 
public:
	Reserve();
	Reserve(int number_reserve, double Totalprice);
	void setNumber_reserve(int number_reserve);
	void setTotalprice(double Totalprice);
	int Number_reserve();
	double Booking_price();



};
class Venta {
private:

	Reserve reserve;
	int id_customer;
	string Customer_name;


public:
	Venta();
	Venta(int Id_customer, string Customer_name);
	void setId_Customer(int id_customer);
	void SetCustomer_Name(string Customer_name);

	int getId_Customer(int id_customer);
	string getCustomer_name(string Customer_name);


};
class Mantenimiento {
private:
	Movie cinemovie[10];
	Schedule schedule[10];
	Room room[10];
	Reserve reserve[50];
	Butaca butaca[50];
public:
	Mantenimiento();
	void generate_Movies();
	Movie getMoviebypos(int pos);
	void generate_Schedule();
	void generate_Room();
	void generate_Reserve();

};


