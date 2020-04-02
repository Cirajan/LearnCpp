//
//  Vector3d.h
//  Ch13-q1c
//
//  Created by Chris on 19/2/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#ifndef Vector3d_h
#define Vector3d_h

#include "Point3d.h"

class Vector3d
{
private:
    double m_x, m_y, m_z;
    
public:
    Vector3d(double x = 0.0, double y = 0.0, double z = 0.0);
    
    void print();
    
    friend void Point3d::moveByVector(const Vector3d &v);
};




#endif /* Vector3d_h */
