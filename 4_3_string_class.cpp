#include <iostream>

using namespace std;

#include "MyString.h"

int main()
{
    MyString empty;
    MyString text("hello");
    MyString pal("amanaplanacanalpanama");
    
    cout << text.getString() << " is ";
    cout << text.getLength() << " long ";
    text.reverse();
    cout << "The reversed string is ";
    cout << text.getString() << endl;
    if ( pal.ispal())
    {
       cout << pal.getString() << " is ";
        cout << "a palindrome " << endl;   
    }
    
    cout << "longest string: " << MyString::getLongest() << endl;
	cout << "total number of objects is " << MyString::getTotal() << endl;
    
}
