#include <iostream>
#include <string>
#include "Complex.h"
#include "Complex.cpp"

using namespace std;

int main() {
	struct Complex c1, c2;
	char oper;
	cout << "Which operation you wanna perform ? (+ / | (modulus) * -) ";
	cin >> oper;
	switch (oper) {
		case '|' :
			cout << "Enter real part of complex number: ";
			cin >> c1.a;
			cout << "Enter imaginary part of complex number: ";
			cin >> c1.b;
			abs(c1);
			break;
		case '+' :
			cout << "Enter real part of the first complex number: ";
			cin >> c1.a;
			cout << "Enter imaginary part of first complex number: ";
			cin >> c1.b;
			cout << "Enter real part of the second complex number: ";
			cin >> c2.a;
			cout << "Enter imaginary part of second complex number: ";
			cin >> c2.b;
			sum(c1,c2);
			break;
		case '/' :
			cout << "Enter real part of the first complex number: ";
			cin >> c1.a;
			cout << "Enter imaginary part of first complex number: ";
			cin >> c1.b;
			cout << "Enter real part of the second complex number: ";
			cin >> c2.a;
			cout << "Enter imaginary part of second complex number: ";
			cin >> c2.b;
			div(c1,c2);
		break;
		case '*' :
			cout << "Enter real part of the first complex number: ";
			cin >> c1.a;
			cout << "Enter imaginary part of first complex number: ";
			cin >> c1.b;
			cout << "Enter real part of the second complex number: ";
			cin >> c2.a;
			cout << "Enter imaginary part of second complex number: ";
			cin >> c2.b;
			com(c1,c2);
			break;
		case '-' :
			cout << "Enter real part of the first complex number: ";
			cin >> c1.a;
			cout << "Enter imaginary part of first complex number: ";
			cin >> c1.b;
			cout << "Enter real part of the second complex number: ";
			cin >> c2.a;
			cout << "Enter imaginary part of second complex number: ";
			cin >> c2.b;
			dif(c1,c2);
		break;
	}
	return 0;
}
