// Adam McKnight
// CIS 1202
// December 12th 2021
// Final Project
// See screenshots in root for expected output
// and the README.md / documentation. 

// PART A - Program generates data 
// Program reads data from Exterior Christmas Lights
// if the Light data is at 255 then the light is on and iluminated
// if the light data is at 000 then the light is off. 
// if the data is at 0 then the lights are not plugged in
// if the data is at 1 then the lights are plugged in

#include "mcknight_adam_final.h"
#include "Lights.h"

using namespace std;

int Light::setLightStatus(int s) const
{
	s = status;
	return s;
}

int Light::getLightStatus(int s) const
{
	return s;
}

string Light::setLightManufactuer(string m) const
{
	m = manufactuer;
	return m;
}

string Light::getLightManufactuer(string m) const
{
	return m;
}

int Light::setLightSN(int sn) const
{
	sn = serialNumber;
	return sn;
}

int Light::getLightSN(int sn) const
{
	return sn;
}

void Light::showDetails()
{
	cout << "Light Details & Status ----" << endl;
	cout << "Light Manufactuer: " << m << endl;
	cout << "Light SN:" << sn << endl;

	int status = s;

	if (status == 0)
	{
		cout << "Light Status: LIGHT IS OFF" << "/ Return Code of: " << status;
	}
	if (status == 1)
	{
		cout << "Light Status: LIGHT IS ON" << "/ Return Code of: " << status;
	}
	if (status != 0 || status != 1)
	{
		cout << endl << "Light Status could not be retrieved. Please try again later.";
	}
}