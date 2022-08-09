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
    // write your code in C++14 (g++ 6.2.0)
    vector<vector<int>> days = {vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>()};

    vector<vector<int>> secondDays = {vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>()};

    vector<vector<int>> pairs = {vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>()};

    vector<string> E_aux = E;

    int i = 0, result = 0;

    for(string value : E){
        if(value.compare("") != 0)
            for(auto elem : value){
                days.at(static_cast<int>(elem - '0')).push_back(i);
            }
        i++;
    }

    i = 0;
    for(vector<int> day : days){
        // Remove all the people that are already in DayOne
        E_aux = E;
        for(vector<string>::iterator it = E_aux.begin(); it != E_aux.end(); it++){
            for( int employee : day ){
                if(it - E_aux.begin() == employee){
                    *it = "";
                }
            }
        }
        
        secondDays.clear();
        secondDays = {vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>(), vector<int>()};

        int j = 0;
        for(string value : E_aux){
        if(value.compare("") != 0)
            for(auto elem : value){
                secondDays.at(static_cast<int>(elem - '0')).push_back(j);
            }
            j++;
        }

        j = 0;
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