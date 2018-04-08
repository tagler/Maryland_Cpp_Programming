#include <stdio.h>

struct Fraction 
{
	int n;
	int d;
};

void swap(struct Fraction *left, struct Fraction *right);


int main()
{
    struct Fraction a, b;
    a.n = 1;
    a.d = 3;
    b.n = 2;
    b.d = 3;
    printf("before swap: %d %d %d %d \n", a.n, a.d, b.n, b.d);
    swap(&a,&b);
    printf("after swap: %d %d %d %d \n", a.n, a.d, b.n, b.d);
}

void swap(struct Fraction *left, struct Fraction *right)
{
    struct Fraction temp = *left;
    *left = *right;
    *right = temp;
}


   
   
