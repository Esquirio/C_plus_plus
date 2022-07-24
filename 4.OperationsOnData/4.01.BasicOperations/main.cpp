#include <iostream>

using namespace std;

int main (){
    // Addition
    int number1 {2};
    int number2 {7};

    int result = number1 + number2;
    cout << "result: "  << result << endl;

    // Subtraction
    result = number2 - number1;
    cout << "result: "  << result << endl;

    result = number1 - number2;
    cout << "result: "  << result << endl;

    // Multiplication
    result = number1 * number2;
    cout << "result: "  << result << endl;

    // Division
    result = number2 / number1;
    cout << "result: "  << result << endl;

    // Modulus
    result = number2 % number1; // 7 % 2
    cout << "result: "  << result << endl;

    result = 31 % 10;
    cout << "result: "  << result << endl;

    return 0;
}