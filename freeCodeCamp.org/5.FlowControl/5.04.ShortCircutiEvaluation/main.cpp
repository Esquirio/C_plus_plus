#include <iostream>

using namespace std;

bool car() {
    cout << "car function running" << endl;
    return false;
}

bool house() {
    cout << "house function running" << endl;
    return true;
}
bool job() {
    cout << "job function running" << endl;
    return false;
}
bool spouse() {
    cout << "spouse function running" << endl;
    return false;
}

int main (){
    
	bool a { true };
	bool b { true };
	bool c { true };
	bool d { false };

	bool p { false };
	bool q { false };
	bool r { false };
	bool m { true };

	// AND: If one of the operands is 0, the result is 0
	cout << endl;
	cout << "AND short circuit" << endl;
	bool result {a && b && c && d};
	cout << "result: " << boolalpha << result << endl;

	// OR: If one of the operands is 1, the result is 1
	cout << endl;
	cout << "OR short circuit" << endl;
	result = p || q || r || m;
	cout << "result: " << boolalpha << result << endl;

	//  print only the car message
	if (car() && house() && job() && spouse()) {
        cout << "I am happy" << endl;
    }
    else {
        cout << "I am sad" << endl;
    }

	//  print only the car and house messages
	if (car() || house() || job() || spouse()) {
        cout << "I am happy" << endl;
    }
    else {
        cout << "I am sad" << endl;
    }

    return 0;
}