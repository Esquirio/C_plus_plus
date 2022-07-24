#include <iostream>

using namespace std;

int main()
{
    int scores[10] {11,12,13,14,15,16,17,18,19,20};
    //Array index notation
	int * pointer1 {&scores[0]};
	int * pointer2 {&scores[8]};

    //Can also compare pointers
    
    //The further you go in the array, the bigger the address
    
    
    cout << "pointer1: " << pointer1 << endl;
    cout << "pointer2: " << pointer2 << endl;

    cout << "Comparing pointers : " <<boolalpha <<  endl;
	
    cout << "pointer1 > pointer2 : " <<  (pointer1 > pointer2) << endl;
    cout << "pointer1 < pointer2 : " << (pointer1 < pointer2) << endl;
    cout << "pointer1 >= pointer2 : " <<  (pointer1 >= pointer2) << endl;
    cout << "pointer1 <= pointer2: " << (pointer1 <= pointer2) << endl;
    cout << "pointer1 == pointer2 : " <<  (pointer1 == pointer2) << endl;
    cout << "pointer1 != pointer2 : " << (pointer1 != pointer2) << endl;

    return 0;
}