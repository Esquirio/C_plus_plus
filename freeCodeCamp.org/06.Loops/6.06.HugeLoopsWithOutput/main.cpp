#include <iostream>

using namespace std;

int main()
{
    /*
    for(size_t i{0} ; i < 100000 ; ++i){
        //cout << "i : " << i << endl;
    }
    cout << "Done!" << endl;
    */

   size_t i{0}; // Iterator

   while(i < 100000){
        //cout << "i : " << i << endl; 
        ++i;     
   }
   cout << "Done!" << endl;

    return 0;
}