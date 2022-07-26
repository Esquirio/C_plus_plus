#include <iostream>
#include <string_view>

using namespace std;

void say_my_name(string_view name){
    cout << "Hello your name is : " << name << endl;
}

int main()
{
    string some_name{"John"};
    say_my_name("John");
    say_my_name(some_name);
    say_my_name(string_view("Samuel"));
    
    return 0;
}