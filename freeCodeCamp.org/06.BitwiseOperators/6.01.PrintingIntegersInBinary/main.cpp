#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned short int data {15};

    cout << "data (dec) : " <<showbase <<  dec << data << endl;
    cout << "data (oct) : " <<showbase <<  oct << data << endl;
    cout << "data (hex) : " <<showbase <<  hex << data << endl;
    cout << "data (bin) : " << bitset<16>(data) << endl;
    
    return 0;
}