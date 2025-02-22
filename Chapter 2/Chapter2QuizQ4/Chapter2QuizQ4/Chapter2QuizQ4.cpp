// Chapter2QuizQ4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "constants.h"


double getHeight()
{
	double h;
	std::cout << "Enter the initial height of the tower in meters :";
	std::cin >> h;
	return h;
}


double getInstantaneousHeight(double h, int t)
{
	double distanceFallen;
	double curHeight;
	distanceFallen = myConstants::gravity * t * t / 2;
	curHeight = h - distanceFallen;
	return curHeight;
}


void printResult(double h)
{

	int time = 0; //storage for time after ball is dropped

	if (getInstantaneousHeight(h, time) > 0)
		std::cout << "At" << time << " seconds, the ball is at height : " << getInstantaneousHeight(h, time) << "meters" << std::endl;

	time = time + 1;
	if (getInstantaneousHeight(h, time) > 0)
		std::cout << "At" << time << " seconds, the ball is at height : " << getInstantaneousHeight(h, time) << "meters" << std::endl;

	time = time + 1;
	if (getInstantaneousHeight(h, time) > 0)
		std::cout << "At" << time << " seconds, the ball is at height : " << getInstantaneousHeight(h, time) << "meters" << std::endl;

	time = time + 1;
	if (getInstantaneousHeight(h, time) > 0)
		std::cout << "At" << time << " seconds, the ball is at height : " << getInstantaneousHeight(h, time) << "meters" << std::endl;

	time = time + 1;
	if (getInstantaneousHeight(h, time) > 0)
		std::cout << "At" << time << " seconds, the ball is at height : " << getInstantaneousHeight(h, time) << "meters" << std::endl;

	time = time + 1;
	if (getInstantaneousHeight(h, time) > 0)
		std::cout << "At" << time << " seconds, the ball is at height : " << getInstantaneousHeight(h, time) << "meters" << std::endl;

	else
		std::cout << "At" << time << "seconds, the ball is on the ground." << std::endl;


}

int main()
{
	double h = getHeight();

	printResult(h);


    return 0;
}

