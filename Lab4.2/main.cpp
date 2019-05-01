#include <iostream>
#include <cmath>

class Vector {
  float x;
  float y;

  Vector(float ix,float iy) {
    x = ix;
    y = iy;
  }
  ~Vector() {
    std::cout << "Vector is killed" << '\n';
  }
  void getABS() {
    std::cout << sqrt(pow(x, 2) + pow(y, 2)) << '\n';
  }
  void sum(Vector v1, Vector v2) {
    std::cout << "sum = (" << v1.x+v2.x << "," << v1.y+v2.y << ")" << '\n';
  }
  void dif(Vector v1, Vector v2) {
    std::cout << "sum = (" << v1.x-v2.x << "," << v1.y-v2.y << ")" << '\n';
  }
};

int main(int argc, char const *argv[]) {

  return 0;
}
