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


std::string title;
std::string publisher;
double price;
int year;
PublicationType type;
int stock;

