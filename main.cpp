/*
 * Program: Car
 * Archive: main.cpp
 */

#include <iostream>
#include "Car.h"

using namespace std;

int Car::totalcars = 0;
int N = 10;

int main() {
	Car *cars[N];
	Car Car_static1;
	Car Car_static2;

	Car_static1.show();

	Car_static2.setModel("Brasilia");
	Car_static2.setColor("Yellow");
	Car_static2.setYear("1977");
	Car_static2.setPrice("6500");

	cout << "Car static 2: " << Car_static2.getModel() << endl;
	Car_static2.show();

	Car::showtotalcars();

	cars[0] = new Car("Duster", 2016, 25000, "Silver");
	cars[1] = new Car("BMW", 2015,27000,"white");

	cars[0]->show();
	cars[1]->show();

	Car::showtotalcars();

	delete cars[0];
	delete cars[1];

	cout << "Total cars: " << Car::getTotal() << endl;
	cars[0] = new Car();
	cars[0]->setModel("Fuscão");
	cars[0]->setYear(1985);
	cars[1] = new Car("Ford Ka", 2014, 27000, "black");
	cars[2] = new Car("Fiesta", 2010, 27000, "black");

	Car::showtotalcars();

	cars[0]->show();
	cars[1]->show();

	delete cars[0];
	delete cars[1];
	delete cars[2];
	return 0;
}
