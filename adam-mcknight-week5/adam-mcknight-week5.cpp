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


bool valid(char vin_input_array[]);

int main()
{

	valid(correct_vin);
	std::cout << std::endl;

	valid(incorrect_vin_len);

	return 0;
}

bool valid(char vin_input_array[]) {

	int length_of_input = strlen(vin_input_array);
	char illegal_characters[5] = { 'I', 'O', 'Q', 'U', 'Z'};
	int case_of_input;

	// TODO: For loop not working correctly, getting back a return code of 0, when return code of 1 is expected. 
	/*for (int i = 0; i < 17; i++)
	{
		case_of_input = isupper(vin_input_array[i]);
	}*/
	
	case_of_input = isupper(vin_input_array[2]);

	std::cout << "Length of Input: " << length_of_input << std::endl;
	std::cout << "Case Return Code: " << case_of_input << std::endl;

	if (length_of_input < 16 || case_of_input == 0 || vin_input_array[1] == illegal_characters[0])
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
		std::cout << "COUNTRY OF ORIGIN: " << std::endl;
		std::cout << "YEAR OF MANUFACTURING: " << std::endl;
		std::cout << std::endl;
	}

	return true;
}
