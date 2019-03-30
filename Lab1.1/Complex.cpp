#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include "Complex.h"

using namespace std;

void sum(Complex c1, Complex c2) {
	cout << "Result: " << c1.a + c2.a << showpos << c1.b + c2.b << "i" << endl;
}
void dif(Complex c1, Complex c2) {
	cout << "Result: " << c1.a - c2.a << showpos << c1.b - c2.b << "i" << endl;
}
void com(Complex c1, Complex c2) {
	cout << "Result: " << c1.a * c2.a - c1.b * c2.b << showpos << c1.b * c2.a + c1.a * c2.b << "i" << endl;
}
void div(Complex c1, Complex c2) {
	cout << "Result: " << (c1.a * c2.a + c1.b * c2.b) / (pow(c2.a, 2) + pow(c2.b, 2)) << showpos << (c1.b * c2.a - c1.a * c2.b) / (pow(c2.a, 2) + pow(c2.b, 2)) << "i" << endl;
}
void abs(Complex c)
{
	cout << "Result: " << sqrt(pow(c.a, 2) + pow(c.b, 2)) << endl;
}
