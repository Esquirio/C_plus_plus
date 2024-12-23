#include <stdio.h>
#include <stdlib.h>

// This project requires the CUnit library.
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include <assert.h>

// Include the header file with the function declarations.
#include "../include/pair.h"

// Define the test suite name
void test_findPair(void) {
  // Test case 1
  int nums1[] = {8, 7, 2, 5, 3, 1};
  int target1 = 10;
  int n1 = sizeof(nums1) / sizeof(nums1[0]);
  int** result1 = (int**)malloc(sizeof(int*) * n1);
  int count1 = 0;
  findPair(result1, nums1, n1, target1, &count1);
  CU_ASSERT_EQUAL(count1, 2);
  CU_ASSERT_EQUAL(result1[0][0], 8);
  CU_ASSERT_EQUAL(result1[0][1], 2);
  CU_ASSERT_EQUAL(result1[1][0], 7);
  CU_ASSERT_EQUAL(result1[1][1], 3);
  free(result1);

  // Test case 2
  int nums2[] = {5, 2, 6, 8, 1, 9};
  int target2 = 12;
  int n2 = sizeof(nums2) / sizeof(nums2[0]);
  int** result2 = (int**)malloc(sizeof(int*) * n2);
  int count2 = 0;
  findPair(result2, nums2, n2, target2, &count2);
  CU_ASSERT_EQUAL(count2, 0);
  free(result2);


  // Test case 3
  int nums3[] = {8, 7, 2, 6, 3, 4};
  int target3 = 10;
  int n3 = sizeof(nums3) / sizeof(nums3[0]);
  int** result3 = (int**)malloc(sizeof(int*) * n3);
  int count3 = 0;
  findPair(result3, nums3, n3, target3, &count3);
  CU_ASSERT_EQUAL(count3, 3);
  CU_ASSERT_EQUAL(result3[0][0], 8);
  CU_ASSERT_EQUAL(result3[0][1], 2);
  CU_ASSERT_EQUAL(result3[1][0], 7);
  CU_ASSERT_EQUAL(result3[1][1], 3);
  CU_ASSERT_EQUAL(result3[2][0], 6);
  CU_ASSERT_EQUAL(result3[2][1], 4);
  free(result3);
}

void test_findPair2(void) {
  // Test case 1
  int nums1[] = {8, 2};
  int target1 = 10;
  int n1 = sizeof(nums1) / sizeof(nums1[0]);
  int** result1 = (int**)malloc(sizeof(int*) * n1);
  int count1 = 0;
  findPair(result1, nums1, n1, target1, &count1);
  CU_ASSERT_EQUAL(count1, 1);
  CU_ASSERT_EQUAL(result1[0][0], 8);
  CU_ASSERT_EQUAL(result1[0][1], 2);
  free(result1);

  // Test case 2
  int nums2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int target2 = 10;
  int n2 = sizeof(nums2) / sizeof(nums2[0]);
  int** result2 = (int**)malloc(sizeof(int*) * n2);
  int count2 = 0;
  findPair(result2, nums2, n2, target2, &count2);
  CU_ASSERT_EQUAL(count2, 4);
  CU_ASSERT_EQUAL(result2[0][0], 9);
  CU_ASSERT_EQUAL(result2[0][1], 1);
  CU_ASSERT_EQUAL(result2[1][0], 8);
  CU_ASSERT_EQUAL(result2[1][1], 2);
  CU_ASSERT_EQUAL(result2[2][0], 7);
  CU_ASSERT_EQUAL(result2[2][1], 3);
  CU_ASSERT_EQUAL(result2[3][0], 6);
  CU_ASSERT_EQUAL(result2[3][1], 4);
  free(result2);

  // Test case 3
  int nums3[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int target3 = 20;
  int n3 = sizeof(nums3) / sizeof(nums3[0]);
  int** result3 = (int**)malloc(sizeof(int*) * n3);
  int count3 = 0;
  findPair(result3, nums3, n3, target3, &count3);
  CU_ASSERT_EQUAL(count3, 0);
  free(result3);
}

void test_findPair3(void) {
  // Test case 1
  
  int nums1[] = {9, 0, 8, 1, 7, 2, 6, 3, 5, 4};
  int target1 = 10;
  int n1 = sizeof(nums1) / sizeof(nums1[0]);
  int** result1 = (int**)malloc(sizeof(int*) * n1);
  int count1 = 0;
  findPair(result1, nums1, n1, target1, &count1);
  CU_ASSERT_EQUAL(count1, 4);
  CU_ASSERT_EQUAL(result1[0][0], 9);
  CU_ASSERT_EQUAL(result1[0][1], 1);
  CU_ASSERT_EQUAL(result1[1][0], 8);
  CU_ASSERT_EQUAL(result1[1][1], 2);
  CU_ASSERT_EQUAL(result1[2][0], 7);
  CU_ASSERT_EQUAL(result1[2][1], 3);
  CU_ASSERT_EQUAL(result1[3][0], 6);
  CU_ASSERT_EQUAL(result1[3][1], 4);
  free(result1);
}


int main() {
  // Initialize the CUnit test registry
  if (CUE_SUCCESS != CU_initialize_registry()) {
    return CU_get_error();
  }

  // Add a suite to the registry
  CU_pSuite pSuite = CU_add_suite("findPair", NULL, NULL);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  // Add the tests to the suite
  if ((NULL == CU_add_test(pSuite, "test_findPair", test_findPair))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  // Add a suite to the registry
  CU_pSuite pSuite2 = CU_add_suite("findPair2", NULL, NULL);
  if (NULL == pSuite2) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  if ((NULL == CU_add_test(pSuite2, "test_findPair2", test_findPair2)) ||
        (NULL == CU_add_test(pSuite2, "test_findPair3", test_findPair3))) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  // Run all tests using the CUnit Basic interface
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();

  return CU_get_error();
}