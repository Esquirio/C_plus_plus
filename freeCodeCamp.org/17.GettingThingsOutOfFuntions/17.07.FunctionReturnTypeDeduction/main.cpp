#include <iostream>

using namespace std;

//The right way : return type deduction
auto process_number(int value){
    if(value < 10){
        return 22; // returning int literal
    }else{
        return 55; // returning int literal
    }
}

auto process_number2(int value){
    if(value < 10){
        return static_cast<double>(22); // returning int literal
    }else{
        return 33.1; // returning double literal
    }
}

int main()
{
    auto result = process_number(17);
    cout << "result : " << result << endl;
    cout << "sizeof(result)  : " << sizeof(result) <<  endl;
    cout << "sizeof(int) : " << sizeof(int) << endl;
    cout << "sizeof(double) : " << sizeof(double) << endl;

    cout << endl;

    auto result2 = process_number2(17);
    cout << "result2 : " << result2 << endl;
    cout << "sizeof(result)  : " << sizeof(result2) <<  endl;
    cout << "sizeof(int) : " << sizeof(int) << endl;
    cout << "sizeof(double) : " << sizeof(double) << endl;
    
    return 0;
}