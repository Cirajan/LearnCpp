// 1-4aq5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int doubleNumber(int x)
{
	return 2 * x;
}

int main()
{
	

	std::cout << "Enter a number: ";
	int x;
	std::cin >> x;
	std::cout << doubleNumber(x);

    return 0;
}

