#include <iostream>

using namespace std;

int main()
{
    double first_number {5.0};
    double second_number {33.1};
    char c{'+'};
    
    switch(c){
        case '+':
        cout << first_number << " + " << second_number << " = " 
                << first_number + second_number << endl;
        break;
        
        case '-':
        cout << first_number << " - " << second_number << "=" 
                << first_number - second_number << endl;
        break;
        
        case '*':
        cout << first_number << " * " << second_number << " = " 
                << first_number * second_number << endl;
        break;
        
        case '/':
        cout << first_number << " / " << second_number << " = " 
                << first_number / second_number << endl;
        break;
		
    }
    
    return 0;
}