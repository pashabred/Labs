#include <string>
#include <iostream>
class Student {
protected:
  float avGrade;
  char gender;
  std::string name;

  Student(float iAvGrade,char iGender,std::string iName) {
    avGrade = iAvGrade;
    gender = iGender;
    name = iName;
  }
public:
  void study() {
    std::cout << "studying" << '\n';
  }
};

class HeadStudent: Student {
protected:
  int contactWithTeachers;

public:
  HeadStudent(float iAvGrade,char iGender,std::string iName, int icontactWithTeachers) : Student(iAvGrade,iGender,iName) {
    avGrade = iAvGrade;
    gender = iGender;
    name = iName;
    contactWithTeachers = icontactWithTeachers;
  }

  void workAndBeUseful() {
    std::cout << "working and being useful" << '\n';
  }
};


int main(int argc, char const *argv[]) {

  return 0;
}
