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

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int key;
  int value;
} HashItem;

void findPair(int nums[], int n, int target) {
  HashItem* hashTable = (HashItem*)calloc(n, sizeof(HashItem) * n);
  for (int i = 0; i < n; i++) {
    int complement = target - nums[i];
    if (hashTable[complement].key != 0) {
      printf("Pair found (%d, %d)\n", hashTable[complement].key, nums[i]);
    }
    hashTable[nums[i]].key = nums[i];
  }
}

int main() {
  int nums[] = {8, 7, 2, 5, 3, 1}, target = 10;
  int n = sizeof(nums) / sizeof(nums[0]);

  findPair(nums, n, target);

  return 0;
}