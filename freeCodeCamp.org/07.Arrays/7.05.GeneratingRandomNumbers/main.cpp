#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));

	int randomNum = rand();
	cout << "randomNum: " << randomNum << endl; // 0 ~ RAND_MAX
	cout << endl << endl;

	randomNum = rand();
	cout << "randomNum: " << randomNum << endl; // 0 ~ RAND_MAX
	cout << endl << endl;

	// Generate random numbers in a loop
    for(size_t i {0} ; i < 10 ; ++i){
        randomNum = rand();
        cout << "randomNum " << i << ": " <<  randomNum << endl; // 0 ~ RAND_MAX       
    }
	cout << endl;
	 
	// Generate a range between 0 and 10
    randomNum =  rand() % 11;                  // [ 0 ~10]
    for(size_t i {0} ; i < 10 ; ++i){
        randomNum = rand() % 11;
        cout << "randomNum " << i << ": " <<  randomNum << endl; // 0 ~ 10
    }
	cout << endl << endl;

	randomNum = rand() % 10 + 1 ; // [1~10]
    for(size_t i {0} ; i < 10 ; ++i){
        randomNum = rand() % 10 + 1;
        cout << "randomNum " << i << "  :   " <<  randomNum << endl; // 1 ~ 10
    }
   
    return 0;
}