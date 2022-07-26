#include <iostream>

using namespace std;

int main()
{
    //Type deduction with auto : Just a copy
	double some_var{55.5};
	auto x = some_var;
	
	cout << "sizeof(some_var) : " << sizeof(some_var) << endl;
	cout << "sizeof(x) : " << sizeof(x) << endl;
	cout << "&some_var : " << &some_var << endl;
	cout << "&x : " << &x << endl;
    cout << " some_var : " << some_var << endl;
    cout << " x : " << x << endl;

    cout << endl;

    double some_var2 = 55.5; //double
	double& some_var_ref {some_var2};
	auto y = some_var_ref; // y is not deduced as a reference to double
						   // it's just a double that contains the value 
						   // in some_var_ref
	++y;
					
	cout << "sizeof(some_var) : " << sizeof(some_var2) << endl; // 8
	cout << "sizeof(some_var_ref) : " << sizeof(some_var_ref) << endl; // 8
	cout << "sizeof(y) : " << sizeof(y) << endl; // 8
	cout << "&some_var : " << &some_var2 << endl; // 0xabc123
	cout << "&some_var_ref : " << &some_var_ref << endl ;// 0xabc123
	cout << "&y : " << &y << endl;  // 0xaab543
	cout << "some_var : " << some_var2 << endl; //55.5
	cout << "some_var_ref : " << some_var_ref << endl; // 55.5
	cout << "y : " << y << endl; // 56.5

    cout << endl;

    // True reference deduction
   	double some_var3 = 55.5; //double
    double& some_var_ref3 {some_var3};
	auto& z = some_var_ref3; // z is deduced as a double reference
	++z;
	
	cout << "sizeof(some_var) : " << sizeof(some_var3) << endl; // 8
	cout << "sizeof(some_var_ref) : " << sizeof(some_var_ref3) << endl; // 8
	cout << "sizeof(z) : " << sizeof(z) << endl; // 8
	cout << "&some_var : " << &some_var3 << endl;// 0xabc123
	cout << "&some_var_ref : " << &some_var_ref3 << endl;// 0xabc123
	cout << "&z : " << &z << endl;// 0xabc123
	cout << "some_var : " << some_var3 << endl; // 56.5
	cout << "some_var_ref : " << some_var_ref3 << endl; //56.5
	cout << "z : " << z << endl; // 56.5

    cout << endl;

    //Constness is preserved with properly deduced references.
	const double some_other_var {44.3};
	const double& const_ref {some_other_var};
	auto& p = const_ref;
	
	cout << "some_other_var : " << some_other_var << endl;
	cout << "const_ref : " << const_ref << endl;
	cout <<  "p : " << p << endl;
	
	//++p; // Compiler error
	
	cout << "some_other_var : " << some_other_var << endl;
	cout << "const_ref : " << const_ref << endl;
	cout <<  "p : " << p << endl;

    cout << endl;

    //Constness doesn't matter with non reference deduction
	const double i_am_const {71.2};
    const double& my_ref {i_am_const};

	auto q = my_ref; // q is a separate variable, initialized with the
							// value in i_am_const.
	++q;// Can modify q without a problem. It's a copy.

    cout << "i_am_constr : " << i_am_const << endl;
	cout << "my_ref : " << my_ref << endl;
	cout <<  "q : " << q << endl;

    return 0;
}