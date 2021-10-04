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
	bool is_customer_active; // RETURN 0 FOR NO AND 1 FOR YES.
	std::string customer_first_name;
	std::string customer_last_name;
	std::string customer_email_address;
	std::string customer_phone_number; // TODO: NO SPACES OF SYMBOLS SHOULD BE USED, CHECK WITH VALIDATION.
	std::string company_name;
};


// Globals (limited use)
const int CUSTOMER_ARR_SIZE = 300;
Customer customers[CUSTOMER_ARR_SIZE];


// Prototypes

void menu();
Customer addCustomer();
Customer displayCustomer();

/*

updateCustomer(); // USE CUSTOMER ID AS A WAY TO GRAB THE SPECIFIC CUSTOMER
deleteCustomer();
displayAllCustomers();
displayCustomer();
runReport();
*/

// Funcitons & Methods

Customer displayCustomer()
{
	Customer displayCustomer;

	for (int i = 0; i < CUSTOMER_ARR_SIZE; i++)
	{
		std::cout << customers[i];
	}

	std::cout << std::endl;
	std::cout << "TEST RETURN -----" << std::endl;
	std::cout << displayCustomer.customer_first_name << std::endl << displayCustomer.customer_email_address << displayCustomer.is_customer_active << std::endl;
}

Customer addCustomer()
{
	Customer newCustomer;

	std::string customer_active_input;

	std::cout << " ---------- ADD A NEW CUSTOMER ---------- " << std::endl;

	// CUSTOMER ID NEEDS TO BE THE POSITION OF THE CUSTOMER IN THE ARRAY. FOR EXAMPLE ARRAY POSITION 0, WOULD BE CUSTOMER NUMBER 0 AND SO ON.

	std::cout << "Is the Customer Active? Enter Yes or No: ";
	std::cin >> customer_active_input;
	
	if (customer_active_input == "YES" || customer_active_input == "Yes" || customer_active_input == "yes" || customer_active_input == "y" || customer_active_input == "Y")
	{
		newCustomer.is_customer_active = true;

	} if (customer_active_input == "NO" || customer_active_input == "No" || customer_active_input == "no" || customer_active_input == "n" || customer_active_input == "N")
	{
		newCustomer.is_customer_active = false;
	}
	else {
		newCustomer.is_customer_active = false;
	}

 

	std::cout << "Customer's First Name: ";
	std::cin >> newCustomer.customer_first_name;
	
	std::cout << std::endl;
	std::cout << "Customer's Last Name: ";
	std::cin >> newCustomer.customer_last_name;

	std::cout << std::endl;
	std::cout << "Customer's E-Mail Address: ";
	std::cin >> newCustomer.customer_email_address;

	std::cout << "Customer's Phone Number: ";
	std::cin >> newCustomer.customer_phone_number;

	std::cout << "Company Name of Customer: ";
	std::cin >> newCustomer.company_name;

	return newCustomer;
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

	if (keyboard_input > OPTIONS)
	{
		std::cout << std::endl;
		std::cout << "INVALID OPTION: Please enter a valid option between 1-7" << std::endl;
		menu();
	}

	switch (keyboard_input)
	{
		case 1:
			addCustomer();
			break;
		case 2:
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

int main()
{
	menu();
	return 0;
}
