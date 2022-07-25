#include <iostream>

using namespace std;

int main (){
    bool go {true};

	if(int speed {10}; go){
		cout << "speed: " << speed << endl;
		if(speed > 5)
			cout << "Slow down!" << endl;
		else
			cout << "All good!" << endl;
	} else {
		cout << "speed: " << speed << endl;
		cout << "Stop" << endl;
	}

	// cout << "Out of the if block , speed : " << speed << endl;

    return 0;
}