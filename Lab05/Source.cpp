/*
MUHIRE STEVEN NIYOYITA
ENGR1405-001
September 22 2020
*/


#include<iostream> 

#include<cmath> 


using namespace std;

int main()
{
	// This program computes the integer values for x, y, and z given integer values a,b,c, and c according to the fucntions.

	int a, b, d, c;
	long  x, y, z;

	cout << "Hello" << endl;
	cout << "This program computes the integer values for x,y, and z." << endl;

	// Give the the first number.
	cout << " give the first number: " << endl;
	cin >> a;

	// give the second number.
	cout << "give the second number: " << endl;
	cin >> b;

	// give the third number.
	cout << "give the second number: " << endl;
	cin >> c;

	// give the forth number.
	cout << "give the third number" << endl;
	cin >> d;

	// calculate x.
	x = pow(b, 2) - 4 * (a * c);

	// calculate y.
	y = pow(a, 2) + pow(c, 2) / 2;

	// calculate z.
	z = pow(d, 3) - 2 * pow(c, 2) + (3 * b) - a;

	// display x.
	cout << "x:" << x << endl;

	// display y.
	cout << "y: " << y << endl;

	//  display z.
	cout << "z:" << z << endl;
	return 0;
}
