#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int input = 121;

    bool expected = true;

    REQUIRE( Solution().isPalindrome(input) == expected );
}

TEST_CASE( "Running solution test 2" ) {
    int input = -121;

    bool expected = false;

    REQUIRE( Solution().isPalindrome(input) == expected );
}

TEST_CASE( "Running solution test 3" ) {
    int input = 10;

    bool expected = false;

    REQUIRE( Solution().isPalindrome(input) == expected );
}
