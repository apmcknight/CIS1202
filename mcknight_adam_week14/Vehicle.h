// Adam McKnight
// November 28th 2021
// CIS 1202
// See screenshots in projects' root for expected output

#ifndef VEHICLE_H
#define VEHICLE_H

#include "mcknight_adam_week14.h"
using namespace std;

class Vehicle {
	private:
		string manufacturer;
		int year_built;
	public:
		Vehicle()
		{
			manufacturer = "";
			year_built = 0;
		}

		Vehicle(string m, int y)
		{
			manufacturer = m;
			year_built = y;
		}

		void Vehicle::displayInfo(string m, int y)
		{
			// Shows the info
			cout << endl << "Vehicle Information ---" << endl;
			cout << "The manufactuer for the truck is: " << m << endl;
			cout << "Year Built: " << y;
			cout << endl << endl;
		}

		string setManufactuer(string m) const;
		string getManufactuer(string m) const;
		int setYear(int y) const;
		int getYear(int y) const;

		
	};

#endif