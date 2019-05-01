#include <iostream>

class Child {
private:
  std::string name;
  std::string surname;
  int age;
public:
  Child(std::string n, std::string sn, int a) {
    name = n;
    surname = sn;
    age = a;
  }
  ~Child() {
    std::cout << "Child is killed" << '\n';
  }

  void getData() {
    std::cout << "Name " << name << " surname " << surname << " age " << age;
  }
};

int main(int argc, char const *argv[]) {
  std::string name;
  std::string surname;
  int age;

  std::cin >> name;
  std::cin >> surname;
  std::cin >> age;
  Child ch(name,surname,age);


  ch.getData();
  return 0;
}
