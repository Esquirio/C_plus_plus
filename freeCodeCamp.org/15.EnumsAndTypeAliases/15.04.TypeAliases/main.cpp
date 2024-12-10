#include <iostream>

using namespace std;

int main() {
  using HugeInt = unsigned long long int;  // Recommended in modern C++
  // typedef unsigned long long int HugeInt; // Older C++ syntax for type
  // aliases
  HugeInt hugeNumber{123378997};

  cout << "sizeof(unsigned long long int): " << sizeof(unsigned long long int)
       << endl;
  cout << "sizeof(HugeInt): " << sizeof(HugeInt) << endl;

  cout << "huge number: " << hugeNumber << endl;

  return 0;
}