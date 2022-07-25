#include <iostream>

using namespace std;

// Global variable
int globalVar {44};

int main (){
    // Local variable
	bool green {false};
	globalVar++; // 45

	if(green){
		globalVar++;
		int carCount {23};
		cout << "Light is green " << carCount << " on the move!" << endl;
	} else{
		// carCount ++ // Compiler error
		globalVar ++; // 46
		cout << "Light is not green. Y'all should STOP!" << endl;
	}

	// carCount ++ ?? Compiler error
	cout << "globalVar: " << globalVar << endl;

    return 0;
}