// Adam McKnight
// November 28th 2021
// CIS 1202
// See screenshots in projects' root for expected output

#include "mcknight_adam_week14.h"
#include "Vehicle.h"
#include "Car.h"

using namespace std;

int main()
{
	string manufactuer;
	int year;
	int doors;

	Vehicle truck;

	// TRUCK: Get the Manufactuer
	cout << "Please enter the maker of the truck: ";
	cin >> manufactuer;
	truck.setManufactuer(manufactuer);

	// Truck: Get the Year
	cout << "Please enter the year of the truck: ";
	cin >> year;
	truck.setYear(year);
	truck.displayInfo(manufactuer, year);

	// Car
	Car car;
	cout << "Enter the manufactuer of the car: ";
	cin >> manufactuer;
	car.setManufactuer(manufactuer);
	cout << "Enter the year of the car: ";
	cin >> year;
	car.setYear(year);
	cout << "Enter the doors of the car: ";
	cin >> doors;
	car.setDoors(doors);
	
	car.displayInfo(manufactuer, year, doors);

	return 0;
}
