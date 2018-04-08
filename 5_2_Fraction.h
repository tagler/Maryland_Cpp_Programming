class Fraction 
{
private:    
	int n;
	int d;
	
public:
	Fraction(int a = 0, int b = 1);
	
	void print();

	friend Fraction operator*(const Fraction & p, const Fraction &);
	friend Fraction operator+(const Fraction & p, const Fraction &);
};

