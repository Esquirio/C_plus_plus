# Challenge 01: Find a pair with the given sum in an array

Here you can find some code solutions for the challenge 01 using C or C++ language and also the pytest script to test the solution.
___
## Problem description
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
___
## How to build the code

### On linux

Open the directory 01.Find_a_pair_with_the_given_sum_in_an_array in the terminal:

To build the source code
```
g++ src/pair_main.c src/pair.c
```
or
```
g++ src/pair_main.cpp src/pair.cpp
```
or
```
g++ src/pair_hash_table.c src/pair_hash_table.c
```
or
```
g++ src/pair_hash_table.cpp src/pair_hash_table.cpp
```

To run the solution
```
./a.out 10 9 0 8 1 7 2 6 3 5 4
```
or 
```
./a.out 20 9 0 8 1 7 2 6 3 5 4
```
etc.
___
## How to run system tests using pytest

Type the following command in the console:
```
pytest <path_test_system_pair.py> --file_name <path_file_name> -v
```
Where: file_name could be pair.c, pair.cpp, pair_hash_table.c or pair_hash_table.cpp

For example:
```
pytest pytest_scripts/test_system_pair.py --file_name src/pair_main.c -v
```

Expected output:
```
============================================================= test session starts =============================================================
platform linux -- Python 3.12.3, pytest-7.4.4, pluggy-1.4.0 -- /usr/bin/python3
cachedir: .pytest_cache
rootdir: /home/ftor/repos/C_plus_plus/500_Data_Structures_and_Algorithms_Interview/01.Find_a_pair_with_the_given_sum_in_an_array
collected 8 items

pytest_scripts/test_system_pair.py::test_compile[src/pair_main.c] PASSED                            [ 12%]
pytest_scripts/test_system_pair.py::test_system_pair[src/pair_main.c-args0-expected0] PASSED        [ 25%]
pytest_scripts/test_system_pair.py::test_system_pair[src/pair_main.c-args1-expected1] PASSED        [ 37%]
pytest_scripts/test_system_pair.py::test_system_pair[src/pair_main.c-args2-expected2] PASSED        [ 50%]
pytest_scripts/test_system_pair.py::test_system_pair[src/pair_main.c-args3-expected3] PASSED        [ 62%]
pytest_scripts/test_system_pair.py::test_system_pair[src/pair_main.c-args4-expected4] PASSED        [ 75%]
pytest_scripts/test_system_pair.py::test_system_pair[src/pair_main.c-args5-expected5] PASSED        [ 87%]
pytest_scripts/test_system_pair.py::test_system_pair[src/pair_main.c-args6-expected6] PASSED        [100%]

============================================================= 8 passed in 0.10s =============================================================

```

## How to run the unit tests

### C unit tests

Open the directory 01.Find_a_pair_with_the_given_sum_in_an_array in the terminal:

Type the following command in the console:
```
g++ <path_test.c file> <path_other.c file> -lcunit
```
For example:
```
g++ cunit_tests/test_pair.c src/pair.c -lcunit
```

Expected output:
```


     CUnit - A unit testing framework for C - Version 2.1-3
     http://cunit.sourceforge.net/


Suite: findPair
  Test: test_findPair ...passed
Suite: findPair2
  Test: test_findPair2 ...passed
  Test: test_findPair3 ...passed

Run Summary:    Type  Total    Ran Passed Failed Inactive
              suites      2      2    n/a      0        0
               tests      3      3      3      0        0
             asserts     35     35     35      0      n/a

Elapsed time =    0.000 seconds
```

