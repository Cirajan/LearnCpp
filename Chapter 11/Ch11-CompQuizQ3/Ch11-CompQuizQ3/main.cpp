//
//  main.cpp
//  Ch11-CompQuizQ3
//
//  Created by Chris on 21/5/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

// Generate a random number between min and max (inclusive)
// Assumes srand() has already been called
int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

class Creature
{
protected:
    
    std::string m_name;
    char  m_symbol;
    int  m_health;
    int m_damage;
    int m_gold;
    
    
public:
    
    Creature (std::string name, char symbol, int health, int damage, int gold)
    : m_name(name), m_symbol(symbol), m_health(health), m_damage(damage), m_gold(gold)
    {
        
    }
    
    const std::string& getName() {return m_name;}
    char getSymbol() {return m_symbol;}
    int getHealth() {return m_health;}
    int getDamage() {return m_damage;}
    int getGold() {return m_gold;}
    
    
    void reduceHealth(int a)
    {
        m_health -= a;
    }
    
    bool isDead()
    {
        return (m_health <= 0);
    }
    
    void addGold(int amount)
    {
        m_gold += amount;
    }
};



class Player: public Creature
{
private:
    
    int m_level = 1;
    
public:
    
    Player(std::string name)
    : Creature(name, '@', 10, 1, 0)
    {
        
    }
    
    void levelUp()
    {
        ++m_level;
        ++m_damage;
    }
    
    
    int getLevel() {return m_level;}
    
    bool hasWon()
    {
        return m_level >= 20;
    }
};



class Monster: public Creature
{
public:
    
    
    
    
    enum Type
    {
        DRAGON,
        ORC,
        SLIME,
        MAX_TYPES
        
    };
    
    
    struct MonsterData
    {
        std::string name;
        char  symbol;
        int  health;
        int damage;
        int gold;
    };
    
    
    static MonsterData monsterData[Monster::MAX_TYPES];
    
    
    Monster(Type type): Creature(monsterData[type].name, monsterData[type].symbol, monsterData[type].health
                                 , monsterData[type].damage, monsterData[type].gold)
    {
        
    }
    
    
    static Monster getRandomMonster()
    {
        Type type = static_cast<Type>(getRandomNumber(0, MAX_TYPES-1));
        return Monster(type);
    }
    
    
};



Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
    { "dragon", 'D', 20, 4, 100 },
    { "orc", 'o', 4, 2, 25 },
    { "slime", 's', 1, 1, 10 }
};


void attackMonster(Player &player, Monster &monster)
{
    if (player.isDead()) return;
    
    
    monster.reduceHealth(player.getDamage());
    std::cout << "You hit the " << monster.getName() << " for " << player.getDamage() <<
    " damage.\n";
    
    if (monster.isDead())
    {
        std::cout << "You killed the " << monster.getName() << ".\n";
        
        player.levelUp();
        std::cout << "You are now level " << player.getLevel() << ".\n";
        
        player.addGold(monster.getGold());
        std::cout << "You found " << monster.getGold() << " gold.\n";
        
        
    }
    
    return;
}


void attackPlayer(Player &player, Monster &monster)
{
    if (monster.isDead()) return;
    
    player.reduceHealth(monster.getDamage());
    std::cout << "The " << monster.getName() << " hit you for " << monster.getDamage() << " damage.\n";
    std::cout << "Player health is " << player.getHealth() << ".\n";
    return;
    
}





void fightMonster  (Player &player)
{
    Monster m = Monster::getRandomMonster();
    
    std::cout << "You have encountered a " << m.getName() << " (" << m.getSymbol() << ").\n";
    
    while(!player.isDead() && !m.isDead())
    {
        std::cout << "(R)un or (F)ight: ";
        char c = ' ';
        std::cin >> c;
        
        if (c == 'r')
        {
            if(getRandomNumber(0, 1) == 0)
            {
                std::cout << "You successfully fled.\n";
                return;
            }
            else
            {
                std::cout << "You failed to flee.\n";
                player.reduceHealth(m.getDamage());
                std::cout << "The " << m.getName() << " hit you for " << m.getDamage() << " damage.\n";
                
                
            }
        }
        
        if (c == 'f')
        {
            attackMonster(player, m);
            
            
            
            
            attackPlayer(player, m);
           
            
        }
        
        
    }
    
}



int main(int argc, const char * argv[]) {
    
    
    srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
    rand(); // get rid of first result
    
   
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    
    Player player(name);
    std::cout << "Welcome " << name << "\n";
    
    while (!player.hasWon() && !player.isDead())
    {
        
        
        fightMonster(player);
        
        
    }
    
    if (player.isDead())
    {
        std::cout << "You died at level " << player.getLevel() << " and with " << player.getGold() <<
        " gold.\n";
        std::cout << "Too bad you can't take it with you!\n";
        
    }
    
    else
    {
        std::cout << "You win";
    }
    
    
    
    
    return 0;
    
    
}
