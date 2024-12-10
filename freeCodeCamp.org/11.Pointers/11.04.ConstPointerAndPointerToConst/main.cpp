#include <iostream>

using namespace std;

int main() {
  // A raw variable that can be modified
  cout << endl;
  cout << "Raw variable that can be modified : " << endl;

  int number{5};  // Not constant, can change number any way we want
  cout << "number : " << number << endl;
  cout << "&number : " << &number << endl;
  // Modify
  number = 12;
  number += 7;

  // Access - Print out
  cout << "number : " << number << endl;
  cout << "&number : " << &number << endl;
  cout << endl;

  // Pointer : Can modify the data and the pointer itself
  int* p_number1{nullptr};
  int number1{23};

  p_number1 = &number1;
  cout << "Pointer and value pointed to : both modifiable : " << endl;
  cout << "p_number1 :" << p_number1 << endl;     // Address
  cout << "*p_number1 : " << *p_number1 << endl;  // 23
  cout << "number1 : " << number1 << endl;        // 23

  // Change the pointed to value through pointer
  cout << endl;
  cout << "Modifying the value pointed to p_number1 through the pointer : "
       << endl;
  *p_number1 = 432;
  cout << "p_number1 : " << p_number1 << endl;
  cout << "*p_number1  : " << *p_number1 << endl;
  cout << "number1 : " << number1 << endl;

  // Change the pointer itself to make it point somewhere else
  cout << endl;
  cout << "Changing the pointer itself to make it point somewhere else" << endl;
  int number2{56};
  p_number1 = &number2;
  cout << "p_number1 :" << p_number1 << endl;
  cout << "*p_number1  : " << *p_number1 << endl;
  cout << "number1 : " << number1 << endl;
  cout << "number2 : " << number2 << endl;
  cout << endl;

  // Pointer to const
  // Pointer pointing to constant data : You can't modify the data through
  // pointer
  cout << "Pointer is modifiable , pointed to value is constant : " << endl;
  int number3{
      632};  // Although you can omit the const on number3 here and it is still
             // going to compile, it is advised to be as explicit as possible in
             // your code and put the const in front. Make your intents CLEAR.

  const int* p_number3{&number3};  // Can't modify number3 through p_number3

  cout << "p_number3 :" << p_number3 << endl;
  cout << "*p_number3 : " << *p_number3 << endl;

  cout << endl;
  cout << "Modifying the value pointed to by p_number3 through the pointer "
          "(Compile Error) : "
       << endl;
  //*p_number3 = 444; // Compile error

  // Although we can't change what's pointed to by p_number3,
  // we can still change where it's pointing
  cout << endl;
  cout << "Changing the address pointed to by p_number3 : " << endl;
  int number4{872};
  p_number3 = &number4;

  cout << "p_number3 :" << p_number3 << endl;
  cout << "*p_number3 : " << *p_number3 << endl;

  cout << endl;

  // const keyword applies to the variable name.
  cout << "const keyword applies to a variable name : " << endl;

  int protected_var{
      10};  // Can make it const to protect it if we want.Show this

  // p_protected_var is a pointer to const data, we can't
  // modify the data through this pointer : regardless of
  // whether the data itself is declared const or not.
  const int* p_protected_var{&protected_var};

  //*p_protected_var = 55;
  protected_var = 66;
  cout << "protected_var : " << protected_var << endl;
  cout << "p_protected_var : " << p_protected_var << endl;
  cout << "*p_protected_var : " << *p_protected_var << endl;
  cout << endl;
  // You can't set up a modifiable pointer to const data though,
  // You'll get a compiler error :Invalid conversion from 'const type*' to
  // 'type*'.
  const int some_data{55};
  // int * p_some_data {&some_data}; // Compiler error.
  //*p_some_data = 66;

  // Both pointer and pointed to value are constant
  const int number5{459};
  const int* const p_number5{&number5};
  cout << "Pointer is constant, value pointed to is constant : " << endl;
  cout << "p_number5 :" << p_number5 << endl;
  cout << "*p_number5 : " << *p_number5 << endl;

  // Can't modify the pointed to value through the pointer
  cout << "Changing value pointed to by p_number5 through the pointer (Compile "
          "Error) "
       << endl;
  //*p_number5 = 222; // Error : Trying to assign to read only location

  // Can't change where the pointer is pointing to : The pointer is now itself
  // constant
  cout << "Changing the pointer p_number5 address itself (Compile Error) "
       << endl;
  int number6{333};
  // p_number5 = &number6;  // Error : Trying to assign to read only location

  cout << endl;

  // Pointer is constant (can't make it point anywhere else)
  // but pointed to value can change
  cout << "Pointer is constant, pointed to value can change : " << endl;
  int number7{982};

  int* const p_number7{&number7};

  cout << "p_number7 :" << p_number7 << endl;
  cout << "*p_number7 : " << *p_number7 << endl;
  cout << "Changing value pointed to through p_number7 pointer : " << endl;

  *p_number7 = 456;
  cout << "The value pointed to by p_number7 now is : " << *p_number7 << endl;

  int number8{2928};
  cout << "Changing the address where p_number7 is pointing (Compile Error)."
       << endl;
  // p_number7 = &number8;

  return 0;
}