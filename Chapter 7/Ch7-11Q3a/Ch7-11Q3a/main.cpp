//
//  main.cpp
//  Ch7-11Q3a
//
//  Created by Chris on 12/1/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>


void printBin (unsigned int n)
{
    if (n/2 > 0) {
        printBin(n/2);
    }
        std::cout << n % 2;
}


int main(int argc, const char * argv[]) {
   
    std::cout << "Please enter a positive interger: ";
    int n;
    std::cin >> n;
    
    
    
    printBin(n);
    
    return 0;
}
