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

#include "../include/pair_cpp.h"

/* Function Definitions */

/**
 * @brief Finds all pairs in the array that sum up to the target value.
 * 
 * @param result Pointer to store the result pairs.
 * @param nums Array of integers.
 * @param target Target sum value.
 */
void findPair(std::vector<std::vector<int>>* result, std::vector<int> nums, int target) {
  int n = nums.size();
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j > i; j--) {
      if (nums[i] + nums[j] == target) {
        result->push_back({nums[i], nums[j]});
      }
    }
  }
}

/**
 * @brief Prints the result pairs.
 * 
 * @param result Array of result pairs.
 */
void printResult(std::vector<std::vector<int>> result) {
  if (result.size() == 0) {
    std::cout << "Pair not found" << std::endl;
  } else {
    for (int i = 0; i < result.size(); i++) {
      std::cout << "(" << result[i][0] << ", " << result[i][1] << ")"
          << std::endl;
    }
  }
}