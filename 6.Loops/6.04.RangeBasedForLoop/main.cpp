#include <iostream>

using namespace std;

int main()
{
    int bagValues [] {1,2,3,4,5,6,7,8,9,10}; // This is a collection of integers
    // The variable value will be assigned a value form the values array on each iteration

    for (size_t i {0}; i < 10; ++i)
        cout << "value: " << bagValues[i] << " ";

    cout << endl;

    for(int value: bagValues)
        // value holds a copy of the current iteration in the whole bag
        cout << "value: " << value << " ";

    cout << endl;

    for(int value: {1,2,3,4,5,6,7,8,9,10})
        // value holds a copy of the current iteration in the whole bag
        cout << "value: " << value << " ";

    cout << endl;

    for(auto value: {1,2,3,4,5,6,7,8,9,10})
        // value holds a copy of the current iteration in the whole bag
        cout << "value: " << value << " ";

    cout << endl;

    return 0;
}