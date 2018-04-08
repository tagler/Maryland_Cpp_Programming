#include <stdio.h>

double average1(int *data, int size);
void average2(int *data, int size, double *avgPtr);

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double ans;
    double ans2;
    
    ans = average1(a,10);
    printf("average is %f \n",ans);
    
    average2(a,10,&ans2);
    printf("average is %f \n",ans2);
}

double average1(int *data, int size)
{
    int running_sum = 0;
    
    for (int i=0; i<size; i++)
    {
        running_sum = running_sum + data[i];
    }
    
    return (double) running_sum / size;
}

void average2(int *data, int size, double *avgPtr)
{
    int running_sum = 0;
    
    for (int i=0; i<size; i++)
    {
        running_sum = running_sum + data[i];
    }
    
    *avgPtr = (double) running_sum / size;
}
   
   
   
