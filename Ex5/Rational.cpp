#include "Rational.h"
//Rational::Rational(int num, int denom)
//{
//    numerator = num;
//    denominator = denom;
//}
//using initializer list
Rational::Rational(int num, int denom):numerator(num), denominator(denom)
{}

void Rational::print()
{
    cout << numerator << '/' << denominator << endl;
}
