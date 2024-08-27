
#pragma once
#include <iostream>
using namespace std;
class Movie {
private:
	string name; string country;
	int time = 0, year = 0, review = 0;
public:
	Movie();
	Movie(string name, int time, int year, string country, int review);

	void setName(string name);
	void setTime(int time);
	void setYear(int year);
	void setCountry(string country);
	void setReview(int review);

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
	Butaca() {}
	Butaca(int id, string state);
	void setIdentificacion(int id);
	void setState(string state);

	int getId(int id);
};
class Room {
private:
	int number;
	string freeSits;
	double price;
	Butaca asientos[10][10];//matriz 
public:
	Room();

	Room(int number, int manysits, double price);

	void setNumber(int number);

	void setPrice(double price);

	void setManysits(int manysits);

	



};
class Reserve {
private:
	Movie movie;
	Schedule schedule;
	Butaca butaca;//atributos 
	double Totalprice;
	int  number_reserve;

public:
	Reserve();
	Reserve( int, double  );
    void setNumber_reserve(int);
	void setTotalprice(double);
	
};
class venta {
private:
	Reserve reserve;
	int id_client;
public:

};
class Cinema {
private:
	Movie cinemovie[10];
	Schedule schedule[10];
	Room room[10];
	Reserve reserve[50];
	Butaca butaca[50];
public:
	Cinema();
		void generate_Movies();

		void generate_Schedule();

		void generate_Room();
		void generate_Reserve();

};


