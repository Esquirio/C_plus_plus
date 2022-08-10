// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <map>
#include <vector>
#include <string>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(vector<string> &E) {
    // Vector used to store the table with the list of the employees for each day. 
    vector<vector<int>> days = {vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>()};

    // Vector used to store the table with the list of the employees for each day, after removing the employees that already went  in the first day.
    vector<vector<int>> secondDays = {vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>()};

    // Matrix with the pair with the sum of the number of the employees for each pair of days
    vector<vector<int>> pairs = {vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>()};

    // Auxiliary string vector with the keys and values after removing the employees that already went in the first day
    vector<string> E_aux = E;

    int i = 0, result = 0;

    // Fill up the vector with the list of employees per day
    for(string value : E){
        if(value.compare("") != 0)
            for(auto elem : value){
                days.at(static_cast<int>(elem - '0')).push_back(i);
            }
        i++;
    }


    i = 0;
    // For each dayOne we will see the second day from the list
    for(vector<int> day : days){
        // Remove all the people that are already in DayOne
        E_aux = E;
        // Iterate over all employees
        for(vector<string>::iterator it = E_aux.begin(); it != E_aux.end(); it++){
            // Check all empployees already assigned for the current day
            for( int employee : day ){
                // Check if the iterator is in the employee
                if(it - E_aux.begin() == employee){
                    *it = ""; // Replace the days string by an empty string, meaning that the employee will not go to another day. 
                }
            }
        }
        
        secondDays.clear();
        secondDays = {vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>()};

        // Create the list of employees for the second day without the employee that went to the first day
        int j = 0;
        for(string value : E_aux){
        if(value.compare("") != 0)
            for(auto elem : value){
                secondDays.at(static_cast<int>(elem - '0')).push_back(j);
            }
            j++;
        }

        j = 0;
        // Create the matrix with the pairs that has the sum of the size of each day
        for(vector<vector<int>>::iterator it = secondDays.begin(); it != secondDays.end(); it++){
            pairs.at(i).insert(pairs.at(i).begin() + j, day.size() + secondDays.at(j).size());
            j++;
        }

        i++;
    }

    // for(vector<int> line : pairs){
    //     for(int value : line){
    //         cout << value << " " ;
    //     }
    //     cout << endl ;
    // }
    
    // Search the max size
    for(i = 0; i < pairs.size(); i++){
        for(int j = i; j < pairs.size(); j++){
            result < pairs.at(i).at(j) ? result = pairs.at(i).at(j) : result;
        }
    }
    
    return result;
}


int main()
{
    vector<string> E = {"039", "4", "14", "32", "", "34", "7"};
    int result = solution(E);
    cout << result << endl << endl;

    E.clear();
    E = {"801234567", "180234567", "0", "189234567", "891234567", "98", "9"};
    result = solution(E);

    cout << result << endl << endl;

    E.clear();
    E = {"5421", "245", "1452", "0345", "53", "354"};
    result = solution(E);

    cout << result << endl << endl;

    return 0;
}