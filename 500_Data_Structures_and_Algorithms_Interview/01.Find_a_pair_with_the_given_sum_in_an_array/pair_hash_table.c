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

void findPair(HashItem* hash_table, int nums[], int n, int target, int* found) {
  HashItem* map = (HashItem*)calloc(n, sizeof(HashItem) * n);
  for (int i = 0; i < n; i++) {
    int complement = target - nums[i];
    if (map[complement].key != 0) {
      hash_table[*found].key = map[complement].key;
      hash_table[*found].value = nums[i];
      *found = *found + 1;
    }
    map[nums[i]].key = nums[i];
  }
}

void printResult(HashItem* hash_table, int* found) {
  if(*found != 0) {
    for (int i = 0; i < *found; i++) {
      if (hash_table[i].key != 0) {
        printf("(%d, %d)\n", hash_table[i].key, hash_table[i].value);
      }
    }
  }
  else {
    printf("Pair not found\n");
  }
}

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Mandatory parameters: %s <target> <num1> <num2> ... <numN>\n", argv[0]);
    return 1;
  }


  int n = argc - 2;
  // Allocate memory for the array of pointers
  HashItem* hash_table = (HashItem*)calloc(n, sizeof(HashItem) * n);
  int target = atoi(argv[1]), found = 0;
  int* nums;
  nums = (int*)malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    nums[i] = atoi(argv[i + 2]);
  }

  findPair(hash_table, nums, n, target, &found);
  
  printResult(hash_table, &found);

  // Free allocated memory
  free(hash_table);
  free(nums);

  return 0;
}