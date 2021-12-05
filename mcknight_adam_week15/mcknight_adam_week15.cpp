// Adam McKnight
// December 6th 2021
// CIS 1202
// See screenshots in the project root for expected output of program.

#include "mcknight_adam_week15.h"

using namespace std;

/*
char character(char start, int offset);


char character(char start, int offset)
{
	char first_character;
	start = first_character;
	
}
*/

// ASSIGNMENT PART B:
template <typename T>
void Half(T number)
{
	cout << number / 2 << endl;
}


int main()
{
	Half(7.0);
	Half(5.0f);
	Half(3);
	Half(5); 
}
