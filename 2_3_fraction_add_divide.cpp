#include <iostream>
using namespace std;

// define fraction data structure 
struct Fraction
{
    // fraction structure data members ------------------------------
    
    int n;
    int d;
    
    // fraction structure fucntion members --------------------------
    
    
    // initialize fraction 
    void initialize(int i, int j)
    {
        n = i;
        d = j;
    }
    
    // print fraction 
    void print()
    {
        cout << n << "/" << d;
    }
    
    // recip of fraction 
    void recip()
    {
        int temp = n;
        n = d;
        d = temp;
    }
    
    // multiply fractions 
    Fraction multiply(const Fraction & p)
    {
        Fraction temp;
        temp.n = n * p.n;
        temp.d = d * p.d;
        return temp;
    }
    
    // divide fractions 
    Fraction divide(const Fraction & p)
    {
        Fraction temp;
        temp.n = n * p.d;
        temp.d = d * p.n;
        return temp;
    }
    
    // add fractions 
    Fraction add(const Fraction & p)
    {
        Fraction temp;
        temp.d = d * p.d;
        temp.n = p.d*n + p.n*d;
        return temp;
    }
    
    // subtract fractions 
    Fraction subtract(const Fraction & p)
    {
        Fraction temp;
        temp.d = d * p.d;
        temp.n = p.d*n - p.n*d;
        return temp;
    }
};

int main()
{
    // define test fractions a and b
    struct Fraction a;           
    a.n = 1;
    a.d = 2;
    struct Fraction b;
    b.n = 3;
    b.d = 4;
    
    // test print of a and b
    cout << "fraction a: ";   
    a.print();
    cout << "\n";
    cout << "fraction b: ";
    b.print();
    cout << "\n";
    
    // test multiply/divide/add/substract of a*b
    struct Fraction ans;            
    ans = a.multiply(b);  
    cout << "a*b: ";
    ans.print(); 
    cout << "\n";
    ans = a.divide(b);          
    cout << "a/b: ";
    ans.print(); 
    cout << "\n";
    ans = a.add(b);          
    cout << "a+b: ";
    ans.print(); 
    cout << "\n";
    ans = a.subtract(b);            
    cout << "a-b: ";
    ans.print(); 
    cout << "\n";
    
    // test initialization fraction 
    struct Fraction new_ans;    
    int new_n, new_d;
    cout << "give new fraction n and d: ";
    cin  >>  new_n >> new_d;
    cout << "new fraction: ";
    new_ans.initialize(new_n,new_d);
    new_ans.print();
    cout << "\n";
}

