// Adam McKnight
// November 7th 2021
// CIS1202
// See screenshots in the projects' root for expected output

// Header Files
#include "mcknight_adam_week11.h" // main header file, declares io.
#include "Publication.h" // declares publication class


void getPublicationInfo(Publication&)
{

	Publication publication;
	std::string title = publication.itemTitle;
	std::string publisher = publication.itemPublisher;
	double price = publication.itemPrice;
	int year = publication.itemYear;
	PublicationType type = publication.itemType;

	std::cout << "Publication Title: ";
	std::cin >> title;

	std::cout << "Publisher: ";
	std::cin >> publisher;

	std::cout << "Price:";
	std::cin >> price;

	std::cout << "Year: ";
	std::cin >> year;
}




int main()
{
	Publication getPublicationInfo();

	return 0;
}
