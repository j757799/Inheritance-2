#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

//Vehicle class holds the general data 'bout the ride.
class Vehicle
{
private:
	string make;
	int model;
	int mileage;
	double price;

public:
	//Default constructor
	Vehicle()
	{
		make = "";
		model = 0;
		mileage = 0;
		price = 0.0;
	}

	//Constructor
	Vehicle(string autoMake, int autoModel, int autoMileage, double autoPrice)
	{
		make = autoMake;
		model = autoModel;
		mileage = autoMileage;
		price = autoPrice;

		displayVehicle();
	}

	//Display Thingy
	void displayVehicle()
	{
		cout << fixed << showpoint << setprecision(2) << endl;
		cout << "\n\nHere is the description: \n";
		cout << "Make: " << make << endl;
		cout << "Model year: " << model << endl;
		cout << "Mileage: " << mileage << endl;
		cout << "Price: $" << price << endl;
	}

	//Accessors
	string getMake() const
	{
		return make;
	}

	int getModel() const
	{
		return model;
	}

	int getMileage() const
	{
		return mileage;
	}

	double getPrice() const
	{
		return price;
	}
};







#endif