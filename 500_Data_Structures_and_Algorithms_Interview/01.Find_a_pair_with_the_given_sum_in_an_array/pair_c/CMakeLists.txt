cmake_minimum_required(VERSION 3.10)

# Project name and languages
project(PairExample LANGUAGES C CXX)

# Option to choose between building the main program or the test
option(BUILD_TESTS "Build the CUnit tests" OFF)

# Option to enable GDB debugging
option(ENABLE_DEBUG "Enable GDB debugging" OFF)

# Source files for the main program
set(MAIN_SOURCES src/pair_main.c src/pair.c)

# Source files for the tests
set(TEST_SOURCES cunit_tests/test_pair.c src/pair.c)

# Force .c files to be treated as C++
set_source_files_properties(${MAIN_SOURCES} ${TEST_SOURCES} PROPERTIES LANGUAGE CXX)

# Debug flags
if(ENABLE_DEBUG)
    set(CMAKE_BUILD_TYPE Debug)
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
    message(STATUS "GDB debugging enabled")
endif()

if(BUILD_TESTS)
    # Build the CUnit test executable
    find_library(CUNIT_LIB cunit REQUIRED)
    add_executable(test_pair.out ${TEST_SOURCES})
    target_link_libraries(test_pair.out PRIVATE ${CUNIT_LIB})
    message(STATUS "Configured to build tests")
else()
    # Build the main program executable
    add_executable(pair_example.out ${MAIN_SOURCES})
    message(STATUS "Configured to build the main program")
endif()

# Set the C++ standard (optional)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
