#include <stdio.h>
#include <string.h>

struct Account
{
    // data
    char name[20];
    int account;
    double balance;
};

struct Account initialize(char n[], int a, double bal)
{
    struct Account temp;
    
    strcpy(temp.name, n);
    temp.account = a;
    temp.balance = bal;
    
    return temp;
}

struct Account add(struct Account temp, double dep)
{
    temp.balance = temp.balance + dep;
    return temp;
}

void print(struct Account temp)
{
    printf("name: %s, account number: %d, balance: %f \n", temp.name, 
               temp.account, 
               temp.balance);
}

int main()
{
    struct Account temp;
    temp = initialize("dave",100,1000000);
    print(temp);
    temp = add(temp, 500000);
    print(temp);
}

