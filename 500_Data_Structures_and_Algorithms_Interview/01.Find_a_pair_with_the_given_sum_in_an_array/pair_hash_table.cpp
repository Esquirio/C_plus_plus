/******************************************************************************
Problem:
Find a pair with the given sum in an array
Given an unsorted integer array, find a pair with the given sum in it.
For example:
Input:
nums = [8, 7, 2, 5, 3, 1]
target = 10

Output:
Pair found (8, 2) or Pair found (7, 3)

Input:
nums = [5, 2, 6, 8, 1, 9]
target = 12

Output: Pair not found

Solution in C++ using hash table
******************************************************************************/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void findPair(unordered_map<int, int>* result, vector<int> nums, int n, int target) {
  unordered_map<int, int> map;

  for (int i = 0; i < n; i++) {
    int complement = target - nums[i];
    if (map.find(complement) != map.end()) {
      result->insert({complement, nums[i]});
    }
    map[nums[i]] = i;
  }
}

void printResult(unordered_map<int, int> result) {
  if (result.size() == 0) {
    cout << "Pair not found" << endl;
  } else {
    for (auto it = result.begin(); it != result.end(); it++) {
      cout << "(" << it->first << ", " << it->second << ")" << endl;
    }
  }
}

int main(int argc, char *argv[]) {
  if (argc < 3) {
    cout << "Mandatory parameters: " << argv[0] << "<target> <num1> <num2> ... <numN>" << endl;
    return 1;
  }

  int n = argc - 2;
  int target = atoi(argv[1]);
  vector<int> nums;

  for(int i =0; i < n; i++){
    nums.push_back(atoi(argv[i+2]));
  }

  unordered_map<int, int> result;

  findPair(&result, nums, n, target);

  printResult(result);

  return 0;
}