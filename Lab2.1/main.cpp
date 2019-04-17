#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void greet() {
  cout << "Howdy!";
}
void farewill() {
  cout << "Be you well, pal!";
}


int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int randd = rand() % 10 + 1;
  void (*pf)();
  if (randd > 5) {
    pf = greet;
    pf();
  }
  else {
    pf = farewill;
    pf();
  }

  return 0;
}
