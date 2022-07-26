#include <iostream>

using namespace std;

int main(int argc , char * argv[])
{
    cout << "We have " << argc << " parameters in our program" << endl;

    for(size_t i {0}; i < argc ; ++i){
        cout << "parameter [" << i << "]: " <<  argv[i] << endl;
    }
    
    return 0;
}