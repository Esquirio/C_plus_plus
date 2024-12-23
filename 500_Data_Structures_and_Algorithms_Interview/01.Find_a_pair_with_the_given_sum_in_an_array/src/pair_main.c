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

Solution in C
******************************************************************************/
#include "../include/pair.h"

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Mandatory parameters: %s <target> <num1> <num2> ... <numN>\n", argv[0]);
    return 1;
  }

  int n = argc - 2;
  // Allocate memory for the array of pointers
  int** result = (int**)malloc(sizeof(int*) * n);
  int target = atoi(argv[1]), count = 0;
  int* nums;
  nums = (int*)malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    nums[i] = atoi(argv[i + 2]);
  }

  findPair(result, nums, n, target, &count);
  
  printResult(result, &count);

  // Free allocated memory
  for (int i = 0; i < n; i++) {
    if (result[i] != NULL) {
      free(result[i]);
    }
  }
  free(result);
  free(nums);

  return 0;
}