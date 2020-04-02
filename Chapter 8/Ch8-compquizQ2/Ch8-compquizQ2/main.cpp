//
//  main.cpp
//  Ch8-compquizQ2
//
//  Created by Chris on 21/2/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>

class HelloWorld
{
private:
    char *m_data;
    
public:
    HelloWorld()
    {
        m_data = new char[14];
        const char *init = "Hello, World!";
        for (int i = 0; i < 14; ++i)
            m_data[i] = init[i];
    }
    
    ~HelloWorld()
    {
        // replace this comment with your destructor implementation
        delete[] m_data;
    }
    
    void print() const
    {
        std::cout << m_data;
    }
    
};

int main()
{
    HelloWorld hello;
    hello.print();
    
    return 0;
}
