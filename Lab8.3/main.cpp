#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  queue<int> lineOfCars;

  cout<<"Enter number of cars: " ;
  int n;
  cin >> n;

  for (int i=1;i<=n;i++) {
    lineOfCars.push(i);
  }
  cout << "Cars were washed in next order:" << endl;
  for (int i=0; i<n; i++){
    cout << "Car N" << lineOfCars.front() << endl;
    lineOfCars.pop();
  }
  return 0;
}
