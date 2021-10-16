/*
Adam McKnight
CIS 1202 500
October 10th, 2021



I'm turning this in eventhrough, nothing was really done.
I've tried to figure out this problem for the last week, and I'm struggling with it.

I've tried to create a Deck sturct that takes in Card struct, that doens't work as expected. I've tried to complete the problem with the method signatures in the spec sheet, and I'm unable to come to a solution. The suits can'd be stored into a new card variable (on its own) or in an for loop. Even manually typing out each card pair of HEARTS of TWO, etc... I'll get an error. 

I've researched and tried to use different methods to complete the problem, even at that cannot figure it out. I also didn't want to go too far off the spec sheet. I was able to get something to work when using classes but that wouldn't be solving the original question / problem.

Thanks, - am 10/9/'21

*/

#include "mcknight-adam-week7.h"


// Structs & Enums:
enum suits { HEARTS, DIAMONDS, SPADES, CLUBS };
enum ranks { TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE };

struct cards
{
	suits suit;
	ranks rank;
};


cards deck[52];
cards card1, card2;



// Prototypes:
void createDeck(cards[]);
void printDeck(cards[]);
std::string cardNme(cards);
cards deal(cards[]);
std::string winner(cards, cards);



// Functions:
int main()
{
	return 0;
}

void createDeck(cards[]) // FUNCTION IS TAKING IN AN ARRAY OF NAME CARDS.
{

	cards cards;
	


	
	// create a deck of cards
	// loop through the suits enum
	// loop through the ranks enum
	// store the card pairs into the global deck[52] array 
	// -- there should be 52 total cards

	// NEEDS TO RUTURN A CARD DECK?
}

void printDeck(cards[])
{
	// loop through the deck array
	// and print the cards to the console.
};

std::string cardName(cards)
{
	// function is taking in a Struct of cards
	// 
	// 1. std::string card_suite = cards.suite;
	//	  std::string card_rank = cards.rank;
	// 
	// 2. std::cout << card_suite << "of" << card_rank << std::endl;
	// 
	// RETURN A STRING,  WITH THE RANK AND SUIT OF THE CARD. 
	// EXAMPLE: TWO of HEARTS
}

cards deal(cards[])
{
	// function takes in a array of cards
	// loop through the array of cards at index position i and store it 
	// in a var, then use the rand method to randomly spit out a card from 
	// the array.
}

std::string winner(cards, cards)
{

	// run logical checks to see if the card provided is an ace
	// if so, return WINNING. Run logical check to see if ranks are the same,
	// if so, return a TIE. Otherwise, show LOSSING.
}