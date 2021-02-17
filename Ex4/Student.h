//#pragma once
#ifndef STUDENT
#define STUDENT
class Student
{
//private:
	char name[20];
	int grade;
	int marks[10];
	float average;

	int sum();

public:
	void setGrade();
	int getGrade();
	void setMarks();
	void setAverage();
	float getAverage();
private:
	int x;

};
#endif
