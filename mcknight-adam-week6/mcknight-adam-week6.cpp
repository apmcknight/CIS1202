/*
Adam McKnight
CIS 1202.501
October, 3rd 2021
*/

#include "mcknight-adam-week6.h"


// Structs & Globals

struct WinLoss
{
	int home_wins = {0};
	int home_losses = {0};
	int away_wins = { 0 };
	int away_losses = { 0 };
	int total_wins = home_wins + away_wins;
	int total_losses = home_losses + away_losses;
};

struct Team
{
	std::string team_name;
	WinLoss home_wins_losses = { 0, 0 };
	WinLoss away_win_losses = { 0,0 };
};

const int SIZE = 300;
Team team_array[SIZE] = {"reds", 1, 2, 3, 4};

// Prototypes
int menu();
void menu_switch(int user_input);
WinLoss getWinLoss(std::string);
void displayWinLoss(WinLoss);
Team getTeam();
//void displayTeam();
//void findTeam(Team[], int);


// Functions / Methods

/*void displayTeam()
{
	Team teams;

	std::cout << "SHOWING ALL RESULTS" << std::endl;

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << team_array[i];
	}

}
*/

Team getTeam()
{
	Team team;

	int home_wins_input;
	int home_losses_input;
	int away_wins_input;
	int away_losses_input;
	
	std::cout << std::endl;
	std::cout << "Enter Team Name: ";
	std::cin >> team.team_name;


	std::cout << std::endl;
	std::cout << "Enter Home Wins: ";
	std::cin >> home_wins_input;
	team.home_wins_losses.home_wins = { home_wins_input };

	std::cout << std::endl;
	std::cout << "Enter Home Losses: ";
	std::cin >> home_losses_input;
	team.home_wins_losses.home_losses = { home_losses_input };

	std::cout << std::endl;
	std::cout << "Enter Away Wins: ";
	std::cin >> away_wins_input;
	team.home_wins_losses.away_wins = { away_wins_input };

	std::cout << std::endl;
	std::cout << "Enter Away Losses: ";
	std::cin >> away_losses_input;
	team.home_wins_losses.away_wins = { away_losses_input };

	menu();

	return team;
	
}

void displayWinLoss(WinLoss)
{
	WinLoss win_loss_output;

	std::cout << "          WINS --------------- LOSSES" << std::endl; //10 lines + 15lines
	std::cout << " HOME:   " << win_loss_output.home_wins << " --------------- " << win_loss_output.home_losses << std::endl;
	std::cout << " AWAY:   " << win_loss_output.away_wins << " --------------- " << win_loss_output.away_losses << std::endl;
	std::cout << " TOTAL:  " << win_loss_output.total_wins << " --------------- " << win_loss_output.total_losses << std::endl;
}

WinLoss getWinLoss(std::string)
{
	WinLoss win_loss;

	std::cout << std::endl;
	std::cout << "Enter Home Wins: ";
	std::cin >> win_loss.home_wins;

	std::cout << std::endl;
	std::cout << "Enter Home Losses: ";
	std::cin >> win_loss.home_losses;

	std::cout << std::endl;
	std::cout << "Enter Away Wins: ";
	std::cin >> win_loss.away_wins;
	
	std::cout << std::endl;
	std::cout << "Enter Away Losses: ";
	std::cin >> win_loss.away_losses;

	menu();

	return win_loss;
}

int menu()
{
	int user_input;

	const int MENU_OPTIONS_SIZE = 4;
	std::string menu_options[MENU_OPTIONS_SIZE] = { "Enter a New Team", "Display All Teams", "Display a Certian Team", "Exit Program" };

	std::cout << "MENU OPTIONS:" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < MENU_OPTIONS_SIZE; i++)
	{
		std::cout << i + 1;
		std::cout << ". ";
		std::cout << menu_options[i] << std::endl;
	}

	std::cout << "Please Enter an Option: ";
	std::cin >> user_input;

	if (user_input > 4)
	{
		std::cout << "INCORRECT OPTION, please enter a number between 1 and 4" << std::endl;

		std::cout << "MENU OPTIONS:" << std::endl;
		std::cout << std::endl;

		for (int i = 0; i < MENU_OPTIONS_SIZE; i++)
		{
			std::cout << i + 1;
			std::cout << ". ";
			std::cout << menu_options[i] << std::endl;
		}

		std::cout << "Please Enter an Option: ";
		std::cin >> user_input;

	} else {}

	menu_switch(user_input);

	return user_input;
}

void menu_switch(int user_input)
{
	switch (user_input)
	{
	case 1:
		getTeam();
		break;

	case 2:
		//displayTeam();
		break;

	case 3:
		// team lookup
		break;

	case 4:
		exit(1);
	}
}


int main()
{
	menu();
	return 0;
}
