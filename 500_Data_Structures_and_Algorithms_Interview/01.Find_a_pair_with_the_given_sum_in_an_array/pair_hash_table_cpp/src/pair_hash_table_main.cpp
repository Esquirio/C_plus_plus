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

int main(int argc, char *argv[]) {
  if (argc < 3) {
    std::cout << "Mandatory parameters: " << argv[0] << "<target> <num1> <num2> ... <numN>" << std::endl;
    return 1;
  }

  int n = argc - 2;
  int target = atoi(argv[1]);
  std::vector<int> nums;

  for(int i =0; i < n; i++){
    nums.push_back(atoi(argv[i+2]));
  }

  std::unordered_map<int, int> result;

  findPair(&result, nums, target);

  printResult(result);

  return 0;
}