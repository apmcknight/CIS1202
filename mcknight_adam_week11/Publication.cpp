// Adam McKnight
// November 7th 2021
// CIS1202
// See screenshots in the projects' root for expected output

#include "Publication.h";





Publication::storePublication(std::string itemTitle, std::string itemPublisher, double itemPirce, int itemYear, PublicationType itemType, int itemStock)
{
	Publication publication;

	std::string bookTitle = publication.itemTitle;
	Publication::itemTitle >> bookTitle;

	std::string itemPublisher = publication.itemPublisher;
	Publication::itemPublisher = itemPublisher;

	double price = publication.itemPrice;
	Publication::itemPrice = price;

	int year = publication.itemYear;
	Publication::itemYear = year;

	PublicationType type = publication.itemType;
	Publication::itemType = type;

	return Publication;
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

	std::cout << "Item Type:";
	std::cout << publication.itemType;

	std::cout << "Item Stock:";
	std::cout << publication.itemStock;
}

void Publication::checkOut()
{
	Publication publication;

	publication.itemStock = stockOfItem;
	stockOfItem--; // Decrements the current value of stock which is 0 by default.

	if (stockOfItem == 0)
	{
		std::cout << "ERROR: The item stock is zero";
	}
}

void Publication::checkIn()
{
	Publication publication;
	publication.itemStock = stockOfItem;
	stockOfItem++; // Increments the current value of stock which is 0 by default.
}

void Publication::getTitle()
{
	Publication publication;
	std::string bookTitle = publication.itemTitle;
	
	return bookTitle;
}

void Publication::getStock()
{
	Publicaton publication;
	int bookStock = publication.itemStock;
	
	return bookStock;
}