#include <iostream>
using namespace std;

int main() 
{
    int x, y;

    cout << "input a value: ";
    cin >> x;
    cout << "your input: " << x << "\n";
    
    cout << "input two values: ";
    cin >> x >> y;
    cout << x << " * " << y;
    cout << " is " << x*y << "\n";

    return 0;
}
