#include <iostream>
#include <cmath>
using namespace std;

class Date
{
Private:
    int day;
    int month;
    int year;
    
Public:
    void setMonth(int mo)
    {
        if (mo <= 0 || mo > 12)
        {
            cout << "error message, please try again!" << "\n";
        }
        else
        {
            month = mo;
        }
    }
};

int main()
{
    Date today;
    today.setMonth(135);
    today.setMonth(3);
    return 0;
}


