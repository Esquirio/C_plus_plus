#include <iostream>

using namespace std;

int main()
{
    int scores[] {1,2,3,4,5,6,7,8,9,10};

    // Printing positions
    cout << endl;

    cout << "Scores:" ;
    for ( auto score : scores)
        cout << " " << score ;
	cout << endl;

    for(auto &score : scores)
        score = score * 10;
    
    // Printing after change
    cout << endl;
    cout << "Scores:";
    for ( auto score : scores)
        cout << " " << score ;
	cout << endl;

    return 0;
}