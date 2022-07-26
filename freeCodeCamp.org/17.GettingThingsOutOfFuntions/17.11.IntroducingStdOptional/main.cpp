#include <iostream>
#include <optional>

using namespace std;

int main()
{
    // Declare and initialize
    optional<int> items {3};
    optional<string> name {"Fernando Esquirio"};
    optional<double> weight {77.2};
    optional<char> character {'s'};

    // Declare and empty initialize
    optional<string> dog_name {}; // Initialize to std::nullopt
    optional<int> age {nullopt}; // Initialize to std::nullopt or
                                 // zero equivalent for optional
    
    optional<char> letter = nullopt; // Triggers unused warning
    optional<double> height = {};    // Initializes to std::nullopt
                                     // Triggers unused warning.
    
    // Read from an std::optional variable
    cout << "items: " << items.value() << endl;
    cout << "items: " << *items << endl; // Personally find this confusing as
										// it's not a pointer, so this the 
										// first and last time I use it in the
										// course

    // cout << "items : " << items << endl;
	cout << "name : " << name.value() << endl;
	cout << "weight : " << weight.value() << endl;
	cout << "character : " << character.value() << endl;

    //Write stuff
	dog_name = "Fluffy";
	age = 26;

    cout << endl;
    cout << "Writing data in ..." << endl;
	cout << "dog_name : " << dog_name.value() << endl;
	cout << "age : " << age.value() << endl;

    //Reading bad data
	//cout << letter.value() << endl; // Throws exception and crashes program
	//cout << height.value() << endl; // Throws exception and crashes program

    //has_value()
    cout << boolalpha;
    cout << "letter.has_value() : " << letter.has_value() << endl;
    cout << "height.has_value() : " << height.has_value() << endl;
    cout << "dog_name.has_value() : " << dog_name.has_value() << endl;

    //Do your checks before you read data
    cout << endl;
    cout << "Conditional reading" << endl;
	if(letter.has_value()){
		cout << "letter contains a useful value" << endl;
	}else{
		cout << "letter contains std::nullopt" << endl;
	}

    //Checking against std::nullopt
	if(letter != nullopt){
		cout << "letter contains a useful value" << endl;
	}else{
		cout << "letter contains std::nullopt" << endl;
	}


    //Checking against std::nullopt
	if(dog_name != nullopt){
		cout << "dog_name contains a useful value : " << dog_name.value() << endl;
	}else{
		cout << "dog_name contains std::nullopt" << endl;
	}

    return 0;
}