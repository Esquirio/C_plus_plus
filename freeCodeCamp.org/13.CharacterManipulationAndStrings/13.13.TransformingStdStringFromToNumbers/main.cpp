#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Number to String : the std::to_string function.
    float float_var {22.3f};
    double double_var {1.34847e5};
    int int_var {223};
    
    string float_str {to_string(float_var)};;
    string double_str{to_string(double_var)};;
    string int_str{to_string(int_var)};
    
    cout << "size of float_str : " << float_str.size()<< endl;
    cout << "float_var : " << float_var << endl;
	cout << "float_str : " << float_str << endl;
	
    cout << "double_var : " << double_var << endl;
	cout <<"double_str : " << double_str << endl;
	
    cout << "int_var : " << int_var << endl;
	cout << "int_str : " << int_str << endl;
    cout << endl;

    //std::string to number (integral types)
	//int, long , long long
	//std::stoi, std::stol, std::stoll
	string number_str{"34.567"};//Could even be negative
	int int_var1 = stoi(number_str);
	cout << "int_var1 : " << int_var1 << endl;
	cout << "sizeof(int_var1) : " << sizeof(int_var1) << endl;
	
	long long_var = stol(number_str);
	cout << "long_var : " << long_var << endl;
	cout << "sizeof(long_var) : " << sizeof(long_var) << endl;
	
	long long long_long_var = stoll(number_str);
	cout << "long_long_var : " << long_long_var << endl;
	cout << "sizeof(long_long_var) : " << sizeof(long_long_var) << endl;
    cout << endl;

    //unsigned long , unsigned long long
	//std::stoul, std::stoull
	//Underflows when the std::string contains a negative number
	// string number_str = "34.567";
	//std::string number_str = "-34.567"; // Resulting unsigned long and long long underflow
							// and become huge numbers of their type
	cout << endl;
	cout << "unsigned long, unsigned long long : " << endl;
	
	unsigned long u_l_var = stoul(number_str);
	cout << "u_l_var : " << u_l_var << endl;
	cout << "sizeof(u_l_var) : " << sizeof(u_l_var) << endl;
	
	unsigned long long u_ll_var = stoull(number_str);
	cout << "u_ll_var : " << u_ll_var << endl;
	cout << "sizeof(u_ll_var) : " << sizeof(u_ll_var) << endl;

    //float, double,long double : 
	//std::stof, std::stod, std::stold
    // string number_str = "34.567";
    cout << endl;
	float float_var1 = stof(number_str);
	cout << "float_var1 : " << float_var1 << endl;
	cout << "sizeof(float_var1) : " << sizeof(float_var1) << endl;
	
	double double_var1 = stod(number_str);
	cout << "double_var1 : " << double_var1 << endl;
	cout << "sizeof(double_var1) : " << sizeof(double_var1) << endl;
	
	long double long_double_var = stold(number_str);
	cout << "long_double_var : " << long_double_var << endl;
	cout << "sizeof(long_double_var) : " << sizeof(long_double_var) << endl;
    
    return 0;
}