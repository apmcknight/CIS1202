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

int main()
{

	Light edison;
	edison.setLightStatus(1);
	edison.setLightManufactuer("Philips");
	edison.setLightSN(1234);
	
	edison.showDetails();

	return 0;
}
