// Assignment 2
// Searching and Sorting Arrays
// Adam McKnight
// See screen-shots for expected output of program.


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int allConsolePrices()
{  
    cout << endl;
    //cout << left << "Console";
    //cout << right << "                              Price"; // 30 SPACES
    cout << endl;

    int NUMBER_OF_CONSOLES = 0;
    int testPrice;
    string consoles;
    string consoleNames[NUMBER_OF_CONSOLES];
    int consolePricing[NUMBER_OF_CONSOLES];
    int consolePricesAsInt;

    ifstream consolePrices("./02pricesLF.txt");

    
    while ( getline(consolePrices, consoles) )
    {
        ++NUMBER_OF_CONSOLES;    
        string consoleNames = consoles; 
        string consolePricing = consoles;
       
        std::istringstream(consolePricing) >> consolePricesAsInt;

        cout << consoleNames << std::endl; 

        //cout << consolePricesAsInt << std::endl;
         
    }   


    // outputs the number of consoles / lines in document
    cout << "Amount: " << NUMBER_OF_CONSOLES;

    return -1;
}

int consoleLookup()
{
    cout << endl;
    return -1;
}

int priceDecending()
{
    cout << endl;
    
    return -1;
}

int highestPrice()
{
    cout << endl;
    return -1;
}

int menu()
{
    int menuSelection;
    string menuOptions[5] = {"Display all console prices", "Look up the price of a console", "Sort prices in descending order", "Display the console with the highest price", "Exit the program"};

    

    do {
        cout << "\n" << "Console Pricing - Main Menu" << endl;
        
        for(int i=0; i<5; i++)
        {
            cout << i+1 << " " << menuOptions[i] << endl;
        }

        cout << "\nPlease Enter a Selection: ";
        cin >> menuSelection;


        if(menuSelection == 1)
        {
            allConsolePrices();
        }

        if(menuSelection == 2)
        {
            consoleLookup();
        }

        if(menuSelection == 3)
        {
            priceDecending();
        }

        if(menuSelection == 4)
        {
            highestPrice();
        }


    } while(menuSelection != 5);

    


    

    return -1;
}



int main(){
    //menu();
    allConsolePrices();
    return 0;
}