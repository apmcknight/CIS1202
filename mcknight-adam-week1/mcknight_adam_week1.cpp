// Assignment 1
// C++ Review
// Adam McKnight
// See screen-shots for expected output of program.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int dataInput()
{
    ifstream inventoryPlainText;
    inventoryPlainText.open("./01inventoryLF.txt");

    const int SIZE = 20;
    string mappedData;
    string mappedDataString;



    // WOULD YOU MIND REVIEWING THIS CODE BLOCK AND GIVING ME AN IDEA OF WHAT I'M DOING INCORRECTLY? I'M TRYIGN TO MAP THE VALUES OF THE TEXT FILE INTO THE 2D ARRAY. WHEN I TRY TO PRINT THEM TO THE SCREEN I GET (WHAT I BELIEVE) ARE POINTERS FOR THE DATA, AND THE HEADERS FOR THE CATAGORIES PRINT OUT AS EXPECTED. 

    // while(inventoryPlainText >> mappedData)
    // {
    //     string mappedData = mappedDataString;

    //     string inventoryArray[3][SIZE] = {  
    //     {"Product Code ", " Quantity on Hand ", " Cost Each ", " Total Value "},
    //     {mappedDataString}};

    //     for (int i = 0; i<4; i++)
    //     {
    //         for (int j = 0; j<SIZE; j++)
    //         {
    //             cout << inventoryArray[i][j];
                
    //         }
    //         cout << endl;
    //     }
    // }



    

        string inventoryCategoryArray[4] = {  
        "Product Code ", " Quantity on Hand ", " Cost Each ", " Total Value "};

        for (int i=0; i<4; i++)
        {
            cout << inventoryCategoryArray[i];
        }

        cout << endl;

        while(inventoryPlainText >> mappedData)
            {
                string inventoryArray[SIZE] = {mappedData};

                for (int j=0; j<SIZE; j++)
                {
                    cout << " " << inventoryArray[j] << " ";
                   
                }
            }
                


    

    return -1;
}

// MAIN FUNCTION DECLORATION AND DATA STORE CALL

int main ()
{
    dataInput();
    return 0;
}