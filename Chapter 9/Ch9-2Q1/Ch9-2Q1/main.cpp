//
//  main.cpp
//  Ch9-2Q1
//
//  Created by Chris on 28/2/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>


class Fraction
{
private:
    
    int m_numerator;
    int m_denominator;
    
public:
    
    Fraction(int numerator = 0, int denominator = 0): m_numerator(numerator), m_denominator(denominator)
    {
        reduce();
    }
    
    
    friend Fraction operator*(const Fraction& a, const Fraction& b);
    
    friend Fraction operator*(const Fraction& a, int b);
    
    friend Fraction operator*(int a, const Fraction& b);
    
    
    void print()
    {
        std::cout << m_numerator << "/" << m_denominator << "\n";
    }
    

    
    static int gcd(int a, int b) {
        return (b == 0) ? (a > 0 ? a : -a) : gcd(b, a % b);
    }
    
    void reduce()
    {
        int gcd = Fraction::gcd(m_numerator, m_denominator);
        
        m_numerator /= gcd;
        m_denominator /= gcd;
    }
};


Fraction operator*(const Fraction& a, const Fraction& b)
{
    int num = a.m_numerator * b.m_numerator;
    int den = a.m_denominator * b.m_denominator;
    return Fraction(num, den);
};

Fraction operator*(const Fraction& a, int b)
{
    int num = a.m_numerator * b;
    return Fraction(num, a.m_denominator);
};

Fraction operator*(int a, const Fraction& b)
{
    return b * a;
};



int main(int argc, const char * argv[]) {
   
    Fraction f1(2, 5);
    f1.print();
    
    Fraction f2(3, 8);
    f2.print();
    
    Fraction f3 = f1 * f2;
    f3.print();
    
    Fraction f4 = f1 * 2;
    f4.print();
    
    Fraction f5 = 2 * f2;
    f5.print();
    
    Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
    f6.print();
    return 0;
}
