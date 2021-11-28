// Adam McKnight
// CIS 1202 
// October 31st 2021
// See screenshots in root for expected output.


// Defines all include files for the project:
#include "mcknight_adam_week10.h"

// Declare STD namespace, instead of declaring inline due to high number of uses.
using namespace std;

// Structs and Gloabls:
const int NAME_SIZE = 40;

struct Product
{
	long number;
	char name[NAME_SIZE];
	double price;
	int quanity;
};


// Prototypes:

void showMenu();
void createFile(fstream&);
void displayAll(fstream&);
void displayFile(fstream&, int);
void modifyFile(fstream&);

void createFile()
{
	fstream dataFile;
	dataFile.open("data.dat", ios::out);

	cout << "Creating a new file named 'data.dat'" << endl;

	if (dataFile.is_open())
	{
		cout << "File Created. File is located at: mcknight_adam_week10/out/build/x64-Debug/" << endl;
		cout << "Depending on Complier settings and machine settings, the above file may be in a different location. Depending on what type of architecture your machine is on.";

		// THIS IS WRITING DATA TO THE CORRECT FILE, ALTHOUGH IT SEEMS TO BE CRUPPTING THE DATA SOMEHOW?
		// WHEN READING BACK THE DATA IN THE PROGRAM AND IN NOTEPAD IT's SHOWING AS IT DOES IN THE PROVIDED SCREENSHOT.
		// THINKING IT HAS SOMETHING TO DO WITH REINTERPRET CAST? OR I'M DOING SOMETHING INCORRECTLY WITH BINARY.

		Product p;
		p.number = 1;
		strcpy(p.name, "Wrapping Paper");
		p.price = 30.00;
		p.quanity = 19;
		dataFile.write(reinterpret_cast<char*>(&p), sizeof(p));

		p.number = 2;
		strcpy(p.name, "Toilet Paper");
		p.price = 30.00;
		p.quanity = 19;
		dataFile.write(reinterpret_cast<char*>(&p), sizeof(p));

		p.number = 3;
		strcpy(p.name, "Paper Towels");
		p.price = 5.25;
		p.quanity = 3;
		dataFile.write(reinterpret_cast<char*>(&p), sizeof(p));

		p.number = 4;
		strcpy(p.name, "Drawing Paper");
		p.price = 230.00;
		p.quanity = 119;
		dataFile.write(reinterpret_cast<char*>(&p), sizeof(p));

		p.number = 5;
		strcpy(p.name, "Tissue Paper");
		p.price = 3.00;
		p.quanity = 19;
		dataFile.write(reinterpret_cast<char*>(&p), sizeof(p));

		p.number = 6;
		strcpy(p.name, "Paper Bags");
		p.price = 100.00;
		p.quanity = 50;
		dataFile.write(reinterpret_cast<char*>(&p), sizeof(p));

		dataFile.close();
	}
	else
	{
		cout << "There was an error opening the file. Try Again...";
	}
}


void displayAll()
{
	fstream dataFile;

	// After testing, if you leave this set as data.dat, ios::in | ios::out || ios::binary... it will overwrite the data file that was created on program start up.
	// as the ios:: out is being used again.

	dataFile.open("data.dat", ios::in | ios::binary | ios::trunc);

	cout << "Opening the file named 'data.dat'" << endl;

	if (dataFile.is_open())
	{
		cout << "File Opened. File is located at: mcknight_adam_week10/out/build/x64-Debug/" << endl;
		cout << "Depending on Complier settings and machine settings, the above file may be in a\ndifferent location. Depending on what type of architecture your machine is on.";

		string dataFileLine;
		while (getline(dataFile, dataFileLine));
		{
			cout << endl << endl <<  dataFileLine << endl << endl;
		}
		dataFile.close();
	}
	else
	{
		cout << "There was an error opening the file. Try Again...";
	}
}

void displayFile()
{
	int item_to_display;
	cout << "Enter Item Number to Display: ";
	cin >> item_to_display;

	fstream dataFile;
	dataFile.seekg(0, ios::beg);
}

void modifyFile()
{
	int item_update_id;
	cout << "ID of item to Update: ";
	cin >> item_update_id;

	fstream dataFile;

	dataFile.open("data.dat", ios::app);

	if (dataFile.is_open())
	{
		Product up; // UP = Update Product.

		cout << "Item Number: ";
		cin >> up.number;

		cout << "Item Name: ";
		cin >> up.name;

		cout << "Item Price: ";
		up.price;

		cout << "Item Quanity: ";
		up.quanity;
	}
	else
	{
		cout << "There was an error opening the file. Try Again...";
	}
}

void showMenu()
{
	int keyboard_input;

	// Creates an array of menu options based on const size of X:
	const int OPTIONS = 4;
	std::string menu_options[OPTIONS] = { "Display All Inventory", "Find a Product by ID", "Modify a Product","Exit"};

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
	

		switch (keyboard_input)
		{
			case 1:
				displayAll();
				showMenu();
				break;
			case 2:
				displayFile();
				showMenu();
				break;

			case 3:
				modifyFile();
				break;

			case 4:
				exit(1);
		}

	if (keyboard_input > 4)
	{
		std::cout << "Please enter a valid menu option between 1 and 5." << std::endl;
		std::cout << std::endl;
		showMenu();
	}

}

int main()
{
	createFile();
	showMenu();
	return 0;
}
