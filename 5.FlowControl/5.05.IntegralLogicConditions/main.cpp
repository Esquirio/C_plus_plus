#include <iostream>

using namespace std;

int main (){
    
	int condition {-5};
	bool boolCondition = condition;
	cout << boolalpha;

	if(boolCondition)
		cout << "We have a " << boolCondition << " in our variable " << endl; // different from 0
	else
		cout << "We have " << boolCondition << " in our variable " << endl; // zero

    return 0;
}