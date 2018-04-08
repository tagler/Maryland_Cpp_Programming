#ifndef SQUARE_H
#define SQUARE_H

#include "MyString.h"
#include "Shape.h" 

class Square : public Shape
{
protected:
    double side;
    
public: 
    Square(double l, MyString ss);
    
    virtual double perimeter();
    virtual double area();
};

#endif
