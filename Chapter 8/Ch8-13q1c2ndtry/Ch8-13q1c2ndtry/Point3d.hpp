//
//  Point3d.hpp
//  Ch8-13q1c2ndtry
//
//  Created by Chris on 19/2/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#ifndef Point3d_hpp
#define Point3d_hpp

#include <stdio.h>

class Vector3d;


class Point3d
{
private:
    double m_x, m_y, m_z;
    
public:
    Point3d(double x = 0.0, double y = 0.0, double z = 0.0)
    : m_x(x), m_y(y), m_z(z)
    {
        
    }
    
    void print();
    
    void moveByVector(const Vector3d &v);
    
};



#endif /* Point3d_hpp */
