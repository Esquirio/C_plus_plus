#include <iostream>

using namespace std;

int main() {
  constexpr bool condition{false};
  if constexpr (condition)
    cout << "Condition is true" << endl;
  else
    cout << "Condition is false" << endl;

  return 0;
}