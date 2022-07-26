#include <iostream>

using namespace std;

int main()
{
    //		. The compiler applies implicit conversions
	// 			when types are different in 
	//			an expression
	//		. Conversions are always done from the smallest
	//			to the largest type in this case int is 
	//			transformed to double before the expression
	//			is evaluated.Unless we are doing an assignment
	
	double price { 45.6 };
    int units {9};
    
    auto total_price = price * units; // units will be implicitly converted to double
	
	cout << "Total price : " << total_price << endl;
	cout << "sizeof total_price : " << sizeof(total_price) << endl;


	//Implicit conversions in assignments
	// The assignment operation is going to cause an implicit
	// narrowing conversion , y is converted to int before assignment
	int x;
    double y {45.44};
    x = y; // double to int
	cout << "The value of x is : " << x << endl; // 45
	cout << "sizeof x : " << sizeof(x) << endl;// 4
    
    return 0;
}