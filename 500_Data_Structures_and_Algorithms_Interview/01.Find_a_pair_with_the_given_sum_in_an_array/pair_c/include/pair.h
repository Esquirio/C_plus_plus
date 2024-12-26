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

#ifndef PAIR_H
#define PAIR_H

#include <stdio.h>
#include <stdlib.h>

/* Function Prototypes */

/**
 * @brief Finds all pairs in the array that sum up to the target value.
 * 
 * @param result Pointer to store the result pairs.
 * @param nums Array of integers.
 * @param n Size of the array.
 * @param target Target sum value.
 * @param count Pointer to store the count of pairs found.
 */
void findPair(int** result, int nums[], int n, int target, int* count);

/**
 * @brief Prints the result pairs.
 * 
 * @param result Array of result pairs.
 * @param count Number of pairs.
 */
void printResult(int** result, int* count);

#endif /* PAIR_H */