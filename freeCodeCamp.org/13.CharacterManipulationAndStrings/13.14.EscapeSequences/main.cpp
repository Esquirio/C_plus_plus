#include <iostream>

using namespace std;

int main()
{
    for(size_t i{0} ; i  < 1000 ; ++i){
        cout << "Hello\n";
    }

    cout << "He said \"Get out of here immediately!\"" << endl;

    string todo_list{ "\tClean the house\n\tWalk the dog\n\tDo laundry\n\tPick groceries" };
    string windows_path{ "D:\\sandbox\\testProject\\hello.txt" };
    string linux_path{ "/home/username/files/hello.txt" };
    string hint{ " \"\\\\\" escapes a backslash character like \\." };
    cout << "todo_list : " << endl;
    cout << todo_list << endl;
    cout << "windows_path : " << windows_path << endl;
    cout << "linux_path : " << linux_path << endl;
    cout << "hint : " << hint << endl;

   cout << "\a" << endl ;
    
    return 0;
}