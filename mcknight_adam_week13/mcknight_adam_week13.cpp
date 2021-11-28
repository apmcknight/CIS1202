// Adam McKnight
// November 7th 2021
// CIS1202
// See screenshots in the projects' root for expected output

// Header Files
#include "mcknight_adam_week13.h" // main header file, declares io.
#include "Publication.h" // declares publication class

using namespace std;

void getPublicationInfo(Publication&)
{

	Publication publication;
	std::string title = publication.itemTitle;
	std::string publisher = publication.itemPublisher;
	double price = publication.itemPrice;
	int year = publication.itemYear;
	PublicationType typeOfPublication;

	typeOfPublication = publication.itemType;
	price = 0.0;
	year = 0;

	std::cout << "Publication Title: ";
	std::cin >> title;

	std::cout << "Publisher: ";
	std::cin >> publisher;

	std::cout << "Price:";
	std::cin >> price;

	std::cout << "Year: ";
	std::cin >> year;

	std::cout << "Publication Type: ";
	typeOfPublication;
}

/*
void getPublications(Publication[], int&)
{
	Publication bookList[200];

	while ()
	{
		bookList[i].storePublication(std::string itemTitle, std::string itemPublisher, double itemPirce, int itemYear, PublicationType itemType, int itemStock);
		i++;
	}
}

void showPublications(Publication[], int)
{
	for (int i = 0; i < 200; i++)
	{
		Publication[i];
	}
}

*/

void menu()
{
	int user_input;
	int const MENUOPTIONS = 6;
	string menuOptions[MENUOPTIONS] = { "Display all Publications", "Display Publication Titles", "Find a Publication", "Check Out", "Check In", "Exit" };

	for (int i = 0; i < MENUOPTIONS; i++)
	{
		cout << i+1 << ". " << menuOptions[i] << endl;
	}

	cout << "Enter an option between 1 and 6: ";
	cin >> user_input;

	switch (user_input)
	{
	case 1:
		// Display all Publications
		std::cout << "Showing all Publications --- ";
		//showPublications(Publication[], int&);
		break;
	case 2:
		// Display Publication Titles
		std::cout << "Showing all Publication Titles ---";
		break;
	case 3:
		std::cout << "Search for a Publication ---";
		// Find a Publication
		break;
	case 4:
		// Checkout 
		std::cout << "Checkout a Publication ---";
		break;
	case 5:
		// Check In
		std::cout << "Check In a Publication ---";
		break;
	case 6:
		exit(0);
		break;
	}

	
}

int main()
{
	menu();
	return 0;
}