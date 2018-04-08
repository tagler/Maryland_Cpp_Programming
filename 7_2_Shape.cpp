#include <iostream>

using namespace std;

#include "Shape.h"
#include "MyString.h"

Shape::Shape(MyString s)
{
    shapename = s;
}

const char * Shape::getName()
{
    return shapename.getString();
}
