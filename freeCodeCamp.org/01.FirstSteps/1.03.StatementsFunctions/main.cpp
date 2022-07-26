#include <iostream>

using namespace std;

int addNumbers(int first_num, int second_num){
    int res = first_num + second_num;
    return res;
}

int main (){
    int firstNumber {3}; // Statement
    int secondNumber {7}; // Statement

    int sum = addNumbers(firstNumber, secondNumber);

    cout << "First number: "  << firstNumber << endl;
    cout << "Second number: "  << secondNumber << endl;
    cout << "The sum of the two numbers is: "  << sum << endl;
    cout << "The sum of the two numbers is: "  << addNumbers(23,8) << endl;

    return 0;
}