class Fraction 
{
private:    
	int n;
	int d;
	
public:
	Fraction(int a = 0, int b = 1);
	
	void print();

	Fraction operator*(const Fraction & p);
	Fraction operator+(const Fraction & p);
};

