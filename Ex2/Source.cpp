//Example 2 class Rational
//defining and implemeting inline method (function)
#include <iostream>
using namespace std;

class Rational {
public:
	int numerator;
	int denominator;

	void print() { cout << numerator << '/' << denominator << endl; }
};

int main() {
	Rational  num1, num2;
	num1.numerator = 2;
	num1.denominator = 4;

	num2.numerator = 3;
	num2.denominator = 6;

	num1.print();
	num2.print();

	return 0;
}
