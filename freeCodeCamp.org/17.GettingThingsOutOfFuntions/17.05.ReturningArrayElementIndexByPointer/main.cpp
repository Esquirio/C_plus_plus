#include <iostream>

using namespace std;

const double* findMaxAddress(const double scores[], size_t count);

int main()
{
    double array[] {1.0,2.0,3.0,45.0,5.0,6.0,7.0,8.0,79.5,10.0};
    const double* p_max = findMaxAddress(array,size(array));
    cout << "max : " << *p_max << endl;
    
    return 0;
}

const double* findMaxAddress(const double scores[], size_t count){

    size_t max_index{};
    double max{};
    
    for(size_t i{0}; i < count ; ++i){
        if(scores[i] > max){
            max = scores[i];
            max_index = i;
        }
    }
    return &scores[max_index];
}