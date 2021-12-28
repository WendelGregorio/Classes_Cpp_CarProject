/*
 * Program: Car
 * Archive: Car.h
 *
 */

#ifndef CAR_H
#define CAR_H

using namespace std;

class Car {
	private:
		string model;
		string color;
		int year;
		float price;
		/* class atributes */
		static int totalcars;

	public:
		Car();
		Car(string,int,float,string);
		~Car();

		string getModel();
		void setModel(string);
		string getColor();
		void setColor(string);
		int getYear();
		void setYear(int);
		void setYear(string);
		float getPrice();
		void setPrice(float);
		void setPrice(string);
		void show();

		/* class method */
		static int getTotal() {
			return totalcars;
		}
		static void showtotalcars() {
			cout << "Total Cars: " << Car::getTotal() << endl;
		}
};

#endif
