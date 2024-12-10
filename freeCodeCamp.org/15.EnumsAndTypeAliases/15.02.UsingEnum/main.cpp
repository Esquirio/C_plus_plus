#include <iostream>
#include <string_view>

using namespace std;

// Declare an enum type
// The default type associated with enum classes with C++ is int
// unsigned char : 0 ~ 255
enum class Month : char {
  Jan,
  Feb,
  Mar,
  Apr,
  May,
  Jun,
  Jul,
  Aug,
  Sep,
  Oct,
  Nov,
  Dec
};

string_view monthToString(Month month) {
  /* switch (month)
  {
      case Month::Jan: return "January";
      case Month::Feb: return "February";
      case Month::Mar: return "March";
      case Month::Apr: return "April";
      case Month::May: return "May";
      case Month::Jun: return "June";
      case Month::Jul: return "July";
      case Month::Aug: return "August";
      case Month::Sep: return "September";
      case Month::Oct: return "October";
      case Month::Nov: return "November";
      case Month::Dec: return "December";
      default: return "None";
  } */

  switch (month) {
    using enum Month;
    case Jan:
      return "January";
    case Feb:
      return "February";
    case Mar:
      return "March";
    case Apr:
      return "April";
    case May:
      return "May";
    case Jun:
      return "June";
    case Jul:
      return "July";
    case Aug:
      return "August";
    case Sep:
      return "September";
    case Oct:
      return "October";
    case Nov:
      return "November";
    case Dec:
      return "December";
    default:
      return "None";
  }
}

int main() {
  Month month{Month::Apr};
  cout << "month : " << monthToString(month) << endl;
  return 0;
}