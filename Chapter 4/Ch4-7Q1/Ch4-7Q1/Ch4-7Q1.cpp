// Ch4-7Q1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


struct Advertising
{
	int addsShown;
	float percAddsClicked;
	int avgEarnedPerClick;
};

void printValues(Advertising advertising)
{
	std::cout << "Number of adds shown = " << advertising.addsShown << "\n"
		<< "Percentage of adds clicked = " << advertising.percAddsClicked << "\n"
		<< "Average amount earned per click = " << advertising.avgEarnedPerClick << "\n"
		<< "Total amount earned in the day = " << (advertising.addsShown * (advertising.percAddsClicked / static_cast<float>(100)) * advertising.avgEarnedPerClick);
}

int main()
{
	Advertising siteAdvertising;

	std::cout << "Enter number of adds shown to users: ";
	std::cin >> siteAdvertising.addsShown;

	std::cout << "Enter percentage of adds clicked: ";
	std::cin >> siteAdvertising.percAddsClicked;

	std::cout << "Enter average amount earned per click: ";
	std::cin >> siteAdvertising.avgEarnedPerClick;

	printValues(siteAdvertising);

    return 0;
}

