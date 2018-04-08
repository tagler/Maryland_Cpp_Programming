#include <stdio.h>

int main()
{
    int a, b;
    printf("please the first number: ");
    scanf("%d", &a);
    printf("please the second number: ");
    scanf("%d", &b);
    int c=a+b;
    printf("The sum of the integers between %d and %d is %d \n", a, b, c);
    
    return 0;
}
