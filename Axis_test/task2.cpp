// you can use includes, for example:
#include <string>
#include <vector>

using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    // Separate blocks and Size of all blocks
    char currentLetter = 'a';
    size_t currentPosition = 0;
    string::iterator it = S.begin();
    vector<int> blocks;
    int maxLenght = 0, result = 0;

    while(S.find(currentLetter, currentPosition) != string::npos){
        auto var = S.find(currentLetter, currentPosition);
        if (var == currentPosition){
            currentLetter == 'b' ? currentLetter = 'a': currentLetter = 'b';
            var = S.find(currentLetter, currentPosition);
        }
        
        if (var != string::npos){
            // blocks[i] = var - currentPosition;
            blocks.push_back(var - currentPosition);
            currentPosition = var; 
        } else {
            // blocks[i] = S.size() - currentPosition;
            blocks.push_back(S.size() - currentPosition);
        }

        // Get the largest one
        maxLenght < blocks.back() ? maxLenght = blocks.back() : maxLenght;
    }

    for(int value: blocks){
        // Sum of largest size - all
        result += maxLenght - value;
    }

    // cout << maxLenght << endl;
    return result;

}

