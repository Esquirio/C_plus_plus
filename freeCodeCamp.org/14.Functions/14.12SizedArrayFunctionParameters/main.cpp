#include <iostream>

using namespace std;

double sum ( double scores[], size_t count){
    double sum{};
        
    for(size_t i{} ; i < count ; ++i){
       sum += scores[i];
    }
    return sum;
}

int main()
{
    double student_scores[] {10.0,20.0,30.0,4,5,6,7,8,9}; // Less than 5 parameters

    double result = sum(student_scores,size(student_scores));
    cout << "result : " << result << endl;
    
    return 0;
}