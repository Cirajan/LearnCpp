// Ch4-1aQ1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;

	std::cout << "Enter a larger integer: ";
	int y;
	std::cin >> y;

	if (y < x)
	{
		int a = x;
		x = y;
		y = a;
		std::cout << "Swapping the values" << std::endl;

	}// int a is destroyed here

	std::cout << "The smaller value is " << x << "\n";
	std::cout << "The larger value is " << y << "\n";


    return 0;
}// x and y are destroyed here

