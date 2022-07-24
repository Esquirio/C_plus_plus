#include <iostream>

using namespace std;

int main()
{
    const size_t COUNT{5};

    /*
    // For loops


    cout << "Incrementing for loop : " << endl;
    for (size_t i{} ; i < COUNT ; ++i){
        cout << "i  : " << i << endl;
    }


    cout << endl;
    cout << "Decrementing for loop : " << endl;

    for(size_t i{COUNT} ; i > 0 ; --i){
        cout << "i : " << i << endl;
    }
    */

    // Range based for loops can't be made to run in reverse order

    // While loop
    /*
    //Incrementing while
    cout << endl;
    cout << "Incrementing while" << endl;

    size_t i{0};

    while( i < COUNT){
        cout << "i : " << i << endl;
        ++i;
    }

    //Decrementing while
    cout << endl;
    cout << "Decrementing while : " << endl;
    i = COUNT;

    while( i > 0){
        cout << "i : " << i << endl;
        --i;
    }
    */

    // Do while loop
    /*
    //Incrementing do while
    cout << endl;
    cout << "Incrementing do while" << endl;
    size_t i = 0;

    do {
        cout << "i : " << i << endl;
        ++i;

    }while ( i < COUNT);


    //Decrementing do while
    cout << endl;
    cout << "Decrementing do while" << endl;
    i = COUNT;

    do {
        cout << "i : " << i << endl;
        --i;
    }while ( i > 0);
    */

    // Infinite loop
    // Decrementing do while
    cout << endl;
    cout << "Decrementing do while" << endl;
    unsigned int i = COUNT;

    do
    {
        cout << "i : " << i << endl;
        --i;
    } while (i >= 0);

    return 0;
}