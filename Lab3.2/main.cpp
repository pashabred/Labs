#include <iostream>

class Tiles {
public:
  std::string brand;
  float size_w;
  float size_h;
  float price;
  void setData(std::string b, float width, float height, float pr) {
    size_h = height;
    size_w = width;
    price = pr;
    brand = b;
  }
  void getData() {
    std::cout << "Size "<< size_h << "x" << size_w << " price " << price << " brand " << brand << '\n';
  }
};

int main(int argc, char const *argv[]) {
  Tiles t1, t2;

  std::string b1;
  float width1;
  float height1;
  float pr1;
  std::cin >> b1;
  std::cin >> width1;
  std::cin >> height1;
  std::cin >> pr1;

  t1.setData(b1,width1,height1,pr1);
  t1.getData();


  std::string b2;
  float width2;
  float height2;
  float pr2;
  std::cin >> b2;
  std::cin >> width2;
  std::cin >> height2;
  std::cin >> pr2;


  t2.setData(b2,width2,height2,pr2);
  t2.getData();
  return 0;
}
