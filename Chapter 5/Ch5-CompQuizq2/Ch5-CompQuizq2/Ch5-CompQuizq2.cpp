// Ch5-CompQuizq2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()


// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
// Assumes max - min <= RAND_MAX
int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);  // static used for efficiency, so we only calculate this value once
															// evenly distribute the random number across our range
	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}


int getUserEntry(int guessNum) //asksfor the user's guess and performs error checking on the entry
{
	
	while (true)
	{
		std::cout << "Guess #" << guessNum << ": ";
		int guess;
		std::cin >> guess;

		//check for extraction failure
		if (std::cin.fail()) //did the extraction fail?
		{
			std::cin.clear(); //put back in normal mode i.e. cancel failed extraction mode
			std::cin.ignore(32767, '\n'); // and remove the bad input
			std::cout << "That entry is invalid, please try again.\n";
		}
		else
		{
			if (guess < 1 || guess > 100)
			{
				std::cin.ignore(32767, '\n'); // remove any extraneous input
				std::cout << "Entry is out of range, please try again.\n";
			}
			else
			{
				std::cin.ignore(32767, '\n'); // remove any extraneous input
				return guess;
			}
		}


	}

}




bool playGame(int numGuesses, int solution) //returns true if the player won false if not
{

	

	for (int count = 1; count <= numGuesses; count++)
	{
		
		int guess = getUserEntry(count); 

		if (guess < solution)
		{
			std::cout << "Your guess is too low.\n";
		}
		if (guess > solution)
		{
			std::cout << "Your guess is too high.\n";
		}
		if (guess == solution)
			return true;

	}

	return false;
}
int main()
{
	srand(static_cast<unsigned int>(time(0)));// sets the seed to the clock 
	int discardedRandom = rand(); //discards the first random generated for this seed ... problem with visual studio

	
	int numGuesses = 7; //number of guesses for this game


	char playAgain = 'y';

	while (playAgain == 'y') //while the player still wants to play
	{
		
		int solution = getRandomNumber(1, 100);

		
		bool result = playGame(numGuesses, solution);

		if (result)
			std::cout << "Correct! You Win!\n";
		else
			std::cout << "Sorry, you lose.  The correct number was " << solution << ".\n";
		
		
		do
		{
			std::cout << "Would you like to play again (y/n)?";
			std::cin >> playAgain;
		} 
		while (playAgain != 'y' && playAgain != 'n');
	}
	
	std::cout << "Thankyou for playing.\n";

    return 0;
}

