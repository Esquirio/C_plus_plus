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

#include "../include/pair_hash_table_cpp.h"

/* Function Definitions */


void findPair(std::unordered_map<int, int>* result, std::vector<int> nums, int target) {
  std::unordered_map<int, int> map;

  // Calculate the size of the vector nums
  int n = nums.size();

  for (int i = 0; i < n; i++) {
    int complement = target - nums[i];
    if (map.find(complement) != map.end()) {
      result->insert({complement, nums[i]});
    }
    map[nums[i]] = i;
  }
}

void printResult(std::unordered_map<int, int> result) {
  if (result.size() == 0) {
    std::cout << "Pair not found" << std::endl;
  } else {
    for (auto it = result.begin(); it != result.end(); it++) {
      std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
    }
  }
}