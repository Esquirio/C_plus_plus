#include <iostream>

using namespace std;

int main (){
    int max{};
	int a{35};
	int b{200};

	cout << endl;
	cout << "using regular if " << endl;

	if( a > b) max = a;
	else max = b;

	cout << "Max: " << max << endl;

	max = 0;

	max = (a > b)? a : b;

	cout << "Max: " << max << endl;

    return 0;
}