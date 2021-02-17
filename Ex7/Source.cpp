#include <iostream>
using namespace std;
/*
Class Point
initializer list
cctor
dtor
*/
class Point
{
	int x = 0;
	int y = 0;
public:
	Point() { cout << " in  ctor\n"; }
	//ctor with initializer list
	Point(int _x, int _y) : x(_x), y(_y) { cout << " in  ctor\n"; }

	//copy constructor
	Point(const Point& p) :x(p.x), y(p.y) { cout << " in cctor\n"; }
	~Point() { cout << "calling destructor"; }//destructor - äïøñ

	//X(const X& x) - COPY CONSTRUCTOR
	//Point(Point p):x(p.x), y(p.y) { cout << " in cctor\n"; }//not good - think why?!
	
	//Point& operator=(const Point& rhs) { x = rhs.x; y = rhs.y; cout << " enter operator=\n"; return *this; }
	
	
	void print() {
		cout << " ( " << x << "," << y << " ) " << endl;
	}
};

int main()
{
	Point p1;
	Point p2(4, 5);
	p1.print();
	p2.print();

	int x = 9;
	int y = x;
	
	Point p4(p2);
	Point p3 = p2;
	p3.print();
	return 0;
	
}
/*
 in  ctor
 in  ctor
 ( 0,0 )
 ( 4,5 )
 in cctor
 in cctor
 ( 4,5 )
calling destructorcalling destructorcalling destructorcalling destructor
*/