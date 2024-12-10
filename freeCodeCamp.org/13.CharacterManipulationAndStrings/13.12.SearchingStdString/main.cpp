#include <iostream>

using namespace std;

int main() {
  // Find(1)
  // std::string::find()
  // size_type find( const basic_string& str, size_type pos = 0 ) const
  // Finds the starting index where the str substring is found in
  // the string where we call the method.
  string string1{"Water was poured in the heater"};
  string search_for{"ter"};

  size_t found_pos = string1.find(search_for);
  cout << "find('ter') : index [" << found_pos << "]" << endl;  // index : 2

  // find red
  search_for = "red";
  found_pos = string1.find(search_for);
  cout << "find('red') : index [" << found_pos << "]" << endl;  // 13

  // Find something that isn't there
  search_for = "chicken";
  found_pos = string1.find(search_for);
  cout << "find('chicken') : index [" << found_pos << "]"
       << endl;  // huge number

  // std::string::npos
  cout << "npos : " << string::npos << endl;
  size_t large = -1;
  cout << "large : " << large << endl;
  cout << endl;
  cout << endl;

  // Using std::string::npos to check if search was successful or failed
  string string2{"Water was poured in the heater"};
  string search_for2{"red"};

  size_t found_pos2 = string1.find(search_for2);
  if (found_pos2 == string::npos) {
    cout << "Could not find the string 'red' : " << endl;
  } else {
    cout << "'red' found starting at position : " << found_pos2 << endl;
  }

  // Search for chicken and check result against std::string::npos
  search_for2 = "chicken";
  found_pos2 = string1.find(search_for2);

  if (found_pos2 == string::npos) {
    cout << "Could not find the string 'chicken'. " << endl;
  } else {
    cout << "'chicken' found starting at position : " << found_pos2 << endl;
  }
  cout << endl;
  cout << endl;

  // Find(2)
  // Can specify the position where we want the search to start
  // using the second parameter of the method
  string string3{"Water was poured in the heater"};
  string search_for3{"ter"};
  size_t found_pos3 = string1.find(search_for3);
  cout << "ter found at position : " << found_pos3 << endl;

  found_pos3 = string1.find(search_for3, 0);
  cout << "ter found at position : " << found_pos3 << endl;

  found_pos3 = string1.find(search_for3, 10);
  cout << "ter found at position : " << found_pos3 << endl;

  cout << endl;
  cout << endl;

  // Find(3)
  // size_type find( const CharT* s, size_type pos = 0 ) const;
  // Finds the first substring equal to the character string pointed to by s
  // pos : the position where we start searching in the std::string

  // Find(3)
  // size_type find( const CharT* s, size_type pos = 0 ) const;
  // Finds the first substring equal to the character string pointed to by s
  // pos : the position where we start searching in the std::string

  string string4 = "beer is packaged by her in beer cans around here.";
  const char* c_string4{"her"};

  size_t found_pos4 = string4.find(c_string4, 2);
  if (found_pos4 != string::npos) {
    cout << c_string4 << " found at position : " << found_pos4 << endl;
  } else {
    cout << "Could not find the string :  " << (c_string4) << endl;
  }

  return 0;
}