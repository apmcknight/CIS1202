// Adam McKnight
// November 28th 2021
// CIS 1202
// See screenshots in projects' root for expected output

#ifndef TRUCK_H
#define TRUCK_H

#include "mcknight_adam_week14.h"
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
private:
	int towing;
public:
	Truck()
	{
		towing = 0;
	}

	int setTowing(int t) const;
	int getTowing(int t) const;

	void Truck::displayInfo(string m, int y, int t)
	{
		// Shows the info
		cout << endl << "Truck Information ---" << endl;
		cout << "The manufactuer for the truck is: " << m << endl;
		cout << "Year Built: " << y << endl;
		cout << "Towing Capacity: " << t << " LBS" << endl;
		cout << endl << endl;
	}
};

#endif