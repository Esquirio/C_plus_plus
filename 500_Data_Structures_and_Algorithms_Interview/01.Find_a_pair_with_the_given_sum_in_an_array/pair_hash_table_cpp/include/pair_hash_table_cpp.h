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

#ifndef PAIR_HASH_TABLE_CPP_H
#define PAIR_HASH_TABLE_CPP_H

#include <iostream>
#include <unordered_map>
#include <vector>

/* Function Prototypes */

/**
 * @brief Finds all pairs in the array that sum up to the target value.
 * 
 * @param result Hash table to store the result tuples.
 * @param nums Array of integers.
 * @param n Size of the array.
 * @param target Target sum value.
 */
void findPair(std::unordered_map<int, int>* result, std::vector<int> nums, int target);

/**
 * @brief Prints the result pairs.
 * 
 * @param result Hash table of result tuples.
 */
void printResult(std::unordered_map<int, int> result);

#endif /* PAIR_HASH_TABLE_CPP_H */