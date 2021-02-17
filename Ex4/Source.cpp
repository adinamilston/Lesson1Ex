//Example 4 : class Student
//h and cpp files
#include <iostream> 
#include "Student.h" 
using namespace std;

int main()
{
	int x;
	int y = 9;
	Student me;
	// me.grade=3;
	//ERROR: cannot access private member

	me.setGrade();
	// cout<<me.grade;
	//ERROR: cannot access private member

	cout << me.getGrade() << endl;

	me.setMarks();
	me.setAverage();
	cout << me.getAverage() << endl;

	return 0;
}