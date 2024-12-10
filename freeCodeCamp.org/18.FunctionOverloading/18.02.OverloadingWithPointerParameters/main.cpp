#include <iostream>

using namespace std;

double max(double* numbers, size_t count) {
  cout << "doubles overload called" << endl;
  double maximum{0};

  for (size_t i{0}; i < count; ++i) {
    if (numbers[i] > maximum) maximum = numbers[i];
  }
  return maximum;
}

int max(int* numbers, size_t count) {
  cout << "ints overload called" << endl;

  int maximum{0};

  for (size_t i{0}; i < count; ++i) {
    if (numbers[i] > maximum) maximum = numbers[i];
  }
  return maximum;
}

int main() {
  double doubles[]{10.0, 30.0, 12.3};
  int ints[]{1, 2, 5, 2, 8, 4};

  auto result = max(doubles, size(doubles));
  cout << "result : " << result << endl;

  result = max(ints, size(ints));
  cout << "result : " << result << endl;

  return 0;
}