#include <iostream>

using namespace std;

int main() {
  const int age{34};
  const float height{1.67f};

  // age = 55; // Can't modify
  // height = 1.8f;

  int years{3 * age};

  cout << "age : " << age << endl;
  cout << "height : " << height << endl;
  cout << "years : " << years << endl;

  return 0;
}