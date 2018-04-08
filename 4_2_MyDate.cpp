#include <iostream>
#include <time.h>
#include <string> 

using namespace std;

#include "MyDate.h"

MyDate::MyDate(int m, int d, int y)
{
    dd = d;
    mm = m;
    yr = y;
}
    
MyDate::MyDate(int m, int d)
{
    dd = d;
    mm = m;
    long int clock;
    time(&clock);
    struct tm *pt;
    pt = localtime(&clock);
    yr = pt -> tm_year+1900;
}

MyDate::MyDate(int m)
{
    mm = m;
    long int clock;
    time(&clock);
    struct tm *pt;
    pt = localtime(&clock);
    dd = pt -> tm_mday;
    yr = pt -> tm_year+1900;
}

MyDate::MyDate()
{
    long int clock;
    time(&clock);
    struct tm *pt;
    pt = localtime(&clock);
    dd = pt -> tm_mday;
    mm = pt -> tm_mon+1;
    yr = pt -> tm_year+1900;
}
    
void MyDate::print()
{
    cout << "date: " << mm << "/" << dd << "/" << yr << "\n";
}
    
int MyDate::getDay()
{
    return dd;
}
    
int MyDate::getMonth()
{
    return mm;
}
    
int MyDate::getYear()
{
    return yr;
}

string MyDate::months[] = { "", "Jan", "Feb", "Mar", "Apr", "May", "June", 
                            "July","Aug","Sept", "Oct", "Nov", "Dec"};
	
int MyDate::days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

string MyDate::getMonthAsString()
{
    return months[mm];
}

int MyDate::getDayOfYear()
{
    return days[mm-1];
}


