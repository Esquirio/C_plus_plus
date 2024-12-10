#include <iostream>

using namespace std;

int main() {
  int var1{123};  // Declare and initialize
  cout << "var1: " << var1 << endl;

  var1 = 55;  // Assign
  cout << "var1: " << var1 << endl;

  cout << endl << "----------------" << endl;

  double var2{44.55};

  cout << "var2: " << var2 << endl;

  cout << endl << "----------------" << endl << endl;

  bool state{false};
  cout << boolalpha;
  cout << "state: " << state << endl;

  state = true;  // Assign

  cout << "state: " << state << endl;

  // Auto type deduction
  // Careful about auto assignments
  auto var3{333u};  // Declare and initialize with type deduction

  var3 = -22;  // Assign negative number, DANGER!

  cout << "var3: " << var3 << endl;

  return 0;
}