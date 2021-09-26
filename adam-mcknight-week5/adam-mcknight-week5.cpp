// ADAM MCKNIGHT
// CIS 1202 101
// September 27th, 2021
// See Screenshot in root for expected output of program.




#include "adam-mcknight-week5.h"
#include <cstring>
#include <cctype>


const int SIZE = 18;
const int INCORRECT_SIZE = 8;

char correct_vin[SIZE] = "1FRTW14W84KC76110";
char incorrect_vin_len[INCORRECT_SIZE] = "1FTRW4W";
char incorrect_vin_lower[INCORRECT_SIZE] = "1ftrW4W";

// NOTE: The valid function is short for Validation, and not the direct meaning of being valid invalid VINs can be passed into the "valid()" function.

bool valid(char vin_input_array[]);
void origin(char vin_input_array[]);

int main()
{

	valid(correct_vin);
	std::cout << std::endl;

	valid(incorrect_vin_len);

	std::cout << std::endl;
	std::cout << "VIN Should return incorrect, due to lowercase letter" << std::endl;
	valid(incorrect_vin_lower);

	return 0;
}

void origin(char vin_input_array[])
{
	char vin_input_array_looped;

	// LOOPS THROUGH THE VIN INPUT ARRAY:
	for (int i = 0; i < 17; i++)
	{
		vin_input_array_looped = vin_input_array[i];
	}

	if (vin_input_array[0] == 'A' || vin_input_array[0] == 'B' || vin_input_array[0] == 'C' || vin_input_array[0] == 'D' || vin_input_array[0] == 'E' || vin_input_array[0] =='F' || vin_input_array[0] =='G' || vin_input_array[0] =='H')
	{
		std::cout << "COUNTRY OF ORIGIN: Asia" << std::endl;
	}

	// TODO: Add origin codes to the remainder of the arrays.
	if (vin_input_array[0] == origin_asia_looped)
	{
		std::cout << "COUNTRY OF ORIGIN: Asia" << std::endl;
	}

	if (vin_input_array[0] == origin_europe_looped)
	{
		std::cout << "COUNTRY OF ORIGIN: Eurpoe" << std::endl;
	}

	if (vin_input_array[0] == '1' || vin_input_array[0] == '2' || vin_input_array[0] == '3' || vin_input_array[0] == '4' || vin_input_array[0] == '5')
	{
		std::cout << "COUNTRY OF ORIGIN: North America" << std::endl;
	}

	if (vin_input_array[0] == origin_oceania_looped)
	{
		std::cout << "COUNTRY OF ORIGIN: Oceania" << std::endl;
	}

	if (vin_input_array[0] == origin_south_america_looped)
	{
		std::cout << "COUNTRY OF ORIGIN: South America" << std::endl;
	}


}

void year(char vin_input_array[])
{
	char vin_input_array_looped;

	// LOOPS THROUGH THE VIN INPUT ARRAY:
	for (int i = 0; i < 17; i++)
	{
		vin_input_array_looped = vin_input_array[i];
	}

	if (vin_input_array[0] == 'P' || vin_input_array[0] == 'Q' || vin_input_array[0] == 'R' || vin_input_array[0] == 'S' || vin_input_array[0] == 'T' || vin_input_array[0] == 'U' || vin_input_array[0] == 'V' || vin_input_array[0] == 'W' || vin_input_array[0] == 'X' || vin_input_array[0] == 'Y')
	{
		std::cout << "YEAR: 1993 to 2000" << std::endl;
	}

	// TODO: Add year codes to the remainder of the arrays.
	if (vin_input_array[0] == 'P' || vin_input_array[0] == 'Q' || vin_input_array[0] == 'R' || vin_input_array[0] == 'S' || vin_input_array[0] == 'T' || vin_input_array[0] == 'U' || vin_input_array[0] == 'V' || vin_input_array[0] == 'W' || vin_input_array[0] == 'X' || vin_input_array[0] == 'Y')
	{
		std::cout << "YEAR: 2001 to 2009" << std::endl;
	}


}

bool valid(char vin_input_array[]) {
	char vin_input_array_looped;
	int length_of_input = strlen(vin_input_array);
	char illegal_characters[5] = { 'I', 'O', 'Q', 'U', 'Z'};
	char illegal_characters_looped;
	int case_of_input;

	for (int i = 0; i < 17; i++)
	{
		vin_input_array_looped = vin_input_array[i];
	}

	for (int i = 0; i < 5; i++)
	{
		illegal_characters_looped = illegal_characters[i];
	}
	
	case_of_input = isupper(vin_input_array[2]);

	std::cout << "Length of Input: " << length_of_input << std::endl;
	std::cout << "Case Return Code: " << case_of_input << std::endl;

	if (length_of_input < 16 || case_of_input == 0 || vin_input_array_looped == illegal_characters_looped)
	{
		std::cout << std::endl;
		std::cout << "Analized VIN Number: " << vin_input_array << std::endl;
		std::cout << "INVALID X -- This VIN Number is NOT VALID" << std::endl;
		std::cout << std::endl << "Please be sure you have provided a 17-unit VIN Number, along with the correct case." << std::endl;
		std::cout << "NOTE: If the VIN number has lowercase, or invalid characters, the VIN number will fail to validate." << std::endl;

		std::cout << std::endl;
		std::cout << "VALIDATION ERROR DETAILS --" << std::endl;

		if (length_of_input < 17)
		{
			std::cout << "1.) Length of VIN Number provided: " << length_of_input << std::endl;
			std::cout << "THE LENGTH OF THE PROVIDED VIN IS NOT CORRECT! A VIN NUMBER IS 17 UNITS IN LENGTH.";
			std::cout << std::endl;
		}
		else
		{
			std::cout << "The length of the VIN number is VALID at " << length_of_input << " units" << std::endl;
			std::cout << "PLEASE SEE OTHER ERRORS FOR MORE DETAILS" << std::endl;
		}

		if (case_of_input == 1)
		{
			std::cout << std::endl << "2. ) Case of VIN Number provided: LOWERCASE " << std::endl;
			std::cout << "CASING IS INVALID, PLEASE PROVIDE A VIN WITH UPPERCASING TO FIX VALIDATION VALIURE" << std::endl;

		}
		else {
			std::cout  << std::endl << "Case of VIN Number provided: UPPERCASE " << std::endl;
			std::cout << "CASING IS VALID, PLEASE REFER TO OTHER ERRORS FOR VALIDATION FAILURE" << std::endl;
		}
	}
	else
	{
		std::cout << std::endl;
		std::cout << "Anyalized VIN Number: " << vin_input_array << std::endl;
		std::cout << "VALID ! -- This VIN Number is VALID!" << std::endl;
		origin(correct_vin);
		std::cout << "YEAR OF MANUFACTURING: " << std::endl;
		std::cout << std::endl;
	}

	return true;
}
