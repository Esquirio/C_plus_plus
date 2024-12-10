#include <iostream>

using namespace std;

int main() {
  // The bad way to do things
  string todo_list{
      "\tClean the house\n\tWalk the dog\n\tDo laundry\n\tpick groceries"};
  string windows_path{"D:\\sandbox\\testProject\\hello.txt"};
  string linux_path{"/home/username/files/hello.txt"};
  string hint{" \"\\\\\" escapes a backslash character like \\."};

  cout << "todo_list : " << endl;
  cout << todo_list << endl;
  cout << "windows_path : " << windows_path << endl;
  cout << "linux_path : " << linux_path << endl;
  cout << "hint : " << hint << endl;

  // Use raw string literals
  string to_do_list{R"(    Clean the house
    Walk the dog
    Do laundry
    Pick groceries)"};
  cout << "to_do_list : " << endl;
  cout << to_do_list << endl;

  // Raw string literals with assignments
  string to_do_list2 = R"(
	Clean the house
	Walk the dog
	Do Laundry
	Pick groceries
    )";
  cout << "to_do_list2 : " << endl;
  cout << to_do_list2 << endl;

  // Raw string literals with assignments
  const char* c_string{R"(
        Clean the house
        Walk the dog
        Do Laundry
        Pick groceries
        )"};
  cout << "to_do_list : " << endl;
  cout << c_string << endl;

  // Fixing other escaped strings
  string windows_path1{R"(D:\sandbox\testProject\hello.txt)"};
  string linux_path1{R"(/home/username/files/hello.txt)"};
  string hint1{R"("\\" escapes a backslash character like \.)"};

  cout << "windows_path1 : " << windows_path1 << endl;
  cout << "linux_path1 : " << linux_path1 << endl;
  cout << "hint1 : " << hint1 << endl;

  // Problematic raw string literals
  string sentence{R"--(The message was "(Stay out of this!)")--"};

  cout << "sentence : " << sentence << endl;

  return 0;
}