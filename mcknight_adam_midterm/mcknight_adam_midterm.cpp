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
	int customer_id = NULL;
	bool is_customer_active = false; // RETURN 0 FOR NO AND 1 FOR YES.
	std::string customer_first_name;
	std::string customer_last_name;
	std::string customer_email_address;
	std::string customer_phone_number; // TODO: NO SPACES OF SYMBOLS SHOULD BE USED, CHECK WITH VALIDATION.
	std::string company_name;
};


// Globals (limited use)
const int CUSTOMER_ARR_SIZE = 1;
Customer customers[CUSTOMER_ARR_SIZE];


// Prototypes

void menu();
void newCustomer(Customer customerArray[]);
void displayCustomer(Customer customerArray[]);

/*

updateCustomer(); // USE CUSTOMER ID AS A WAY TO GRAB THE SPECIFIC CUSTOMER
deleteCustomer();
displayAllCustomers();
displayCustomer();
runReport();
*/

// Funcitons & Methods

void displayCustomer(Customer customerArray[])
{
	for (int i = 0; i < CUSTOMER_ARR_SIZE; i++)
	{
		std::cout << "Customer's ID: " << customerArray[i].customer_id;

		std::cout << "Customer Name: " << customerArray[i].customer_first_name << " " << customerArray[i].customer_last_name << std::endl;

		std::cout << "Customer's Company: " << customerArray[i].company_name << std::endl;

		std::cout << "Customer's Email Address: " << customerArray[i].customer_email_address << std::endl;

		std::cout << "Customer's Phone Number: " << customerArray[i].customer_phone_number << std::endl;
	}
}

void newCustomer(Customer customerArray[])
{
	std::cout << "---- ADD A NEW CUSTOMER ----" << std::endl;

	std::cout << "When finished press q and hit return to go to the main menu..." << std::endl;

	for (int i = 0; i < CUSTOMER_ARR_SIZE; i++)
	{
		customerArray[i].customer_id = i+1;

		std::cout << "What's the Customers First Name: ";
		std::cin >> customerArray[i].customer_first_name;

		std::cout << "What's the Customers First Name: ";
		std::cin >> customerArray[i].customer_last_name;

		std::cout << "What's the Customers Company Name: ";
		std::cin >> customerArray[i].company_name;
	}
}


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


	while (keyboard_input < 8)
	{

		switch (keyboard_input)
		{
		case 1:
			newCustomer(customers);
			menu();
			break;
		case 2:
			displayCustomer(customers);
			menu();
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			exit(1);
		}
	}

	

}

int main()
{
	menu();
	return 0;
}
