// Assignment 2
// Searching and Sorting Arrays
// Adam McKnight
// See screen-shots for expected output of program.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int readFile()
{

    int number_of_consoles = 0;
    string consoles;
    string consoleStore[number_of_consoles];


    ifstream consolePrices("./02pricesLF.txt");



    // WILL ONLY GET AMOUNT OF LINES IN TEXT FILE AS AN INT.
    // WILL ONLY GET THE DATA IN THE TEXT FILE
    // sorting will need to be used to sort through
    // the text (name of console) and the price of the console.
    while ( getline(consolePrices, consoles) )
    {
        ++number_of_consoles;
        string consoleStore = consoles;

    }   

    // outputs the number of consoes / lines in document
    cout << "Amount: " << number_of_consoles;

    // loops over the array of stored data of consoles
    for (int i=0; i<number_of_consoles; i++)
    {
        cout << consoleStore[i] << endl;
    }

    return -1;
}

int allConsolePrices()
{  
    cout << endl;
    cout << left << "Console";
    cout << right << "                              Price"; // 30 SPACES
    cout << endl;

    int number_of_consoles = 0;
    string consoles;
    string consoleStore[number_of_consoles];


    ifstream consolePrices("./02pricesLF.txt");



    // WILL ONLY GET AMOUNT OF LINES IN TEXT FILE AS AN INT.
    // WILL ONLY GET THE DATA IN THE TEXT FILE
    // sorting will need to be used to sort through
    // the text (name of console) and the price of the console.
    while ( getline(consolePrices, consoles) )
    {
        ++number_of_consoles;
        string consoleStore = consoles;

    }   

    // outputs the number of consoes / lines in document
    cout << "Amount: " << number_of_consoles;

    //cout << consoleStore[i] << "                              ";
    
    // ** STOPPING POINT
    // DOES NOT SEEM TO BE WORKING AS EXPECTED - APPEARS TO BE GRABBING
    // RANDOM BITS OF THE ARRAY AND NOT FULL SEGMENTS.

    // EXPECTED OUTPUT IS FULL LIST OF CONSOLES
    // SIMILLAR OUTPUT IF THE TEXT FILE WAS CAT(ED) TO THE CONSOLE.
    for(int i=0; i<number_of_consoles; i++)
    {
        cout << consoles[i];
    }

    /* // loops over the array of stored data of consoles
    for (int i=0; i<number_of_consoles; i++)
    {
        cout << consoleStore[i] << endl;
    } */



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
    //readFile();
    return 0;
}