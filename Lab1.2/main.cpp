#include <iostream>
#include <string>
#include "Complex.h"
#include "Complex.cpp"
#include <fstream>

using namespace std;

int main() {
	Complex *comp;
	int count, num;
	double max = -1, a;
	ifstream fin("complex.txt");
	fin >> count;
	comp = new Complex[count];
	while (count != 0)
	{
		fin >> comp[count-1].number;
		transform(&comp[count-1]);
		a = mod(comp[count-1]);
		if (a > max)
		{
			max = a;
			num = count-1;
		}
		count--;
	}
	cout << "Number " << comp[num].number << " has a maximum mod = " << max;
	delete [] comp;
	return 0;
}
