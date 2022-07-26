#include <iostream>

using namespace std;

void increment(int& value);
void print_out(const int & value);

int main()
{
    int int_var{3};
    increment(int_var);
    print_out(int_var);

    double double_var{3.6};

    int data = double_var;

    increment(data);
    print_out(data);
    cout << "double_var : " << double_var << endl;
    
    return 0;
}

void increment(int& value){
    value++;
	cout << "value incremented to : " << value << endl;
}

void print_out(const int & value){
    cout << "value : " << value << endl;
}