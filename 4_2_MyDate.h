
#include <string>

using namespace std;

class MyDate
{
private:
    // data
    int dd, mm, yr;
    static string months[13];
	static int days[12];

public:
    // constructors 
    MyDate(int m, int d, int y);
    MyDate(int m, int d);
    MyDate(int m);
    MyDate();

    // methods
    void print();
    int getDay();
    int getMonth();
    int getYear();
    string getMonthAsString();
    int getDayOfYear();
    
};
