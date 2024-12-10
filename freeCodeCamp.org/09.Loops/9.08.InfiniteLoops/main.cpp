#include <iostream>

using namespace std;

int main() {
  // Infinite loop : for loop
  /*
  for(size_t i{};true ; ++i){
      cout << i <<  " : I love C++" << endl;
  }
  */

  // Infinite loop : while loop
  /*
  size_t i{0};
  while(true){
      cout << i  << " : I love C++" << endl;
      ++i;
  }
  */

  // Infinite loop : do while loop

  size_t i{0};

  do {
    cout << i << " : I love C++" << endl;
    ++i;
  } while (true);

  return 0;
}