#include <iostream>

using namespace std;

int main() {
  char operation;  // +,-,*,/
  double operand1;
  double operand2;
  bool end{false};

  cout << "Welcome to Awesome Calculator" << endl;

  while ((end == false)) {
    // Do some processing
    cout << "--------------------------------------------" << endl;
    cout << "What operation do you want help with? " << endl;
    cout << "+,-,* and / are supported. Please choose one and type below"
         << endl;
    cout << "Your operation : ";
    cin >> operation;

    cout << endl;
    cout << "Please type in your two operands separated by a space and hit "
            "enter: ";
    cin >> operand1 >> operand2;
    cout << endl;

    switch (operation) {
      case '+':
        cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2)
             << endl;
        break;
      case '-':
        cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2)
             << endl;
        break;
      case '*':
        cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2)
             << endl;
        break;
      case '/':
        cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2)
             << endl;
        break;
      default:
        cout << operation << " operation not supported" << endl;
        break;
    }

    cout << "Continue ? ( Y | N) : ";

    char go_on;
    cin >> go_on;

    // end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;

    // You could also write the previous statement using if else
    if ((go_on == 'Y') || (go_on == 'y')) {
      end = false;
    } else {
      end = true;
    }
  }

  cout << "Done helping out. BYE!" << endl;

  return 0;
}