#include <iostream>

using namespace std;

class Fraction
{

private:
    int numer;
    int denom;

public:
    Fraction(int n, int d)  // constructors (should put in .cpp functions file)
    {
        numer = n;
        denom = d;
    }
    Fraction(int n) 
    {
        numer = n;
        denom = 1;
    }
    Fraction()
    {
        numer = 1;
        denom = 1;
    }
    void print()
    {
        cout << numer << "/" << denom << "\n";
    }
};

int main()
{
    Fraction f(1,3);
    Fraction g(4);
    Fraction h;
    f.print();
    g.print();
    h.print();
    return 0;
}
