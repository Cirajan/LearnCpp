// Ch3-7QuizQ6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int getNumber() //asks user for a number between 0 and 255 and returns the number
{
	int x;
	std::cout << "Please enter a number between 0 and 255: ";
	std::cin >> x;
	return x;
}

int printDigit(int x, int c)
{
	if (x >= c)
	{
		x = x - c;
		std::cout << "1";
	}

	else
		std::cout << "0";

	return x;
}


int main()
{
	int x = getNumber();

	x = printDigit(x, 128);
	x = printDigit(x, 64);
	x = printDigit(x, 32);
	x = printDigit(x, 16);
	std::cout << " ";
	x = printDigit(x, 8);
	x = printDigit(x, 4);
	x = printDigit(x, 2);
	x = printDigit(x, 1);


    return 0;
}

