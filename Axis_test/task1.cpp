// you can use includes, for example:
#include <algorithm>
#include <iostream>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

string solution(vector<int> &T) {
    // variable to calculate the size of each season.
    // give me the number of temperatures that I have in each season
    int section = T.size()/4;
    // ampl is used to store the amplitude of each season
    // maxAmpl is used to store the highest amplitude
    // id is used to store the id of the maximum amplitude.
    int ampl[4], maxAmpl = 0, id = 0;

    vector<string> result = {"WINTER", "SPRING", "SUMMER", "AUTUMN"};

    // Iterator is used to pint the begin and the end of each section
    // Both start point to the begining of the vector
    vector<int>::iterator vStart = T.begin(), vEnd = T.begin();

    // Advance the end iterator to the beginning of the second section
    advance(vEnd,section);

    // loop through all four seasons/sections
    for(int i = 0; i < 4; i++){
        sort(vStart, vEnd); // Sort the elements of the current section
        int max = *(vEnd - 1), min = *vStart; // Get the max and min value in the current section
        ampl[i] = abs(max - min); // Calculate and store the amplitude of the current section
        
        // Compare and retain the highest amplitude and the id of the section with the highest amplitude
        if (maxAmpl < ampl[i]){
            id = i;
            maxAmpl = ampl[i];
        }
        advance(vStart,section); // Point to the begining of the following section
        advance(vEnd,section); // Point the begining of next next section
    }

    return result[id];
}

int main()
{
    vector<int> T = {-3,-14,-5,7,8,42,8,3};
    string result = solution(T);
    cout << result << endl << endl;

    T.clear();
    T = {2,-3,3,1,10,8,2,5,13,-5,3,-18};
    result = solution(T);

    cout << result << endl << endl;

    return 0;
}