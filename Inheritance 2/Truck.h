#pragma once
#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <string>
using namespace std;

class Truck : public Vehicle
{
private:
	string towingCap;

public:
	//Default constructor
	Truck() : Vehicle()
	{
		towingCap = "";
	}

	//Constructor #2
	Truck(string truckMake, int truckModel, int truckMileage, double truckPrice, string truckTowingCap) : Vehicle(truckMake, truckModel, truckMileage, truckPrice)
	{
		towingCap = truckTowingCap;
	}

	//Accessor for towing capacity
	string getTowingCap()
	{
		return towingCap;
	}

};
#endif