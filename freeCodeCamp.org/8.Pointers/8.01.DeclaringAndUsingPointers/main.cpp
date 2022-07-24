#include <iostream>

using namespace std;

int main()
{
   //Declare and initialize pointer
    int* pNumber {}; // Will initialize with nullptr
    double*  pFractionalNumber{};

    //Explicitly initialize with nullptr
    int* pNumber1{nullptr};
    int* pFractionalNumber1{nullptr};

    //Pointers to different variables are  of the same size
    cout << "sizeof(int) : " << sizeof(int) << endl; // 4
    cout << "sizeof(double) : " << sizeof(double) << endl; // 8
    cout << "sizeof(double*) : " << sizeof(double*) << endl;
    cout << "sizeof(int*) : " << sizeof(int*) << endl;
    cout << "sizeof(pNumber1) : " << sizeof(pNumber1) << endl;
    cout << "sizeof(pFractionalNumber1) : " << sizeof(pFractionalNumber1) << endl << endl;

    //It doesn't matter if you put the * close to data type or to varible name
    int*  pNumber2{nullptr};
    int * pNumber3{nullptr};
    int  *pNumber4{nullptr};
    int *pNumber5{}, other_int_var{};
    int* pNumber6{}, other_int_var6{};	// Confusing as you wonder if other_int_var6
										//is also a pointer to int. It is not
										// The structure is exactly the same for the
										//previous statement
    cout << "sizeof(pNumber5) : " << sizeof(pNumber5) << endl;
    cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << endl;
    cout << "sizeof(pNumber6) : " << sizeof(pNumber6) << endl;
    cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << endl << endl;

    //It is better to separate these declarations on different lines though
    int *pNumber7{};
    int other_int_var7{}; // No room for confusion this time

    //Initializing pointers and assigning them data
    //We know that pointers store addresses of variables
    int int_var {43};
    int *p_int{&int_var};// The address of operator (&);

    cout << "Int var : " << int_var << endl;
    cout << "p_int (Address in memory)  : " << p_int << endl << endl;

    //You can also change the address stored in a pointer any time
    int int_var1 {65};
    p_int = &int_var1; // Assign a different address to the pointer
    cout << "p_int (with different address)  : " << p_int << endl << endl;

    //Can't cross assign between pointers of different types
    int *p_int1{nullptr};
    double double_var{33};

    //p_int1 = &double_var; // Compiler error

    //Dereferencing a pointer : 
    int* p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;

    cout << "value : " << *p_int2 << endl << endl; // Dereferencing a pointer

    return 0;
}