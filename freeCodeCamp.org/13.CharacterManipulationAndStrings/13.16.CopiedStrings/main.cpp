#include <iostream>

using namespace std;

int main() {
  string message{
      "Hello world!Hello world!Hello world!Hello world!Hello world!Hello "
      "world!Hello world!Hello world!Hello world!Hello world!Hello world!Hello "
      "world!Hello world!Hello world!Hello world!vvHello world!Hello "
      "world!Hello world!Hello world!Hello world!"};
  string& message_copy{message};

  char* p1 = message.data();
  char* p2 = message_copy.data();

  cout << "&message[0] : " << (void*)p1 << endl;
  cout << "&message_copy[0] : " << (void*)p2 << endl;

  return 0;
}