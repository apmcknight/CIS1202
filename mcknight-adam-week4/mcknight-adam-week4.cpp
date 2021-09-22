// Assignment 4
// '21 FA CIS 1202 - 501
// Adam McKnight
// See screen-shots for expected output of program


#include <iostream>
#include <string>

int menu();
void input_rent_amounts();
void display_rent_amounts();
void display_all_pointers();
void rent_amounts_sorted();
void sum_rent_amounts();

int main() {
    menu();
}

int menu()
{
    const int MENU_SIZE = 6;
    int menu_input = 0;

    while (menu_input < 6)
    {
        std::cout << std::endl << "MAIN MENU" << std::endl << std::endl;
        std::cout << "Please enter your Rent Amounts before using other menu options..." << std::endl;
        std::string menu_options[MENU_SIZE] = { "Enter the amounts", "Display the Rent Amounts",  "Sort Rent Amounts from low to high", "Display Memory Locations", "Get the total of All Rents", "Exit the Program" };

        for (int i = 0; i < MENU_SIZE; i++)
        {
            std::cout << i + 1 << ". " << menu_options[i] << std::endl;
        }

        std::cout << std::endl << "Please make a selection between 1 and " << MENU_SIZE << ": " << std::endl;
        std::cin >> menu_input;


        switch (menu_input)
        {
        case 1:
            input_rent_amounts();
            break;

        case 2:
            display_rent_amounts();
            break;

        case 3:
            rent_amounts_sorted();
            break;

        case 4:
            display_all_pointers();
            break;

        case 5:
            sum_rent_amounts();
            break;

        case 6:
            exit(0);

        default:
            break;
        }


    }

    return menu_input;
}


const int SIZE = 5;
float rent_amount_array[SIZE];
float* rent_amount;

void input_rent_amounts()
{
    std::cout << std::endl << "-- INPUT RENT AMOUNTS:" << std::endl;

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Please enter the Amount of Rent for Unit " << i + 1 << ": $ ";
        std::cin >> *(rent_amount_array + i);
    }
}


void display_rent_amounts()
{
    std::cout << "Displaying all Rent Amounts" << std::endl;
    
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Rent for Unit " << i + 1 << ": $ ";
        std::cout << *(rent_amount_array + i) << ".00" << std::endl;
    }
 
}


void display_all_pointers()
{
    std::cout << "Displaying all Pointers" << std::endl;

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Pointer Number " << i + 1 << ": ";
        std::cout << (rent_amount_array + i) << std::endl;
    }
}

void rent_amounts_sorted()
{
    std::cout << "Showing Rent Amounts sorted by decending order" << std::endl;
}

void sum_rent_amounts()
{
    std::cout << "\n\nSum Rent Amounts:" << std::endl;
    
    for (int i = 0; i < SIZE; i++)
    {
        int result = *(rent_amount_array + i);
        std::cout << result + result;
    }

    
}