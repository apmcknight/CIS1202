/*

	Adam McKnight
	CIS 1120 501
	October, , 2021
	MIDTERM PROJECT

	See the screenshots in the root for expected output of program.

	Project checked into version control using git, a .gitignore file is
	located within the root directory. Please do not remove this file or
	re-init the .git file if project is forked.
*/


#include "mcknight_adam_midterm.h"

// Structs & Enums
struct Customer
{
	int customer_id = NULL;
	std::string customer_first_name;
	std::string customer_last_name;
	std::string customer_email_address;
	std::string customer_phone_number;
	std::string company_name;
};


// Globals (limited use)
const int CUSTOMER_ARR_SIZE = 100;
Customer customers[CUSTOMER_ARR_SIZE];


// Prototypes
void menu();
void newCustomer(Customer customerArray[]);
void updateCustomer(Customer customerArray[]);
void displayCustomer(Customer customerArray[]);
void sortCustomer(Customer customerArray[]);
void displaySingleCustomer(Customer customerArray[]);
void displayArrayAddress(Customer customerArray[]);


// Funcitons & Methods

void displayArrayAddress(Customer customerArray[])
{
	for (int i = 0; i < CUSTOMER_ARR_SIZE; i++)
	{
		std::cout << &customerArray[i] << std::endl;
	}
}

void displaySingleCustomer(Customer customerArray[])
{
	int customer_id;
	std::string user_input;
	std::cout << std::endl << std::endl;
	std::cout << "---- FIND CUSTOMER FROM ID ----" << std::endl << std::endl;

	std::cout << "NOTE: You can only show one custoemr at a time." << std::endl << std::endl;

	std::cout << "NOTE: To find the ID of the customer you'd like to update,\nDisplay all customers at the main menu. Their ID is shown." << std::endl;
	std::cout << std::endl << "ID of customer to Update: ";
	std::cin >> customer_id;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Customer First Name: " << customerArray[customer_id].customer_first_name << std::endl;

	std::cout << "Customer Last Name: " << customerArray[customer_id].customer_last_name << std::endl;

	std::cout << "Customer Phone Number: " << customerArray[customer_id].customer_phone_number << std::endl;

	std::cout << "Customer E-Mail Address: " << customerArray[customer_id].customer_email_address << std::endl;

	std::cout << "Customer's Company: " << customerArray[customer_id].company_name << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
}

void sortCustomer(Customer customerArray[])
{
	// Sorts through the Customer Array
}



void updateCustomer(Customer customerArray[])
{
	int customer_to_update_id;
	std::string user_input;
	std::cout << std::endl << std::endl;
	std::cout << "---- UPDATE AN EXSITING CUSTOMER ----" << std::endl << std::endl;

	std::cout << "NOTE: You can only update one custoemr at a time. After a customer is updated \nyou can update another after you've been returned to the main menu!" << std::endl << std::endl;
	
	std::cout << "NOTE: To find the ID of the customer you'd like to update,\nDisplay all customers at the main menu. Their ID is shown." << std::endl;
	std::cout << std::endl << "ID of customer to Update: ";
	std::cin >> customer_to_update_id;

	std::cout << "What's the Customers First Name: ";
	std::cin >> customerArray[customer_to_update_id].customer_first_name;

	std::cout << "What's the Customers Last Name: ";
	std::cin >> customerArray[customer_to_update_id].customer_last_name;

	std::cout << "What's the Customers Phone Number: ";
	std::cin >> customerArray[customer_to_update_id].customer_phone_number;

	std::cout << "What's the Customers E-Mail Address: ";
	std::cin >> customerArray[customer_to_update_id].customer_email_address;

	std::cout << "What's the Customers Company Name: ";
	std::cin >> customerArray[customer_to_update_id].company_name;	
}

void displayCustomer(Customer customerArray[])
{
	
	// Function shows the first 5 customers in the array:

	std::cout << "---- SHOWING FIRST 5 CUSTOMERS ----" << std::endl << std::endl;


	for (int i = 0; i < 5; i++)
	{
		std::cout << std::endl;
		std::cout << "Customer's ID: " << customerArray[i].customer_id << std::endl;

		std::cout << "Customer Name: " << customerArray[i].customer_first_name << " " << customerArray[i].customer_last_name << std::endl;

		std::cout << "Customer's Company: " << customerArray[i].company_name << std::endl;

		std::cout << "Customer's Email Address: " << customerArray[i].customer_email_address << std::endl;

		std::cout << "Customer's Phone Number: " << customerArray[i].customer_phone_number << std::endl;
	

		// Convert String First Name into a char:

		std::string str = customerArray[i].customer_first_name;

		char* stc = const_cast<char*>(str.c_str());

		// Prints out how many letters are in the first name:
		std::cout << "The Customer's First Name has " << strlen(stc) << " letters in it." << std::endl;

		std::cout << std::endl;
	}
}

void newCustomer(Customer customerArray[])
{
	std::string user_input;
	std::cout << std::endl << std::endl;
	std::cout << "---- ADD A NEW CUSTOMER ----" << std::endl << std::endl;

	std::cout << "Note: You can only add one custoemr at a time. After a customer is added \nyou can add another after you've been returned to the main menu!" << std::endl << std::endl;

	for (int i = 0; i < CUSTOMER_ARR_SIZE; i++)
	{
		// Defines the Customer's ID, adds 1 to the array ID for easier human counting:
		customerArray[i].customer_id = i + 1;

		// Get's the Customer's Information from the user:
		std::cout << "What's the Customers First Name: ";
		std::cin >> customerArray[i].customer_first_name;

		std::cout << "What's the Customers Last Name: ";
		std::cin >> customerArray[i].customer_last_name;

		std::cout << "What's the Customers Phone Number: ";
		std::cin >> customerArray[i].customer_phone_number;

		std::cout << "What's the Customers E-Mail Address: ";
		std::cin >> customerArray[i].customer_email_address;

		std::cout << "What's the Customers Company Name: ";
		std::cin >> customerArray[i].company_name;

		std::cout << std::endl;
		std::cout << "Are you finished entering Customers? y/N: ";
		std::cin >> user_input;
		std::cout << std::endl;

		// Program will return to menu if these are given as input:
		if (user_input == "y" || user_input == "Y" || user_input == "yes" || user_input == "YES")
		{
			break;
		}

	}
}


void menu()
{
	int keyboard_input;

	// Creates an array of menu options based on const size of 6:
	const int OPTIONS = 7;
	std::string menu_options[OPTIONS] = { "Create New Customer", "Update a Customer", "Display Customers", "Display Customer by ID", "Display Customers Sorted", "Show DB / Array Memory Location", "Exit"};

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
	while (keyboard_input < 8)
	{

		switch (keyboard_input)
		{
		case 1:
			newCustomer(customers);
			menu();
			break;
		case 2:
			updateCustomer(customers);
			menu();
			break;
		case 3:
			displayCustomer(customers);
			menu();
			break;
		case 4:
			displaySingleCustomer(customers);
			menu();
			break;
		case 5:
			sortCustomer(customers);
			menu();
			break;
		case 6:
			displayArrayAddress(customers);
			menu();
			break;
		case 7:
			exit(1);
		}
	}

	if (keyboard_input > 6)
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
