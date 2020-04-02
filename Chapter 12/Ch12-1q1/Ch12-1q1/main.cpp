//
//  main.cpp
//  Ch12-1q1
//
//  Created by Chris on 26/5/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string m_name;
    const char* m_speak;
    
    // We're making this constructor protected because
    // we don't want people creating Animal objects directly,
    // but we still want derived classes to be able to use it.
    Animal(const std::string &name, const char* speak)
    : m_name(name), m_speak(speak)
    {
    }
    
public:
    const std::string& getName() { return m_name; }
    const char* speak() { return m_speak; }
};

class Cat: public Animal
{
public:
    Cat(std::string name)
    : Animal(name, "Meow")
    {
    }
    
};

class Dog: public Animal
{
public:
    Dog(std::string name)
    : Animal(name, "Woof")
    {
    }
    
};

int main(int argc, const char * argv[]) {
   
    Cat fred("Fred"), misty("Misty"), zeke("Zeke");
    Dog garbo("Garbo"), pooky("Pooky"), truffle("Truffle");
    
    // Set up an array of pointers to animals, and set those pointers to our Cat and Dog objects
    Animal *animals[] = { &fred, &garbo, &misty, &pooky, &truffle, &zeke };
    for (auto animal : animals)
        std::cout << animal->getName() << " says " << animal->speak() << '\n';
    
    std::cout << (fred.speak());
    std::cout << (misty.speak());
    
    return 0;
}
