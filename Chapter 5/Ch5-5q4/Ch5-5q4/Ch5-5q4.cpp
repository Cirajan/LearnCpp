// Ch5-5q4.cpp : Defines the entry point for the console application.
//


// This solution gets the right output but not as good as the one in the course
// because I have used an extra variable count

#include "stdafx.h"
#include <iostream>

// Loop between 1 and 5
int main()
{
	int outer = 1;
	while (outer <= 5)
	{
		// loop between inner and 1
		int inner = outer;
		
		
		int count = 1;
		while ((inner + count) <= 5)
		{
			std::cout << "  ";
			++count;
		}
		
		while (inner >= 1)
		{
			
			std::cout << inner-- << " ";
		}
		// print a newline at the end of each row
		std::cout << "\n";
		++outer;
	}

	return 0;
}
