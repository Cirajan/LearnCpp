//
//  main.cpp
//  Ch11-4q1
//
//  Created by Chris on 30/4/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>
#include <string>
class Fruit
{
private:
    
    std::string m_name;
    std::string m_color;
    
public:
    
    Fruit (std::string name, std::string color)
    : m_name(name), m_color(color)
    {
        
    }
    
    const std::string& getName() const {return m_name;}
    const std::string& getColor() const {return m_color;}
};

class Apple : Fruit
{
private:
    
    double m_fibre;
    
public:
    
    Apple(std::string name, std::string color, double fibre)
    : Fruit(name, color), m_fibre(fibre)
    {
        
    }
    
    double getFibre() const {return m_fibre;}
    
    friend std::ostream& operator<< (std::ostream &out, const Apple &apple);
};

std::ostream& operator<< (std::ostream &out, const Apple &apple)
{
    out << "Apple (" << apple.getName() << ", " << apple.getColor() << ", " << apple.getFibre()<< ")\n";
    return out;
}



class Banana : Fruit
{
public:
    
    Banana(std::string name, std::string color)
    : Fruit(name, color)
    {
        
    }
    
    friend std::ostream& operator<< (std::ostream &out, const Banana &banana);
    
};

std::ostream& operator<< (std::ostream &out, const Banana &banana)
{
    out << "Banana (" << banana.getName() << ", " << banana.getColor() << ")\n";
    return out;
}


int main()
{
    const Apple a("Red delicious", "red", 4.2);
    std::cout << a;
    
    const Banana b("Cavendish", "yellow");
    std::cout << b;
    
    return 0;
}
