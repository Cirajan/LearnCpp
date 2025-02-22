//
//  Point3d.cpp
//  Ch13-q1c
//
//  Created by Chris on 19/2/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#include "Point3d.h"
#include <iostream>

#include "Vector3d.h"


Point3d::Point3d(double x , double y , double z )
    : m_x(x), m_y(y), m_z(z)
    {
        
    }
    
void Point3d::print()
    {
        std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
    }
    

void Point3d::moveByVector(const Vector3d &v)
    {
    
        m_x += v.m_x;
        m_y += v.m_y;
        m_z += v.m_z;
    }
