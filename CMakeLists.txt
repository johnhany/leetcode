cmake_minimum_required (VERSION 3.30)
project(leetcode)

set(PROBLEM_NAME "215-Kth-Largest-Element-in-an-Array-quicksort")

set(CMAKE_CXX_STANDARD 17)

set(SOLUTION_SOURCES ${PROJECT_SOURCE_DIR}/${PROBLEM_NAME}/solution.cpp)
add_library(solution STATIC ${SOLUTION_SOURCES})

enable_testing()

set(TEST_SOURCES ${PROJECT_SOURCE_DIR}/${PROBLEM_NAME}/solution_test.cpp)
set(TEST_LIBS solution)

add_executable(test_main ${TEST_SOURCES})

if(WIN32)
    message(STATUS "Detected Windows platform")
    set(BOOST_ROOT D:\\libs\\boost_1_80_0)
    set(BOOST_LIBRARYDIR D:\\libs\\boost_1_80_0\\stage\\lib)
    set(Boost_USE_STATIC_LIBS ON)
    find_package(Boost REQUIRED COMPONENTS unit_test_framework)

    target_link_libraries(test_main PRIVATE ${TEST_LIBS} Boost::boost Boost::unit_test_framework)
elseif(APPLE)
    message(STATUS "Detected MacOS platform")
    set(BOOST_ROOT "/usr/local/Cellar/boost/1.72.0_3")
    set(BOOST_LIBRARYDIR "/usr/local/Cellar/boost/1.72.0_3/lib")
    set(Boost_USE_STATIC_LIBS ON)
    find_package(Boost REQUIRED COMPONENTS unit_test_framework)

    target_include_directories(test_main PRIVATE ${Boost_INCLUDE_DIRS})
    target_link_libraries(test_main PRIVATE ${TEST_LIBS} Boost::boost Boost::unit_test_framework)
elseif(UNIX)
    message(STATUS "Detected UNIX platform")
    find_package(Boost REQUIRED COMPONENTS unit_test_framework)
    target_link_libraries(test_main PRIVATE ${TEST_LIBS} Boost::boost Boost::unit_test_framework)
else()
    message(FATAL_ERROR "Unsupported platform")
endif()

add_test(solution_test test_main COMMAND test_main)