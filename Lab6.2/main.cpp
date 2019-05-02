#include <string>
class Alive {
public:
  void breath() {

  }
};

class Fish: Alive {
protected:
  std::string typeOfFish;
public:
  void swim() {

  }
};

class Bird: Alive {
protected:
  std::string typeOfBird;
public:
  void fly() {

  }
};

class Animal: Alive {
protected:
  std::string typeofAnimal;
public:
  void walk() {

  }
};
int main(int argc, char const *argv[]) {

  return 0;
}
