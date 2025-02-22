// Ch3-2Q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int getInteger()
{
	int x;
	std::cout << "Enter a integer: ";
	std::cin >> x;
	return x;
}


void printResult(int x, bool r)
{
	if (r)
		std::cout << x << " is an even number." << std::endl;
	else
		std::cout << x << " is an odd number." << std::endl;
}

bool isEven(int x) //returns true if x is even, otherwsie returns false
{
	if (x % 2 == 0)
		return true;
	else
		return false;
}

int main()
{
	int x = getInteger();
	printResult(x, isEven(x));

    return 0;
}

