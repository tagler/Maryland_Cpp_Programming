#include <iostream>
using namespace std;

// prototypes
void square(int & first, int & second);

int main() 
{
    int x, y;
    cout << "please enter two integers: " << "\n";
    cin >> x >> y;                                      // ask for inputs
    int x_init = x, y_init = y;
    square(x,y);                                        // run square function 
    cout << x_init << " squared is " << x << "\n";
    cout << y_init << " squared is " << y << "\n";
    return 0;
} 

// square function, pass values by reference 
void square(int & first, int & second)
{
    first = first * first;
    second = second * second;
}

