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

Solution in C++
******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void findPair(vector<vector<int>>* result, vector<int> nums, int target) {
  int n = nums.size();
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j > i; j--) {
      if (nums[i] + nums[j] == target) {
        result->push_back({nums[i], nums[j]});
      }
    }
  }
}

void printResult(vector<vector<int>> result) {
  if (result.size() == 0) {
    cout << "Pair not found" << endl;
  } else {
    for (int i = 0; i < result.size(); i++) {
      cout << "(" << result[i][0] << ", " << result[i][1] << ")"
          << endl;
    }
  }
}

int main(int argc, char *argv[]) {
  if (argc < 3) {
    cout << "Mandatory parameters: " << argv[0] << " <target> <num1> <num2> ... <numN>" << endl;
    return 1;
  }
  int n = argc - 2;
  int target = atoi(argv[1]);
  vector<int> nums;
  vector<vector<int>> result;

  for(int i =0; i < n; i++){
    nums.push_back(atoi(argv[i+2]));
  }

  findPair(&result, nums, target);

  printResult(result);

  return 0;
}