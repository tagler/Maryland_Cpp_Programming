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

Fraction Fraction::operator*(const Fraction & p)
{
	Fraction temp;
	temp.n = p.n * n;
	temp.d = p.d * d;
	return temp;
}

Fraction Fraction::operator+(const Fraction & p)
{
	Fraction temp;
	temp.n = p.n * d + p.d * n ;
	temp.d = p.d * d;
	return temp;
}

