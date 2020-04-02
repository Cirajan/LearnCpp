//
//  Vector3d.cpp
//  Ch13-q1c
//
//  Created by Chris on 19/2/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include <iostream>
#include "Vector3d.h"



Vector3d::Vector3d(double x , double y , double z)
    : m_x(x), m_y(y), m_z(z)
    {
        
    }
    
void Vector3d::print()
    {
        std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
    }
    
    

