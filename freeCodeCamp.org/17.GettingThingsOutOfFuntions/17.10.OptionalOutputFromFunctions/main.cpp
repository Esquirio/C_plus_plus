#include <iostream>

using namespace std;

int findCharacterV0(const string &str, char c) {
  // If found, return the index, else return -1
  int not_found{-1};
  for (size_t i{}; i < str.size(); i++) {
    if (str.c_str()[i] == c) return i;
  }
  return not_found;
}

int findCharacterV1(const string &str, char c, bool &success) {
  // If found set success to true, else set to false
  for (size_t i{}; str.size(); i++) {
    if (str.c_str()[i] == c) {
      success = true;
      return i;
    }
  }
  success = false;
  return -1;
}

int main() {
  string str1{"Hello World in C++20!"};
  char c{'r'};

  int index = findCharacterV0(str1, c);

  if (index != -1) {
    cout << "Found character " << c << " at index : " << index << endl;
  } else {
    cout << "Didn't find our character" << endl;
  }

  bool success{false};
  c = 'd';
  index = findCharacterV1(str1, c, success);

  if (success) {
    cout << "Found character " << c << " at index : " << index << endl;
  } else {
    cout << "Didn't find our character" << endl;
  }

  return 0;
}