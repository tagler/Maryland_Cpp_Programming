#include <iostream>

using namespace std;

#include "Point3D.h"

Point3D::Point3D(int x, int y, int z) : Point(x, y)
{
    z_val = z;
}

int Point3D::getZ()
{
    return z_val;
}

void Point3D::print()
{
	Point::print();
	cout << " z-value: " << z_val;
}
