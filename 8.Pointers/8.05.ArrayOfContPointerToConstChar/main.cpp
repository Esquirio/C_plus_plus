#include <iostream>

using namespace std;

int main()
{
    const char *const students [] {
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar Singh",
        "Sam Ali",
        "Dave Mahoro"
    };

    //Print out the students
	cout << endl;
    cout << "Printing out the students : " << endl;
    for ( const char * student : students){
        cout << student << endl;
    }

    // *students[0] = 'K';

    //Can swap for new student though.
    const char * new_student {"Bob the Great"};
    //students[0] = new_student; // Compiler error

    //Print out the students
	cout << endl;
    cout << "Printing out the students : " << endl;
    for ( const char * student : students){
        cout << student << endl;
    }

    return 0;
}