#include <iostream>
#include <string>

using namespace std;

int main() {
  // Concatenating two strings : The + operator
  cout << endl;
  cout << "Concatenating two strings : " << endl;
  string str1{"Hello"};
  string str2{"World"};
  string message = str1 + " my " + str2;

  cout << "message : " << message << endl;

  // Concatenating string literals : No, No - Compiler Error
  // String literals are expanded into const char* arrays and C++ doesn't know
  // how to add arrays with the + operator. Hence the compiler error.
  /*
      std::cout << std::endl;
      std::cout << "Concatenating string literals : No,No! Compiler Error " <<
     std::endl;

      //std::string str3 { "Hello" + "World"}; // Compiler Error
      //std::string str4 = "Hello" + "World";  // Compiler Error
  */

  // A few ways around string literal concatenation
  cout << endl;
  cout << "A few ways around string literal concatenation" << endl;

  string str5{"Hello World"};  // Make the string one literal
                               // in the first place
  string str6{
      "Hello"
      " World"};  // Put the literals side by side
                  // without the + in between
  string str7{string{"Hello"} +
              " World"};  // Turn one or both into a std::string
                          // object  and do the concatenation
  cout << "str5 : " << str5 << endl;
  cout << "str6 : " << str6 << endl;
  cout << "str7 : " << str7 << endl;

  using namespace string_literals;   // necessary for the s suffix
                                     // This pollutes the namespace in main
  string str8{"Hello"s + " World"};  // Turn one or both into strings using the
                                     // s suffix . the string_literals namespace
                                     // has to be imported for this to work
  cout << "str8 : " << str8 << endl;

  // A better way to not pollute the namespace
  string str9;
  {
    using namespace string_literals;
    str9 = "Hello"s + " World";
  }
  cout << "str9 : " << str9 << endl;

  // std::string is a compound type, it has properties and behaviors
  // one of the behaviors is append. We access the behaviors using
  // the . operator after the std::string variable name
  cout << endl;
  cout << "Using the append method : " << endl;
  string str10{"Hello"};
  string str11{" World"};
  string str12 = str10.append(str11);
  cout << "str12 : " << str12 << endl;

  string str13{string{"Hello"}.append(" World")};
  cout << "str13 : " << str13 << endl;

  // Append can do more than the + operator
  // The + operator is just a convenience for basic concatenation
  cout << endl;
  cout << "Append method can do more than + operator : " << endl;
  string str14{"Hello "};
  string str15{str14.append(5, '?')};  // Appends 5 '?' characters
  cout << "str15 : " << str15 << endl;

  string str16{"The world is our shared home."};
  string str17{"Hello "};
  string str18{
      str17.append(str16, 4, 5)};  // Append a sub-section of another string
                                   // starting from index 4 , 5 characters
  cout << "str18 : " << str18 << endl;

  // Direct output
  string str19{"Hello "};
  cout << "Direct output : " << str19.append(str16, 4, 5) << endl;

  // Concatenating strings and characters
  cout << endl;
  cout << "Concatenating strings and characters : " << endl;
  string str20{"Hello"};
  string str21{"World"};
  string str22{str20 + ' ' + str21};  // The space in between is a character
  cout << "str22 : " << str22 << endl;
  string str23 = "Hello";
  (str23 += ',') += ' ';
  cout << "str23 : " << str23 << endl;
  // Another solution
  string str24 = "Hello";  // Take out the , and space we added before.
  string str25{"I am here to see you."};
  string str26{str24 + ',' + ' ' + str25};
  cout << "str26 : " << str26 << endl;

  // Appending C-strings and char arrays
  cout << endl;
  cout << "Appending C-Strings and char arrays : " << endl;
  const char message1[]{"World"};
  const char* message2{"World"};

  cout << " + char array : " << string{"Hello "} + message1 << endl;
  cout << " + C-String : " << string{"Hello "} + message2 << endl;
  cout << "append char array : " << string{"Hello "}.append(message1) << endl;
  cout << "append C-String : " << string{"Hello "}.append(message2) << endl;

  // Concatenating std::strings and numbers

  string str27{"Hello"};

  str27 +=
      to_string(67.5f);  // Treats 67 as a character code
                         // When using the += operator, C++ knows to treat the
                         // integer operand as a character code and append that
                         // to our std::string. But what if we want the 67
                         // appended to std::string literally
  cout << "str27: " << str27 << endl;

  return 0;
}