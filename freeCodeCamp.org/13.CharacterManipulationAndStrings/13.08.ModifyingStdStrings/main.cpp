#include <iostream>

using namespace std;

int main() {
  // Clear : Removes all characters from the string.
  string str1{"The Lion Dad"};

  cout << "str1 is : " << str1 << endl;
  cout << "str1 size : " << str1.size() << endl;
  cout << "str1 capacity : " << str1.capacity() << endl;

  str1.clear();
  cout << endl;
  cout << "str1 is : " << str1 << endl;
  cout << "str1 size : " << str1.size() << endl;
  cout << "str1 capacity : " << str1.capacity() << endl;

  // Insert (1)
  //(1)basic_string& insert( size_type index, size_type count, CharT ch );
  // Inserts count characters in the string starting at index index
  string str2{"122"};
  cout << "str2 : " << str2 << endl;

  str2.insert(1, 4, '3');  // Count can be 1,2,5,..

  cout << endl;
  cout << "str2 : " << str2 << endl;  // 1322
  cout << endl;

  // Insert (2)
  //(2)basic_string& insert( size_type index, const CharT* s );
  // Inserts null-terminated character string pointed to by s
  // at the position index. The length of the string is determined
  // by the first null character.
  string str3{"Hello!"};
  const char* txt3{" World"};

  cout << "str3 : " << str3 << endl;  // Hello

  str3.insert(5, txt3);

  cout << endl;
  cout << "str3 : " << str3 << endl;  // Hello World!
  cout << endl;

  // Insert (3)
  //(3)basic_string& insert( size_type index, const CharT* s, size_type count );
  // Inserts the characters in the range [s, s+count) at the position index.
  // The range can contain null characters.
  string str4{"Hello!"};
  const char* txt4{" World Health Organization"};

  cout << "str4 : " << str4 << endl;
  str4.insert(5, txt4, 6);

  cout << endl;
  cout << "str4 : " << str4 << endl;
  cout << endl;

  // Insert (4)
  //(4)basic_string& insert( size_type index, const basic_string& str );
  // Inserts string str at the position index
  string str5{" World"};
  string str6{"Hello!"};

  cout << "str6 : " << str6 << endl;
  str6.insert(5, str5);

  cout << endl;
  cout << "str6 : " << str6 << endl;
  cout << endl;

  // Insert (5)
  //(5)basic_string& insert( size_type index, const basic_string& str,
  //                   size_type index_str, size_type count = npos);
  // Inserts a string, obtained by str.substr(index_str, count) at the position
  // index
  string str7{"Hello!"};
  string str8{"Statistical Analysis of the World Population."};

  cout << "str7 : " << str7 << endl;
  str7.insert(5, str8, 27, 6);

  cout << endl;
  cout << "str7 : " << str7 << endl;
  cout << endl;

  // Erase
  // basic_string& erase( size_type index = 0, size_type count = npos );
  // Starting at index index, erase count characters from the string
  // Notice that this function returns a reference
  string str9{
      "Hello World is a message used to start off things when learning "
      "programming!"};
  ;
  str9.erase(11, str9.size() - 12);
  cout << "str9 : " << str9 << endl;

  // Reset str9.
  str9 =
      "Hello World is a message used to start off things when learning "
      "programming!";

  // Direct print out.Because this method returns a reference to the modified
  // string
  cout << "str9 : " << str9.erase(11, str9.size() - 12) << endl;

  // push_back
  // void push_back( CharT ch );
  // Appends the given character ch to the end of the string.
  string str10{"Hello World"};
  str10.push_back('!');
  cout << "str10 : " << str10 << endl;

  // pop_back
  // void pop_back();
  // Removes the last character from the string.
  string str11{"Hello World!!"};
  str11.pop_back();
  cout << "str11 : " << str11 << endl;

  return 0;
}