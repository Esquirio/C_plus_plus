#include <iostream>

using namespace std;

// TOOLS
const int PEN { 10 };
const int MARKER { 20 };
const int ERASER { 30 };
const int RECTANGLE { 40 };
const int CIRCLE { 50 };
const int ELLIPSE { 60 };

int main (){
    int tool {ERASER};

	if(tool == PEN)
		cout << "Active tool is pen!"  << endl;
	else if(tool == MARKER)
		cout << "Active tool is marker!"  << endl;
	else if(tool == ERASER)
		cout << "Active tool is eraser!"  << endl;
	else if(tool == RECTANGLE)
		cout << "Active tool is rectangle!"  << endl;
	else if(tool == CIRCLE)
		cout << "Active tool is circle!"  << endl;
	else if(tool == ELLIPSE)
		cout << "Active tool is ellipse!"  << endl;

	cout << "Moving on" << endl;
    return 0;
}