#include <string>
#include <iostream>
using namespace std;

class Human {
protected:
  string name;
  string surname;
  string midname;
  int age;
public:
  Human(string n, string s, string m, int a);
  virtual void print() = 0;
};

class Student: Human {
protected:
  bool onLesson;
public:
  Student(string n, string s, string m, int a, bool onL): Human(n, s, m, a) {
    name = n;
    surname = s;
    midname = m;
    age = a;
    onLesson = onL;
  }
  void print() {
    std::cout << "Name is " << name << midname << surname << "age" << age << "is on lesson-" << onLesson <<'\n';
  }
};

class Boss: Human {
protected:
  int numberOfWorkers;
public:
  Boss(string n, string s, string m, int a, int nW): Human(n, s, m, a) {
    name = n;
    surname = s;
    midname = m;
    age = a;
    numberOfWorkers = nW;
  }
  void print() {
    std::cout << "Name is " << name << midname << surname << "age" << age << "Number of workers is" << numberOfWorkers <<'\n';
  }
};


int main(int argc, char const *argv[]) {

  return 0;
}
