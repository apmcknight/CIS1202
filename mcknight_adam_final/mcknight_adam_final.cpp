// Adam McKnight
// CIS 1202
// December 12th 2021
// Final Project
// See screenshots in root for expected output
// and the README.md / documentation. 

// Reference for light wattage was used from: https://www.christmasdesigners.com/blog/much-electricity-led-christmas-lights-use/#:~:text=How%20Much%20Electricity%20Do%20LED%20Christmas%20Lights%20Use%3F,%20.07%20watts%20%203%20more%20rows%20


#include "mcknight_adam_final.h"
#include "Lights.h"

using namespace std;

// Variables for Creating a New Light
Light newLight;
int newLightSN = 000;
int newLightStatus = 0;
string newLightManufactuer = "";

// Variables for Light Calculator
double estimatedLightCount = 0.0;
double homeSqft = 0.0;
double totalLights = 0.0;
double totalWatts = 0.0;
double miniLightIncadendescentWatt = 40.8f;

// Creates fstream obj
fstream dataFile;

	void exportToBinary()
	{
		double miniLightIncadendescentWatt = 40.8f;

		struct Home
		{
			double estimatedLightCount = 0.0;
			double homeSqft = 0.0;
			double totalLights = 0.0;
			double totalWatts = 0.0;
		};

		class Home main;
		cout << "Light Calcaulator" << endl << endl;
		cout << "Please enter the amount of Lights you think are needed for your home: ";
		cin >> main.estimatedLightCount;
		cout << "Please enter the total size of your home as ft^2: ";
		cin >> main.homeSqft;

		// Math Calculations
		totalLights = homeSqft * estimatedLightCount;
		totalWatts = estimatedLightCount * miniLightIncadendescentWatt;

		dataFile.open("data.dat", ios::out, ios::binary);

		if (dataFile.is_open())
		{
			cout << "File only includes exported total watts based on inputed data in binary form." << endl;
			cout << "File Created. File is located at: mcknight_adam_final/out/build/x64-Debug/" << endl;
			cout << "Depending on Complier settings and machine settings, the above file may be in a different location. Depending on what type of architecture your machine is on." << endl << endl;

			dataFile.write(reinterpret_cast<char*>(&main.totalWatts), sizeof(main.totalWatts));
		}
	}

	void lightCalculator()
	{
		cout << "Light Calcaulator" << endl << endl;
		cout << "Please enter the amount of Lights you think are needed for your home: ";
		cin >> estimatedLightCount;
		cout << "Please enter the total size of your home as ft^2: ";
		cin >> homeSqft;

		totalLights = homeSqft * estimatedLightCount;
		totalWatts = estimatedLightCount * miniLightIncadendescentWatt;

		cout << "To cover your home in lights, you will need " << totalLights << " lights and you would use a total of  " << round(totalWatts) << "watts per-square-foot" << endl << endl;
	}

void menu()
{
	int keyboard_input;

	// Creates an array of menu options based on const size of X:
	const int OPTIONS = 5;
	std::string menu_options[OPTIONS] = { "Add a Light", "Show Details", "Light Calculator", "Export Binary Data", "Exit program"};
	std::cout << "MAIN MENU" << std::endl;

	// Displays the menu options array to the user:
	for (int i = 0; i < OPTIONS; i++)
	{
		std::cout << i + 1 << ". ";
		std::cout << menu_options[i] << std::endl;
	}

	// Gets the menu input to pass into the switch bellow:
	std::cout << std::endl;
	std::cout << "Enter a Menu Option: ";
	std::cin >> keyboard_input;


	// Loops over the switch, until exit is provided or an invalid command is entered:
	while (keyboard_input < 9)
	{

		switch (keyboard_input)
		{
			case 1:
				cout << "Please enter the manufactuer of the light: ";
				cin >> newLightManufactuer;
				newLight.setLightManufactuer(newLightManufactuer);
			
				cout << "Please enter the serial number of the light: ";
				cin >> newLightSN;
				newLight.setLightSN(newLightSN);

				cout << "Please enter the status of the light, 0 for off OR 1 for on: ";
				cin >> newLightStatus;
				newLight.setLightStatus(newLightStatus);
				cout << endl << endl;
				menu();
				break;

			case 2:
				cout << "Showing Light Details... " << endl;
				newLight.showDetails(newLightSN, newLightStatus, newLightManufactuer); // SN, S, M
				cout << endl << endl;
				menu();
				break;
		
			case 3:
				lightCalculator();
				menu();
				break;

			case 4:
				exportToBinary();
				menu();
				break;
			
			case 5:
				exit(1);
		}
	}

	if (keyboard_input > 9)
	{
		std::cout << "Please enter a valid menu option." << std::endl;
		std::cout << std::endl;
		menu();
	}

}

int main()
{
	menu();
	return 0;
}