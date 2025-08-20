#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    string input = "42";

    int expected = 42;

    REQUIRE( Solution().myAtoi(input) == expected );
}

TEST_CASE( "Running solution test 2" ) {
    string input = "-42";

    int expected = -42;

    REQUIRE( Solution().myAtoi(input) == expected );
}

TEST_CASE( "Running solution test 3" ) {
    string input = "words and 987";

    int expected = 0;

    REQUIRE( Solution().myAtoi(input) == expected );
}

TEST_CASE( "Running solution test 4" ) {
    string input = "-91283472332";

    int expected = -2147483648;

    REQUIRE( Solution().myAtoi(input) == expected );
}

TEST_CASE( "Running solution test 5" ) {
    string input = "   -42";

    int expected = -42;

    REQUIRE( Solution().myAtoi(input) == expected );
}

TEST_CASE( "Running solution test 6" ) {
    string input = "+-12";

    int expected = 0;

    REQUIRE( Solution().myAtoi(input) == expected );
}

TEST_CASE( "Running solution test 7" ) {
    string input = "  +  413";

    int expected = 0;

    REQUIRE( Solution().myAtoi(input) == expected );
}
