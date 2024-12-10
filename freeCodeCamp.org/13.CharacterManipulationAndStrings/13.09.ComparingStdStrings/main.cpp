#include <cstring>
#include <iostream>

using namespace std;

int main() {
  string hello_str{"Hello"};
  string bello_str{"Bello"};

  // Using the comparison operators
  cout << endl;
  cout << "Comparing with comparison operators : " << endl;

  cout << boolalpha;
  cout << hello_str << "==" << bello_str << " : " << (hello_str == bello_str)
       << endl;  // false
  cout << hello_str << "!=" << bello_str << " : " << (hello_str != bello_str)
       << endl;  // true
  cout << hello_str << ">" << bello_str << " : " << (hello_str > bello_str)
       << endl;  // true
  cout << hello_str << ">=" << bello_str << " : " << (hello_str >= bello_str)
       << endl;  // true
  cout << hello_str << "<" << bello_str << " : " << (hello_str < bello_str)
       << endl;  // false
  cout << hello_str << "<=" << bello_str << " : " << (hello_str <= bello_str)
       << endl;  // false

  cout << endl;
  cout << endl;
  // Can even compare std::strings to C-strings
  const char* c_string1{"Bello"};
  hello_str = "Hello";

  cout << "hello_str.size() : " << hello_str.size() << endl;
  cout << "std::strlen(c_string1) : " << strlen(c_string1) << endl;
  cout << hello_str << "==" << c_string1
       << " (C-String) : " << (hello_str == c_string1) << endl;  // false
  cout << c_string1 << " (C-String) ==" << hello_str << " : "
       << (c_string1 == hello_str) << endl;  // false
  cout << c_string1 << " (C-String) >=" << hello_str << " : "
       << (c_string1 >= hello_str) << endl;  // false
  cout << c_string1 << " (C-String) <" << hello_str << " : "
       << (c_string1 < hello_str) << endl;  // true

  cout << endl;
  cout << endl;

  /// Be careful about char arrays not terminated with null character
  hello_str = "hello";
  // const char hello_char_array[] {'h','e','l','l','o'}; //The compiler is
  // going to read past the string until it sees a null character and consider
  // that end of the string. Your comparisons may give erronous results

  const char hello_char_array[]{
      'h', 'e', 'l',
      'l', 'o', '\0'};  // It works right if you put the '\' yourself
  std::cout << hello_str
            << "== hello_char_array : " << (hello_str == hello_char_array)
            << std::endl;

  return 0;
}