#include <iostream>
#include <list>
using namespace std;

class Complex {
private:
  float real,im;
public:
  Complex(float iReal,float iIm) {
    real=iReal;
    im=iIm;
  }
};

int main(int argc, char const *argv[]) {
  float real, im;
  int n;
  cout << "Enter number of the complex numbers: ";
  cin >> n;

  list<Complex> clist;
  cout<<"Enter complex numbers.\n";
  for (int i=0; i<n; i++) {
    cin >> real >>im;
    Complex c(real,im);
    clist.push_back(c);
    }
  return 0;
}
