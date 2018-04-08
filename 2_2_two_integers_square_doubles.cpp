#include <iostream>
using namespace std;

// prototypes
void square(int & first, int & second);
void square(double & first, double & second);

int main() 
{
    // int inputs
    int x, y;
    cout << "please enter two integers: " << "\n";
    cin >> x >> y;                                      
    int x_init = x, y_init = y;
    
    // double inputs 
    double a, b;
    cout << "\n" << "please enter two doubles: " << "\n";
    cin >> a >> b;                                      
    double a_init = a, b_init = b;
    
    // square inputs 
    square(x,y);               
    square(a,b);
    
    // output
    cout << x_init << " squared is " << x << "\n";
    cout << y_init << " squared is " << y << "\n";
    cout << a_init << " squared is " << a << "\n";
    cout << b_init << " squared is " << b << "\n";
    
    return 0;
} 

// square function overloaded, pass values by reference 
void square(int & first, int & second)
{
    first = first * first;
    second = second * second;
}
void square(double & first, double & second)
{
    first = first * first;
    second = second * second;
}

