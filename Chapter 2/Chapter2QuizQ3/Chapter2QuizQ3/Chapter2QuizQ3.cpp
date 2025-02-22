// Chapter2QuizQ3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

bool isSymbolValid(char s) //function that determines whether the symbol s is a +,-,* or /. If not it returns false
{
	if (s == '+')
		return true;
	if (s == '-')
		return true;
	if (s == '*')
		return true;
	if (s == '/')
		return true;
	else
		return false;
}


double calculateAnswer(double x, double y, char s) //Function that calculates the answer for a mathematical operation on two doubles 
{
	double a;

	if (s == '+')
		a = x + y;
	if (s == '-')
		a = x - y;
	if (s == '*')
		a = x * y;
	if (s == '/')
		a = x / y;
		
	return a;
}




int main()
{


	std::cout << "Enter a double value: ";
	double x;
	std::cin >> x;
	

	std::cout << "Enter a double value: ";
	double y;
	std::cin >> y;
	

	std::cout << "Enter one of the following: +, -, *, or /: ";
	char s;
	std::cin >> s;
	

	if (isSymbolValid(s))
		std::cout << x << " " << s << " " << y << " is " << calculateAnswer(x, y, s);


    return 0;
}

