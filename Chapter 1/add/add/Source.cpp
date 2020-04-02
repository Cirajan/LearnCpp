#include "stdafx.h" // uncomment if using Visual Studio
#include <iostream>

int add(int x, int y); //forward declaration so that main can use add from the other file

int main()
{
	std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
	return 0;
}