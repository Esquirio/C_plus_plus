#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  // Check the number of parameters
  if (argc != 4) {
    cerr << "Program can only be called with 3 arguments like: " << endl;
    cerr << "rooster a + b" << endl;
    cerr << "argc: " << argc << endl;
    cerr << "You called with: ";

    for (int i{0}; i < argc; i++) cout << " " << argv[i];
    cout << endl;

    return 0;
  }

  // Grab the operands
  double firstNumber{atof(argv[1])};
  double secondNumber{atof(argv[3])};

  if ((firstNumber == 0.0) || (secondNumber == 0.0)) {
    cout << "Please use valid numbers (different form zero) for first and "
            "second parameters."
         << endl;
    return 0;
  }

  // Grab the operation
  const char* operation{argv[2]};
  char c;

  if ((strlen(operation) == 1) &&
      ((operation[0] == '+') || (operation[0] == '-') ||
       (operation[0] == 'x') ||  // x is for multiplication. * is interpreted
                                 // by the shell and disturbing things.
       (operation[0] == '/'))) {
    c = operation[0];
  } else {
    cerr << operation << " is not valid operation." << endl;
    return 0;
  }

  // Do the operation
  switch (c) {
    case '+':
      cout << firstNumber << " + " << secondNumber << " = "
           << firstNumber + secondNumber << endl;
      break;

    case '-':
      cout << firstNumber << " - " << secondNumber << " = "
           << firstNumber - secondNumber << endl;
      break;

    case 'x':
      cout << firstNumber << " * " << secondNumber << " = "
           << firstNumber * secondNumber << endl;
      break;

    case '/':
      cout << firstNumber << " / " << secondNumber << " = "
           << firstNumber / secondNumber << endl;
      break;

    default:
      break;
  }

  return 0;
}