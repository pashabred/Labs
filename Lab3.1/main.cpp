#include <iostream>

class Child {
private:
  std::string name;
  std::string surname;
  int age;
public:
  void setData(std::string n, std::string sn, int a) {
    name = n;
    surname = sn;
    age = a;
  }
  void getData() {
    std::cout << "Name " << name << " surname " << surname << " age " << age;
  }
};

int main(int argc, char const *argv[]) {
  std::string name;
  std::string surname;
  int age;

  Child ch;
  std::cin >> name;
  std::cin >> surname;
  std::cin >> age;

  ch.setData(name,surname,age);
  ch.getData();
  return 0;
}
