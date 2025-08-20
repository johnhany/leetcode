#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>
#include <catch2/matchers/catch_matchers_vector.hpp>

#include "solution.hpp"


TEST_CASE( "Running solution test 1" ) {
    int input = 123;

    int expected = 321;

    REQUIRE( Solution().reverse(input) == expected );
}

TEST_CASE( "Running solution test 2" ) {
    int input = -123;

    int expected = -321;

    REQUIRE( Solution().reverse(input) == expected );
}

TEST_CASE( "Running solution test 3" ) {
    int input = 120;

    int expected = 21;

    REQUIRE( Solution().reverse(input) == expected );
}
