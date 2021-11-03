#pragma once
#include <iostream>

enum PublicationType
{
	BOOK,
	MAGAZINE,
	NEWSPAPER,
	AUDIO,
	VIDEO
};


class Publication {
	// Where should this class be placed? Here, or in publication.cpp? Or does it need to exist at all?


	std::string title;
	std::string publisher;
	double price;
	int year;
	PublicationType type;
	int stock;

	void storePublication(std::string itemTitle, std::string itemPublisher, double itemPirce, int itemYear, PublicationType itemType, int itemStock);

	void displayInfo();
	void checkOut();
	std::string getTitle();
	int getStock();

};

void Publication::displayInfo()
{
}
