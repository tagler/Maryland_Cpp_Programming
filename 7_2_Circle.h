#ifndef CIRCLE_H
#define CIRCLE_H

#include "MyString.h"
#include "Shape.h" 

class Circle : public Shape
{
protected:
    double radius;
    
public: 
    Circle(double r, MyString s);
    
    virtual double perimeter();
    virtual double area();
};

#endif
