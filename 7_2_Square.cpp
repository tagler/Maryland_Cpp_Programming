#include <iostream>

using namespace std;

#include "Square.h" 
#include "MyString.h"

Square::Square(double l, MyString ss) : Shape(ss)
{
    side = l;
}

double Square::perimeter()
{
	return 4 * side;
}

double Square::area()
{
	return side * side;
}
