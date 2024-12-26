# Challenge 01: Find a pair with the given sum in an array

Here you can find the code solutions for the challenge 01 using C language.
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

### Using cmake

There are three ways to build the code:
  - Build the code to generate the executable file pair_example.out
  - Build the code to generate the executable for unit test test_pair_example
  - Build the code to generate the executable for debbug proposes using the gdb tool


#### Generating the pair example.out

Open the directory 01.Find_a_pair_with_the_given_sum_in_an_array/pair_c in the terminal, create the build directory, change to the new directory and run the cmake and make commads:
```
mkdir build
cd build
cmake ..
make
```

To run the solution:
```
./pair_example.out 10 9 0 8 1 7 2 6 3 5 4
```
Expected output:
```
(9, 1)
(8, 2)
(7, 3)
(6, 4)
```
or 
```
./pair_example.out 20 9 0 8 1 7 2 6 3 5 4
```
Expected output:
```
Pair not found
```

#### Generating the test_pair.out

Open the directory 01.Find_a_pair_with_the_given_sum_in_an_array/pair_c in the terminal, create the build directory, change to the new directory and run the cmake and make commads:
```
mkdir build
cd build
cmake -DBUILD_TESTS=ON ..
make
```

To run the solution:
```
./test_pair.out
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

#### Generating the debug version

Open the directory 01.Find_a_pair_with_the_given_sum_in_an_array/pair_c in the terminal, create the build directory, change to the new directory and run the cmake and make commads:
```
mkdir build
cd build
cmake -DENABLE_DEBUG=ON ..
make
```

To run the solution:
```
gdb --args ./pair_example 10 9 0 8 1 7 2 6 3 5 4
```

Add the desired breakpoints:
```
break main  # Break at the main function
break src/pair.c:42  # Break at line 42 in pair.c
```
And run the debug version:

```
run
```

### Manually

Open the directory 01.Find_a_pair_with_the_given_sum_in_an_array/pair_c in the terminal:

To build the source code:
```
g++ -o pair_example.out src/pair_main.c src/pair.c
```

To run the solution:
```
./pair_example.out 10 9 0 8 1 7 2 6 3 5 4
```
Expected output:
```
(9, 1)
(8, 2)
(7, 3)
(6, 4)
```
or 
```
./pair_example.out 20 9 0 8 1 7 2 6 3 5 4
```
Expected output:
```
Pair not found
```
___
## How to run system tests using pytest

Open the directory 01.Find_a_pair_with_the_given_sum_in_an_array/pair_c in the terminal:

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

Open the directory 01.Find_a_pair_with_the_given_sum_in_an_array/pair_c in the terminal:

Type the following command in the console:
```
g++ -o <output_file_name> <path_test.c file> <path_other.c file> -lcunit
```
For example:
```
g++ -o test_pair.out cunit_tests/test_pair.c src/pair.c -lcunit
```

Run the unit tests:
```
./test_pair.out
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

