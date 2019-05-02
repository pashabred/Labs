#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  vector<string> students;
  int n;
  string name;
  cout << "Enter number of the students ";
  cin >> n;
  for (int i=0; i<n; i++) {
    cout << "Enter student's name ";
    cin >> name;
  }
  return 0;
}
