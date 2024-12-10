#include <iostream>

using namespace std;

void say_age(int age) {  // Parameter
  ++age;
  cout << "Hello , you are " << age << " years old! &age : " << &age << endl;
}

int main() {
  int age{23};  // Local
  cout << "age (before call) : " << age << " &age : " << &age << endl;
  say_age(age);  // Argument
  cout << "age (after call) : " << age << " &age : " << &age << endl;

  return 0;
}