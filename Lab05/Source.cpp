/*
MUHIRE STEVEN NIYOYITA
ENGR1405-001
September 29 2020
*/


#include<iostream> 

#include<cmath> 

using namespace std;

// This program computes the integer values for x, y, z, a ,b ,and c  as floating points according to the fucntions.

int main()
{

	float a, b, d, c;
	float  x, y, z;

	cout << "Hello" << endl;
	cout << "This program computes the values for a,b,c,x,y,and z." << endl;

	// Give the the first number.
	cout << "Give the first number: " << endl;
	cin >> a;

	// give the second number.

	cout << "Give the second number: " << endl;
	cin >> b;

	// give the third number.
	cout << "Give the second number: " << endl;
	cin >> c;

	// give the forth number.
	cout << "Give the third number" << endl;
	cin >> d;

	// calculate.
	a = a +( b * c) + d;

	x = (a + b) * (c + d);

	y = (c * x) - 4;

	b = (x * y) / pow(x, 2);

	z = c;

	y = a + b + x + y;

	x = pow(x, 2) + pow(y, 2) + pow(z, 2);

	// display the value of a.
	cout << "a: " << a << endl;

	// display the value of b.
	cout << "b: " << b << endl;

	// display the value of c.
	cout << "c: " << c << endl;

	// display the value of d.
	cout << "d:" << d << endl;

	// display the value of x.
	cout << "x: " << x << endl;
	
	// display the value of  y.
	cout << "y: " << y << endl;

	//  display the value z.
	cout << "z: " << z << endl;
	return 0;
}
