//
//  main.cpp
//  Ch9-6Q1
//
//  Created by Chris on 10/3/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>

class Cents
{
private:
    int m_cents;
    
public:
    Cents(int cents) { m_cents = cents; }
    
    friend bool operator> (const Cents &c1, const Cents &c2);
    friend bool operator<= (const Cents &c1, const Cents &c2);
    
    friend bool operator< (const Cents &c1, const Cents &c2);
    friend bool operator>= (const Cents &c1, const Cents &c2);
};

bool operator> (const Cents &c1, const Cents &c2)
{
    return c1.m_cents > c2.m_cents;
}

bool operator>= (const Cents &c1, const Cents &c2)
{
    return c1.m_cents >= c2.m_cents;
}

bool operator< (const Cents &c1, const Cents &c2)
{
    return !(c1 >= c2);
}

bool operator<= (const Cents &c1, const Cents &c2)
{
    return !(c1 > c2);
}

int main()
{
    Cents dime(10);
    Cents nickel(5);
    
    if (nickel > dime)
        std::cout << "a nickel is greater than a dime.\n";
    if (nickel >= dime)
        std::cout << "a nickel is greater than or equal to a dime.\n";
    if (nickel < dime)
        std::cout << "a dime is greater than a nickel.\n";
    if (nickel <= dime)
        std::cout << "a dime is greater than or equal to a nickel.\n";
    
    
    return 0;
}
