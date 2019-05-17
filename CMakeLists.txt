cmake_minimum_required (VERSION 3.5)
project(leetcode)

set(PROBLEM_NAME "036-Valid-Sudoku")

set(CMAKE_CXX_STANDARD 14)

set(SOLUTION_SOURCES ${PROJECT_SOURCE_DIR}/${PROBLEM_NAME}/solution.cpp)
# set(SOURCES ${PROJECT_SOURCE_DIR}/${PROBLEM_NAME}/main.cpp ${SOLUTION_SOURCES})
set(SOURCES ${SOLUTION_SOURCES})

add_library(solution STATIC ${SOLUTION_SOURCES})
# add_executable(leetcode ${SOURCES})

enable_testing()

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

set(TEST_SOURCES ${PROJECT_SOURCE_DIR}/${PROBLEM_NAME}/solution_test.cpp)
set(TEST_LIBS solution)

add_executable(test_main ${TEST_SOURCES})
target_link_libraries(test_main ${TEST_LIBS} ${Boost_LIBRARIES})
add_test(solution_test test_main COMMAND test_main)