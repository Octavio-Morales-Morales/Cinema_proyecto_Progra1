// Cinema.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "procesos.cpp"
using namespace std;

int main()
{
	Movie movie[5];

	string name;
	int year, time, review;
	for (int i = 0; i < 5; i++) {
		cout << "name ";
		cin >> name;
		cout << "Digite el año ";
		cin >> year;
		cout << "Digite la duracion de la pelicula ";
		cin >> time;
		cout << "Digite la calificacion de las views ";
		cin >> review;
		system("cls");
		movie[i].setName(name);
		movie[i].setYear(year);
		movie[i].setTime(time);
		movie[i].setReview(review);
	}
	for (int i = 0; i < 5; i++) {
		cout << movie[i].getName() << " - " << movie[i].getYear() << " - " << movie[i].getTime() << " - " << movie[i].getReview();
	}

}
};
}