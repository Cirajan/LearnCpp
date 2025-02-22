// Ch4-xGeneralQuiz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

enum class MonsterType
{
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME
};


struct Monster
{
	MonsterType type;
	std::string name;
	int health;
};

//I should package up all the ifs into a function that returns the monster's type

void printMonster(Monster monster)
{
	if (monster.type == MonsterType::OGRE)
		std::cout << "This Ogre is named " << monster.name << " and has " << monster.health << " health. \n";
	if (monster.type == MonsterType::DRAGON)
		std::cout << "This Dragon is named " << monster.name << " and has " << monster.health << " health. \n";
	if (monster.type == MonsterType::ORC)
		std::cout << "This Orc is named " << monster.name << " and has " << monster.health << " health. \n";
	if (monster.type == MonsterType::GIANT_SPIDER)
		std::cout << "This Giant Spider is named " << monster.name << " and has " << monster.health << " health. \n";
	if (monster.type == MonsterType::SLIME)
		std::cout << "This Slime is named " << monster.name << " and has " << monster.health << " health. \n";
}

int main()
{
	Monster a;
	Monster b;

	a = { MonsterType::OGRE, "Torg", 200 };
	b = { MonsterType::SLIME, "Blurp", 300 };

	printMonster(a);
	printMonster(b);

    return 0;
}

