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

/* Function Definitions */

/**
 * @brief Finds all pairs in the array that sum up to the target value.
 * 
 * @param result Pointer to store the result pairs.
 * @param nums Array of integers.
 * @param n Size of the array.
 * @param target Target sum value.
 * @param count Pointer to store the count of pairs found.
 */
void findPair(int** result, int nums[], int n, int target, int* count) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j > i; j--) {
      if (nums[i] + nums[j] == target) {
        result[*count] = (int*)malloc(sizeof(int) * 2);  // Allocate memory for each row
        result[*count][0] = nums[i];
        result[*count][1] = nums[j];
        *count = *count + 1;
      }
    }
  }
}

/**
 * @brief Prints the result pairs.
 * 
 * @param result Array of result pairs.
 * @param count Number of pairs.
 */
void printResult(int** result, int* count) {
  if(*count != 0) {
    for (int i = 0; i < *count; i++) {
      if (result[i] != NULL) {
        printf("(%d, %d)\n", result[i][0], result[i][1]);
      }
    }
  }
  else {
    printf("Pair not found\n");
  }
}