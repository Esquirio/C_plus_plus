#include <iostream>

using namespace std;

int main() {
  string str1{"Hello World"};
  string str2;
  string str3{};

  // Empty
  cout << endl;
  cout << "std::string::empty() : " << endl;
  cout << "str1 is empty : " << boolalpha << str1.empty() << endl;
  cout << "str2 is empty : " << boolalpha << str2.empty() << endl;
  cout << "str3 is empty : " << boolalpha << str3.empty() << endl;

  // Size
  cout << endl;
  cout << "std::string::size() : " << endl;
  cout << "str1 contains " << str1.size() << " characters" << endl;  // 11
  cout << "str2 contains " << str2.size() << " characters" << endl;  // 0
  cout << "str3 contains " << str3.size() << " characters" << endl;  // 0

  // Length
  cout << endl;
  cout << "std::string::length() : " << endl;
  cout << "str1 contains " << str1.length() << " characters" << endl;  // 11
  cout << "str2 contains " << str2.length() << " characters" << endl;  // 0
  cout << "str3 contains " << str3.length() << " characters" << endl;  // 0

  // max_size : max number of characters a string can have on the system
  // Prints : 2147483647 on my system
  string str4{"Hello World"};
  cout << "std::string can hold " << str4.max_size() << " characters" << endl;

  // Capacity
  string str5{"Hello World"};
  string str6;
  cout << "str5 capacity : " << str5.capacity() << endl;
  cout << "str6 capacity : " << str6.capacity() << endl;

  str5 =
      "The sky is so blue, the grass is green. Kids are running all over the "
      "place";

  cout << "str5 size : " << str5.size() << endl;
  cout << "str5 capacity : " << str5.capacity() << endl;
  cout << "str6 capacity : " << str6.capacity() << endl;

  // Reserve : Update the capacity
  string str7{"Hello World"};
  cout << "str7 capacity : " << str7.capacity() << endl;  // 15
  cout << "str7 size : " << str7.size() << endl;
  str7.reserve(100);

  cout << "str7 after reserve : " << str7 << endl;
  cout << "str7 capacity : " << str7.capacity() << endl;  // 100
  cout << "str7 size : " << str7.size() << endl;

  // shrink_to_fit
  string str8{"Hello World"};  // 11
  str8.reserve(100);

  cout << "str8 capacity : " << str8.capacity() << endl;  // 100
  cout << "str8 size : " << str8.size() << endl;          // 11

  str8.shrink_to_fit();

  cout << "str8 capacity : " << str8.capacity() << endl;  // 11
  cout << "str8 size : " << str8.size() << endl;          // 11

  return 0;
}