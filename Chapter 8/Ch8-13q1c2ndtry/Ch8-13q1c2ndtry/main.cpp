//
//  main.cpp
//  Ch8-13q1c2ndtry
//
//  Created by Chris on 19/2/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>
#include "Point3d.hpp"
#include "Vector3d.hpp"

int main()
{
    Point3d p(1.0, 2.0, 3.0);
    Vector3d v(2.0, 2.0, -3.0);
    
    p.print();
    p.moveByVector(v);
    p.print();
    
    return 0;
}
