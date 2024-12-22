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

int** findPair(int nums[], int n, int target){
  int** result = (int**)malloc(sizeof(int*) * n); // Allocate memory for the array of pointers
  int k = 0;
  for(int i = 0; i < n-1; i++){
    for(int j = n-1; j > i; j--){
      if(nums[i] + nums[j] == target){
        result[k] = (int*)malloc(sizeof(int) * 2); // Allocate memory for each row
        result[k][0] = nums[i];
        result[k][1] = nums[j];
        k++;
      }
    }
  }
  return result;
}

void printResult(int** result, int n){
  for(int i = 0; i < n; i++){
    if(result[i] != NULL){
      printf("Pair found (%d, %d)\n", result[i][0], result[i][1]);
    }
  }
}

int main () {
  int** result;
  int nums[] = {8, 7, 2, 5, 3, 1};
  int target = 10;
  int n = sizeof(nums)/sizeof(nums[0]);

  result = findPair(nums, n, target);

  printResult(result, n);

  return 0;
}