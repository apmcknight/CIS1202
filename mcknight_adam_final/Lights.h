#ifndef LIGHTS_H
#define LIGHTS_H

#include "mcknight_adam_final.h"
using namespace std;

class Light {
private:
	int status;
	string manufactuer;
	int serialNumber;

public:
	Light()
	{
		status = 0; // OFF by Default
		manufactuer = "NONE";
		serialNumber = 0000;
	}

	int setLightStatus(int s) const;
	int getLightStatus(int s) const;
	string setLightManufactuer(string m) const;
	string getLightManufactuer(string m) const;
	int setLightSN(int sn) const;
	int getLightSN(int sn) const;

	void Light::showDetails(int sn, int s, string m)
	{
		cout << endl << "Light Manufactuer: " << m << endl;
		cout << "Serial Number: " << sn << endl;
		cout << "Status: " << s << endl;
	}
};


#endif