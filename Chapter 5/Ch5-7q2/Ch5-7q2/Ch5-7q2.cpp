// Ch5-7q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int sumTo(int value)
{
	int sum = 0;

	for (int count = 1; count <= value; ++count)
	{
		sum += count;
	}

	return sum;
}

int main()
{
	std::cout << "Enter a number: ";
	int value;
	std::cin >> value;

	std::cout << "The sum of all ints from 1 to " << value << " is " << sumTo(value) << "\n";

    return 0;
}

