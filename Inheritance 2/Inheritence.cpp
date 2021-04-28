#include <iostream>
#include <iomanip>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

//Function prototypes
void getVehicleInfo(Vehicle);
void getCarInfo(Car);
void getTruckInfo(Truck);

int main()
{
	Vehicle userVehicleInput;
	Car userCarInput;
	Truck userTruckInput;

	getVehicleInfo(userVehicleInput);

	getCarInfo(userCarInput);

	getTruckInfo(userTruckInput);

	cout << endl;
	system("pause");
	return 0;
}

void getVehicleInfo(Vehicle userVehicleInput)
{
	string vehicleMake;
	int modelYr;
	int mileage;
	double price;
	cout << "\nEnter vehicle make: ";
	getline(cin, vehicleMake);

	cout << "\n\nEnter vehicle model year: ";
	cin >> modelYr;

	cout << "\n\nEnter vehicle mileage: ";
	cin >> mileage;

	cout << "\n\nEnter vehicle price: ";
	cin >> price;

	Vehicle(vehicleMake, modelYr, mileage, price);

}

void getCarInfo(Car userCarInput)
{
	string vehicleMake;
	int modelYr;
	int mileage;
	double price;
	int carDoors;
	cout << "\nEnter car make: ";
	cin.ignore();
	getline(cin, vehicleMake);

	cout << "\n\nEnter car model year: ";
	cin >> modelYr;

	cout << "\n\nEnter car mileage: ";
	cin >> mileage;

	cout << "\n\nEnter car price: ";
	cin >> price;

	cout << "\n\nEnter number of car doors: ";
	cin >> carDoors;

	Car(vehicleMake, modelYr, mileage, price, carDoors);

}

void getTruckInfo(Truck userTruckInput)
{
	string vehicleMake;
	int modelYr;
	int mileage;
	double price;
	int carDoors;
	string towingCap;

	cout << "\nEnter truck make: ";
	cin.ignore();
	getline(cin, vehicleMake);

	cout << "\n\nEnter truck model year: ";
	cin >> modelYr;

	cout << "\n\nEnter truck mileage: ";
	cin >> mileage;

	cout << "\n\nEnter truck price: ";
	cin >> price;

	cout << "\n\nEnter towing capacity: ";
	cin >> towingCap;

	Truck(vehicleMake, modelYr, mileage, price, towingCap);

}