// Ch5-5q2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{

	int count = 1;
	
	while (count <= 26)
	{
		char letter = count + 96;
		std::cout << letter << static_cast<int>(letter) << " ";
		++count;
	}



    return 0;
}

