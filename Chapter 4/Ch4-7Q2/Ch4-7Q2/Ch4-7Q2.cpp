// Ch4-7Q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct Fraction
{
	int numerator;
	int denomonator;
};


void multiply(Fraction x, Fraction y)
{
	Fraction product;
	product.numerator = x.numerator * y.numerator;
	product.denomonator = x.denomonator * y.denomonator;

	std::cout << "The product is: " << static_cast<float>(product.numerator) / static_cast<float>(product.denomonator);
	

}



int main()
{
	Fraction x, y;

	std::cout << "Enter Fraction 1 numerator: ";
	std::cin >> x.numerator;

	std::cout << "Enter Fraction 1 deonomator: ";
	std::cin >> x.denomonator;

	std::cout << "Enter Fraction 2 numerator: ";
	std::cin >> y.numerator;

	std::cout << "Enter Fraction 2 deonomonator: ";
	std::cin >> y.denomonator;


	multiply(x, y);


    return 0;
}

