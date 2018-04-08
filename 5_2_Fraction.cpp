#include <iostream>

using namespace std;

#include "Fraction.h"

Fraction::Fraction(int a, int b)
{
	n = a;
	d = b;
}

void Fraction::print( )
{
	cout << n  << "/"  << d << endl;
}

Fraction operator*(const Fraction & p1, const Fraction & p2)
{
	Fraction temp;
	temp.n = p1.n * p2.n;
	temp.d = p1.d * p2.d;
	return temp;
}

Fraction operator+(const Fraction & p1, const Fraction & p2)
{
	Fraction temp;
	temp.n = p1.n * p2.d + p1.d * p2.n ;
	temp.d = p1.d * p2.d;
	return temp;
}

