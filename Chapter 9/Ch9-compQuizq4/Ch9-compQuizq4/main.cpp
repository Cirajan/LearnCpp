//
//  main.cpp
//  Ch9-compQuizq4
//
//  Created by Chris on 15/4/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>
#include <cmath>

class FixedPoint2
{
private:
    
    int16_t m_wholeNum;
    int8_t  m_fraction;
    
public:
    
    FixedPoint2 (int16_t wholeNum = 0, int8_t fraction = 0) : m_wholeNum(wholeNum), m_fraction(fraction)
    {
        if(m_wholeNum < 0 || m_fraction < 0)
        {
            if (m_wholeNum > 0)
                m_wholeNum = -m_wholeNum;
            if (m_fraction > 0)
                m_fraction = -m_fraction;
        }
    }
    
    
    FixedPoint2 (double num)
    {
        
        m_wholeNum = static_cast<int16_t>(num);
        m_fraction = static_cast<int8_t>(round((num - m_wholeNum) * 100));
    }
    
    
    operator double() const
    {
        return m_wholeNum + static_cast<double>(m_fraction)/100;
    }
    
    
     friend bool operator== (const FixedPoint2 &pointA, const FixedPoint2 &pointB)
    {
        if (pointA.m_wholeNum == pointB.m_wholeNum && pointA.m_fraction == pointB.m_fraction)
            return true;
        else
            return false;
    }
    
     FixedPoint2 operator - ()
    {
        return FixedPoint2(- m_wholeNum, - m_fraction);
    }
    
};


FixedPoint2 operator + (const FixedPoint2 &pointA, const FixedPoint2 &pointB)
{
    return FixedPoint2(static_cast<double>(pointA) + static_cast<double>(pointB));
}





std::ostream& operator << (std::ostream &out, const FixedPoint2 num)
{
    
    out << static_cast<double>(num);
    return out;
}


std::istream& operator >> (std::istream &in, FixedPoint2 &num)
{
    double d;
    in >> d;
    num = FixedPoint2(d);
    return in;
}



void testAddition()
{
    // h/t to reader Sharjeel Safdar for this function
    std::cout << std::boolalpha;
    std::cout << (FixedPoint2(0.75) + FixedPoint2(1.23) == FixedPoint2(1.98)) << '\n'; // both positive, no decimal overflow
    std::cout << (FixedPoint2(0.75) + FixedPoint2(1.50) == FixedPoint2(2.25)) << '\n'; // both positive, with decimal overflow
    std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.23) == FixedPoint2(-1.98)) << '\n'; // both negative, no decimal overflow
    std::cout << (FixedPoint2(-0.75) + FixedPoint2(-1.50) == FixedPoint2(-2.25)) << '\n'; // both negative, with decimal overflow
    std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.23) == FixedPoint2(-0.48)) << '\n'; // second negative, no decimal overflow
    std::cout << (FixedPoint2(0.75) + FixedPoint2(-1.50) == FixedPoint2(-0.75)) << '\n'; // second negative, possible decimal overflow
    std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.23) == FixedPoint2(0.48)) << '\n'; // first negative, no decimal overflow
    std::cout << (FixedPoint2(-0.75) + FixedPoint2(1.50) == FixedPoint2(0.75)) << '\n'; // first negative, possible decimal overflow
}

int main()
{
    testAddition();
    
    FixedPoint2 a(-0.48);
    std::cout << a << '\n';
    
    std::cout << -a << '\n';
    
    std::cout << "Enter a number: "; // enter 5.678
    std::cin >> a;
    
    std::cout << "You entered: " << a << '\n';
    
    return 0;
}
