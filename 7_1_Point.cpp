
#include <iostream>

using namespace std;

#include "Point.h"

Point::Point(int x, int y)
{
    x_val = x;
    y_val = y;
}

int Point::getX()
{
    return x_val;
}

int Point::getY()
{
    return y_val;
}

void Point::print()
{
    cout << "x-value: " << x_val << " y-value: " << y_val << endl;
}
    
    
    
    
    
    
    
