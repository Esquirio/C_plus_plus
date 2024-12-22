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
#include <vector>

using namespace std;

vector<vector<int>> findPair(vector<int> nums, int target) {
  vector<vector<int>> result;
  int n = nums.size();
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j > i; j--) {
      if (nums[i] + nums[j] == target) {
        result.push_back({nums[i], nums[j]});
      }
    }
  }

  return result;
}

void printResult(vector<vector<int>> result) {
  for (int i = 0; i < result.size(); i++) {
    cout << "Pair found (" << result[i][0] << "," << result[i][1] << ")"
         << endl;
  }
}

int main() {
  vector<int> nums = {8, 7, 2, 5, 3, 1};
  vector<vector<int>> result;
  int target = 10;

  result = findPair(nums, target);

  if (result.size() == 0) {
    cout << "Pair not found" << endl;
  } else {
    printResult(result);
  }

  return 0;
}