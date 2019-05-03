#include <iostream>
#include<math.h>

using namespace std;

class Complex {
private:
  float real,im;
public:
  Complex(float iReal,float iIm) {
    real=iReal;
    im=iIm;
  }

  friend ostream& operator<< (ostream &out, const Complex &complex);
  friend istream& operator>>(istream& cin, Complex &complex);
  friend Complex operator++(Complex& a,int);
  friend Complex operator--(Complex& a,int);
  Complex& operator=(const Complex& right) {
    this->real=right.real;
    this->im=right.im;
    return *this;
  }
  friend bool operator>(Complex& lef, Complex& rig);
  friend bool operator<(Complex& lef, Complex& rig);
  friend bool operator==(Complex& lef, Complex& rig);
};

ostream& operator<<(ostream &out, const Complex &a) {
  if (a.real != 0) {
    out << a.real;
  }
  if (a.im == 0) {
    return out;
  }
  if (a.im > 0) {
    out<<"+";
  }

  out<<a.im<<"i";
  return out;
}

istream& operator>>(istream& cin, Complex &a) {
  cin >> a.real >> a.im;
  return cin;
}

Complex operator++(Complex& a,int) {
  Complex s(a.real++,a.im);
  return s;
}

Complex operator--(Complex& a,int) {
  Complex s(a.real--,a.im);
  return s;
}

bool operator>(Complex& lef,Complex& rig) {
  return pow(lef.real*lef.real+lef.im*lef.im,0.5)>pow(rig.real*rig.real+rig.im*rig.im,0.5);
}

bool operator<(Complex& lef,Complex& rig) {
  return pow(lef.real*lef.real+lef.im*lef.im,0.5)<pow(rig.real*rig.real+rig.im*rig.im,0.5);
}

bool operator==(Complex& lef,Complex& rig) {
  return pow(lef.real*lef.real+lef.im*lef.im,0.5)==pow(rig.real*rig.real+rig.im*rig.im,0.5);
}


int main(int argc, char const *argv[]) {

  return 0;
}
