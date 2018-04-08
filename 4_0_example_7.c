
#include <stdio.h>
#include <time.h>

int main()
{
    long int clock;
    time(&clock);
    printf("%lu\n", clock);
    
    char *date;
    date = ctime(&clock);
    printf("%s", date);
    
    struct tm *pieces;
    pieces = localtime(&clock);
    printf("The year is %d\n", pieces -> tm_year+1900);
    printf("The month is %d\n", pieces -> tm_mon+1);
    printf("The day is %d\n", pieces -> tm_mday);
}

