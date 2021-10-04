/*

	Adam McKnight
	CIS 1120 501
	October, , 2021
	MIDTERM PROJECT

	See the screenshots in the root for expected output of program.
*/


#include "mcknight_adam_midterm.h"

// Structs & Enums
struct Customer
{
	int customer_id;
	bool is_customer_active; // RETURN 0 FOR NO AND 1 FOR YES.
	std::string customer_first_name;
	std::string customer_last_name;
	std::string customer_email_address;
	std::string customer_phone_number; // TODO: NO SPACES OF SYMBOLS SHOULD BE USED, CHECK WITH VALIDATION.
	std::string company_name;
	std::string customer_notes; // ONE LINE INPUT, LIMIT TO X AMOUNT OF CHARACTERS.
};


// Globals (limited use)
const int CUSTOMER_ARR_SIZE = 300;
Customer customers[CUSTOMER_ARR_SIZE];


// Prototypes

void menu();

/*
addCustomer();
updateCustomer(); // USE CUSTOMER ID AS A WAY TO GRAB THE SPECIFIC CUSTOMER
deleteCustomer();
displayAllCustomers();
displayCustomer();
runReport();
*/

// Funcitons & Methods

void menu()
{
	int keyboard_input;
	const int OPTIONS = 7;
	std::string menu_options[OPTIONS] = { "Create New Customer", "Update a Customer", "Delete A Customer", "Display All Customers", "Display a Customer", "Run A Report", "Exit" };

	std::cout << "MAIN MENU" << std::endl;

	
	for (int i = 0; i < OPTIONS; i++)
	{
		std::cout << i + 1 << ". ";
		std::cout << menu_options[i] << std::endl;
	}

	std::cout << "Enter a Menu Option: ";
	std::cin >> keyboard_input;

	if (keyboard_input > OPTIONS)
	{
		std::cout << std::endl;
		std::cout << "INVALID OPTION: Please enter a valid option between 1-7" << std::endl;
		menu();
	}

}

int main()
{
	menu();
	return 0;
}
