#include <iostream>
#include <time.h>
#include <string> 

using namespace std;

#include "MyDate.h"

int main()
{
    MyDate test1(12,5,1942);
    MyDate test2(12,5);
    MyDate test3(12);
    MyDate test4;
    test1.print();
    test2.print();
    test3.print();
    test4.print();
    
    cout << "month: " << test1.getMonth() << "\n";
    cout << "day: " << test1.getDay() << "\n";
    cout << "year: " << test1.getYear() << "\n";
    
    cout << "string month name: " << test1.getMonthAsString() << "\n";
    cout << "get days of month: " << test1.getDayOfYear() << "\n";
    
    return 0;
}
