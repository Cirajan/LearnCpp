// Ch4-4aQ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
int main()
{
	std::cout << "Enter your full name: ";
	std::string name;
	std::getline(std::cin, name);

	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;

	float agePerLetter = static_cast<float>(age) / name.length();

	std::cout << "You have lived " << agePerLetter << " years for each letter in your name.";


    return 0;
}

