#include <iostream>

using namespace std;

int main() {
  // The comma operator combines
  // two or more  expressions into a single expression,
  //  where the value of the operation is the value of its right operand

  int increment{5};
  int number1{10};
  int number2{20};
  int number3{25};
  int result =
      (number1 *= ++increment, number2 - (++increment), number3 += ++increment);

  cout << "number1: " << number1 << endl;
  cout << "number2: " << number2 << endl;
  cout << "number3: " << number3 << endl;
  cout << "result: " << result << endl;

  return 0;
}