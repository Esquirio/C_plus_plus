#include <iostream>
#include <string>

using namespace std;

int main (){
    int age {21};
    string name;

    /* // Print data
    cout << "Hello C++20"  << endl;
    cout << "Age: " << age << endl;

    cerr << "Error message: Something is wrong" << endl;
    clog << "Log message: Something happened" << endl; */


    /* // Get input
    cout << "Please type in your name: " << endl;
    cin >> name;

    cout << "Please type in your age: " << endl;
    cin >> age;

    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old!" << endl;

    cout << "Please type in your name and age: " << endl;
    cin >> name >> age;

    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old!" << endl; */


    // Data with spaces
    string fullName;

    cout << "Please type in your full name and age" << endl;
    
    getline(cin, fullName);

    cin >> age;

    cout << "Hello " << fullName << " you are " 
        << age << " years old!" << endl;

    return 0;
}