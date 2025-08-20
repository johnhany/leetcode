cmake_minimum_required (VERSION 3.30)
project(leetcode)

set(PROBLEM_NAME "020-Valid-Parentheses-lookup-table")

set(CMAKE_CXX_STANDARD 20)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.9.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_library(solution STATIC ${PROJECT_SOURCE_DIR}/${PROBLEM_NAME}/solution.cpp)
add_executable(test_main ${PROJECT_SOURCE_DIR}/${PROBLEM_NAME}/solution_test.cpp)

target_link_libraries(test_main PRIVATE solution Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(test_main)
