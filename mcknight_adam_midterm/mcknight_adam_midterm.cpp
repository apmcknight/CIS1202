/*

	Adam McKnight
	CIS 1120 501
	October, 17, 2021
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
void customerGrid(Customer customerArray[]);

// Funcitons & Methods

void customerGrid(Customer customerArray[])
{
	// 2D Array Grid of first 6 Customers

	int const ROW = 6;
	int const COL = 12;

	std::string customerGrid[ROW][COL] = {
		{"INFO -------------- ", "CUSTOMER 1      ", "CUSTOMER 2      ", "CUSTOMER 3      ", "CUSTOMER 4      ", "CUSTOMER 5      "},
		{"First Name:         ", customerArray[0].customer_first_name, "            " , customerArray[1].customer_first_name, "            ", customerArray[2].customer_first_name,"            ", customerArray[3].customer_first_name,"            ", customerArray[4].customer_first_name},
		{"Last Name:          ", customerArray[0].customer_last_name,"            ", customerArray[1].customer_last_name,"            ", customerArray[2].customer_last_name,"            ", customerArray[3].customer_last_name,"            ", customerArray[4].customer_last_name},
		{"Phone Number:       ", customerArray[0].customer_phone_number,"            ", customerArray[1].customer_phone_number, "            ",customerArray[2].customer_phone_number,"            ", customerArray[3].customer_phone_number,"            ", customerArray[4].customer_phone_number},
		{"E-Mail Address:     ", customerArray[0].customer_email_address, "            ",customerArray[1].customer_email_address,"            ", customerArray[2].customer_email_address,"            ", customerArray[3].customer_email_address,"            ", customerArray[4].customer_email_address},
		{"Company Name:       ", customerArray[0].company_name, "            ",customerArray[1].company_name,"            ", customerArray[2].company_name, "            ",customerArray[3].company_name, "            ",customerArray[4].company_name}

		// FOLLOWS THIS FORMAT:
		//{"Row 1: ", "Item 1", "Item 2", "Item 3", "Item 4", "Item 5"}
		//{"Row 2: ", "Item 1", "Item 2", "Item 3", "Item 4", "Item 5"}
		//{"Row 3: ", "Item 1", "Item 2", "Item 3", "Item 4", "Item 5"}
		//{"Row 4: ", "Item 1", "Item 2", "Item 3", "Item 4", "Item 5"}
		//{"Row 5: ", "Item 1", "Item 2", "Item 3", "Item 4", "Item 5"}
		//{"Row 6: ", "Item 1", "Item 2", "Item 3", "Item 4", "Item 5"}

	};

	for (int i = 0; i < ROW; i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < COL; j++)
		{
			std::cout << " " << customerGrid[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
}

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
	std::cout << std::endl << "ID of customer to Show: ";
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

	bool isSwapped;
	Customer temp;

	std::cout << " ---- SHOWING SORTED CUSTOMERS ---- " << std::endl;
 
	do 
	{
		isSwapped = false;

		for(int i = 1; i < CUSTOMER_ARR_SIZE; i++)
		{
			if (customerArray[i].customer_first_name < customerArray[i - 1].customer_first_name)
			{
				temp = customerArray[i-1];
				customerArray[i - 1] = customerArray[i];
				customerArray[i] = temp;
				isSwapped = true;
			}

			
		}

		// Calls the display function and prints the Customer to the screen
		displayCustomer(customers);

	} while (isSwapped);

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

	// Creates an array of menu options based on const size of X:
	const int OPTIONS = 8;
	std::string menu_options[OPTIONS] = { "Create New Customer", "Update a Customer", "Display Customers", "Display Customer by ID", "Display Customers Sorted", "Show DB / Array Memory Location", "Display Customer Grid", "Exit"};

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
			newCustomer(customers);
			menu();
			break;
		case 2:
			updateCustomer(customers);
			menu();
			break;
		case 3:
			std::cout << "---- SHOWING FIRST 5 CUSTOMERS ----" << std::endl << std::endl;
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
			customerGrid(customers);
			menu();
			break;
		case 8:
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
