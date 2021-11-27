// Adam McKnight
// November 28th 2021
// CIS 1202
// See screenshots in projects' root for expected output

#include "mcknight_adam_week14.h"
#include "Vehicle.h"

using namespace std;

string Vehicle::setManufactuer(string m) const
{
	m = manufacturer;
	return m;
}

string Vehicle::getManufactuer(string m) const
{
	return m;
}

int Vehicle::setYear(int y) const
{
	y = year_built;
	return y;
}

int Vehicle::getYear(int y) const
{
	return y;
}