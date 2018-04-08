#include <iostream>
#include <string.h>

using namespace std;

#include "MyString.h"

MyString::MyString(const char *str)
{
    len = strlen(str);
	data = new char[len+1];
    strcpy(data,str);
    
    total_objects++;
    if (len > longest_string)
    {
        longest_string = len;
    }
}

MyString::~MyString()
{
    total_objects--;
    
	delete [] data;
}
    
const char *MyString::getString()
{
    return data;
}
int MyString::getLength()
{
    return len;
}

void MyString::reverse() 
{
	char temp;
	int end = len-1;
	for (int i = 0; i < end; i++)
	{
		temp = data[i];
		data[i] = data[end];
		data[end--] = temp;
	}
}

bool MyString::ispal() 
{
	MyString temp(data);
	temp.reverse();
	return( strcmp(data,temp.data) == 0 );
}

int MyString::total_objects = 0;
int MyString::longest_string = 0;

int MyString::getTotal()
{
    return total_objects;
}

int MyString::getLongest()  
{
    return longest_string;
}

    
