// Adam McKnight
// November 7th 2021
// CIS1202
// See screenshots in the projects' root for expected output

#include "Publication.h";
using namespace std;


int Publication::storePublication(std::string itemTitle, std::string itemPublisher, double itemPirce, int itemYear, PublicationType itemType, int itemStock)
{
	
	Publication::itemTitle = itemTitle;
	Publication::itemPublisher = itemPublisher;
	Publication::itemPrice = itemPrice;
	Publication::itemYear = itemYear;
	Publication::itemType = itemType;

	return 0;
}

void Publication::displayInfo()
{
	Publication publication;

	std::cout << "Item Title:";
	std::cout << publication.itemTitle;

	std::cout << "Item Publisher:";
	std::cout << publication.itemPublisher;

	std::cout << "Item Price:";
	std::cout << publication.itemPrice;

	std::cout << "Item Year:";
	std::cout << publication.itemYear;

	//std::cout << "Item Type:";
	//std::cout << publication.itemType;

	std::cout << "Item Stock:";
	std::cout << publication.itemStock;
}

void Publication::checkOut()
{
	Publication publication;
	itemStock--; // Decrements the current value of stock which is 0 by default.

	if (itemStock == 0)
	{
		std::cout << "ERROR: The item stock is zero";
	}
}

void Publication::checkIn()
{
	itemStock++; // Increments the current value of stock which is 0 by default.
}

string Publication::getTitle()
{
	cout << "Item Title: " << itemTitle;
	return itemTitle;
}

int Publication::getStock()
{
	cout << "Item Stock: " << itemStock;
	return itemStock;
}