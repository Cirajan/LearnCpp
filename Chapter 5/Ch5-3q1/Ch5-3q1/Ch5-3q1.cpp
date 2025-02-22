// Ch5-3q1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int calculate(int x, int y, char c)
{
	switch(c)
	{
		case('+'):
			return x + y;
			break;
		case('-'):
			return x - y;
			break;
		case('*'):
			return x * y;
			break;
		case('/'):
			return x / y;
			break;

		default:
			std::cout << "Error: Invalid operator.\n";
			return 0;
			break;
	}
}

int main()
{

	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y;
	std::cin >> y;

	std::cout << "Enter an operator, '+', '-', '*' or '/': ";
	char c;
	std::cin >> c;

	std::cout << "The result is " << calculate(x, y, c);


    return 0;
}

