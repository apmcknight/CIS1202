// Assignment 3
// Searching and Sorting Arrays
// '21 FA CIS 1202 - 501
// Adam McKnight
// See screen-shots for expected output of program


#include <iostream>
#include <string>


void menu();
float input_rent_amounts();
float display_rent_amounts();

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

        if(menu_input == 1)
        {
            input_rent_amounts();
        }

        if(menu_input == 2)
        {
            display_rent_amounts();
        }

    } 

   
}

float* input_rent_amounts(float[])
{
    int MAX_RENT_AMOUNT = 5;
    float rent_amount_array[MAX_RENT_AMOUNT];

    std::cout<<std::endl<<"-- INPUT RENT AMOUNTS:"<<std::endl;

    for(int i=0; i<MAX_RENT_AMOUNT; i++)
    {
        std::cout<<"Please enter the Amount of Rent for Unit " << i+1 << ": $ ";
        
        std::cin>>rent_amount_array[i];

    }

    return rent_amount_array;

}

// STOPPING: HAVING ISSUE PASSING THE rent_amount_array INTO THE OTHER FUNCTIONS
// NOT SURE WHAT THE ISSUE IS? -- NEED TO USE POINTERS. 

float display_rent_amounts(float*, int)
{
    float * rent_amount_pointer = input_rent_amounts();


}
