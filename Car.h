#pragma once
#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include<string>
using namespace std;

class Car : public Vehicle
{
private:
	int doors;

public:
	//Default constructor
	Car() : Vehicle()
	{
		doors = 0;
	}

	//Constructor #2
	Car(string carMake, int carModel, int carMileage, double carPrice, int carDoors) : Vehicle(carMake, carModel, carMileage, carPrice)
	{
		doors = carDoors;

		displayCar();

	}

	void displayCar()
	{
			cout << "Doors: " << doors << endl << endl;
	}

	//Accessor for doors
	int getDoors()
	{
		return doors;
	}
};






#endif