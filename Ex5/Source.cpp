//Example 5 : class Rational
//constructor
#include "Rational.h"


int main() {

	Rational num0;
	
	 Rational  num1; // ERROR: no default constructor
	Rational num1(1, 2);
	Rational num2(3, 4), num3(5, 6);
	cout << "entor mone and mechane" << endl;
	int m, n;
	cin >> m >> n;
	Rational r1(m, n);
	

	num1.print();
	num2.print();
	num3.print();

	return 0;
}
//1 / 2
//3 / 4
//5 / 6
