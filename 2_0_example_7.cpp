#include <iostream>
using namespace std;

struct Fraction
{
    int n,d;
    void setFraction(int numer=0, int denom=1)
    {
        n = numer;
        d = denom;
    }
    void print()
    {
        cout << n << "/" << d << "\n";
    }
};        // DO NOT FORGET SEMI-COLON HERE!!!

int main()
{
    Fraction a,b,c;
    a.setFraction(4,5);
    a.print();
    b.setFraction(10);
    b.print();
}

