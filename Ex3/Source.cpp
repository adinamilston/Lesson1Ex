//Example 3 - class Rational
//implmentation with operator ::
#include <iostream>
using namespace std;

class Rational {
public:
	int numerator;
	int denominator;

	void print();
	void multiply(Rational num);
};

void Rational::print()
{
	cout << numerator << '/' << denominator << endl;
}

void Rational::multiply(Rational num)
{
	numerator *= num.numerator;
	denominator *= num.denominator;
}

int main()
{
	Rational num1, num2;
	num1.numerator = 2;
	num1.denominator = 4;

	num2.numerator = 3;
	num2.denominator = 6;

	num1.multiply(num2);
	cout << "num1*mum2 = ";
	num1.print();

	return 0;
}
