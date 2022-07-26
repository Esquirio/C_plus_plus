#include <iostream>

using namespace std;

int main()
{
    //Implicit cast will add up the doubles,
	//then turn result into int for assignment
	double x { 12.5 };
    double y { 34.6};
    
    int sum = x + y; 
    
    cout << "The sum  is : " << sum << endl;


	//Explicity cast : cast then sum up
	sum = static_cast<int>(x) + static_cast<int>(y) ;
    cout << "The sum  is : " << sum << endl;

	//Explicit cast : sum up then cast, same thing as implicit cast
	sum =  static_cast<int> (x + y);
	cout << "Sum up then cast, result : " << sum << endl;


	//Old style C-cast
	double PI {3.14};
	
	//int int_pi = (int)(PI);
    int int_pi = static_cast<int>(PI);
	cout << "PI : " << PI << endl;
    cout << "int_pi : " << int_pi << endl;
    
    return 0;
}