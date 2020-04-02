//
//  Vector3d.hpp
//  Ch8-13q1c2ndtry
//
//  Created by Chris on 19/2/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#ifndef Vector3d_hpp
#define Vector3d_hpp

#include <stdio.h>
#include <iostream>

#include "Point3d.hpp"

class Vector3d
{
private:
    double m_x, m_y, m_z;
    
public:
    Vector3d(double x = 0.0, double y = 0.0, double z = 0.0)
    : m_x(x), m_y(y), m_z(z)
    {
        
    }
    
    void print();
    
    
    friend void Point3d::moveByVector(const Vector3d &v);
};


#endif /* Vector3d_hpp */
