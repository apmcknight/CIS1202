// Adam McKnight
// November 28th 2021
// CIS 1202
// See screenshots in projects' root for expected output

#include "mcknight_adam_week14.h"
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

int Truck::setTowing(int t) const
{
	t = towing;
	return t;
}

int Truck::getTowing(int t) const
{
	return t;
}