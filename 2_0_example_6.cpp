#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int x = 30;
    int *pt; // defines an int pointer
    pt = &x; // gives int pointer a value (or address)
    
    cout << x << "\n";  // direct ref
    cout << *pt << "\n";  // indirect ref
    cout << pt << "\n"; // address
    
    return 0;
}
