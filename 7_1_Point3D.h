#ifndef POINT3D_H
#define POINT3D_H

#include <iostream>

using namespace std;

#include "Point.h"

class Point3D : public Point
{
private:
    int z_val;
    
public:
    Point3D(int x, int y, int z);
    int getZ();
    void print();
};

#endif
