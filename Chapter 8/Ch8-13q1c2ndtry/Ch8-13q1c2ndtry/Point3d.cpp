//
//  Point3d.cpp
//  Ch8-13q1c2ndtry
//
//  Created by Chris on 19/2/19.
//  Copyright © 2019 Chris. All rights reserved.
//
#include <iostream>
#include "Point3d.hpp"

#include "Vector3d.hpp"

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
