#include <iostream>

using namespace std;

int max(int& a, int& b) {
  cout << "max with int& called" << endl;

  // Can change a and b through the reference
  // a = 200;// This change will be visible outside the function

  return (a > b) ? a : b;
}

int max(const int& a, const int& b) {
  cout << "max with const int& called" << endl;

  // Can NOT change a and b through the reference
  // a = 200; // Will give a compiler error.
  return (a > b) ? a : b;
}

int main() {
  int a{45};
  int b{85};

  int max1 = max(a, b);
  cout << "max1 : " << max1 << endl;

  const int& ref_a = a;
  const int& ref_b = b;

  int max2 = max(ref_a, ref_b);
  cout << "max2 : " << max2 << endl;

  return 0;
}