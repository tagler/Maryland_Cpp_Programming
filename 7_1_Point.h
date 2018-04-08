#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class Point
{
private:
    int x_val;
    int y_val;
    
public:
    Point(int x, int y);
    int getX();
    int getY();
    void print();
};

#endif
