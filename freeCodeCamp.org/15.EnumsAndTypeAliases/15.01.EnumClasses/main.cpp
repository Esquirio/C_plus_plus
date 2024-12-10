#include <iostream>

using namespace std;

// Declare an enum type
// The default type associated with enum classes with C++ is int
// unsigned char : 0 ~ 255
enum class Month : char {
  Jan = 1,
  January = Jan,
  Feb,
  Mar,
  Apr,
  May,
  Jun,
  Jul,
  Aug,
  Sep,
  Oct = 100,
  Nov,
  Dec
};

int main() {
  Month month{Month::Jan};
  cout << "mouth: " << static_cast<int>(month) << endl;

  month = Month::Feb;
  cout << "mouth: " << static_cast<int>(month) << endl;

  month = Month::Mar;
  cout << "mouth: " << static_cast<int>(month) << endl;

  cout << "sizeof(mouth): " << sizeof(month) << endl;

  return 0;
}