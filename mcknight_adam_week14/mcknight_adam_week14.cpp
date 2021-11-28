// Adam McKnight
// November 28th 2021
// CIS 1202
// See screenshots in projects' root for expected output

#include "mcknight_adam_week14.h"
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	string manufactuer;
	int year;
	int doors;
	int towing;

	// Bike
	Vehicle bike;

	cout << "Please enter the maker of the Vehicle: ";
	cin >> manufactuer;
	bike.setManufactuer(manufactuer);

	cout << "Please enter the year of the Vehicle: ";
	cin >> year;
	bike.setYear(year);
	bike.displayInfo(manufactuer, year);

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

	// Semi Truck
	Truck semi;

	cout << "Enter the manufactuer of the truck: ";
	cin >> manufactuer;

	semi.setManufactuer(manufactuer);
	
	cout << "Enter the year of the truck: ";
	cin >> year;
	
	semi.setYear(year);
	
	cout << "Enter the towing capacity of the truck in LBS: ";
	cin >> towing;

	semi.setTowing(towing);
	semi.displayInfo(manufactuer, year, towing);

	return 0;
}
