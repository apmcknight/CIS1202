// Adam McKnight
// November 7th 2021
// CIS1202
// See screenshots in the projects' root for expected output

#pragma once
#include <iostream>
#include <stddef.h>

enum class PublicationType
{
	BOOK,
	MAGAZINE,
	NEWSPAPER,
	AUDIO,
	VIDEO
};


class Publication 
{
public:
	std::string itemTitle;
	std::string itemPublisher;
	double itemPrice = 0;
	int itemYear = 0;
	PublicationType itemType = { book };
	int itemStock = 0;
	void storePublication(std::string itemTitle, std::string itemPublisher, double itemPirce, int itemYear, PublicationType itemType, int itemStock);

	void displayInfo();
	void checkOut();
	std::string getTitle();
	int getStock();
};

