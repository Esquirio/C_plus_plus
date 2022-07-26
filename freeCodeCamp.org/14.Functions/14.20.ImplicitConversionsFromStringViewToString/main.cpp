#include <iostream>

using namespace std;

void say_my_name(const string& name);
void process_name(string_view name_sv);

int main()
{
    
    say_my_name("Daniel");
    process_name("Daniel");

    return 0;
}

//Definitions
void say_my_name(const string& name){
    cout << "Your name is " << name << endl;
}

void process_name(string_view name_sv){
    
	/* say_my_name(name_sv); // Compiler error . Implicit conversion
						  // from std::string_view
                          // to std::string is not  allowed. */
                          
    //Fix : Be explicit about the conversion
    say_my_name(string(name_sv));
}