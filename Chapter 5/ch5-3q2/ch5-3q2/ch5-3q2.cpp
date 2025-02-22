// ch5-3q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


//This all works but is not as good as the soltuion in the 
//course because the swicth statement in printNumberOfLegs can be refined a lot. It ddoesn't need as much repetition.


enum class Animal
{
	PIG,
	CHICKEN,
	GOAT,
	CAT,
	DOG
};


std::string getAnimalName(Animal animal)
{
	switch (animal)
	{
	case Animal::PIG:
		return "Pig";
	case Animal::CHICKEN:
		return "Chicken";
	case Animal::GOAT:
		return "Goat";
	case Animal::CAT:
		return "Cat";
	case Animal::DOG:
		return "Dog";
	default:
		std::cout << "Error: not a animal";
		return "Error";
	}
}

void printNumberOfLegs(Animal animal)
{
	switch (animal)
	{
	case Animal::PIG:
		std::cout << "A " << getAnimalName(animal) << " has 4 legs.\n";
		break;
	case Animal::CHICKEN:
		std::cout << "A " << getAnimalName(animal) << " has 2 legs.\n";
		break;
	case Animal::GOAT:
		std::cout << "A " << getAnimalName(animal) << " has 4 legs.\n";
		break;
	case Animal::CAT:
		std::cout << "A " << getAnimalName(animal) << " has 4 legs.\n";
		break;
	case Animal::DOG:
		std::cout << "A " << getAnimalName(animal) << " has 4 legs.\n";
		break;
	default:
		std::cout << "Error: not a animal. \n";
		
	}

}

int main()
{

	Animal a = Animal::CAT;
	printNumberOfLegs(a);

	Animal b = Animal::CHICKEN;
	printNumberOfLegs(b);



    return 0;
}

