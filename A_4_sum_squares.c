#include <stdio.h>

int sum_of_squares(int a, int b);

int main()
{
    int a=2, b=4, c;
    c = sum_of_squares(a,b);
    printf("sum of %d squared and %d squared is %d \n", a, b, c);
    return 0;
}

int sum_of_squares(int a, int b)
{
    return a*a + b*b;
}
