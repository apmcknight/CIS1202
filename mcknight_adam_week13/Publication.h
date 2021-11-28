
// Adam McKnight
// November 7th 2021
// CIS1202
// See screenshots in the projects' root for expected output

#pragma once
#include <iostream>

enum class PublicationType
{
	BOOK,
	MAGAZINE,
	NEWSPAPER,
	AUDIO,
	VIDEO
};


class Publication {
public:
	std::string itemTitle;
	std::string itemPublisher;
	double itemPrice = 0.0;
	int itemYear = 0;
	PublicationType itemType;
	int itemStock = 0;

	int Publication::storePublication(std::string itemTitle, std::string itemPublisher, double itemPirce, int itemYear, PublicationType itemType, int itemStock);

	void displayInfo();
	void checkIn();
	void checkOut();
	std::string getTitle();
	int getStock();
};