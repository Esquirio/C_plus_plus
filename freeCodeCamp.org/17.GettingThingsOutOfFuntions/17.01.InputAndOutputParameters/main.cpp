#include <iostream>
#include <string>

using namespace std;

void maxStr (const string input1, const string input2, string &output){
    if(input2 > input2)
        output = input1;
    else
        output = input2;
}

void maxInt (int input1, int input2, int &output){
    if(input1 > input2)
        output = input1;
    else
        output = input2;
}

void maxDouble (double input1, double input2, double *output){
    if(input1 > input2)
        *output = input1;
    else
        *output = input2;
}

int main()
{
    string out_str;
	string string1("Casablanca");
	string string2("Bellevue");
	maxStr(string1,string2,out_str);
	cout << "max_str : " << out_str << endl;
    cout << endl;

    int out_int;
    int in1{45};
    int in2{723};
    maxInt(in1,in2,out_int);
    cout << "max_int : " << out_int << endl;
    cout << endl;

    double out_double;
    double in_double1{45.8};
    double in_double2{76.9};
    maxDouble(in_double1,in_double2,&out_double);
    cout << "max_double : " << out_double << endl;

    return 0;
}