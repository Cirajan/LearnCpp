// Chapter1Quiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "io.h"




int main()
{
	int x, y; //storage for 2 entries by the user
	x = readNumber();
	y = readNumber();

	writeAnswer(x + y);

    return 0;
}

