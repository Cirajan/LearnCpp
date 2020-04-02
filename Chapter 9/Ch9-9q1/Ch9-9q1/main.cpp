//
//  main.cpp
//  Ch9-9q1
//
//  Created by Chris on 12/3/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>
#include <string>
#include <cassert>

class Mystring
{
private:
    
    std::string m_string;
    
public:
    
    Mystring (std::string string): m_string(string)
    {
        
    }
    
    std::string operator ()(int index, int length);
    
};


std::string Mystring::operator()(int start, int length)
{
    
    assert((start + length) <= m_string.length());
    
    std::string temp;
    
    for (int a = start ; a < (start + length); ++a )
    {
        temp += m_string[a];
    }
    
    return temp;
}




int main(int argc, const char * argv[]) {
    Mystring string("Hello, world!");
    std::cout << string(7, 5); // start at index 7 and return 5 characters
    return 0;
}
