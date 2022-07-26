#include <iostream>

using namespace std;

//Declaration
double sum( const double (&scores) [10]);

int main()
{
    double student_scores[] {10.0,20.0,30.0,40.0,50.0,60.0,70.0,80.0,90.0,1}; 
    
    double sum_result = sum(student_scores);
	
    cout << "result is : " << sum_result << endl;

    return 0;
}

//Definition
double sum( const double (&scores) [10]){
    double sum{};
    for(size_t i{}; i < size(scores) ; ++i){
        sum  += scores[i];
    }
    return sum;
}