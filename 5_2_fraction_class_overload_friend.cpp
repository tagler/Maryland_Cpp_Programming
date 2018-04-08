

#include "Fraction.h"

int main()
{
	Fraction a(2,3), b(5,2);
	Fraction c, d;
	
  	c = (a + b);
  	c.print();
  	
  	d = a * b;
  	d.print();
	
	return 0;
}
