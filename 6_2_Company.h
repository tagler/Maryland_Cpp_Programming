#ifndef COMPANY_H
#define COMPANY_H

#include "MyDate.h"
#include "MyString.h"
#include "Employee.h"

class Company
{
private:    
    MyDate inception;
    MyString companyName;
    Employee **workers;
    int numPeople;
    int capacity;
    
public:
    Company(MyDate date, MyString name, int howmany);

    const char * getCompanyName() const;
    int companySize() const;
    
    void showInceptionDate() const;
    
    Employee *getEmployee(MyString);
    void addEmployee(Employee &);
    
    void printWorkers() const;
};

#endif
