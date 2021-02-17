//Example 6 - class Rational
//more features - method returning Rational
//creating return Rational with ctor
#include <iostream>
using namespace std;

class Rational 
{
public:
	Rational(int num, int denom)
	{ numerator = num; denominator = denom; }
	void print() { cout << numerator << '/' << denominator << endl; }

	Rational square();

private:
	int numerator;
	int denominator;
};

Rational Rational::square()
{
	/*Rational temp;
	temp.numerator = numerator * numerator;
	temp.denominator = denominator * denominator;
	return temp;*/
	// int numerator; //legal
	return Rational(numerator * numerator, denominator * denominator);
}

int main() {
	Rational num1(3, 4), num2(5, 6);
	Rational t = num1.square();
	num1.print();
	num1.square().print();

	return 0;
}
/*
3/4
9/16

*/