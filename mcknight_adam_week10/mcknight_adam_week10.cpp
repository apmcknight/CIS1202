// Adam McKnight
// CIS 1202 
// October 31st 2021
// See screenshots in root for expected output.


// Defines all include files for the project:
#include "mcknight_adam_week10.h"

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

/*
int showMenu();
void createFile(fstream&);
void displayFile(fstream&);
void displayRecord(fstream&, int);
void modifyRecord(fstream&);


*/


int showMenu()
{
	int user_input;

	const int OPTIONS = 5;
	std::string menu_options[OPTIONS] = { "Display All Inventory", "Display a Product", "Modify a Product", "Exit the Program"};

	for (int i = 0; i < OPTIONS; i++)
	{
		std::cout << i + 1 << ". ";
		std::cout << menu_options[i] << std::endl;
	}

	std::cout << "Please enter an option between 1 and 4: ";
	std::cin >> user_input;

	return user_input;
}

int main(int user_input)
{
	while (user_input < 5)
	{
		showMenu();

		switch (user_input)
		{
			case 1:
				// Display All
				break;
			case 2:
				// Display product
				break;
			case 3:
				// Modify
				break;
			case 4:
				std::cout << "Exiting the program...";
				exit(1);
				break;
		}
	}
	 

	return 0;
}
