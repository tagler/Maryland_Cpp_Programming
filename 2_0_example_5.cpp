#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int a, b;
    
    cout << "input two numbers: ";
    cin >> a >> b;
    
    int max = a > b ? a : b;
    cout << "the larger of " << a << " and " << b << " is: " << max << "\n";

    return 0;
}
