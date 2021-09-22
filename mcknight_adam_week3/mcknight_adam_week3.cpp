// Assignment 3
// Searching and Sorting Arrays
// '21 FA CIS 1202 - 501
// Adam McKnight
// See screen-shots for expected output of program


#include <iostream>
#include <string>

void menu();
void input_rent_amounts();
//void display_rent_amounts();
void display_all_pointers();
void rent_amounts_sorted();

int main(){
    menu();
    return(0);
}

void menu()
{
    const int MENU_SIZE = 5;
    int menu_input = 0;

    while(menu_input < 5)
    {
        std::cout << std::endl << "MAIN MENU" << std::endl << std::endl;
        std::string menu_options[MENU_SIZE] = {"Enter the amounts", "Display the Rent Amounts",  "Sort Rent Amounts from low to high", "Display Memory Locations", "Exit the Program"};

        for(int i=0; i<MENU_SIZE; i++)
        {
            std::cout << i+1 << ". " << menu_options[i] << std::endl;
        }

        std::cout << std::endl << "Please make a selection between 1 and " << MENU_SIZE << ": "<<std::endl;
        std::cin >> menu_input;


        switch (menu_input)
        {
            case 1:
                input_rent_amounts();
                break;

            case 2:
                //display_rent_amounts();
                break; 

            case 3:
                display_all_pointers();
                break;

            case 4:
                rent_amounts_sorted();
                break;

            case 5:
                exit(0);
            
            default:
                break;
        }
 

    } 

   
}

void input_rent_amounts()
{
    static float rent_amount_array[5];
    float* rent_amount;
    rent_amount = rent_amount_array;

    std::cout << std::endl << "-- INPUT RENT AMOUNTS:" << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Please enter the Amount of Rent for Unit " << i + 1 << ": $ ";
        std::cin >> rent_amount_array[i];

    }
    
    std::cout << "Rent Amounts" << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Rent Number " << i + 1 << ": ";
        std::cout << rent_amount_array[i] << std::endl;
    }
}


//void display_rent_amounts(float array[])
//{
//    std::cout << "Displaying all Rent Amounts" << std::endl;
//
//    for (int i = 0; i < 5; i++)
//    {
//        std::cout << "Rent" << std::endl;
//        std::cout << array[i];
//    }
//    
//
//}


void display_all_pointers()
{
    std::cout << "Displaying all Pointers" << std::endl;
}

void rent_amounts_sorted()
{
    std::cout << "Showing Rent Amounts sorted by decending order" << std::endl;
}