//
//  Point3d.h
//  Ch13-q1c
//
//  Created by Chris on 19/2/19.
//  Copyright © 2019 Chris. All rights reserved.
//

#ifndef Point3d_h
#define Point3d_h

class Vector3d;

class Point3d
{
private:
    double m_x, m_y, m_z;
    
public:
    Point3d(double x = 0.0, double y = 0.0, double z = 0.0);
    
    
    void print();
    
    void moveByVector(const Vector3d &v);
    
};



#endif /* Point3d_h */
