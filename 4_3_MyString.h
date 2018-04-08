#include <iostream>

using namespace std;

class MyString
{
private:
    char *data;
    int len;
    static int total_objects;
    static int longest_string;
public:
    MyString(const char *str = "" );        // constructor 
    
    ~MyString();                           // deconstructor 
    
    const char *getString();               // method prototypes 
    int getLength();
    void reverse();
    bool ispal();
	static int getTotal();     
	static int getLongest();  
};
