#include <stdio.h>

int main()
{
    int a, b;
    printf("please the first number: ");
    scanf("%d", &a);
    printf("please the second number: ");
    scanf("%d", &b);
    
    while (b <= a)
    {
        printf("ERROR: first number should be lower than second number \n");
        printf("re-enter the second number: ");
        scanf("%d", &b);
    }
    
    int c=a+b;
    printf("The sum of the integers between %d and %d is %d \n", a, b, c);
    
    return 0;
}
