
#include <iostream>

using namespace std;

#include "Employee.h"

Employee::Employee(MyString n, MyDate d)
{
    hiredate = d;
    name = n;
}

MyString Employee::getName() const
{
    return name;
}

MyDate Employee::getDate() const
{
    return hiredate;
}

void Employee::print() const
{
	hiredate.print();
	cout << name.getString() << endl;
}

