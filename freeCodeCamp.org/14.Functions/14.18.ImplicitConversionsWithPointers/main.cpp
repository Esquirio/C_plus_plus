#include <iostream>

using namespace std;

void print_sum(int* param1, int* param2) {
  cout << "sum : " << (*param1 + *param2) << endl;
}

int main() {
  int a{3};
  int b{12};

  print_sum(&a, &b);

  return 0;
}