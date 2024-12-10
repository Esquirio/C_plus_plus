#include <iostream>

using namespace std;

int* maxReturnPointer(int* a, int* b) {
  if (*a > *b)
    return a;
  else
    return b;
}

int* maxInputByValue(int a, int b) {
  if (a > b)
    return &a;  // Pointer to local variable returned
  else
    return &b;  // Pointer to local variable returned
}

int* sum(int* a, int* b) {
  int result = *a + *b;
  return &result;  // Pointer to local variable returned
}

int main() {
  /* int x{56};
  int y{45};
  int* p_max = maxReturnPointer(&x,&y);
  cout << "x : " << x << endl;
  cout << "y : " << y << endl;
  cout << "*p_max : " << *p_max << endl;
  ++(*p_max);
  cout << "-----" << endl;
  cout << "x : " << x << endl;
  cout << "y : " << y << endl;
  cout << "*p_max : " << *p_max << endl; */

  /* int x{56};
  int y{45};
  int* p_sum = sum(&x,&y);
  cout << *p_sum << endl; */

  int x{56};
  int y{45};
  int* p_sum = maxInputByValue(x, y);
  cout << *p_sum << endl;

  cout << "Done!" << endl;

  return 0;
}