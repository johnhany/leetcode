#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    vector<string> line = {"2", "1", "+", "3", "*"};
    int result = Solution().evalRPN(line);

    int expected = 9;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 2" ) {
    vector<string> line = {"4", "13", "5", "/", "+"};
    int result = Solution().evalRPN(line);

    int expected = 6;

    REQUIRE( result == expected );
}

TEST_CASE( "Running solution test 3" ) {
    vector<string> line = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    int result = Solution().evalRPN(line);

    int expected = 22;

    REQUIRE( result == expected );
}
