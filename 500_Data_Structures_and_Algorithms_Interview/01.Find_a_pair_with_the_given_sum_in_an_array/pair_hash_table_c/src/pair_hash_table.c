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

Solution in C using hash table
******************************************************************************/

#include "../include/pair_hash_table.h"

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
void findPair(HashItem* hash_table, int nums[], int n, int target, int* count) {
  HashItem* map = (HashItem*)calloc(n, sizeof(HashItem) * n);
  for (int i = 0; i < n; i++) {
    int complement = target - nums[i];
    if (map[complement].key != 0) {
      hash_table[*count].key = map[complement].key;
      hash_table[*count].value = nums[i];
      *count = *count + 1;
    }
    map[nums[i]].key = nums[i];
  }
}

/**
 * @brief Prints the result pairs.
 * 
 * @param result Array of result pairs.
 * @param count Number of pairs.
 */
void printResult(HashItem* hash_table, int* count) {
  if(*count != 0) {
    for (int i = 0; i < *count; i++) {
      if (hash_table[i].key != 0) {
        printf("(%d, %d)\n", hash_table[i].key, hash_table[i].value);
      }
    }
  }
  else {
    printf("Pair not found\n");
  }
}
