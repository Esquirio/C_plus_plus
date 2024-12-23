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
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

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