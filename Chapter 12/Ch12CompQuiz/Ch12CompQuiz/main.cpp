//
//  main.cpp
//  Ch12CompQuiz
//
//  Created by Chris on 10/6/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>
#include <vector>


class Point
{
private:
    int m_x = 0;
    int m_y = 0;
    int m_z = 0;
    
public:
    Point(int x, int y, int z)
    : m_x(x), m_y(y), m_z(z)
    {
        
    }
    
    friend std::ostream& operator<<(std::ostream &out, const Point &p)
    {
        out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ")";
        return out;
    }
};






class Shape
{
public:
    
    virtual std::ostream& print (std::ostream &out) const = 0;
    
    friend std::ostream& operator << (std::ostream &out, const Shape &shape)
    {
        return shape.print(out);
    }
    
    virtual ~Shape() {};
};


class Triangle: public Shape
{
private:
    
    Point m_a;
    Point m_b;
    Point m_c;
    
public:
    
    Triangle(const Point &p1, const Point &p2, const Point &p3):
    m_a(p1), m_b(p2), m_c(p3)
    {
        
    }
    
    virtual std::ostream& print (std::ostream &out) const override
    {
        out << "Triangle(" << m_a << ", " << m_b << ", " << m_c << ")\n";
        return out;
    }
    
    
};


class Circle: public Shape
{
private:
    
    Point m_center;
    int m_radius;
    
public:
    
    Circle(const Point &p, int r): m_center(p), m_radius(r)
    {
        
    }
    
    virtual std::ostream& print (std::ostream &out) const override
    {
        out << "Circle(" << m_center << ", radius " << m_radius << ")\n";
        return out;
    }
    
    int getRadius()
    {
        return m_radius;
    }
};

int getLargestRadius(const std::vector<Shape*> &v)
{
    int largestR = 0;
    
    
    
    for (int count = 0; count < v.size(); ++count)
    {
        Circle* c = dynamic_cast<Circle*>(v[count]);
        if (c && c->getRadius() > largestR)
            largestR = c->getRadius();
    }
    
    return largestR;
        
}

int main(int argc, const char * argv[]) {
    
    std::vector<Shape*> v;
    v.push_back(new Circle(Point(1, 2, 3), 7));
    v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
    v.push_back(new Circle(Point(4, 5, 6), 3));
    
    // print each shape in vector v on its own line here
    
    for (int count = 0; count < v.size(); ++count)
    {
        std::cout << *v[count];
    }
    
    
    
    std::cout << "The largest radius is: " << getLargestRadius(v) << '\n'; // write this function
    
    // delete each element in the vector here
    
    for (int count = 0; count < v.size(); ++count)
    {
        delete v[count];
    }
    
    return 0;
}
