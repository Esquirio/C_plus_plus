#include <iostream>

using namespace std;

int main() {
  // Overflow

  unsigned char data{250};

  ++data;
  cout << "data : " << static_cast<int>(data) << endl;

  ++data;
  cout << "data : " << static_cast<int>(data) << endl;

  ++data;
  cout << "data : " << static_cast<int>(data) << endl;

  ++data;
  cout << "data : " << static_cast<int>(data) << endl;

  ++data;
  cout << "data : " << hex << static_cast<int>(data) << endl;  // 255

  ++data;                                               // Overflow
  cout << "data : " << static_cast<int>(data) << endl;  // 256

  cout << dec;

  data = 1;

  --data;
  cout << "data : " << static_cast<int>(data) << endl;

  --data;
  cout << "data : " << static_cast<int>(data) << endl;

  return 0;
}