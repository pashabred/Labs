#include <string>
#include <iostream>
class Animal {
public:
  Animal(std::string iName, int iNumOfPaws, std::string iEyeColor) {
    name = iName;
    numOfPaws = iNumOfPaws;
    eyeColor = iEyeColor;
  }
  void breath() {}
  void walk() {}
protected:
  int numOfPaws;
  std::string name;
  std::string eyeColor;

};

class Cat: Animal {
public:
  Cat(std::string iName, int iNumOfPaws, std::string iEyeColor): Animal(iName,iNumOfPaws,iEyeColor) {
    name = iName;
    numOfPaws = iNumOfPaws;
    eyeColor = iEyeColor;
  }
  void meow() {
    std::cout << "meow";
  }
};

class Dog: Animal {
  Dog(std::string iName, int iNumOfPaws, std::string iEyeColor): Animal(iName,iNumOfPaws,iEyeColor) {
    name = iName;
    numOfPaws = iNumOfPaws;
    eyeColor = iEyeColor;
  }
  void bark() {
    std::cout << "bark";
  }
};
int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
