#include <bitset>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  const int COLUMN_WIDTH{20};

  cout << endl;
  cout << "Compound bitwise assignment operators" << endl;

  unsigned char sandbox_var{0b00110100};  // 8 bits : positive numbers only

  // Print out initial value
  cout << endl;
  cout << "Initial value :  " << endl;
  cout << setw(COLUMN_WIDTH) << "sandbox_var : " << setw(COLUMN_WIDTH)
       << bitset<8>(sandbox_var) << endl;
  cout << endl;

  // Compound left shift
  cout << endl;
  cout << "Shift left 2 bit positions in place :  " << endl;
  sandbox_var <<= 2;
  cout << setw(COLUMN_WIDTH) << "sandbox_var : " << setw(COLUMN_WIDTH)
       << bitset<8>(sandbox_var) << endl;
  cout << endl;

  // Compound right shift
  cout << endl;
  cout << "Shift right 4 bit positions in place :  " << endl;
  sandbox_var >>= 4;
  cout << setw(COLUMN_WIDTH) << "sandbox_var : " << setw(COLUMN_WIDTH)
       << bitset<8>(sandbox_var) << endl;
  cout << endl;

  // Compound OR with 0000 0010 to have all lower 4 bits turned on
  cout << endl;
  cout << "Compound OR with 0000 0010 :  " << endl;
  sandbox_var |= 0b00001111;
  cout << setw(COLUMN_WIDTH) << "sandbox_var : " << setw(COLUMN_WIDTH)
       << bitset<8>(sandbox_var) << endl;
  cout << endl;

  // Compound AND with 0000 1100 to turn off the 2 lowest bits
  cout << endl;
  cout << "Compound AND with 0000 1100 :  " << endl;
  sandbox_var &= 0b000000000;
  cout << setw(COLUMN_WIDTH) << "sandbox_var : " << setw(COLUMN_WIDTH)
       << bitset<8>(sandbox_var) << endl;
  cout << endl;

  // XOR with 00000011 to turn on the 4 lowest bits again
  cout << endl;
  cout << "Compound XOR with 0000 0011 :  " << endl;
  sandbox_var ^= 0b00000011;
  cout << setw(COLUMN_WIDTH) << "sandbox_var : " << setw(COLUMN_WIDTH)
       << bitset<8>(sandbox_var) << endl;
  cout << endl;

  return 0;
}