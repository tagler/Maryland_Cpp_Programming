#include <iostream>
#include <time.h>

using namespace std;

class MyDate
{
private:
    // data
    int dd, mm, yr;
   
public:
    // constructors 
    MyDate(int m, int d, int y)
    {
        dd = d;
        mm = m;
        yr = y;
    }
    MyDate(int m, int d)
    {
        dd = d;
        mm = m;
	    long int clock;
	    time(&clock);
	    struct tm *pt;
	    pt = localtime(&clock);
	    yr = pt -> tm_year+1900;
    }
    MyDate(int m)
    {
        mm = m;
	    long int clock;
	    time(&clock);
	    struct tm *pt;
	    pt = localtime(&clock);
	    dd = pt -> tm_mday;
	    yr = pt -> tm_year+1900;
    }
    MyDate()
    {
	    long int clock;
	    time(&clock);
	    struct tm *pt;
	    pt = localtime(&clock);
	    dd = pt -> tm_mday;
	    mm = pt -> tm_mon+1;
	    yr = pt -> tm_year+1900;
    }
    
    // methods
    void print()
    {
        cout << "date: " << mm << "/" << dd << "/" << yr << "\n";
    }
    int getDay()
    {
        return dd;
    }
    int getMonth()
    {
        return mm;
    }
    int getYear()
    {
        return yr;
    }
};

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
    
    return 0;
}
