#include <iostream>

using namespace std;

int dog_count{2};

void say_age(const int* const age); // Declaration

int main()
{
    int age{23}; // Local
    cout << "age (before call) : " << age << " &age : " << &age << endl; //23
    say_age(&age); // Argument
    cout << "age (after call) : " << age << " &age : " << &age <<  endl; //23
    
    return 0;
}

void say_age(const int* const age){ // Parameter
    //++(*age); //
    cout <<  "Hello , you are " << *age << " years old! &age : " << &age <<  endl;//23
    //age = & dog_count;
}