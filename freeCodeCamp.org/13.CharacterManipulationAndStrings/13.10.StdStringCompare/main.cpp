#include <iostream>

using namespace std;

int main() {
  // Compare (1)
  // int compare( const basic_string& str ) const noexcept;(1)
  // Compares this string to str.
  string str1{"Hello"};
  string str2{"World"};

  cout << "str1 : " << str1 << endl;
  cout << "str2 : " << str2 << endl;
  cout << "str1.compare(str2) : " << str1.compare(str2) << endl;  // negative
  cout << "str2.compare(str1) : " << str2.compare(str1) << endl;  // positive
  cout << "str1.compare(str1) : " << str1.compare(str1) << endl;  // zero
  cout << endl;

  // Compare (2)
  // int compare( size_type pos1, size_type count1,const basic_string& str )
  // const; (2) Compares a  substring  of this string(from pos1, going count1
  // positions) to str
  string str4 = "Hello";
  string str3{"Hello World"};
  cout << "Comparing 'World' to 'Hello' : " << str3.compare(6, 5, str4)
       << endl;  // 1
  cout << "Comparing 'Hello' to 'Hello' : " << str3.compare(0, 5, str4)
       << endl;  // 0
  cout << endl;

  // Compare (3)
  // int compare( const CharT* s ) const;(4)
  // Compares this string to the null-terminated character sequence beginning
  // at the character pointed to by s.
  string str5{"Hello"};
  const char* message{"World"};
  cout << "Comparing Hello to World : " << str5.compare(message) << endl;  //-1
  cout << "Comparing Hello to World : " << str5.compare("World") << endl;  //-1

  return 0;
}