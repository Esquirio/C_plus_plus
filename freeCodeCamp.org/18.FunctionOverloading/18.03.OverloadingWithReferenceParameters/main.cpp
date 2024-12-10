#include <iostream>
#include <string>

using namespace std;

// Ambiguous calls
void say_my_name(const string& name) {
  cout << "Your name is (ref) : " << name << endl;
}

/* void say_my_name( string name){
    cout << "Your name is (non ref) : " << name << endl;
} */

// Implicit conversions with references

double max(double a, double b) {
  cout << "double max called" << endl;
  return (a > b) ? a : b;
}

// int& max(int& a, int& b){
const int& max(const int& a, const int& b) {
  cout << "int max called" << endl;
  return (a > b) ? a : b;
}

int main() {
  const string test{"hello"};
  double a{6};
  double b{9};

  // max(test);

  auto result = max(a, b);

  return 0;
}