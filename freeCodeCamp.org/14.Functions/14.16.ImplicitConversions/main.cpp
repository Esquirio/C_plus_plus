#include <iostream>

using namespace std;

void print_sum(int a, int b) {
  int sum = a + b;
  cout << "sizeof(a) : " << sizeof(a) << endl;
  cout << "sizeof(b) : " << sizeof(b) << endl;
  cout << "sizeof(int) : " << sizeof(int) << endl;
  cout << "sizeof(double) : " << sizeof(double) << endl;
  cout << "sum : " << sum << endl;
  cout << endl;
}

int main() {
  double a{4.5};
  double b{7.8};

  print_sum(a, b);

  return 0;
}