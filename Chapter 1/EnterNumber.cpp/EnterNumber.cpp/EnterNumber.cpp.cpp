// EnterNumber.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	std::cout << "Enter a Number "; // asks user for a number
	int x; //no initialisation b/c we will overwrite in next line
	std::cin >> x; //read number from console and store in x
	std::cout << "You entered " << x << std::endl;
    return 0;
}

