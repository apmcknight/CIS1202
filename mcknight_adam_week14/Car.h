#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include "mcknight_adam_week14.h"

class Car : public Vehicle
{
private:
	int number_of_doors;

public:
	Car()
	{
		number_of_doors = 0;
	}

	int setDoors(int d) const;
	int getDoors(int d) const;

	void Car::displayInfo(string m, int y, int d)
	{
		// Shows the info
		cout << endl << "Car Information ---" << endl;
		cout << "The manufactuer for the car is: " << m << endl;
		cout << "Year Built: " << y << endl;
		cout << "Number of Doors: " << d << endl;
		cout << endl << endl;
	}
	
};

#endif