#include <iostream>
#include <iomanip>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

//Function prototypes
void getVehicleInfo(Vehicle);

int main()
{
	Vehicle userVehicleInput;

	getVehicleInfo(userVehicleInput);



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