// CH3-1powFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// note: exp must be non-negative
int pow(int base, int exp)
{
	int result = 1;
	while (exp)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}

	return result;
}



int main()
{
	std::cout << pow(2, 4);
    return 0;
}

