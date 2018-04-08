#include <iostream>

using namespace std;

template <class Type>
Type minimum(const Type number1, const Type number2)
{
    if (number1 < number2)
    {
        return number2;
    }
    else
    {
        return number1;
    }
}

int main()
{
	int x = 10, y = 15;
	cout << minimum(x,y) << endl;

	double a = 10.5, b = 25.6;
	cout << minimum(a,b) << endl;

	char let1 = 'a', let2 = 'b';
	cout << minimum(let1,let2) << endl;

	return 0;
}
