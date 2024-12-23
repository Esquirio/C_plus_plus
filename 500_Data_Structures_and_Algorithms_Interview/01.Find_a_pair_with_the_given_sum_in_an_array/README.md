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

To build the source code
```
g++ pair.c
```
or
```
g++ pair.cpp
```
or
```
g++ pair_hash_table.c
```
or
```
g++ pair_hash_table.cpp
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
## How to run the pytest

Type the following command in the console:
```
pytest test_system_pair.py --file_name <file_name> -v
```
Where: file_name could be pair.c, pair.cpp, pair_hash_table.c or pair_hash_table.cpp

For example:
```
pytest test_system_pair.py --file_name pair_hash_table.cpp -v
```

Expected output:
```
=============================================================== test session starts ===============================================================
platform linux -- Python 3.12.3, pytest-7.4.4, pluggy-1.4.0 -- /usr/bin/python3
cachedir: .pytest_cache
rootdir: /home/ftor/repos/C_plus_plus/500_Data_Structures_and_Algorithms_Interview/01.Find_a_pair_with_the_given_sum_in_an_array
collected 8 items

test_system_pair.py::test_system_pair[pair_hash_table.cpp-args0-expected0] PASSED                   [ 12%]
test_system_pair.py::test_system_pair[pair_hash_table.cpp-args1-expected1] PASSED                   [ 25%]
test_system_pair.py::test_system_pair[pair_hash_table.cpp-args2-expected2] PASSED                   [ 37%]
test_system_pair.py::test_system_pair[pair_hash_table.cpp-args3-expected3] PASSED                   [ 50%]
test_system_pair.py::test_system_pair[pair_hash_table.cpp-args4-expected4] PASSED                   [ 62%]
test_system_pair.py::test_system_pair[pair_hash_table.cpp-args5-expected5] PASSED                   [ 75%]
test_system_pair.py::test_system_pair[pair_hash_table.cpp-args6-expected6] PASSED                   [ 87%]
test_system_pair.py::test_compile[pair_hash_table.cpp] PASSED                                       [100%]

=============================================================== 8 passed in 3.60s ===============================================================
```

