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
    // X 0. DECLARE VARIABLES AND ARRAYS
    // X 1. INPUT THE DATA
    // X 2. THAT INPUT DATA NEEDS TO BE PUT INTO AN STRING ARRAY FOR THE NAMES
    // X 3. THE INPUT DATA NEEDS TO BE CONVERTED FROM A STRING TO AN INT 
    // X 4. THE CONVERTED DATA TO INT NEEDS TO BE PUT INTO ANOTHER ARRAY OF INTS

    const int MAX_CONSOLES = 22;
    string consoles[MAX_CONSOLES];
    int console_prices[MAX_CONSOLES];
    int counter;
    string mapped_data_string;


    ifstream inputFile;
    inputFile.open("./02pricesLF.txt");


    
    for(int i=0; i<MAX_CONSOLES; i++)
    {
        //inputFile >> consoles[i];
        getline(inputFile, consoles[i]);
        std::istringstream(consoles[i]) >> console_prices[i];

    }
    std::cout << "\n\nConsoles" << "                             " << "Price\n" << std::endl;
    std::cout << consoles[0] << "         $" << consoles[1] << std::endl;
    std::cout << consoles[2] << "                          $" << consoles[3] << std::endl;
    std::cout << consoles[4] << "                    $" << consoles[5] << std::endl;
    std::cout << consoles[6] << "                    $" << consoles[7] << std::endl;
    std::cout << consoles[8] << "                            $" << consoles[9] << std::endl;
    std::cout << consoles[10] << "                    $" << consoles[11] << std::endl;
   

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
    menu();
    return 0;
}