#include <iostream>
#include <cmath>

class Complex {
public:
  float im;
  float real;

  Complex(float iim, float ireal) {
      im = iim;
      real = ireal;
  }
  ~Complex() {
    std::cout << "Complex is killed" << '\n';
  }
  void getImAndReal() {
    std::cout << "imaginary " << im << " real " << real << '\n';
  }
  void getABS() {
    std::cout << sqrt(pow(im, 2) + pow(real, 2)) << '\n';
  }
};

int main(int argc, char const *argv[]) {

  return 0;
}
