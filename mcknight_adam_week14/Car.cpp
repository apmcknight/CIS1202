// Adam McKnight
// November 28th 2021
// CIS 1202
// See screenshots in projects' root for expected output

#include "mcknight_adam_week14.h"
#include "Vehicle.h"
#include "Car.h"

using namespace std;

int Car::setDoors(int d) const
{
	d = number_of_doors;
	return d;
}

int Car::getDoors(int d) const
{
	return d;
}