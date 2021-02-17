#pragma once
#include <iostream>
using namespace std;

class Rational
{
	//private:
	int numerator;
	int denominator;
public:
	//constructor
	Rational(){ }
	Rational(int num, int denom);
	void input() { cin >> numerator; cin >> denominator; }//inline function
	void print(); 


};
