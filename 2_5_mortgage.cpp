#include <iostream>
#include <cmath>
using namespace std;

// define pair data structure 
struct Mortgage
{
    // structure data members ------------------------------
    
    double amount;
    double rate;
    int years;
    
    double payment;
    double balance;
    double principal;
    double interest;
    
    //  structure fucntion members --------------------------
    
    void setValues(int yrs, double amt, double intRate)
    {
        years = yrs;
        amount = balance = amt;
        rate = intRate;
        payment = computePayment();
    }
    
    double computePayment()
    {
        double monthly_payment, J;
        J =  rate/(12*100);
        payment = amount * (J / (1 - pow(1 + J,-years*12)));
        return payment;
    }
    
    void makePayment()
    {
		interest  = balance * (1.0/12) * (rate/100);
		principal = payment - interest;
		balance = balance - principal;  
    }
    
    double getBalance()
    {
        return balance;
    }
    
    double getInterest()
    {
        return interest;
    }
    
    double getPrincipal()
    {
        return principal;
    }
    
    double getPayment()
    {
        return payment;
    }
};

int main()
{
    struct Mortgage m;
    m.setValues(30, 100000, 7.5);
    
    cout << "enter number of months to make payments: ";
    int months;
    cin >> months;
    
    double payment = m.getPayment();
    for (int i=1; i <= months; i++)
    {
        m.makePayment();
        cout << i << " " 
            << payment << " " 
            << m.getPrincipal() << " " 
            << m.getInterest() << " " 
            << m.getBalance() << "\n";
    }
    
    return 0;
}

