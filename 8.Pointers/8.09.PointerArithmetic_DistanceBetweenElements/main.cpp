#include <iostream>

using namespace std;

int main()
{
    int scores[10] {11,12,13,14,15,16,17,18,19,20};
    //Array index notation
	// int * pointer1 {&scores[0]};
	// int * pointer2 {&scores[8]};

    //Pointer arithmetic notation
    int * pointer1 {scores + 0};
    int * pointer2 {scores + 8};

    cout << "pointer2 - pointer1 : " << pointer2 - pointer1 << endl; // 8 
    cout << "pointer1 - pointer2 : " << pointer1 - pointer2 << endl; // -8

    ptrdiff_t pos_diff = pointer2 - pointer1;
    ptrdiff_t neg_diff = pointer1 - pointer2;
    cout << "pointer2 - pointer1 : " << pos_diff << endl; // 8 
    cout << "pointer1 - pointer2 : " << neg_diff << endl; // -8
    cout << "sizeof(ptrdiff_t) : " << sizeof(ptrdiff_t) << endl;

    return 0;
}