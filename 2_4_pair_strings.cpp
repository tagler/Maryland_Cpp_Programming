#include <iostream>
#include <string>
using namespace std;

// define pair data structure 
struct Pair
{
    // structure data members ------------------------------
    
    string first;
    string second;
    bool same;
    
    // structure fucntion members --------------------------
    
    void setFirst(string string1)
    {
        first = string1;
    }
    
    void setSecond(string string2)
    {
        second = string2;
        if (first == second) 
            same = true;
        else
            same = false;
    }
    
    string getFirst()
    {
        return first;
    }
    string getSecond()
    {
        return second;
    }

    bool areTheSame()
    {
        return same;
    }
};

int main(int argc, char ** argv)
{
    // get args from comand line
    string s1, s2;
    s1 = argv[1];
    s2 = argv[2];
    
    // create structure 
    Pair test_pair;
    test_pair.setFirst(s1);
    test_pair.setSecond(s2);
    
    // test print
    string s1a, s2a;
    s1a = test_pair.getFirst();
    s2a = test_pair.getSecond();
    cout << s1a;
    cout << "\n";
    cout << s2a;
    cout << "\n";
    
    // test same
    bool result;
    result = test_pair.areTheSame() ;
    cout << result;
    cout << "\n";
    
    return 0;
}

