/*
 * Program: Car
 * Archive: Car.cpp
 */

#include <iostream>
#include <limits>
#include <exception>
#include "Car.h"

using namespace std;

Car::Car() {
	this->model = "Fusca";
	this->year = 1981;
	this->price = 5000;
	this->color = "Blue";
	totalcars++;
	cout << "contructor method called. ";
	cout << "no method configured, that's will be a Fusca" << endl;
}

Car::Car(string model, int year, float price, string color) {
	this->model = model;
	this->year = year;
	this->price = price;
	this->color = color;
	totalcars++;
	cout << "car's contructor method " << this->model << endl;
}

Car::~Car() {
	totalcars--;
	cout << "Desctructor method called for Car " << this->model << endl;
}

string Car::getModel() {
	return this->model;
}

void Car::setModel(string new_model) {
	this->model = new_model;
}

string Car::getColor() {
	return this->color;
}

void Car::setColor(string new_color) {
	this->color = new_color;
}

int Car::getYear() {
	return this->year;
}

void Car::setYear(string new_year) {
	try{
		this->setYear(stoi(new_year));
	}catch (exception e){}
}

void Car::setYear(int new_year) {
	this->year = new_year;
}

float Car::getPrice() {
	return this->price;
}

void Car::setPrice(string new_price) {
	try {
		this->setPrice(stoi(new_price));
	}catch (exception e){}
}

void Car::setPrice(float new_price) {
	this->price = new_price;
}

void Car::show() {
	cout << "Car: " << this->getModel();
	cout << " | Color: " << this->getColor();
	cout << " | Year: " << this->getYear();
	cout << " | Price: " << this->getPrice() << endl;
}
