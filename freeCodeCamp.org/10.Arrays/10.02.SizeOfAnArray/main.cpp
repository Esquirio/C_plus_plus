#include <iostream>

using namespace std;

int main() {
  int scores[]{1, 2, 5};
  int count{size(scores)};

  cout << "sizeof(scores): " << sizeof(scores)
       << endl;  // Number of Bytes (3*4 Bytes)
  cout << "sizeof(scores[0]): " << sizeof(scores[0]) << endl;  // Size of int
  cout << "count: " << count << endl;  // Number of elements

  int count2{sizeof(scores) / sizeof(scores[0])};
  for (size_t i{0}; i < count2; ++i) {
    cout << "scores [" << i << "] : " << scores[i] << endl;
  }

  // Range based for loop
  for (auto i : scores) {
    cout << "value  : " << i << endl;
  }

  return 0;
}