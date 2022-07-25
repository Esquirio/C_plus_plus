#include <iostream>

using namespace std;

int main()
{
    //Non const reference
	cout << endl;
	cout << "Non const reference : " << endl;
	int age {27};
	const int& ref_age{age};

    cout << "age : " << age << endl;
	cout << "ref_age : " << ref_age << endl;

    //Can't modify original variable through reference
	cout << endl;
	cout << "Modify original variable through reference : " << endl;
	
	// ref_age++; //Modify through reference
	
	//Simulating reference behavior with pointers
    // const int * const p_age {&age};
    // *p_age = 45;
    
    return 0;
}