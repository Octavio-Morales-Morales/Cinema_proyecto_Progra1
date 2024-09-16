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
	~Movie();
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

class Butaca {
private:
	int id = 0;
	char state;

public:
	Butaca();
	Butaca(int id, char state);
	~Butaca();
	void setId(int id);
	void setState(char state);

	int getId();
	char getState();
};
class Room {
private:
	int number;
	int manysits;
	double price;
	int** sala, filas = 10, columnas = 5;
	int** reserva, Filas = 10, Columnas = 5;
	Butaca butaca;


public:
	Room();
	Room(int number, int manysits, double price);
	~Room();
	void setNumber(int number);
	void setPrice(double price);
	void setManysits(int manysits);
	int getManysits();
	int getNumber();
	double getPrice();
	void generateSalaCine();
	void mostrarSala();
	void reservarButaca();
	void comprarButaca();
	int** getGenerateSalaCine();
	int** getMostrarSala();
	int** getReservarButaca();
	int** getComprarButaca();

};

class Schedule {
private:
	Movie movie;
	Room room;
	int startTime = 0, finishTime = 0;
	string date;

public:

	Schedule();
	Schedule(int startTime, int finishTime, string date, Movie movie, Room room);
	~Schedule();
	void setStartTime(int startTime);
	void setFinishTime(int finishTime);
	void setDate(string date);
	void setMovie(Movie movies);
	void setRoom(Room room);

	int getStartTime();
	int getFinishTime();
	string getDate();
	Movie getMovie();
	Room getRoom();

};


class Venta_Reserva {
private:
	Movie movie;
	double Totalprice;
	int  number_reserve, sit;
	int id_customer;
	string Customer_name;
	string  seleccion;
	Schedule schedule;
	Room room;
public:
	Venta_Reserva();
	Venta_Reserva(int Id_customer, string Customer_name, int number_reserve, double Totalprice);
	~Venta_Reserva();
	void setId_Customer(int id_customer);
	void SetCustomer_Name(string Customer_name);
	void setNumber_reserve(int number_reserve);
	void setTotalprice(double Totalprice);

	int getId_Customer();
	string getCustomer_name();
	int getNumber_reserve();
	double getBooking_price();
	void generateReserva();
	void generateVenta();
	Movie getMovie();
	Schedule getSchedule();
	Room getRoom();
};

class Mantenimiento {
private:
	Movie cinemovie[4];
	Schedule schedule[4];
	Room room1;
	Room room[2];
	Venta_Reserva reserve[50];
	Butaca butaca[50];
public:
	Mantenimiento();
	void generate_Movies();
	Movie getGenerate_Movies();
	void generate_Schedule();
	void generate_Room();
	void generate_Reserve();
	void generate_venta();
	Schedule getGenerate_venta();
	Venta_Reserva getGenerate_Reserva();
	Schedule getGenerate_Schedule();
	Room getGenerate_Room();
};


