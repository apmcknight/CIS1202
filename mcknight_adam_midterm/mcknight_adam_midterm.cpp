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
	bool is_customer_active = false; // RETURN 0 FOR NO AND 1 FOR YES.
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
void displayCustomer(Customer customerArray[]);
void updateCustomer(Customer customerArray[]);

/*
deleteCustomer(); // DELETE A CUSTOMER RECORD BASED ON THEIR ID IN THE ARRAY
displaySingleCustomer(); // DISPLAY A SINGE CUSTOMER BASED ON THEIR ID IN THE ARRAY
runReport(); // RUN A REPORT SHOWING HOW MANY CUSTOMERS ARE LISTED IN IT
*/

// Funcitons & Methods

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
	// TODO: does the array contain any values? if so how many are there to display?
	// cannot have the console print 100 values of empty.

	std::cout << "---- SHOWING FIRST 5 CUSTOMERS ----" << std::endl << std::endl;


	for (int i = 0; i < 5; i++)
	{
		std::cout << std::endl;
		std::cout << "Customer's ID: " << customerArray[i].customer_id << std::endl;

		std::cout << "Customer Name: " << customerArray[i].customer_first_name << " " << customerArray[i].customer_last_name << std::endl;

		std::cout << "Customer's Company: " << customerArray[i].company_name << std::endl;

		std::cout << "Customer's Email Address: " << customerArray[i].customer_email_address << std::endl;

		std::cout << "Customer's Phone Number: " << customerArray[i].customer_phone_number << std::endl;
	
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
		customerArray[i].customer_id = i + 1;

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

		if (user_input == "y" || user_input == "Y" || user_input == "yes" || user_input == "YES")
		{
			break;
		}

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

	std::cout << std::endl;
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
			updateCustomer(customers);
			menu();
			break;
		case 3:
			// deleteCustomer(customers);
			menu();
			break;
		case 4:
			displayCustomer(customers);
			menu();
			break;
		case 5:
			// displaySingleCustomer(customers);
			menu();
			break;
		case 6:
			// runReport(customers);
			menu();
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
