#include <iostream>

using namespace std;

int main() {
  string str1{"Hello there"};

  // Size of a string : doesn't count the null terminator
  cout << "str1.size() : " << str1.size() << endl;

  // Reading characters in std::string : array index operator
  // Regular indexed loop. Can also be adapted to use while and do-while
  // This is left as an exercise.
  cout << endl;
  cout << "For loop with array index notation : " << endl;

  cout << "str1(for loop) : ";
  for (size_t i{}; i < str1.size(); ++i) {
    cout << " " << str1[i];
  }
  cout << endl;

  // Can also use range based for loop
  string str2{"Hello there"};
  cout << endl;
  cout << "Using range based for loop : " << endl;

  cout << "str2(range based for loop) : ";
  for (char value : str2) {
    cout << " " << value;
  }
  cout << endl;

  // at() syntax to target characters
  cout << endl;
  cout << "Using the std::string::at() method : " << endl;
  string str3{"Hello there"};
  cout << "str3 : (for loop with at()) : ";
  for (size_t i{}; i < str3.size(); ++i) {
    cout << " " << str1.at(i);
  }
  cout << endl;

  // Modifying with operator[] and at()
  string str4{"Hello there"};
  str4[0] = 'B';
  str4.at(1) = 'a';
  cout << "str4(modified) : " << str4 << endl;
  cout << endl;

  // Getting the front and back characters
  string str5{"The Phoenix King"};
  char& front_char = str5.front();
  char& back_char = str5.back();
  cout << "The front char in str5 is : " << front_char << endl;
  cout << "The back char in str5 is : " << back_char << endl;
  front_char = 'r';
  back_char = 'd';
  cout << "str5 : " << str5 << endl;
  cout << "The front char in str5 is : " << front_char << endl;
  cout << "The back char in str5 is : " << back_char << endl;
  cout << endl;

  // c_str method
  // doc : https://en.cppreference.com/w/cpp/string/basic_string/c_str
  // returns const char * to the wrapped string. You shouldn't use
  // it to modify data in the string.
  string str6{"The Phoenix King"};
  const char* wrapped_c_string = str6.c_str();
  cout << "Wrapped c string: " << wrapped_c_string << endl;
  // wrapped_c_string[0] = 'e'; // Compiler error

  // data()
  string str7{"Hello World"};

  char* data = str7.data();
  cout << "Wrapped c string : " << data << endl;

  data[0] = 'B';  // This also changes std::string.

  cout << "Wrapped c string (after modification): " << data << endl;
  cout << "Original string (after modification ): " << str7 << endl;

  return 0;
}