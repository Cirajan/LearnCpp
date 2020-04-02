#include "stdafx.h"
#include <iostream>




int readNumber() //function that requests a number from the user, reads that number and returns it
{
	int input;
	std::cout << "Please enter a number: ";
	std::cin >> input;
	return input;
}

void writeAnswer(int a) //function that takes the answer as input and writes this to the console
{
	std::cout << "The sum of the two numbers is " << a;

}

