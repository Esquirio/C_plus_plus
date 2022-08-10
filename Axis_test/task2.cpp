// you can use includes, for example:
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // Separate blocks and Size of all blocks
    char currentLetter = 'a'; // Store the first letter to star the search
    size_t currentPosition = 0;
    string::iterator it = S.begin(); // Point to the begining of the vector
    vector<int> blocks;  // Store the size of each found block
    int maxLenght = 0, result = 0; // longest block
    vector<int> countBlocks = {0, 0}, countLetters = {0, 0};
    // int var; 
    // Find the first occurance of the current letter starting from the current position
    // Iterate/loops while not reaching the end of the string
    while((S.find(currentLetter, currentPosition)) != string::npos){
        auto var = S.find(currentLetter, currentPosition); // Store the position of the first occurance of teh current letter
        // Verify if the retuned position is equal to the current
        if (var == currentPosition){
            // Change the current letter
            currentLetter == 'b' ? currentLetter = 'a': currentLetter = 'b';
            var = S.find(currentLetter, currentPosition); // Find the position of the new letter
        }

        countBlocks[('b' - currentLetter)] ++;

        cout << "index: " << ((currentLetter));
        cout << " a : " << countBlocks[0] << " b :" << countBlocks[1] << endl << endl;
        
        // Verify if we don't reach the end of the string
        if (var != string::npos){
            // blocks[i] = var - currentPosition;
            blocks.push_back(var - currentPosition); // Store the size of each block
            currentPosition = var; 
        } else {
            // blocks[i] = S.size() - currentPosition;
            blocks.push_back(S.size() - currentPosition); // Store the size of the final block
        }

        countLetters[('b' - currentLetter)] += blocks.back();
        cout << "Times a : " << countLetters[0] << " Times b :" << countLetters[1] << endl << endl;
        // Get the largest one
        maxLenght < blocks.back() ? maxLenght = blocks.back() : maxLenght; // Compute the max block length
    }

    for(int value: blocks){
        // Sum of largest size - all
        result += maxLenght - value; // Calcute the difference between the longest block with all blocks and sum everything
    }

    // cout << maxLenght << endl;
    return result;

}

int main()
{
    string S = "babaa";
    int result = solution(S);
    cout << result << endl << endl;

    S.clear();
    S = "bbbab";
    result = solution(S);

    cout << result << endl << endl;

    S.clear();
    S = "bbbaaabbb";
    result = solution(S);

    cout << result << endl << endl;

    return 0;
}

