// you can use includes, for example:
#include <algorithm>
#include <vector>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

string solution(vector<int> &T) {
    // write your code in C++14 (g++ 6.2.0)
    int section = T.size()/4;
    int ampl[4], maxAmpl = 0, id = 0;
    vector<string> result = {"WINTER", "SPRING", "SUMMER", "AUTUMN"};
    vector<int>::iterator vStart = T.begin(), vEnd = T.begin();
    advance(vEnd,section);
    for(int i = 0; i < 4; i++){
        sort(vStart, vEnd);
        int max = *(vEnd - 1), min = *vStart;
        ampl[i] = abs(max - min);
        if (maxAmpl < ampl[i]){
            id = i;
            maxAmpl = ampl[i];
        }
        advance(vStart,section);
        advance(vEnd,section);
    }
    return result[id];
}
