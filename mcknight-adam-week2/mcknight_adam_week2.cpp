// Assignment 2
// Searching and Sorting Arrays
// Adam McKnight
// See screen-shots for expected output of program.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;


// OPEN INPUT DATA FILE
// CREATE A LOOP THAT ...
// STORE DATA INTO A NEW ARRAY
// PRINT THE DATA AS NEEDED IN GLOABL SCOPE

// TRYING TO FIND HOW MANY LINES ARE INSIDE OF THE TEXT FILE
// NEEDED TO LOOP OVER THE AMOUNT OF CONSOLES IN THE LOOP BELLOW.

double AMOUNT_OF_CONSOLES;

ifstream consolePrices("./02pricesLF.txt");

string line;
while(getLine(consolePrices, line))
{
    AMOUNT_OF_CONSOLES++;
}

string console_names[AMOUNT_OF_CONSOLES];
double console_pricing[AMOUNT_OF_CONSOLES];



int allConsolePrices()
{  
    cout << endl;
    cout << left << "Console";
    cout << right << "                              Price"; // 30 SPACES
    cout << endl;

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