// 2-6Quiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	
	std::cout << "Please enter a single digit integer: " << std::endl;
	int x;
	std::cin >> x;

	bool isPrime(false);

	if (x == 1)
		isPrime = true;
	if (x == 2)
		isPrime = true;
	if (x == 3)
		isPrime = true;
	if (x == 5)
		isPrime = true;
	if (x == 7)
		isPrime = true;

	if (isPrime)
		std::cout << "The digit is Prime" << std::endl;
	else
		std::cout << "The digit is not Prime" << std::endl;


    return 0;
}

