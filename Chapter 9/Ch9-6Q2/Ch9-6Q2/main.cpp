//
//  main.cpp
//  Ch9-6Q2
//
//  Created by Chris on 10/3/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>
#include <string>

#include <vector>
#include <algorithm>


class Car
{
private:
    std::string m_make;
    std::string m_model;
    
public:
    Car(std::string make, std::string model)
    : m_make(make), m_model(model)
    {
    }
    
    friend bool operator== (const Car &c1, const Car &c2);
    friend bool operator!= (const Car &c1, const Car &c2);
    
    friend bool operator< (const Car &c1, const Car &c2);
    
    friend std::ostream& operator<< (std::ostream &out, const Car &c);
};

bool operator== (const Car &c1, const Car &c2)
{
    return (c1.m_make== c2.m_make &&
            c1.m_model== c2.m_model);
}

bool operator!= (const Car &c1, const Car &c2)
{
    return !(c1== c2);
}

bool operator< (const Car &c1, const Car &c2)
{
    return ((c1.m_make + c1.m_model) < (c2.m_make + c2.m_model));
}
/*friend bool operator<(const Car &c1, const Car &c2)
{
    if (c1.m_make == c2.m_make) // If the car is the same make...
        return c1.m_model < c2.m_model; // then compare the model
    else
        return c1.m_make < c2.m_make; // otherwise compare the makes
}
*/

std::ostream& operator<< (std::ostream &out, const Car &c)
{
    out << "(" << c.m_make << ", " << c.m_model << ")";
    
    return out;
}

int main()
{
    std::vector<Car> v;
    v.push_back(Car("Toyota", "Corolla"));
    v.push_back(Car("Honda", "Accord"));
    v.push_back(Car("Toyota", "Camry"));
    v.push_back(Car("Honda", "Civic"));
    
    std::sort(v.begin(), v.end()); // requires an overloaded operator<
    
    for (auto &car : v)
       std::cout << car << '\n'; // requires an overloaded operator<<
    
    return 0;
}
